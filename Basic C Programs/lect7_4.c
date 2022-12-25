#include <stdio.h>

int main()
{  int lightspeed;
    long int days;
    long int seconds;
    long int distance;
   lightspeed = 186000;
    days = 1000; // specify number of days here
   seconds = days * 24 * 60 * 60;
   distance = lightspeed * seconds;
    printf("distance travelled is %ld",distance);
  return 0;
}
