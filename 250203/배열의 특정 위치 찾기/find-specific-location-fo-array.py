arr = list(map(int, input().split()))

even_arr = arr[1::2]
three_arr = arr[2::3]

print(sum(even_arr), end=' ')
print(f"{sum(three_arr) / len(three_arr):.1f}")