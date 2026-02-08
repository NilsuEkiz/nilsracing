#include <stdio.h>
#include <math.h>

int main(){

float x[] = {0,5,15,30,50,75};
int veri_sayisi=6;
float dt= 1.0;

printf("Sabit dt (%.1fs) ile süratler: \n", dt);

for(int i=0; i<veri_sayisi-1; i++){
    float v= (x[i+1] - x[i]) / dt;
    printf("t=%d. için hız: %.2f m/s", i+1, v);
}

return 0;
}