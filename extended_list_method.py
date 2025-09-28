_dict = {
    "a": [10, 11, 12, 10, 10, 12],
    "b": [12, 10, 10, 11, 10, 10],
    "c": [10, 10, 12, 11, 11, 10]
}
all_points = []
my_collection = _dict.values()
for points in my_collection:
    all_points.extend(points)
print(all_points)