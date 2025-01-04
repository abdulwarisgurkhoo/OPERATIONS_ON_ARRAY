/********************************get_operation*****************************/
#include<iostream>
using namespace std;
int gett(int arr[],int count,int ind)
{
    if(ind<=count)
        {
            return arr[ind];
            
        }
        else
        {
            cout<<"this index is not valid try again \n";
            return -1;
        }
}
int main ()
    {
        int size;
        cout<<"enter the size of array\n";
        cin>>size;
        int arr[size];
        cout<<"enter the elements of array\n";
        for (int i = 0; i < size; i++)
        {
            cout<<"enter the element no. :"<<i+1<<" ";
            cin>>arr[i];
            cout<<endl;
        }

        int ind;
        cout<<"enter the index at which you want to print the number at : \n";
        cin>>ind;
        cout<<gett(arr,size,ind);
        return 0;

    }