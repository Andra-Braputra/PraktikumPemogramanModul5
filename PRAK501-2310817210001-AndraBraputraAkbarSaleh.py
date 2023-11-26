def max(a, b, c, d):
    nilai = a if a > b else b
    nilai = c if c > nilai else nilai
    nilai = d if d > nilai else nilai
    return nilai

def main():
    a, b, c, d = map(int, input("").split())
    hasil = max(a, b, c, d)
    print(hasil)

if __name__ == "__main__":
    main()
