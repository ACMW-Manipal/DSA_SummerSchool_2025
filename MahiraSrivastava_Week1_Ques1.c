#include <stdio.h>

int missingNumber(int* num , int size )
{
    int sum = size*(size+1) / 2;
    int actual_sum =0;
    
    for(int i=0;i<size;i++)
    {
        actual_sum = actual_sum + num[i];
    }
    return sum - actual_sum;
}

int main()
{
    int num[] = {1,0,3};
    int size = sizeof(num) / sizeof(num[0]);
    int missing = missingNumber(num,size);
    printf("Missing number is %d" , missing);


return 0;
}
