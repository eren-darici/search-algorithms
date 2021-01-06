def LinearSearch(element, array):
    for i in range(len(array)):
        if array[i] == element:
            return i
    return "Item doesn't exist in the array."

