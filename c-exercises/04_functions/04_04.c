// int get_area(int length, int width); "surface"
// int get_perimeter(int length, int width); "périmétre"
//void display_result(int area, int perimeter);
# include <stdio.h>
int get_area(int length, int width){
    return length * width;
}
int get_perimeter(int length, int width){
    return (length + width) * 2;
}
void display_result(int length, int width){
        printf("Area is : %d\n", get_area(length, width));
        printf("Perimeter is : %d\n", get_perimeter(length, width));
    }
int main(){
    int a ;
    int b;
    printf("entre length: ");
    scanf("%d", &a);

    printf("entre width: ");
    scanf("%d", &b);

    display_result(a, b);
    

    return 0;
}