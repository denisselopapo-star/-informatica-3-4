#include <stdio.h>
int main(void)
{
    int minutes;
    printf("enter minutes of the movie: ");
    scanf("%d", &minutes);
    int time;
    printf("enter start time: ");
    scanf("%d", &time);

    int hour= (minutes)/60;
    int min=minutes%60;
    printf("your movie will last:%d and %d min \n",minutes, min);
}
