#include<iostream>
using namespace std;

int main()
{
int k;
    for(int i=1;i<=7;i++)
    {
    k=7-i;
    
        for(int j=1;j<=7;j++)
        {
            
            if(j>=1 &&  j<=(8-i))
            {
            cout<<k;
            k--;            
            }
else
{cout<<" ";
}        
        
        }
        cout<<"\n";
    }


}

/*
ubuntu@sanket:~$ ./a.out 


6543210
543210 
43210  
3210   
210    
10     
0      
ubuntu@sanket:~$ 

*/
