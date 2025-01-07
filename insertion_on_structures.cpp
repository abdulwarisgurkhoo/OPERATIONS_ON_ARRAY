/************************insertion_on_structures***********************/
#include<iostream>
using namespace std;
struct array
    {
        int arr[20];
        int size;
        
        int lenght;
    };
 void display (struct array r)
    {   
        for (int i = 0; i < r.lenght; i++)
        {
            cout<<r.arr[i]<<"  ";
        }
        
           
    }   
void append(struct array *A,int num)
    {
        if(A->lenght <= A->size)
        {
            A->arr[A->lenght+1]=num;
        }
        else{
            cout<<"array is full \n";
        }
    }
void insert(struct array *bb,int ind,int num)
    {
        if(ind <= bb->lenght && bb->size >= bb->lenght )
        {
            for (int i = bb->lenght; i >= ind; i--)
            {
                bb->arr[i]=bb->arr[i-1];
            }
            bb->arr[ind]=num;
        }
    }
    int main ()
        {
            struct array r;
            r={{1,2,3,4,5},10,5};
            append(&r,90);
            display(r);
            return 0;



            
        }