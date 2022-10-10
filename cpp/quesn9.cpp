#include<iostream>

using namespace std;
int main()
{    
    int i;
       for(i=1000;i<=3000;i++)
       {  
           if(i%2==0)
           {
           int even_count = 0;
           int n;
           n=i;
           
           while (n > 0)
           {
              int rem = n % 10;
            if (rem % 2 == 0)
            even_count++;
        
             n= n / 10;
           }
           if(even_count==4)
           cout<<i<<",";
       
            
       }
       }
       return 0;
}
