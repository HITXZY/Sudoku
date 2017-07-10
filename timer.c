#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(){
    int i=0;
    int j=0;
    int k=0;
    while(1){
        system("cls");
        printf("%02d:%02d:%02d",k,j,i);
        Sleep(1000);
        ++i;
        if(i==60){
            ++j;
            i=0;
        }
        if(j==60){
            ++k;
            j=0;
        }
    }
    return 0;
}
