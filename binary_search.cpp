#include<iostream>
using namespace std;
void bubble_sort(int arr[],int size);
int binary_search(int arr[],int size, int key);
int main()
{
    int size = 0;
    cout << "Enter the number of element in the array: " << endl;
    cin >> size;
    int arr[size],key = 0,result = 0;

    cout << "Enter the element in the array : " << endl; //15 5 20 35 2 42 67 17
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    bubble_sort(arr,size);

    cout << "Enter the key that you are searching : ";
    cin >> key;
    result = binary_search(arr,size,key);
    if(result != -1){
        cout << "Data found at location arr[" << result << "] = " << arr[result] << endl;
    }
    else{
        cout << "Data not found" << endl;
    }
    return 0;
}
void bubble_sort(int arr[],int size)
{
    for(int i = 0;i < size; i ++){
        for(int j = 0; j < (size - (i + 1)); j++){
            cout << j << " " << (j + 1) << endl;

            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        cout << endl;
    }
}
int binary_search(int arr[],int size, int key)
{
    int i = 0, j = (size - 1),m = 0,location = 0;
    while(i < j){
        m = (i+j)/2;
        if(key > arr[m]){
            i = (m + 1);
        }
        else{
            j = m;
        }
        if(key == arr[i]){
            location =  i;
        }
        else{
            location = -1;
        }
    }
    return location;
}
/*ALGORITHM 3 The Binary Search Algorithm.
procedure binary search (x: integer, a1, a2, . . . , an: increasing integers)
i := 1{i is left endpoint of search interval}
j := n {j is right endpoint of search interval}
while i < j
m := [(i + j)/2]
if x > a[m] then i := m + 1
else j := m
if x = a[i] then location := i
else location := 0
return location{location is the subscript i of the term ai equal to x, or 0 if x is not found}
*/
