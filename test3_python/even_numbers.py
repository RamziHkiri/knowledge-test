#!/usr/bin/python3
def  filter_even_numbers(input_list):
    length= len(input_list)
    new_list = []
    for i in range(length):
        if (input_list[i] % 2 == 0):
            new_list.append(input_list[i])
    return new_list

input_list = [3, 8, 12, 7, 4, 6, 9, 10]
even_numbers = filter_even_numbers(input_list)
print(even_numbers) 