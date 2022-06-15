#include<stdio.h>
int main(int argc, char const *argv[])
{
    for(int i=0 ; i < 5 ; i++){
        for(int j = 0  ; j< 5 ; j++){
            if(j==3){
                break;
            }
          printf("%d  ",j);
        }
    }
    return 0;
}
