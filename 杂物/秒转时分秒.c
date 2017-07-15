#include<stdio.h>
#define MIN 60
#define HOUR 3600
unsigned seconds, minutes, hours, secs_left, mins_left;
int main(void)
{
    printf("Ender number of seconds(<65000):");
    scanf("%d",& seconds);
    hours = seconds / HOUR;
    minutes = seconds / MIN;
    mins_left = minutes % MIN;
    secs_left = seconds % MIN;
    printf("%u seconds is equal to",seconds );
    printf("%u h,%u m,%u s\n",hours,mins_left,secs_left);
    return 0;
}

