#include<stdio.h>
typedef int (*f_t)(void);
f_t newc(){
    int i = 0 ;
    int dummy(){
        i= i+1;
        return i;

    }
    return dummy;
}
int main(int argc, char const *argv[])
{
    f_t x , y;
    x =  newc();
    y = newc();

    printf("%d %d %d \n" , x(), x() , x());
    printf("%d %d %d \n" , y(), y() , y());
    return 0;
}
