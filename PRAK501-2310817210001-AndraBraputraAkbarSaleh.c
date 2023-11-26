#include <stdio.h>
int Max(int a, int b, int c, int d) {
    int a2 = (a > b) ? a : b;
    int b2 = (c > d) ? c : d;
    return (a2 > b2) ? a2 : b2;
}
int main() {
int a, b, c, d; 
scanf("%d %d %d %d", &a, &b, &c, &d);
int hasil = Max(a, b, c, d);
printf("%d", hasil); 
return 0;
}
