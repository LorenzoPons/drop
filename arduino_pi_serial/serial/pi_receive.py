import serial
import time

ser = serial.Serial('/dev/ttyAMA0', 9600, timeout=1)
ser.open()

try:
	while 1:
		response = ser.readline()
		print response
		time.sleep(0.25)

except KeyboardInterrupt:
        ser.close()

