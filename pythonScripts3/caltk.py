from tkinter import *
cal=Tk()
cal.geometry("500x600")
cal.resizable(0,0)
cal.configure(bg="grey")
cal.title("simple calcualtor")

result = Label(cal, width=25, height=2, text="", font=("arial", 30)).pack()
Button(cal, text="C", width=4, height=1, font=("arial", 30, "bold"), bd=1, fg="black", bg="blue").place(x=10,y=100)
Button(cal, text="/", width=4, height=1, font=("arial", 30, "bold"), bd=1, fg="black", bg="green").place(x=130,y=100)
Button(cal, text="%", width=4, height=1, font=("arial", 30, "bold"), bd=1, fg="black", bg="green").place(x=260,y=100)
Button(cal, text="*", width=4, height=1, font=("arial", 30, "bold"), bd=1, fg="black", bg="green").place(x=390,y=100)

Button(cal, text="7", width=4, height=1, font=("arial", 30, "bold"), bd=1, fg="black", bg="green").place(x=10,y=200)
Button(cal, text="8", width=4, height=1, font=("arial", 30, "bold"), bd=1, fg="black", bg="green").place(x=130,y=200)
Button(cal, text="9", width=4, height=1, font=("arial", 30, "bold"), bd=1, fg="black", bg="green").place(x=260,y=200)
Button(cal, text="-", width=4, height=1, font=("arial", 30, "bold"), bd=1, fg="black", bg="green").place(x=390,y=200)

Button(cal, text="4", width=4, height=1, font=("arial", 30, "bold"), bd=1, fg="black", bg="green").place(x=10,y=300)
Button(cal, text="5", width=4, height=1, font=("arial", 30, "bold"), bd=1, fg="black", bg="green").place(x=130,y=300)
Button(cal, text="6", width=4, height=1, font=("arial", 30, "bold"), bd=1, fg="black", bg="green").place(x=260,y=300)
Button(cal, text="+", width=4, height=1, font=("arial", 30, "bold"), bd=1, fg="black", bg="green").place(x=390,y=300)

Button(cal, text="1", width=4, height=1, font=("arial", 30, "bold"), bd=1, fg="black", bg="green").place(x=10,y=400)
Button(cal, text="2", width=4, height=1, font=("arial", 30, "bold"), bd=1, fg="black", bg="green").place(x=130,y=400)
Button(cal, text="3", width=4, height=1, font=("arial", 30, "bold"), bd=1, fg="black", bg="green").place(x=260,y=400)

Button(cal, text="0", width=9, height=1, font=("arial", 30, "bold"), bd=1, fg="black", bg="green").place(x=10,y=500)
Button(cal, text=".", width=4, height=1, font=("arial", 30, "bold"), bd=1, fg="black", bg="green").place(x=260,y=500)

Button(cal, text="=", width=4, height=3, font=("arial", 30, "bold"), bd=1, fg="black", bg="orange").place(x=390,y=400)


cal.mainloop()