#include<iostream>
using namespace std;

int main()
{
char k;
int flag=0;
    for(int i=1;i<=4;i++)
    {
    k='A';
    flag=0;
        for (int j=1;j<=7;j++)
        {
                    
                    if(j<=5-i || j>=3+i)
                    {cout<<k;
                    
                    j<4 ? k++ : k--;
                    }
                    
                   
                    
                    else
                    { 
                    if(!flag)
                    { 
                     k--;
                    flag=1;
                    }
                    cout<<" ";
                    }
        }
    
    cout<<"\n";
    
   }


}








/*


ubuntu@sanket:~$ g++ s9.cpp
ubuntu@sanket:~$ ./a.out 
ABCDCBA
ABC CBA
AB   BA
A     A
ubuntu@sanket:~$ 






*/
