#include<iostream>
using namespace std;

int main()
{

    for(int i=1;i<=4;i++)
    {
    
        for(int j=1;j<=8;j++)
        
        {
        
           if(j<4-(i-1) || j>8-(i-1))
           {
            
            cout<<" ";
            
           }
        else
        {
        cout<<"*";
        }
        
        }
    cout<<"\n";
    }


}

/*
ubuntu@sanket:~$ ./a.out 
   *****
  ***** 
 *****  
*****   
ubuntu@sanket:~$ 

*/
