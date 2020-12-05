/*  // V1
#include<iostream>
using namespace std;
int main()
{

    for(int i=1;i<=7;i++)
    {
    if(i<=4){
        for(int j=1;j<=7;j++)
        {
        
                if(j>=4-(i-1) && j<=4+(i-1))
                {
                    cout<<"*";
                }
                
                else
                {
                    cout<<" ";
                }
        
        
        
        
        
        
        }
}

if(i>=5)
{


for(int k=1;k<=7;k++)
        {
        
                if(k>i-4 && k<12-i)
                {
                    cout<<"*";
                }
                
                else
                {
                    cout<<" ";
                }
        
        
        
        
        
        
        




}
}
   cout<<"\n";
}        
        
        
        
        
     }

*/

// v2


#include<iostream>
using namespace std;
int main()
{
int k=0;
    for(int i=1;i<=7;i++)
    {
    
        i<=4 ? k++ : k--;
    
        for(int j=1;j<=7;j++)
        {
        
                if(j>=5-k && j<=3+k)
                {
                    cout<<"*";
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
   *   
  ***  
 ***** 
*******
 ***** 
  ***  
   *   
ubuntu@sanket:~$ 


*/


