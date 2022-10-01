#Qrcode generator in python 
import qrcode as qr
img=qr.make(input("Paste the link : "))
img.save("qrcode.png")