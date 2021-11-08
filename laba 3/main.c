#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <time.h>

int main()
{
    // F(x)= 0.3x^3+1.1*x^2+0.3*x+1.5
    double x1, x2,xi,f,t, T ;
    unsigned int N, i, n , v;
    char k;

    N = 0;
     printf("1 - chord method\n" );
     printf("2 - half chord method\n");

     scanf("%d",&v);
      do
      {
        printf("Left limit must be less than -3.7549681404; \n");
        printf("Left limit: \n");
        scanf("%lf",&x1);

        printf("Right limit must be more than -3.7549681404; \n");
        printf("Right limit: \n");
        scanf("%lf",&x2);
      }
      while(0.3*pow (x1, 3)+1.1*pow (x1, 2) + 0.3*x1 +1.5>0 &&
        0.3*pow (x2, 3)+1.1*pow (x2, 2) + 0.3*x2 +1.5<0    );

     switch (v)
     {
         case 1:

      printf("Pohibka (0.001 to 0.00001): \n");
      scanf("%lf",&f);
      printf("Maximal number of interation: \n");
      scanf("%d", &i);
      n=i;
      clock_t t1 = clock();
      do
{
            N=N+1;

        xi=((0.3*pow (x2, 3)+1.1*pow (x2, 2) + 0.3*x2 +1.5)*x1 - ((0.3*pow (x1, 3)+1.1*pow (x1, 2) + 0.3*x1 +1.5)*x2))/
        (0.3*pow (x2, 3)+1.1*pow (x2, 2) + 0.3*x2 +1.5 - 0.3*pow (x1, 3)+1.1*pow (x1, 2) + 0.3*x1 +1.5);


         if( 0.3*pow (xi, 3)+1.1*pow (xi, 2) + 0.3*xi +1.5 >  0 )
         {
            x2=xi;
         }
        else

        {
            x1=xi;
        }
        i=i-1;
       if (i==0)
            {

            printf("The maximum number of iterations completed\n");
            printf("Press 1 if you want finish\n");
            printf("Press 2 if you want continue with current number of interations\n");
            scanf("%d", &k);

            if(k==1)
            {
                system("cls");
                break;
            }
            else
            {


            if (k==2) {i=i+n;}

              }

             }
}
             while ( fabs (0.3*pow (xi, 3)+1.1*pow (xi, 2) + 0.3*xi +1.5) > f );

             clock_t t2 = clock();
             T= (t2 - t1) / CLOCKS_PER_SEC;

             printf("xi = %lf\n",xi);
             printf("Pohibka  = %lf\n",f);
             printf("Number of iterations = %d\n",N);
             printf("Calculation time = %lf\n",T);

              break;

         case 2:
       printf("Pohibka (0.001 to 0.00001): \n");
      scanf("%lf",&f);
      printf("Maximal number of interations: \n");
      scanf("%d", &i);
      n=i;
      clock_t t11 = clock();

      do
      {
         xi=(x1+x2)/2;
         if( 0.3*pow (xi, 3)+1.1*pow (xi, 2) + 0.3*xi +1.5 >  0 )
         {
            x2=xi;
         }
        else
        {
            x1=xi;
        }

         i=i-1;
         if (i==0)
            {

            printf("The maximum number of iterations completed\n");
            printf("Press 1 if you want finish\n");
            printf("Press 2 if you want continue with current number of interations\n");
            scanf("%d", &k);

            if(k==1)
            {
                system("cls");
                break;
            }
            else
            {


            if (k==2) {i=i+n;}

              }

             }
      }
        while ( fabs (0.3*pow (xi, 3)+1.1*pow (xi, 2) + 0.3*xi +1.5) > f );
            clock_t t22 = clock();
            T= (t22 - t11) / CLOCKS_PER_SEC;

             printf("xi = %lf\n",xi);
             printf("Pohibka  = %lf\n",f);
             printf("Number of iterations = %d\n",N);
             printf("Calculation time = %lf\n",T);

              break;
     }
        return 0;
}
