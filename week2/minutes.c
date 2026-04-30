#include <stdio.h>
int main(void)
{
    int runingtime;
    printf("enter minutes of the movie: ");
    scanf("%d", &runingtime);
    int time;
    int startmin;
    printf("enter start time: ");
    scanf("%d:%d", &time, &startmin);

    int hour= runingtime/60;
    int min=runingtime % 60;

    int endhour=time+hour;
    int endmin=startmin+min;

    printf("your movie will last:%dhr and %dmin \n",hour,min);
    printf("End time: %d:%d\n", endhour, endmin);
}
