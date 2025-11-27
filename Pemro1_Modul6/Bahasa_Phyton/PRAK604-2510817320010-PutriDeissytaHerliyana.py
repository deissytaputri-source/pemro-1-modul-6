kode = input()
pesan = input()

if len(kode) != len(pesan):
    print("Panjang kalimat berbeda, pesan palsu")
else:
    hasil = ""
    bintang = 0
    pagar = 0

    for i in range(len(kode)):
        if kode[i] == pesan[i]:
            hasil += "*"
            bintang += 1
        else:
            hasil += "#"
            pagar += 1

    print(hasil)
    print(f"* = {bintang}")
    print(f"# = {pagar}")

    if bintang >= pagar:
        print("Pesan Asli")
    else:
        print("Pesan Palsu")
