#include<iostream>
void insertion_sort(int arr[],int size);
using namespace std;
int main()
{
    int size = 0;
    cout << "Enter the number of element in the array: " << endl;
    cin >> size;
    int arr[size];

    cout << "Enter the element in the array : " << endl; //15 5 20 35 2 42 67 17
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    insertion_sort(arr,size);

    //display the sorted array
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
void insertion_sort(int arr[],int size)
{
    int hole,j;
    for(int i = 0; i < size; i++){
        hole = arr[i];
        j = (i - 1);
        while(j >= 0 && arr[j] > hole){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = hole;
    }
}
