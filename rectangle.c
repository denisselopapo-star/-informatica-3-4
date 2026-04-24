#include <stdio.h>
int main(void)
{
    int height;
    int base;

    printf("what is the rectangle height: ");
    scanf("%d", &height);
    printf("Whats your rectangle base: ");
    scanf("%d", &base);

    int area = height*base;
    int perimeter = 2*(height*base);
    printf("area, %d \n", area);
    printf("perimeter, %d \n", perimeter);
}
