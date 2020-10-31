from tkinter import *
from PIL import ImageTk,Image
from tkinter import messagebox 
import random,string as s

def submit():
    if Un.get()=="" or pas.get()=="" or cpas.get()=="" or mn.get()=="" or g.get()==0 or val.get()==0:
        text.set("Fill Everything Or Exit!")

    elif pas.get()!=cpas.get() :
        text.set("New pass doesn't matches cnf pass!")
    
    elif len(mn.get().strip())!=10:
        text.set("Invalid mobile number!")

    else:
        print("User name  : ", Un.get())
        print("Password   : ", pas.get())
        print("Mobile no. : ", mn.get())
        print("DOB        : ", day1.get()+" / "+month1.get()+" / "+year1.get())
        print("Gender     : "+("Male" if g.get()==1 else "Female"))
        print("Disaled    : "+("Yes" if val.get()==1 else "No"))
        print("Continent  : ", om.get())
        text.set("Registered Successfully!")
    messagebox.showinfo("showinfo", text.get())

def passgen():
    a=s.ascii_lowercase+s.ascii_uppercase+s.digits+'!~@+-/><.,#$%^_=&*?'
    password=''
    while True:
        password+=a[random.randint(0,80)]
        if len(password)==8:
            break
    rpass.set('Pass : '+password)
    pas.set(password)
    cpas.set(password)
    
    
wn=Tk()
wn.geometry("420x500")
wn.iconbitmap('C:\\Users\\Bishesh Singh\\Documents\\cod4.ico')
wn.title("Registration Form")
Un=StringVar()
pas=StringVar()
cpas=StringVar()
mn=StringVar()
text=StringVar()
g=IntVar()
rpass=StringVar()
day1=StringVar()
month1=StringVar()
year1=StringVar()
val=IntVar()
continent=["Asia","North America","South America","Antartica","Australia","Europe"]
om=StringVar()
om.set('Select')
text.set("Please Enter Your Details.")
img = ImageTk.PhotoImage(Image.open("C:\\Users\\Bishesh Singh\\Documents\\sa.jpg"))
background_image = ImageTk.PhotoImage(Image.open("C:\\Users\\Bishesh Singh\\Documents\\w1.png"))
background = Label(image=background_image)
background.pack(fill=BOTH, expand=YES)
panel = Label(wn, image = img).place(x=120,y=5)
lb1=Label(wn,text="Registration Form",relief="solid",fg="blue",width=20,font=("arial",16,"bold")).place(x=80,y=110)
lb2=Label(wn,text="Username : ",font=("arial",10,"bold"),bg="orange").place(x=60,y=150)
en1=Entry(wn,textvar=Un).place(x=150,y=150)
lb3=Label(wn,text=" New Password : ",font=("arial",10,"bold"),bg="orange").place(x=30,y=190)
en2=Entry(wn,textvar=pas,show='*').place(x=150,y=190)
lb4=Label(wn,text="Cnf Password : ",font=("arial",10,"bold"),bg="orange").place(x=39,y=230)
en3=Entry(wn,textvar=cpas,show='*').place(x=150,y=230)
lb5=Label(wn,text="Mobile No. : ",font=("arial",10,"bold"),bg="orange").place(x=55,y=270)
en4=Entry(wn,textvar=mn).place(x=150,y=270)
msg=Message(wn,justify="left",text='Register Yourself!',font=("arial",8,"bold")).place(x=10,y=10)
randompass=Label(wn,justify="left",textvar=rpass,font=("arial",8,"bold")).place(x=280,y=220)
lb6=Label(wn,text="Gender : ",font=("arial",10,"bold"),bg="orange").place(x=75,y=310)
RB=Radiobutton(wn,text="Male",variable=g,value=1,bg="orange").place(x=145,y=310)
RB1=Radiobutton(wn,text="Female",variable=g,value=2,bg="orange").place(x=205,y=310)
lb7=Label(wn,text="DOB : ",font=("arial",10,"bold"),bg="orange").place(x=97,y=350)
day= Spinbox(wn, from_= 1, to = 30,width=5,textvariable=day1,bg="orange").place(x=150,y=350) 
month= Spinbox(wn, from_= 1, to = 12,width=5,textvariable=month1,bg="orange").place(x=200,y=350) 
year= Spinbox(wn, from_= 1990, to = 2002,width=5,textvariable=year1,bg="orange").place(x=250,y=350)
lb8=Label(wn,text="Disabled : ",font=("arial",10,"bold"),bg="orange").place(x=65,y=380)
Yes=Checkbutton(wn, text = "Yes", variable = val,onvalue = 1, offvalue = 0,width = 5,bg="orange").place(x=150,y=380)
Yes=Checkbutton(wn, text = "No`", variable = val,onvalue = 2, offvalue = 0,width = 5,bg="orange").place(x=230,y=380)
lb9=Label(wn,text="Continent : ",font=("arial",10,"bold"),bg="orange").place(x=65,y=420)
lb = OptionMenu(wn, om, *continent)
lb.config(width=15,height=1,bg="orange")
lb.place(x=150,y=420)
bt1=Button(wn,text="Sign Up",bg="green",command=submit).place(x=180,y=460)
bt1=Button(wn,text="Generate",bg="red",command=passgen).place(x=280,y=190)

wn.mainloop()