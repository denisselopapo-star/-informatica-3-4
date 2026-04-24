#include <stdio.h>

int main(void)
{
   char UserName[50];
    printf("User name: ");
    scanf("%s", &UserName);
    printf("Hello, %s \n",UserName);
    char FavColor[50];
    printf("Whats your favorite color: ");
    scanf("%s", &FavColor);
    printf("Your Favorite color is, %s \n",FavColor);

}

