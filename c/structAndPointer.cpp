
#include <stdio.h>

using namespace std;

typedef struct
{
    int first;
    int second;
} tuple;

void printAll(void* p)
{
    printf("void point is %p\n", p);
    printf("void point incremented is %p\n", p+1);
    printf("Cast point is %p\n", (tuple*) p );
    printf("cast point incremented is %p\n", (tuple*) p+1);
    printf("Value is %d\n", ((tuple*) p)->first );
}

int main()
{
   tuple one = {5,10};
   printAll(&one);
   return 0;
}