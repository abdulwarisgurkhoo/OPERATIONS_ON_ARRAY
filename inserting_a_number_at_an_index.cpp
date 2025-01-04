#include<iostream>
using namespace std;
void insert(int arr[],int *n,int ind,int num)
{
   if(ind>*n)
   {
    cout<<"array is full\n";
   }
   else
  {  for (int i = *n; i >ind ; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[ind]=num;
    *n++;

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
        int size,len,ind,num;
        cout<<"enter the size of array \n";
        cin>>size;
        int arr[size];
        
        cout<<"enter the length of array \n";
        cin>>len;
        for (int i = 0; i < len; i++)
        {
            cout<<" enter the element number  "<<i+1<<" : ";
            cin>>arr[i];
            cout<<endl;
        }

        cout<<"enter the index at which you want to insert the elemnt\n";
        cin>>ind;
        cout<<"enter the num u want to insert \n";
        cin>>num;
        insert(arr,&len,ind,num);
        print(arr,len);
        cout<<len;
        return 0;

        
    }