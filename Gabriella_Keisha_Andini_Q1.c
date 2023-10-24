/* NT01012 Procedural Programming              */
/* Programming Assignment 4                    */
/*                                             */
/* Question Number  : 1                        */
/* Name             : Gabriella Keisha Andini  */
/* Date             : 15.12.2022               */


#include <stdio.h> //include is a directive
#include <math.h>  //new directive math.h for mathematical calculation
#include <string.h>//new directive string.h

int main()
{
    //variables used, applied arrays on data x and y as the range to sum up
    int i;
    int x[10]={0,10,20,30,40,50,60,70,80,90};
    float y[10]={0.3,1.2,2.4,2.9,4.3,5.8,6.1,6.9,8.6,9.2};
    float sumx,sumy,sumxx,sumxy,m,c,r,N=10;

    //sum up calculation
    for (i=0; i<10; i++)
    {
        sumx+=x[i];            //calculation of sum of kg (x)
        sumy+=y[i];            //calculation of sum of ohms (y)
        sumxx+=pow(x[i],2);    //calculation of sum of x^2
        sumxy+=x[i]*y[i];      //calculation of sum of x*y
    }

    //calculation for the value of m and c
    m = ((N*sumxy)-(sumx*sumy))/((N*sumxx)-(pow(sumx,2)));  //calculation of the slope (m)
    c = (sumy-(m*sumx))/N;                                  //calculation of the vertical intercept (c)

    //print out the slope and intercept result
    printf ("Value of m = %f = %.2f\n",m,m);         //slope result
    printf ("Value of c = %f = %.2f\n",c,c);         //intercept result
    printf ("\nHence,\ny = %.2fx + %.2f\n",m,c);     //y=mx+c

    //calculation of the sensor resistance at 56 Kg
    r = m*56+c;

    //print the result when x = 56 kg applied
    printf("When x = 56 Kg is applied, the sensor resistance is : %f ohms = %.2f ohms\n",r,r);
}
