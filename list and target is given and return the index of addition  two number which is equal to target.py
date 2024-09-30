def two_sum(arr, target):
    num_map = {}
    for i, num in enumerate(arr):
        complement = target - num
        if complement in num_map:
            return [num_map[complement], i]
        num_map[num] = i
    return []

# Example usage
arr = [2, 7, 11, 15]
target = 9
print(two_sum(arr, target))
