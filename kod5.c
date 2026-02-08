#include <stdio.h>
#include <math.h>

int main(){
    float x[]= {0,5,15,30,50,75};
    float t[] = {0.0, 1.5, 4.5, 9.0, 15.0, 22.5};

    int veri_sayisi=5;
    printf("Değişken t ile sürat:\n");

    for(int i=0; i<veri_sayisi -1; i++){
        float dt= t[i+1] - t[i];
        float dx = x[i+1] - x[i];
        float v= dx/dt;
        printf("BU sürede hız: %.2f m/s \n", t[i], t[i+1], v);
    }

    return 0;
}
