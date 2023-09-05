import random
from tkinter import *

gauge = Tk()
gauge.title('temperture gauge')

def update():
    value = random.randint(0,50)
    cnvs.itemconfig(id_text,text = str(value))
    angle = 120 * (100 - value)/(100 - 0)
    cnvs.itemconfig(id_needle, start = angle)
    gauge.after(3000, update)

cnvs = Canvas(gauge, width=400, height=300)
cnvs.grid(row=2, column=1)
 
coord = 10, 50, 350, 350 
low_r = 0 
hi_r = 100

# Create a background arc and a pointer (very narrow arc)
cnvs.create_arc(coord, start=30, extent=120, fill="white",  width=2) 
id_needle = cnvs.create_arc(coord, start= 119, extent=1, width=7)

cnvs.create_text(180,20,font="Times 20 italic bold", text="temperture")
cnvs.create_text(25,140,font="Times 12 bold", text='0 C')
cnvs.create_text(330,140,font="Times 12 bold", text='50 C')

id_text = cnvs.create_text(170,210,font="Times 15 bold")
 
gauge.after(1000, update)

gauge.mainloop()
