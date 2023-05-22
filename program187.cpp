#include<iostream>
using namespace std;

int Addition(int iValue1, int iValue2)
{
    int iAdd;

    iAdd = iValue1 + iValue2;

    return iAdd;
}
int main()
{
    int iNo1 = 0, iNo2 = 0;
    int iAns = 0;

    cout<<"Enter first number-";  //printf("Enter first number-");
    cin>>iNo1;                    //scanf("%d",iNo1);  

    cout<<"Enter second number-";  //printf("Enter second number-");
    cin>>iNo2;                    //scanf("%d",iNo2);  
    
    iAns = Addition(iNo1,iNo2);//function call

    cout<<"Addition is -"<<iAns<<"\n";  //printf("Addition is - %d",iAns);

    return 0;
}