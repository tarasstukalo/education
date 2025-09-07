nums = ["нуль", "один", "два", "три", "чотири", "п'ять", "шість", "cім", "вісім", "дев'ять", "десять", "одинадцять", "дванадцять", "тринадцять  "]
reversed_nums = []
for i in range(len(nums)):
    reversed_nums.append(nums[-(i+1)])
# print("o: ", nums[::-1])
# print(reversed_nums)
nums.reverse()
print(nums)