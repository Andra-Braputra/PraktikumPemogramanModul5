def Biodata(tahun, nama, asal):
    umur = 2023 - tahun
    print(f"Perkenalkan, nama saya: {nama}")
    print(f"Umur saya adalah: {umur}")
    print("Saya adalah angkatan: 2023")
    print(f"Asal saya dari: {asal}")

def main():
    tahun_lahir = int(input())
    nama = input()
    asal = input()
    Biodata(tahun_lahir, nama, asal)

if __name__ == "__main__":
    main()
