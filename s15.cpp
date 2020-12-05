#include<iostream>
using namespace std;

int main()
{
int k=0;
int x;
    for(int i=1;i<=9;i++)
    {
    x=1;
    i<6 ?k++:k--;
    
        for(int j=1;j<=5;j++)
        {
            
            if(j>=6-k)
            {
            cout<<x;
            x++;            
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
    1
   12
  123
 1234
12345
 1234
  123
   12
    1
ubuntu@sanket:~$ 
*/
