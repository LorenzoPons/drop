
import serial

ser = serial.Serial('/dev/ttyACM', 9600)

while 1:
	ser.readline()