#include<iostream>
using namespace std;
//problems on numbers

class Numbers
{
    public:
        int iNo;

        Numbers(int i)
        {
            iNo = i;
        }

        int Factorial()  
        {
            int iFact = 1;
            int iCnt = 0;
            
            for(iCnt = iNo; iCnt>=1 ; iCnt--)
            {
                iFact = iFact*iCnt;
            }
            return iFact;
        }
                
};
int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the number -"<<"\n";
    cin>>iValue;
    
    Numbers obj(iValue);

    iRet = obj.Factorial();
    cout<<"Factorial is- "<<iRet;

    return 0;
}