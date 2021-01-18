#include<iostream>
using namespace std;
int partition(int arr[],int lb,int ub);
void quick_sort(int arr[],int lb,int ub);
void display(int arr[],int size);
int main()
{
    int size = 0;
    cout << "Enter the number of element in the array: " ;
    cin >> size;
    int arr[size],lb = 0,ub = (size-1);

    cout << "Enter the element in the array : "; //15 5 20 35 2 42 67 17
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    quick_sort(arr,lb,ub);
    display(arr,size);

    return 0;
}
int partition(int arr[],int lb,int ub)
{
    int pivot,start,end;
    pivot = arr[lb];
    start = lb;
    end = ub;

    while(start < end){
        while(arr[start] <= pivot){
            start++;
        }
        while(arr[end] > pivot){
            end--;
        }
        if(start < end){
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
        }
    }
    int temp = arr[lb];
    arr[lb] = arr[end];
    arr[end] = temp;

    return end;
}
void quick_sort(int arr[],int lb,int ub)
{
    if(lb < ub){
        int loc = partition(arr,lb,ub);
        quick_sort(arr,lb,(loc - 1));
        quick_sort(arr,(loc + 1),ub);
    }
}
void display(int arr[],int size)
{
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}
