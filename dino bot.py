from PIL import ImageOps as io,ImageGrab as ig
import time,pyautogui as pag
from numpy import array

def refresh():
    pag.click(960,168)

def jump():
    pag.keyDown('space')
    time.sleep(0.05)                   
    pag.keyUp('space')

def crop():
    box=(733,173,830,201)
    img=ig.grab(box)
    gimg=io.grayscale(img)
    arr=array(gimg.getcolors())
    return arr.sum()

def over():
    box=(944,154,975,182)
    img=ig.grab(box)
    gimg=io.grayscale(img)
    arr=array(gimg.getcolors())
    return arr.sum()

refresh()
while True             :
    print(crop())  
    if crop()==3301:
        jump()
        jump()
      
    if over()==1198:
       break