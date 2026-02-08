#include <stdio.h>
int faktoriyel_rec(int n){
    if(n<= 1)
    return 1;
    else
    return n *faktoriyel_rec(n-1);
}
int main(){
    int sayi;
    printf("Faktöriyel alınacak sayi: ");
    scanf("%d", &sayi);
    int sonuc= faktoriyel_rec(sayi);
    printf("%d! = %d/n", sayi, sonuc);

    return 0;
}