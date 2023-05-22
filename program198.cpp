#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX(int i)   //parametrized constructor
        {
            cout<<"Allocating the memory of resources..."<<"\n";
            iSize = i;
            Arr = new int[iSize];   //Arr = (int *)malloc(iSize* sizeof(int));
        }
        
        ~ArrayX()
        {
            cout<<"\nDeallocating the memory of resources."<<"\n";
            delete []Arr;
        }

        void Accept()
        {
            cout<<"Please enter the elements-"<<"\n";

            for(int iCnt = 0; iCnt < iSize ;iCnt++)
            {
                cin>>Arr[iCnt];    //scanf("%d",&Arr[iCnt]);
            }
        }

        void Display()
        {
            cout<<"Elements of Array are - "<<"\n";

            for(int iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";  //printf("%d",&Arr[iCnt]);             
            }
        }
};

int main()
{
    int iValue1 = 0;

    cout<<"Enter the length of array-";
    cin>>iValue1;
    
    ArrayX obj(iValue1);//static .

    obj.Accept();
    obj.Display(); 

    return 0;
}