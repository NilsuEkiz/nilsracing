#include <stdio.h>

int faktoriyel_loop(int n){
    int sonuc =1;
    for (int i = 1 ; i<=n; i++){
        sonuc = sonuc *i;
    }
    return sonuc;
}
int main(){
    int sayi;
    printf("Faktoriyel sayu: ");
    scanf("%d", &sayi);
    int sonuc= faktoriyel_loop(sayi);
    printf("%d! = %d/n", sayi, sonuc);

    return 0;
}