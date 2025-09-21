
def max_speed(speed_list: list[float]) -> float:
    max_s = 0
    for speed in speed_list:
        if max_s < speed:
            max_s = speed
    return  max_s


def avg_speed(speed_list: list[float]) -> float:
    return sum(speed_list) / len(speed_list)


trip_stat = {
    "I": [40.4, 28.9, 67.1, 21.3],
    "II": [85.7, 78.3, 71.8, 51.3],
    "III": [36.2, 65.2, 76.2, 90.4],
    "VI": [56.4, 61.1, 76.2, 86.6,],
}

for key, value in trip_stat.items():
    print({key: {"max_s": max_speed(value), "avg_s": avg_speed(value)}})
