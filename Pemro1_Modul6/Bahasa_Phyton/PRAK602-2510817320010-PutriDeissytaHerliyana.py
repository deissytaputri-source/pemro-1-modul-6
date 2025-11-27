n = int(input())

zetsu = list(map(int, input().split()))

hasil = []

for i in range(n):
    hasil.append(zetsu[i] * (i + 1))

print(*hasil)