import serial, time
ser = serial.Serial('/dev/ttyACM0', 9600, timeout=1)
time.sleep(2)

try:
    while True:
        line = ser.readline().decode('utf-8').strip()
        if line:
            print(line)
except KeyboardInterrupt:
    ser.close()
