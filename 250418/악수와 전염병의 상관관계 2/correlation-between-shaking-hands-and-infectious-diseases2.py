class Info:
    def __init__(self, t, x, y):
        self.t = t
        self.x = x
        self.y = y


n, k, p, T = map(int, input().split())
devs = [0] * (n + 1)
devs[p] = 1 ## 감염

handshake_count = [0] * (n + 1)
info = []
for i in range(T):
    t, x, y = tuple(map(int, input().split()))
    info.append(Info(t, x, y))   

info.sort(key = lambda x: x.t)

for el in info:
    if devs[el.x] == 1 and devs[el.y] == 1:
        handshake_count[el.x] += 1
        handshake_count[el.y] += 1
        continue

    if devs[el.x] == 1:
        if handshake_count[el.x] < k:
            devs[el.y] = 1
            handshake_count[el.x] += 1
    elif devs[el.y] == 1:
        if handshake_count[el.y] < k:
            devs[el.x] = 1
            handshake_count[el.y] += 1

for i in range(1, len(devs)):
    print(devs[i], end='')