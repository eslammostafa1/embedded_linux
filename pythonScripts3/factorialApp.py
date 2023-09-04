from tkinter import *

fac=Tk()

def factorial(n):
    return 1 if (n==1 or n==0) else n * factorial(n - 1)

def calculator():
    result = factorial(int(enterText.get())) 
    info.config(text=result)

fac.title("factorial calculator")
fac.geometry("200x200")
fac.resizable(0,0)

enterText = Entry(fac, bg='white', fg='black')
btn = Button(fac, text='Calculate', command=calculator)
info = Label(fac, text='result', bg='white', fg='black')

enterText.place(x=50, y=25, width=100, height=25)
btn.place(x=50, y=75, width=100, height=25)
info.place(x=50, y=125, width=100, height=25)

fac.mainloop()