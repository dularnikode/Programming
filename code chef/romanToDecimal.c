#include<stdio.h>
#include<string.h>

int roman_to_digit(char);

int main(){
    int t,j=0;
    scanf("%d",t);
    for(j=0;j<t;j++){
        char roman_num[10];
        int i=0;
        int num=0;
        scanf("%s",roman_num);
        while(roman_num[i]){

            if(roman_to_digit(roman_num[i]) < 0){
                printf("Invalid r Number");
                break;
            }

            if((strlen(roman_num)-i) >2){
                if(roman_to_digit(roman_num[i]) < roman_to_digit(roman_num[i+2])){
                     printf("Invalid r Number");
                     break;
                }
            }

            if(roman_to_digit(roman_num[i]) >= roman_to_digit(roman_num[i+1]))
                num = num + roman_to_digit(roman_num[i]);
            else{
                num = num + (roman_to_digit(roman_num[i+1]) - roman_to_digit(roman_num[i]));
                i++;
            }
            i++;
        }
         printf("%d\n",num);
    }
    return 0;
}

int roman_to_digit(char c){

    int value=0;

    switch(c){
         case 'I': value = 1; break;
         case 'V': value = 5; break;
         case 'X': value = 10; break;
         case 'L': value = 50; break;
         case 'C': value = 100; break;
         case 'D': value = 500; break;
         case 'M': value = 1000; break;
         case '\0': value = 0; break;
         default: value = -1;
    }

    return value;
}
