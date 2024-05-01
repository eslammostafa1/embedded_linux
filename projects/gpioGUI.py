import tkinter as gui
import RPi.GPIO as GPIO 


LED=2

GPIO.setwarnings(False)
GPIO.setmode(GPIO.BCM)
GPIO.setup(LED, GPIO.OUT)

x=0

def LED_Toggle():
    global x
    x^=1
    GPIO.output(LED, x)

tk=gui.tk()
tk.title("LED Toggle")
tk.geometry("400x200+500+300")
tk.resizable(False,False)
tk.configure(background="black")

buttontoggle=gui.Button(tk, text="led toggle" , command=LED_Toggle, bg="blue") 

buttontoggle.place(x=50, y=50)

tk.mainloop()
