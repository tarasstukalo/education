import telebot
import telebot.types
import serial
import time

BOT_TOKEN = "8536896770:AAFDmWirais5Kgqt1IF9up5iMvage4wWqJI"
bot = telebot.TeleBot(BOT_TOKEN)

arduino = serial.Serial(port='COM7', baudrate=9600, timeout=1)
time.sleep(2)  # зачекати, поки Arduino запуститься

@bot.message_handler(commands=["1"])
def one(message: telebot.types.Message) -> None:
    print('1')
    bot.send_message(chat_id=message.chat.id, text="1", )
    write_read("1")


@bot.message_handler(commands=["2"])
def two(message: telebot.types.Message) -> None:
    bot.send_message(chat_id=message.chat.id, text="1/2", )
    write_read("2")
    print('2')

@bot.message_handler(commands=["4"])
def four(message: telebot.types.Message) -> None:
    bot.send_message(chat_id=message.chat.id, text="1/4", )
    write_read("4")
    print('4')

@bot.message_handler(commands=["8"])
def eight(message: telebot.types.Message) -> None:
    bot.send_message(chat_id=message.chat.id, text="1/8", )
    write_read("8")
    print('8')

@bot.message_handler(commands=["16"])
def sixteen(message: telebot.types.Message) -> None:
    bot.send_message(chat_id=message.chat.id, text="1/16", )
    write_read("16")

@bot.message_handler(commands=["0"])
def zero(message: telebot.types.Message) -> None:
    bot.send_message(chat_id=message.chat.id, text="0", )
    write_read("0")

def write_read(message: str):
    arduino.write(bytes(message + '\n', 'utf-8'))
    time.sleep(0.1)
    data = arduino.readline().decode('utf-8').strip()
    return data

if __name__ == "__main__":
    #print("Bot is started!")
    print("prog is started")
    bot.polling(none_stop=True, interval=1, timeout=60)

