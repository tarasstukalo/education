import telebot
import telebot.types
import serial
import time

BOT_TOKEN = "8536896770:AAFDmWirais5Kgqt1IF9up5iMvage4wWqJI"
bot = telebot.TeleBot(BOT_TOKEN)

arduino = serial.Serial(port='COM7', baudrate=9600, timeout=1)
time.sleep(2)  # зачекати, поки Arduino запуститься

@bot.message_handler(commands=["red"])
def red(message: telebot.types.Message) -> None:
    bot.send_message(chat_id=message.chat.id, text="RED", )
    write_read("1`")

@bot.message_handler(commands=["green"])
def green(message: telebot.types.Message) -> None:
    bot.send_message(chat_id=message.chat.id, text="GREEN", )
    write_read("2")

@bot.message_handler(commands=["blue"])
def blue(message: telebot.types.Message) -> None:
    bot.send_message(chat_id=message.chat.id, text="BLUE", )
    write_read("3")

@bot.message_handler(commands=["alloff"])
def alloff(message: telebot.types.Message) -> None:
    bot.send_message(chat_id=message.chat.id, text="ALLOFF", )
    write_read("4")

@bot.message_handler(commands=["redoff"])
def redoff(message: telebot.types.Message) -> None:
    bot.send_message(chat_id=message.chat.id, text="REDOFF", )
    write_read("5")

@bot.message_handler(commands=["greenoff"])
def greenoff(message: telebot.types.Message) -> None:
    bot.send_message(chat_id=message.chat.id, text="GREENOFF", )
    write_read("6")

@bot.message_handler(commands=["blueoff"])
def blueoff(message: telebot.types.Message) -> None:
    bot.send_message(chat_id=message.chat.id, text="BLUEOFF", )
    write_read("7")

def write_read(message: str):
    arduino.write(bytes(message + '\n', 'utf-8'))
    time.sleep(0.1)
    data = arduino.readline().decode('utf-8').strip()
    return data


if __name__ == "__main__":
    #print("Bot is started!")
    #bot.polling(none_stop=True, interval=1, timeout=60)
    print("prog is started")
    bot.infinity_polling()

