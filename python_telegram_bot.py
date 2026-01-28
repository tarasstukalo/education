import telebot
import telebot.types
import serial
import time

BOT_TOKEN = "8544896622:AAE5R2-uGqT9rULa9bTx0OnyRzg7-OLmk3M"
bot = telebot.TeleBot(BOT_TOKEN)

arduino = serial.Serial(port='COM7', baudrate=9600, timeout=1)
time.sleep(2)  # зачекати, поки Arduino запуститься

@bot.message_handler(commands=["led_on"])
def led_on(message: telebot.types.Message) -> None:
    bot.send_message(chat_id=message.chat.id, text="LED_ON",)
    print("led on")

@bot.message_handler(commands=["led_off"])
def led_off(message: telebot.types.Message) -> None:
    bot.send_message(chat_id=message.chat.id, text="LED_OFF")
    print("led off")
@bot.message_handler(commands=["led_sos"])
def led_sos2(message: telebot.types.Message) -> None:
    bot.send_message(chat_id=message.chat.id, text="LED_SOS")
    print("led sos")

def write_read(message: str):
    arduino.write(bytes(message + '\n', 'utf-8'))
    time.sleep(0.1)
    data = arduino.readline().decode('utf-8').strip()
    return data


if __name__ == "__main__":
    print("Bot is started!")
    bot.polling(none_stop=True, interval=1, timeout=60)
    print("prog is started")
    write_read()

