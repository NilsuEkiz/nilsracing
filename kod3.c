#include <stdio.h>
#include <math.h>

void denklem_coz(float a, float b, float c){
    float delta = (b*b) - (4*a*c);
    printf("Delta: %.2f\n", delta);

    if(delta>0){
        float x1= (-b + sqrt(delta)) / (2*a);
        float x2 = (-b - sqrt(delta)) / (2*a);
        printf("İki reel kök var");
        printf("x1= %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    }

    else if (delta==0){
        float x = -b/(2*a);
        printf("Çakışık kök  var: x= %.2f\n", x);

    }

    else{
        printf("Reel kök yok");
    }
}

int main(){
    float a, b, c;
    printf("ax^2 + bx +c= 0 için a,b,c gir: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a==0){
        printf("a=0 olamaz 2. derece denklem olması lazım");

    }
    else {
        denklem_coz(a,b,c);
    }

    return 0;
}