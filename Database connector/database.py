import mysql.connector
from tkinter import *
from tkinter import messagebox 

ms=mysql.connector.Connect(host="localhost", user="root"
                           ,password="Bishesh123@",database="ipl")
if ms.is_connected():
    print("Connected!")
else:
    print("Disconnected!")


def command():
    mc=ms.cursor()
    mc.execute(code.get("1.0", 'end-1c'))
    s=""
    for i in mc:
        s+=" ".join(i)+"\n"
    if s=="":
        s='DONE!'
    messagebox.showinfo("OUTPUT", s)
    ms.commit()

wn1=Tk()
wn1.geometry("400x200")
wn1.title("DBMS")
un=StringVar()
code=Text(wn1, height=8, width=40)
bt1=Button(wn1,text="Run",bg="orange",command=command).place(x=350,y=10)
code.place(x=0,y=0)
wn1.mainloop()
ms.close()
