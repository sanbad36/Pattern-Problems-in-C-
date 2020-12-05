#include<iostream>
using namespace std;

int main()
{

    for(int i=1;i<6;i++)
    {
    
        for (int j=1;j<10;j++)
        {
                    if(i>=2){
                    if(j>5-(i-1) && j<5+(i-1) )
                    {cout<<" ";}
                    
                    else
                    {cout<<"*";
                    }
                    
                    }
                    
                    else
                    {cout<<"*";
                    }
        }
    
    cout<<"\n";
    
   }


}
/*
ubuntu@sanket:~$ ./a.out 
*********
**** ****
***   ***
**     **
*       *
ubuntu@sanket:~$ 
*/
