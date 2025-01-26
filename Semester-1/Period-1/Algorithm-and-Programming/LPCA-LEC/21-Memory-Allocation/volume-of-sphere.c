#include<stdio.h>
#define PI 3.14 
#define VOLUME_SPHERE(r) ((4.0 / 3) * PI * ((r) * (r) * (r)))
int main() {
    int radius = 0;
    float volume = 0;

    for(int i = 0; i < 10; i++ ) {
        radius = i + 1;
        volume = VOLUME_SPHERE(radius);
        printf("\nVolume of sphere with radius %d is %.2f ", radius, volume);
    }
    return(0);
}

