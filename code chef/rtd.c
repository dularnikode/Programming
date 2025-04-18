#include<stdio.h>
#include<string.h>

int digit(char);

int main(){
    int t=0;
    scanf("%d",t);
    while(t--){
        char roman_Number[1000];
        int i=0;
        long int number =0;

        scanf("%s",roman_Number);

        while(roman_Number[i]){

             if(digit(roman_Number[i]) < 0){
                printf("Invalid roman number");
                break;
             }

             if((strlen(roman_Number) -i) > 2){
                 if(digit(roman_Number[i]) < digit(roman_Number[i+2])){
                     printf("Invalid roman number");
                     break;
                 }
             }

             if(digit(roman_Number[i]) >= digit(roman_Number[i+1]))
                 number = number + digit(roman_Number[i]);
             else{
                 number = number + (digit(roman_Number[i+1]) - digit(roman_Number[i]));
                 i++;
             }
             i++;
        }

        printf("%ld\n",number);
    }
    return 0;

}

int digit(char c){

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
