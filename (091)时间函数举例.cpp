#include <stdio.h>
#include <time.h>

int main ()
{
    time_t rawtime;
    struct tm * timeinfo;
    
    time ( &rawtime );
    timeinfo = localtime ( &rawtime );
    printf ( "现在的时间是: %s", asctime (timeinfo) );
    
    return 0;
}
