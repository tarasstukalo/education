from operator import truediv
from time import process_time


def is_kovbasa_valued(kovbasa_name, kovbasa_price, kovbasa_eshki):
    print("start")
    print(kovbasa_name, kovbasa_price)
    if kovbasa_eshki:
        print("В ковбасі є єшки")
        return
    if kovbasa_price >= 500:
        print("Ковбаса не відповідає вимогам")
        return
    if kovbasa_price <= 300:
        print("Дешево")
        return

    print("Ковбаса відповідає вимогам")
    print("end")
is_kovbasa_valued("Добров", 400, False)
