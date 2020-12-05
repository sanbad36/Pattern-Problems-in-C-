#include<iostream>
using namespace std;
int main()
{int k;
for(int i=1;i<=4;i++)
{
k=1;
for(int j=1;j<=7;j++)
    {
        if(j>=4-(i-1) && j<=4+(i-1) )
        {   
            
       cout<<k ;
     
     j<4 ? k++: k--;
     
     }
        else
        {
        cout<<" ";
        }
   }     
    
    cout<<"\n";
}


}
/*
 ubuntu@sanket:~$ ./a.out 
   1   
  121  
 12321 
1234321
ubuntu@sanket:~$ 
*/
