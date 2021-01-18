#include<iostream>
using namespace std;
void bubble_sort(int arr[],int size);
void display(int arr[],int size);
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

    bubble_sort(arr,size);

    return 0;
}
void bubble_sort(int arr[],int size)
{
    for(int i = 0;i < size - 1; i ++){
        for(int j = 0; j < (size - (i+1)); j++){
            //cout << "arr["<< j << "] > arr[" << (j + 1) << "] " << arr[j] << " > " << arr[j+1] << endl;

            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        //for(int k = 0;k < size; k++) cout << arr[k] << " " ;
        //cout << endl << endl;
    }
    display(arr,size);
}
void display(int arr[],int size)
{
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}
/*
ALGORITHM 4 The Bubble Sort.
procedure bubblesort(a1, . . . , an : real numbers with n ≥ 2)
for i := 1 to n − 1
for j := 1 to n − i
if aj > aj+1 then interchange aj and aj+1
{a1, . . . , an is in increasing order}
*/
