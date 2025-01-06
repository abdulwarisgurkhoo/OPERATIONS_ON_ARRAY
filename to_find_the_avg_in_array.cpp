/**************************TO FIND THE AVERAGE IN ARRAY****************************/
#include<iostream>
using namespace std;
int avg(int arr[],int count)
{
    int sum=0.0;
    for (int i = 0; i < count; i++)
    {
        sum=sum+arr[i];
    }
    return (sum/float(count));
}
int main ()
    {
        int size;
        cout<<"enter the size of array \n";
        cin>>size;
        int arr[size];
        cout<<"enter the elements of array";
        for (int i = 0; i < size; i++)
        {
            cout<<"eneter element "<<i+1<<" : ";
            cin>>arr[i];
            cout<<endl;

        }
        cout<<"\nTHE AVERAGE OF THE ELEMENTS OF ARRAY IS :"<<avg(arr,size);
        return 0;

        
    }
