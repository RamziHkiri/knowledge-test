#!/usr/bin/python3
def  filter_even_numbers(input_list):
    length= len(input_list)
    new_list = []
    for i in range(length):
        if (input_list[i] % 2 == 0):
            new_list.append(input_list[i])
    return new_list

