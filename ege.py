number = int(input("Введите натуральное число: "))

max_digit = 0
max_digit_position = 0
current_position = 1

while number > 0:
    digit = number % 10
    if digit >= max_digit:
        max_digit = digit
        max_digit_position = current_position
    number //= 10
    current_position += 1

print("Номер самой большой цифры, считая с конца числа:", max_digit_position)