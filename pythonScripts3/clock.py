# import tkinter
from tkinter import *
import datetime
 
clock = Tk()

def update_sec():
    #Reposition the second hand starting position
    thesec = datetime.datetime.now().second
    arcstart = 90 - thesec*6
    C.itemconfig(asec,start=arcstart)
    C.after(1000, update_sec)
 

 
C = Canvas(clock, bg="silver", height=250, width=300)
C.pack()
 
 
coord = 10, 50, 240, 210 
C.create_oval(coord,  fill="grey")
# Have the second hand start at the top (90 deg) with 1 deg arc
asec = C.create_arc(coord, start=90, extent=1, width=3)
 
C.after(1000, update_sec)

clock.mainloop()
