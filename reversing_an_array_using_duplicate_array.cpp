/**************************to print reverse of a array using another array*******************/
#include<iostream>
using namespace std;
void print (int arr[],int count )
{
    for (int i = 0; i < count; i++)
    {
        cout<<arr[i]<<"  ";
    }
    
}
void duplicate (int arr[],int count)
    {
        int brr[count];
        int n=count-1;
       
        for (int i = 0; i < count; i++)
        {
            brr[n]=arr[i];
            n--;
        }
       for(int i = 0; i < count ; i++)
       {
            arr[i]=brr[i];
           
       }
             

    }
int main ()
    {
        int size;
        cout<<"enter the size of array please";
        cin>>size;
        int arr[size];
        cout<<"\n enter the elements of array please \n";
        for (int i = 0; i < size; i++)
        {
            cout<<"enter element "<<i+1<<" : ";
            cin>>arr[i];
            cout<<endl;
        }
        cout<<"\nthe array you entered is \n";
        print(arr,size);
        cout<<"\nthe reverse of the array is \n";
        duplicate(arr,size);
        print(arr,size);
        return 0;
        
    }