import pprint

from train_task import max_speed

def avg(nums: list[int]) -> int | float:
    return sum(nums) / len(nums)

def has_increased_scholarship(num: int | float) -> str:
    if num >= 10:
        return "Так, є підвищена степендія"
    else:
        return "Ні, немає"

def month_stat(points: dict) -> tuple:
    total_stat = {}
    total_points = []
    for key, value in points.items():
        total_points.extend(value)
        summa = sum(value)
        total_stat.update(
            {
                key:
                    {
                        "Загальна сума": summa,
                        "Максимальний бал": max_speed(value),
                        "Мінімальний бал": min(value),
                            "Середній бал": avg(value)
                    }
            }
        )
    return total_stat, total_points

def all_stat(stat: dict, all_points: list) -> dict:
    max_points = []
    min_points = []
    avg_points = []
    total_avg_points = avg(all_points)
    for lesson_stat in stat.values():
        max_points.append(lesson_stat["Максимальний бал"]),
        min_points.append(lesson_stat["Мінімальний бал"]),
        avg_points.append(lesson_stat["Середній бал"])
    lessons_stat = {
        "Загальна статистика": {
            "Загальна сума": sum(all_points),
            "Максимальний бал": max(max_points),
            "Мінімальний бал": min(min_points),
            "Середній бал": total_avg_points,
            "Підвищена степендія": has_increased_scholarship(total_avg_points)
        }
    }

    return lessons_stat

def main_func(raw_data: dict) -> tuple: #функція для виготовлення соку
    dicts, int_values = month_stat(raw_data) #s3
    result = all_stat(dicts, int_values) #функція нарізаних якбук і кісточок робить сік
    return dicts, result


if __name__ == "__main__":
    my_month_stat = {
        "Українська мова": [10, 11, 12, 10, 10, 12],
        "Алгебра": [12, 10, 10, 11, 10, 10],
        "Фізика": [10, 10, 12, 11, 11, 10],
        "Історія": [8, 5, 7, 10, 12, 3]
    }

    res = main_func(my_month_stat) #s1

    pprint.pprint(res)
