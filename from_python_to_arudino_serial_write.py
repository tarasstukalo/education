import serial
import time

arduino = serial.Serial(port='COM7', baudrate=9600, timeout=1)
time.sleep(2)  # зачекати, поки Arduino запуститься

def write_read(message):
    arduino.write(bytes(message + '\n', 'utf-8'))
    time.sleep(0.1)
    data = arduino.readline().decode('utf-8').strip()
    return data

if __name__ == '__main__':
    while True:
        msg = input("Введи слово або число: ")
        if msg.strip() == "":
            continue
        response = write_read(msg)
        print(response)
