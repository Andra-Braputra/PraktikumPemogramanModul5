#include <stdio.h>
int maksimal(int a, int b){
    int a2 = (a > b) ? a : b;
    return a2;
}
int minimal(int a, int b){
    int b2 = (a < b) ? a : b;
    return b2;
}
int main(){
 int batas = 0;
 int maks = -100000;
 int minim = 100000;
 int bilangan;
 scanf("%d", &bilangan);
 while(batas < bilangan){
 int nilai;
 scanf("%d", &nilai); 
 maks = maksimal(maks, nilai);
 minim = minimal(minim, nilai);
 batas++;
 }
 printf("%d %d",maks,minim); 
}
