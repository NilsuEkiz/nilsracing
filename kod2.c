#include <stdio.h>
void cozum(float a, float b){
    if(a==0){
        if(b==0){
            printf("Sonsuz çözüm vardır");
        }
        else{
            printf("Çözüm yoktur", b);
         }
        }
        else{
            float x = -b/a;
            printf("Denklem kök x: %.2f\n", x);

        }
    }

int main(){
    float a, b;
    printf("ax +b =0 denkleminde a ve b girin: ");
    scanf("%f %f", &a, &b);
    cozum(a, b);

    return 0;
}
