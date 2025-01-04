/******************************************set_operation_on_arrayset_operation_on_array*************************************/
#include<iostream>
using namespace std;
void set(int arr[],int count,int ind,int num)
    {
        if(ind<=count)
            {
                arr[ind]=num;
            }
            else
            {
                cout<<"the index is invalid please try again\n";
            }
    }
    void print(int arr[],int count)
        {
            for (int i = 0; i < count; i++)
            {
                cout<<arr[i]<<"  ";
            }
            
        }
    int main ()
       {
        int size,ind,num;
        cout<<"enter the size of array\n";
        cin>>size;
        int arr[size];

        cout<<"enter the elements of array \n";
        for (int i = 0; i < size; i++)
        {
            cout<<"enter element no. "<<i+1<<" : ";
            cin>>arr[i];
            cout<<endl;
        }
        cout<<"the array is \n";
        print(arr,size);
        cout<<"\nenter the index at which you want to set the new value\n";
        cin>>ind;
        cout<<"enter the number \n";
        cin>>num;
        cout<<"the new array is \n";
        set(arr,size,ind,num);
         print(arr,size);
        
            return 0;

        

       }