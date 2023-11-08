#!/usr/bin/python3

def uniq_add(my_list=[]):
    integer = 0
    for forum in set(my_list):
        integer += forum
    return integer
