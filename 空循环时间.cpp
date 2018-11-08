#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    long i=1000000L;
    clock_t start,finish;
    double TheTimes;
    printf("×ö%ld´Î¿ÕÑ­»·",i);
    start=clock();
    while(i--);
    finish=clock();
    TheTimes=(double)(finish-start)/CLOCKS_PER_SEC;
    printf("%fÃë\n",TheTimes);
    return 0;
}
