baris, kolom =  map(int, input().split())

angka = list(map(int, input().split()))

index = 0

for i in range(baris):
    for j in range(kolom):
        print(angka[index], end=" ")
        index += 1
    print()