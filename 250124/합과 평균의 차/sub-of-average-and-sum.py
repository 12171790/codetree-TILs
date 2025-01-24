arr = list(map(int, input().split()))
arr_sum = sum(arr)
arr_avg = arr_sum //len(arr)

print(arr_sum)
print(arr_avg)
print(arr_sum - arr_avg)