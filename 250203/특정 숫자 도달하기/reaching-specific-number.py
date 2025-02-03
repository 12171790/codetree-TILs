arr = list(map(int, input().split()))
cal_arr = []

for el in arr:
    if el >= 250:
        break
    cal_arr.append(el)

sum = 0;

for el in cal_arr:
    sum += el;

print(sum, f"{sum / len(cal_arr):.1f}")
    
