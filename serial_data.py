import serial
import struct
import time
ser = serial.Serial('/dev/ttyACM0', 9600)  # Replace '/dev/ttyACM0' or 'COM3' with the port that your Arduino is connected to
var1 = -3.14159
var2 = 2.71828
data = bytearray(struct.pack("ff", var1, var2))  # Convert the variables to bytes

for i in range(10):
	time.sleep(1)
	ser.write(data)  # Send the bytes to Arduino
