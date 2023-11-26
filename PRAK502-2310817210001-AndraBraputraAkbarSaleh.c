#include <stdio.h>
#include <math.h>
int hitung(int nilai1, int nilai2){
    int rumus = (nilai1 - nilai2);
    return rumus;
}
int mutlak(int angka){
    int nilaimutlak = fabs(angka);
    return nilaimutlak;
}
int main(){
 int a,b,c,d;
 scanf("%d %d %d %d", &a, &b, &c, &d);
 int Hasil = mutlak(hitung(a,c)) + mutlak(hitung(b,d));
 printf("%d",mutlak(Hasil));
 return 0;
}