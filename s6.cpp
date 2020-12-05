#include<iostream>
using namespace std;

int main ()
{
   
    int count;
int k;
    for(int i=1;i<6;i++)
    {   k=1;
        count=i;
        for(int j=1;j<10;j++)
        {
        
           if(6-i<=j && j<=4+i && k)    {
           
           
           cout<<"*";
           k=0;
           
           }
           else
           {cout<<" ";
           k=1;
           }
        
        }    
        cout<<"\n";
    
    }

}


/*

ubuntu@sanket:~$ ./a.out 
    *    
   * *   
  * * *  
 * * * * 
* * * * *
ubuntu@sanket:~$ 


*/
