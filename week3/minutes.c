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

     if(endmin >=60){//this makes the limit of an hour last 60 minutes
        endhour = endhour+ (endmin/60);//update value of endhour variable
        endmin= endmin %60;
     }

    printf("your movie will last:%dhr and %dmin \n",hour,min);
    printf("End time: %d:%02d \n", endhour, endmin);


}
