/********************reverse_an_array_using_two_pointer_approuch*************/
#include<iostream>
using namespace std;
class array
{
   public :
    int *arr;
    int size;
    
    array(int s)
    {
        this->size=s;
        arr =new int[size];
    }
    void push(int val,int i)
    {
        arr[i]=val;
    }
    void reverse()
    {
        int i=0;
        int j=size-1;
        while(i<j)
        {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    void display(int count)
    {
        for (int i = 0; i < count; i++)
        {
            cout<<arr[i]<<"  ";
        }
        
    }

};
int main ()
{
     
    int size;
    cout<<"\nenter the size of array\n ";
    cin>>size;
    array a(size);
    cout<<"enter elements o array \n";
    for (int i = 0; i < size; i++)
    {
        int num;
        cout<<"\nenter element no. "<<i+1<<" ";
        cin>>num;
        a.push(num,i);

    }
    cout<<"\nthe reverse of the array is : ";
    a.reverse();
    a.display(size);
    return 0;
    
}