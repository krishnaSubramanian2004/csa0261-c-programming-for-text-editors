#include<stdio.h>
void cube(int number);
main(){
	int number=3;
     cube(number);
    }
    void cube(int number)
    {
    	int cube;
    	cube=number*number*number;
        printf("result=%d",cube);
	}
