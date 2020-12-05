#include<iostream>
using namespace std;

int main()
{
int num;
char ch;
    for(int i=1;i<=4;i++)
    {
    ch='A';
    num=1;
        for(int j=1;j<=8;j++)
        {
        
            if(j<=4+i && j>=4-(i-1))
            {
            
                if(j<5)
                {
                cout<<ch;
                ch++;
                }
                else
                {
                cout<<num;
                num++;
                }    
            
            
            }
            else 
            cout<<" ";
            
    
    
        }
        cout<<"\n";
    }



} 


/*
ubuntu@sanket:~$ ./a.out 
   A1   
  AB12  
 ABC123 
ABCD1234
ubuntu@sanket:~$ 


*/
