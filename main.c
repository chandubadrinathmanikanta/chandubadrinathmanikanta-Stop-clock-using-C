#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
// for sleep() function
#include <time.h>
#include <unistd.h>
#include <stdlib.h>
int main()
{
int hour, minute, second;
hour=minute=second=0;
while(1)
{
// clear output screen
// In case you get an error here use system("clear") instead of system("cls")
system("cls");
// print time in HH : MM : SS format
printf("%02d : %02d : %02d ",hour,minute,second);
// clear output buffer in gcc
fflush(stdout);
// increase second
second++;
// update hour, minute and second
if(second==60){
minute+=1;
second=0;
}//This Application is created by R.Chandu BNM
if(minute==60){
hour+=1;
minute=0;
}
if(hour==24){
hour=0;
minute=0;
second=0;
}
sleep(1);   // wait till 1 second
}
return 0;
}
//Make an endless loop.
//If the hour is equal to 24, increase it and then reset it to 0.
//This Application is created by R.Chandu BNM
