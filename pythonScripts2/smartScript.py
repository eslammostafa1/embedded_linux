from datetime import datetime, timedelta
import webbrowser
from time import ctime
import os
import playsound
from gtts import gTTS
import pywhatkit
import speech_recognition as sr
import PyPDF2
import pyttsx3

# Initialize recognizer class (for recognizing the speech)
r = sr.Recognizer()


# Reading Audio file as source
# listening the audio file and store in audio_text variable
def Bixby_Speak(audios):
    tts = gTTS(text=audios, lang='en')
    audioF = 'audio.mp3'
    tts.save(audioF)
    playsound.playsound(audioF)
    print(audios)
    os.remove(audioF)


def record(ask=False):
    with sr.Microphone(device_index=None) as source:
        r.adjust_for_ambient_noise(source)
        if ask:
            Bixby_Speak(ask)
        audio = r.listen(source)
        voice_data = ''
        try:
            voice_data = r.recognize_google(audio, language="en")
        except sr.UnknownValueError:
            Bixby_Speak("sorry i did not get that")
        except sr.RequestError:
            Bixby_Speak("sorry Service is Down")
        return voice_data.lower()


def Respond(voice_data):
            
    if 'name' in voice_data or 'title' in voice_data:
        Bixby_Speak('eslam your are the main user ')
        
    if 'time' in voice_data or 'date' in voice_data:
        Bixby_Speak(ctime())
        print(ctime())

    if 'search' in voice_data or 'searching' in voice_data:
        search = record('what do you want to search')
        url = 'https://google.com/search?q=' + search
        webbrowser.get().open(url)
        Bixby_Speak('Here is what i Found For' + search)

    if 'location' in voice_data or 'place' in voice_data:
        location = record("what is the location do want ")
        url = 'https://google.nl/maps/place/' + location + '/&amp'
        webbrowser.get().open(url)
        Bixby_Speak('Here is what i Found For' + location)
    
    # this script helps in read a specific pdf by giving a number of page and copy pdf to the script folder
    if 'doc' in voice_data or 'read' in voice_data:
        file = record("what is the file you want me to read ")
        try:
            path = open(file + '.pdf', 'rb')
            pdfReader = PyPDF2.PdfFileReader(path)
            num = record("What is the page number?")
            try:
                from_page = pdfReader.getPage(int(num))
                text = from_page.extractText()
                speak = pyttsx3.init()
                speak.say(text)
                speak.runAndWait()
            except IndexError:
                Bixby_Speak("The page number is invalid.")
        except FileNotFoundError:
            Bixby_Speak("The file was not found.")

    # this scripts helps in sending a message in whatsapp to anyone by using his number after 10 min 
    if 'whats' in voice_data or 'whatsapp' in voice_data:
        num = record("What is the number you want to send to ")  
        data = record("what is message you want to send ")
        now = datetime.now()
        scheduled_time = now + timedelta(minutes=10)    
        pywhatkit.sendwhatmsg("+20 100 245 6855",data,scheduled_time.hour, scheduled_time.minute)

    if 'exit' in voice_data:
        exit()


Bixby_Speak('Good morning How Can I help You.')
while 1:
    voice_data = record()
    Respond(voice_data)