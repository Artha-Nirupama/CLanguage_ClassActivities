#include<stdio.h>

enum Day{
    sunday,monday,tuesday,wendesday,thursday,friday,saturday
};

int main(){

    enum Day today = monday ;

    printf("%d",today);

    return 0;
}