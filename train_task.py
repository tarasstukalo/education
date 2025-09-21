def max_speed(speed_list: list[float]) -> float:
    max_s = 0
    for speed in speed_list:
        if max_s < speed:
            max_s = speed
    return  max_s


def avg_speed(speed_list: list[float]) -> float:
    return sum(speed_list) / len(speed_list)
