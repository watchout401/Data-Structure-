def max_two_products(numbers):
    if len(numbers) == 1:
        return numbers[0]
    numbers.sort()
    return numbers[-1] * numbers[-2]

total_elements = int(input())
numbers = list(map(int, input().split()))
print(max_two_products(numbers)) 