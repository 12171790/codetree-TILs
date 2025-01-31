a, b = map(int, input().split())
mod = (a % b) * 10

print(f"{a // b:d}.", end = '')
for _ in range(20):
    print(f"{mod // b:d}", end = '')
    mod = (mod % b) * 10
