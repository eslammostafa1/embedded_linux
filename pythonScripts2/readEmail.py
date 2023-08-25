import pyautogui
import subprocess
import time

subprocess.Popen(['google-chrome'])
time.sleep(3)

pyautogui.write("https://mail.google.com/mail/u/0/#inbox")
pyautogui.hotkey("enter")

time.sleep(5)

pyautogui.hotkey("*", "u")

time.sleep(2)

pyautogui.confirm(text='do you want to convert unread emails to read?', title=' urgent message', buttons=['OK', 'Cancel'])

time.sleep(1)

pyautogui.hotkey("shift", "i")

pyautogui.alert(text='Now, all unread emails are mark as read.', title='urgent message', button='OK')