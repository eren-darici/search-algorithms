def JumpSearch(array, element):
    l = len(array)
    step = (l ** 0.5)

    previous = 0

    while array[int(min(step, l) - 1)] < element:
        previous = step
        step += (l ** 0.5)

        if previous >= l:
            return
    
    while array[int(previous)] < element:
        previous += 1

        if previous == min(step, l):
            return
    
    if array[int(previous)] == element:
        return int(previous)

    return