/*Working on it*/
#include<stdio.h>
#include<conio.h>
#include<windows.h>
int main(int argc, char const *argv[])
{
    int h,m,s;
    int d=1000;//we add a delay of 1000 millisecond
    printf("Set time: \n");
    scanf("%d %d %d",h,m,s);
    if(h>12||m>60||s>60)
    {
        printf("ERROR !\n");
        exit(0);
    }
    while(1)
    {
        s++;
        if(s>59)
        {
           m++;
           s=0;
        }
        if(m>59)
        {
            h++;
            m=0;
        }
        if(h>12)
        {
            h=1;
        }
        printf("\n Clock:");
        printf("\n %02d:%02d:%02d",h,m,s);//this writes our time in the format 00:00:00
        Sleep(d);//the function sleep slows down the while loop and make it more like a real clock
        //clrscr();
    }
    
    return 0;
}