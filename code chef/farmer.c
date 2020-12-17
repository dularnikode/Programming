#include <stdio.h>
int main(){
    //Enter the number of columns");
    int i,y = scanf("%d %d",&i,&y);
    //printf("Enter the number of rows");
    //int y = scanf("%d",&y);

    int r[i][y];
    int a;
    int b;
    for (a=0; a<i; a++){
        for(b=0; b<y; b++){
            int r[a][b] = scanf("%d",&a,&b); //bug
        }
    }
}