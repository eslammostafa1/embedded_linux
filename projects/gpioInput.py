import RPi.GPIO as GPIO 

LED_PIN=2
BUTTON_PIN=3

def initDevices(): 
    GPIO.setwarnings(False)
    GPIO.setmode(GPIO.BCM)
    GPIO.setup(BUTTON_PIN, GPIO.IN, pull_up_down=GPIO.PUD_UP)
    GPIO.setup(LED_PIN, GPIO.OUT)

initDevices()

while(True):
    val=GPIO.input(BUTTON_PIN)
    GPIO.output(LED_PIN, not val)