#include<stdio.h>

struct pair
{
    int min;
    int max;
};

struct pair MinMax(int arr[],int n)
{
    struct pair minmax;
    int i;

    if (i == 1)
    {
        minmax.max = arr[0];
        minmax.min = arr[0];
        return minmax;
    }
    if(arr[0]>arr[1]){
        minmax.max = arr[0];
        minmax.min = arr[1];
    }
    else{
        minmax.max = arr[1];
        minmax.min = arr[0];
    }

    for ( i = 2; i < n; i++)
    {
        if (arr[i] > minmax.max)
        {
            minmax.max = arr[i];
        }
        else if (arr[i] < minmax.min)
        {
            minmax.min = arr[i];
        }
        return minmax;
    }
};


int main(){
    int arr[] = {112,264,12,38,76};
    int size = 6;
    struct pair minmax = MinMax(arr,size);
    printf("Maxmimum element %d \n", minmax.max);
    printf("Minimum element %d ",minmax.min);
}