from math import fabs

def hitung(nilai1, nilai2):
    rumus = nilai1 - nilai2
    return rumus

def mutlak(angka):
    nilaimutlak = fabs(angka)
    return nilaimutlak

def main():
    a, b, c, d = map(int, input("").split())
    hasil = mutlak(hitung(a, c)) + mutlak(hitung(b, d))
    print (int(mutlak(hasil)))

if __name__ == "__main__":
    main()