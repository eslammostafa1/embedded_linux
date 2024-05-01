from time import sleep
import os 
import RPi.GPIO as GPIO

GPIO.setmode(GPIO.BCM)
GPIO.setup(21,GPIO.OUT)

while True:
    x=input(" enter ON or OFF: ")
    if x== "on" or "ON":
        GPIO.output(21,GPIO.HIGH)
    else:
        GPIO.output(21,GPIO.LOW)
