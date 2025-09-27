def month_stat(points:dict) -> dict:
    total_stat = {}
    for key, value in points.items():
        print(key, sum(value))
        total_stat.update({key: sum(value)})
    return points


if __name__ == "__main__":
    my_month_stat = {
        "Українська мова": [10, 11, 12, 10, 10, 12],
        "Алгебра": [12, 12, 10, 11, 10, 10],
        "Фізика": [10, 10, 12, 11, 11, 10]
    }
    res = month_stat(my_month_stat)
    # print(res)
