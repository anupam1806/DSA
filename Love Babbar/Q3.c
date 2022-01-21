#include<stdio.h>
void swap(int *a, int *b)
    {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    int randomPartition(int arr[], int l, int r)
    {
        int n = r-l+1;
        int pivot = rand() % n;
        swap(&arr[l + pivot], &arr[r]);
        return partition(arr, l, r);
    }
int kthSmallest(int arr[], int l, int r, int k)
    {
        if (k > 0 && k <= r - l + 1)
        {
            int pos = randomPartition(arr, l, r);
            
            if (pos-l == k-1)
                return arr[pos];
            if (pos-l > k-1)  
                return kthSmallest(arr, l, pos-1, k);
            return kthSmallest(arr, pos+1, r, k-pos+l-1);
        }
    
        return 99999999;
    }
int partition(int arr[], int l, int r)
    {
        int x = arr[r], i = l;
        for (int j = l; j <= r - 1; j++)
        {
            if (arr[j] <= x)
            {
                swap(&arr[i], &arr[j]);
                i++;
            }
        }
        swap(&arr[i], &arr[r]);
        return i;
    }
 
int main()
{
    int test_case;
    scanf("%d",&test_case);
    while(test_case--)
    {
        int number_of_elements;
        scanf("%d", &number_of_elements);
        int a[number_of_elements];
        
        for(int i=0;i<number_of_elements;i++)
            scanf("%d", &a[i]);
            
        int k;
        scanf("%d",&k);
        printf("%d",kthSmallest(a, 0, number_of_elements-1, k));
        printf("\n");
    }
    return 0;
}