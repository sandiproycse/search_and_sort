#include<iostream>
using namespace std;
void selection_sort(int arr[],int size);
void display(int arr[],int size);
int main()
{
    int size = 0;
    cout << "Enter the number of element in the array: " ;
    cin >> size;
    int arr[size];

    cout << "Enter the element in the array : "; //15 5 20 35 2 42 67 17
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    selection_sort(arr,size);
    return 0;
}
void selection_sort(int arr[],int size)
{
    for(int i = 0; i < (size - 1); i++){
        int min = i;
        for(int j = (i + 1); j < size; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        if(min != i){
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
    display(arr,size);
}
void display(int arr[],int size)
{
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}
