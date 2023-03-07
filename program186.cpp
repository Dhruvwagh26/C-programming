//Addition of two integers.
//Code Language - C++
//Programmer - Dhruv K. Wagh.
#include<iostream>
using namespace std;

int main()
{
    int iNo1 = 0, iNo2 = 0;
    int iAns = 0;
                                   // FOR C PROGRAM...     
    cout<<"Enter first number-";  //printf("Enter first number-");
    cin>>iNo1;                    //scanf("%d",iNo1);  

    cout<<"Enter second number-";  //printf("Enter second number-");
    cin>>iNo2;                    //scanf("%d",iNo2);  
    
    iAns = iNo1 + iNo2;

    cout<<"Addition is -"<<iAns<<"\n";  //printf("Addition is - %d",iAns);

    return 0;
}