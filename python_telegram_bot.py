from math import trunc

import telebot as tb
import telebot.types

BOT_TOKEN = "***"
bot = tb.TeleBot(BOT_TOKEN)

@bot.message_handler(commands=["led_on"])
def main(message: telebot.types.Message) -> None:
    bot.send_message(
        chat_id=message.chat.id,
        text="LED_ON"
    )
@bot.message_handler(commands=["led_off"])
def main(message: telebot.types.Message) -> None:
    bot.send_message(
        chat_id=message.chat.id,
        text="LED_OFF"
    )
@bot.message_handler(commands=["led_sos"])
def main(message: telebot.types.Message) -> None:
    bot.send_message(
        chat_id=message.chat.id,
        text="LED_SOS"
    )
if __name__ == "__main__":
    bot.polling(none_stop=True, interval=1, timeout=60)
