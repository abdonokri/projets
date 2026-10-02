#include<stdio.h>
int main(){
    int width; 
    int height;
    printf("widht: ");
    scanf("%d", &width);

    printf("height: ");
    scanf("%d", &height);

// Area = width × height
// Perimeter = 2 × (width + height)
    printf("Area = %d\n", width * height);
    printf("Perimeter = %d\n", 2 * (width + height));
    return 0;
}