#!/usr/bin/python3

def search_replace(my_list, search, replace):
    def find_search(field):
        return field if field != search else replace
    return list(map(find_search, my_list))
