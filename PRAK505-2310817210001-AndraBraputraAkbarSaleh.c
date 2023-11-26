#include <stdio.h>

void Biodata(int tahun, char nama[], char asal[]) {
    int umur = 2023 - tahun;
    printf("Perkenalkan, nama saya : %s\n", nama);
    printf("Umur saya adalah : %d\n", umur);
    printf("Saya adalah angkatan : 2023\n");
    printf("Asal saya dari : %s\n", asal);
}

int main() {
    int tahunLahir;
    char Namaku[20], Asal[15];
    scanf("%d",&tahunLahir);
    scanf("%s",&Namaku);
    scanf("%s",&Asal);

    Biodata(tahunLahir, Namaku, Asal);

    return 0;
}
