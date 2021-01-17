#include<iostream>
#include<cstdio>
using namespace std;
int linear_search(int linear_array[],int size,int data);
int main()
{
    int size;
    cout << "Enter the number of element in the array : " << endl; //for sample data size = 8
    cin >> size;
    int linear_array[size],result = 0,data = 0;

    //Loop for inserting data in the array
    cout << "Enter the element in the array : " << endl; //sample data: 15 5 20 35 2 42 67 17
    for(int i = 0; i < size; i++){
        cin >> linear_array[i];
    }

    cout << "Data that you are searching : " << endl;
    cin >> data;

    result = linear_search(linear_array,size,data); //calling the linear_search() function
    if( result != -1){
        cout << "Element found at index linear_array[" << result << "] = " << linear_array[result] << endl;
    }
    else{
        cout << "Element not found" <<endl;
    }

    return 0;
}
int linear_search(int linear_array[],int size,int data)
{
    int flag = -1;
    for(int i = 0; i < size; i++)
    {
        if(linear_array[i] == data)
        {
            return i;
            flag = 1;
            break;
        }
    }
    if(flag == -1)
    {
        return -1;
    }
}
