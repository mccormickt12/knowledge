#include <stdio.h>

using namespace std;

typedef struct
{
    int (*twice) (int);
    int (*half) (int);
    void (*printnum) (int);
    int (*random) ();
} mathops;

int times2(int val)
{
    return val * 2;
}

int half(int val)
{
    return val / 2;
}

void printnumber(int num)
{
    printf("The num is %d\n", num);
}

int randomNum()
{
    return 7;
}


int main()
{ 
   mathops* op = new mathops();
   op->twice = &times2;
   op->half = &half;
   op->printnum = &printnumber;
   op->random = &randomNum;
   printf("Value is %d\n", op->twice(5));
   int temp = op->half(6);
   op->printnum(temp);
   temp = op->random();
   op->printnum(temp);
   
   return 0;
}

