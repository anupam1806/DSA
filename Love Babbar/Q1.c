#include <stdio.h>
 void reverse(int arr[],int start,int end){
     int temp;
     while (start<end)
     {
         temp = arr[start];
         arr[start] = arr[end];
         arr[end] = temp;
         start++;
         end--;
     }
 }
     
    void print(int arr[],int size){
        int i;
        for(i=0;i<size;i++){
            printf("%d ",arr[i]);
        }
    }

int main(){
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    reverse(arr,0,n-1);
    print(arr,n);
    return 0;
}
     
