import pyautogui
import subprocess
import time

Ipath2 = "selectallbutton.png"
Ipath3 = "markAsRead.png"


subprocess.Popen(['google-chrome'])
time.sleep(3)

pyautogui.write("https://mail.google.com/mail/u/0/#inbox")
pyautogui.hotkey("enter")

time.sleep(5)

try:
    selectAllButton = pyautogui.locateCenterOnScreen(Ipath2, confidence=.9)
    print(selectAllButton) 
    pyautogui.click(selectAllButton)
except pyautogui.ImageNotFoundException:
    print("ImageNotFoundException")

time.sleep(3) 

try:
    markAllButton = pyautogui.locateCenterOnScreen(Ipath3, confidence=.8)
    print(markAllButton) 
    pyautogui.click(markAllButton)
except pyautogui.ImageNotFoundException:
    print("ImageNotFoundException")

time.sleep(3) 