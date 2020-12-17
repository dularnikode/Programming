#include <stdio.h>
void main()
{float sub_1,sub_2,sub_3,sub_4,sub_5,percent,average;
printf("Enter the marks of each subject : ");
scanf ("%f %f %f %f %f",&sub_1,&sub_2,&sub_3,&sub_4,&sub_5);
average=(sub_1+sub_2+sub_3+sub_4+sub_5)/5;
percent=((sub_1+sub_2+sub_3+sub_4+sub_5)/500)*100;
printf("Average of subjects is %f\n",average);
printf("Percentage of student is %f\n",percent);
}
