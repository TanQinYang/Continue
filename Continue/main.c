#include <stdio.h>
#include <stdlib.h>

int main()
{
int i=0;
    while(i<100)
{
    if (i%2==0)
{
        printf("All the even numbers are:%d\n",i);
    i++;
    continue;
}
        printf("All the odd numbers are:%d\n",i);
    i++;

}

    return 0;
}
