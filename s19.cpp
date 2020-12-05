#include<iostream>
using namespace std;


int main()
{
char ch;
    for(int i=1;i<=4;i++)
    {
          ch='A';
        for(int j=1;j<=7;j++)
        {
      
      
      
            if(j<=4+(i-1) && j>=4-(i-1))
            {
                cout<<ch;
             j<4? ch++:ch--;
            }
            else
            cout<<" ";
        
       
        
        
        }

cout<<"\n";
    
    }


/*
ubuntu@sanket:~$ ./a.out 
   A   
  ABA  
 ABCBA 
ABCDCBA
ubuntu@sanket:~$ 


*/




}
