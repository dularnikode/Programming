#include <stdio.h>
void main()
{float simple_interst,principal_amount,interst_rate,time;
printf("Enter the principal amount : ");scanf("%f",&principal_amount);
printf("Enter the interest rate : ");scanf("%f",&interst_rate);
printf("Enter the time in years : ");scanf("%f",&time);
simple_interst=principal_amount*(1+(interst_rate*time));
printf(" The simple interst for your input is %f\n",simple_interst);

}
