/**************************************************arrange_array_is_decending_order***************************************/
#include<iostream>
using namespace std;
void print (int arr[],int count)
    {
        for (int i = 0; i < count; i++)
        {
            cout<<arr[i]<<"  ";
        }
        
    }
void arrange_decend(int arr[],int count)
    {
        for (int i = 0; i < count; i++)
        {
            for (int j = i+1; j < count; j++)
            {
                if(arr[i] < arr[j])
                {
                    swap(arr[i],arr[j]);
                }
            }
            
        }
        
    } 
    int main ()
    {
        int size;
        cout<<"enter the size of array \n";
        cin>>size;
        int arr[size];
        cout<<"enter the elements of array \n";
        for (int i = 0; i < size; i++)
        {
            cout<<"enter element no. "<<i+1<<" : ";
            cin>>arr[i];
            cout<<"\n";
        }
        cout<<"\n\n the array you enter is \n";
        print(arr,size);
        cout<<"\nthe sorted array is \n";
        arrange_decend(arr,size);
        print(arr,size);
       return 0;

        
    }