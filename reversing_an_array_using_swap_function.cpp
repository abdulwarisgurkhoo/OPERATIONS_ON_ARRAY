/**********************************reversing_an_array_using_swap_function********************************/
#include<iostream>
using namespace std;
void print(int arr[],int count)
{
    for (int i = 0; i < count; i++)
    {
        cout<<arr[i]<<"  ";
    }
    
}
void reverse(int arr[],int count)
    { 
        int n=count-1;
        for (int i = 0; i < count; i++)
        {
            if(i<=n)
          { swap(arr[i],arr[n]);
           n--;
            }

            
        }
        print(arr,count);
    }
int main ()
    {
         int size;
        cout<<"enter the size of array \n";
        cin>>size;
        int arr[size];
        cout<<"enter the elements of array\n";
        for (int i = 0; i < size; i++)
        {
            cout<<"eneter element "<<i+1<<" : ";
            cin>>arr[i];
            cout<<endl;

        }
        cout<<"the array you enter is \n";
       print(arr,size);
       cout<<"\nTHE REVERSE OF THE ARRAY IS \n";
      reverse(arr,size);
       
       return 0;

       
       
       
    }