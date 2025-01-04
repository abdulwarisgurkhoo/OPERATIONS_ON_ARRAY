/*********************************searching_a_key_using_linear_search*****************************/
#include<iostream>
using namespace std;
int key_search(int arr[],int count,int key)
    {
        for (int i = 0; i < count; i++)
        {
            if(arr[i]==key)
            {
                cout<<"\nkey is present at index : ";
                return i;
                
            }
        }
       cout<<"KEY IS NOT PRESENT AT ANY INDEX NO OF GIVEN ARRAY\n";
        return 0;
    }
int main ()
    {
        int size,key;
        cout<<"enter the size of array \n";
        cin>>size;
        int arr[size];
        cout<<"\nenter array elements :";
        for (int i = 0; i < size; i++)
        {
            cout<<"enter the element no. "<<i+1<<" : "
            cin>>arr[i];
            cout<<endl;
        }
        cout<<"enter the key you want to search\n";
        cin>>key;
       cout<< key_search(arr,size,key);
        return 0;
        
        
    }
