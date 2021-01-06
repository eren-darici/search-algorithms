def MultivaluedLinearSearch(element, array):
    results = []
    for i in range(len(array)):
        if array[i] == element:
            results.append(i)
    return results