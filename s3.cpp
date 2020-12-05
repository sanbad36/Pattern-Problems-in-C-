#include<iostream>
using namespace std;

int main ()
{
    int temp=6;
    

    for(int i=1;i<6;i++)
    {
        for(int j=1;j<6;j++)
        {
        
            if(j<=temp-i)
           { cout<<"*";}
         else  { cout<<" ";}
        
        }    
        cout<<"\n";
    
    }

}

/*

ubuntu@sanket:~$ g++ s3.cpp
ubuntu@sanket:~$ ./a.out 
* * * * * 
* * * *  
* * *   `
* *    
*     
ubuntu@sanket:~$ 


*/
