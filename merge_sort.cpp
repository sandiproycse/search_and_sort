#include<iostream>
using namespace std;

void merge_sort(int arr[], int lb, int ub);
int merge(int arr[], int lb, int mid, int ub);
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

    merge_sort(arr,lb,ub);
    display(arr,size);
    return 0;
}
void merge_sort(int arr[], int lb, int ub)
{
    int mid;
    if(lb < ub){
        mid = (lb+ub)/2;
        merge_sort(arr,lb,mid);
        merge_sort(arr,mid+1,ub);
        merge(arr,lb,mid,ub);
    }
}
int merge(int arr[], int lb, int mid, int ub)
{
    int i,j,k,temp_arr[ub];
    i = lb;
    j = mid + 1;
    k = lb;
    while(i <= mid && j <= ub){
        if(arr[i] <= arr[j]){
            temp_arr[k] = arr[i];
            i++;
        }
        else{
            temp_arr[k] = arr[j];
            j++;
        }
        k++;
    }
    if(i > mid){
        while(j <= ub){
            temp_arr[k] = arr[j];
            j++;
            k++;
        }
    }
    else{
        while(i <= mid){
            temp_arr[k] = arr[i];
            i++;
            k++;
        }
    }
    //Final copying of the temp_arr to arr
    for(int k = lb; k <= ub; k++){
        arr[k] = temp_arr[k];
    }
}
void display(int arr[],int size)
{
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}
