import serial
import time

ser = serial.Serial('/dev/ttyAMA0', 115200)
ser.open()

try:
	while True:
		try:
			if (ser.inWaiting() > 0):
				response = ser.readline()
				print response
				time.sleep(0.05)

		except IOError as e:
			print 'I/O Exception ({0}): {1}'.format(e.errno, e.strerror)
			print 'Disable default console serial login'
			print 'Closing and re-opening serial port'
			ser.close()
			ser.open()
		except OSError as e:
			print 'OS Exception ({0}): {1}'.format(e.errno, e.strerror)
			print 'Disable default console serial login'
			print 'Closing and re-opening serial port'
			ser.close()
			ser.open()

except KeyboardInterrupt:
        ser.close()

