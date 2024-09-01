// This program can convert celius to farenheit.

// An IITian's video to explain this - https://nptel.ac.in/courses/106104128


#include<conio.h>
 
void main()
{
    float celsius,fahrenheit; // This is declaring variable
    clrscr();
 
    printf("\n Enter the Temparature in Celsius : ");
    scanf("%f",&celsius);
 
    fahrenheit = (1.8 * celsius) + 32;
    printf("\n Temperature in Fahrenheit : %f ",fahrenheit);
 
    getch();
}