def maksimal(a, b):
    return a if a > b else b

def minimal(a, b):
    return a if a < b else b

def main():
    bilangan = int(input())
    nilai = list(map(int, input().split()))

    maks = nilai[0]
    minim = nilai[0]

    for hasil in nilai[1:]:
        maks = maksimal(maks, hasil)
        minim = minimal(minim, hasil)

    print(f"{maks} {minim}")

if __name__ == "__main__":
    main()