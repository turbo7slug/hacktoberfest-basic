#include <bits/stdc++.h>
using namespace std;
 
 struct MyStack 
 {
    stack<int> s;
    int minEle; // min element of stack 
 
    
    void getMin()
    {
        if (s.empty())
            cout << "Stack is empty\n";
 
        
        else
            cout << "Minimum Element in the stack is: "
                 << minEle << "\n";
    }
 
   
    void peek()
    {
        if (s.empty()) 
        {
            cout << "Stack is empty ";
            return;
        }
 
        int t = s.top(); // Top element.
 
        cout << "Top Most Element is: ";
 
        // If t < minEle means minEle stores values of t
       
        (t < minEle) ? cout << minEle : cout << t;
    }
 
   
    void pop()
    {
        if (s.empty()) 
        {
            cout << "Stack is empty\n";
            return;
        }
 
        cout << "Top Most Element Removed: ";
        int t = s.top();
        s.pop();
 
        //updating min element
        
        if (t < minEle) 
        {
            cout << minEle << "\n";
            minEle = 2 * minEle - t;  //minEle=t
        }
 
        else
            cout << t << "\n";
    }
 
    
    void push(int x)
    {
        
        if (s.empty()) 
        {
            minEle = x;
            s.push(x);
            cout << "Number Inserted: " << x << "\n";
            return;
        }
 
       
        else if (x < minEle) 
        {
            s.push(2 * x - minEle);
            minEle = x;
        }
 
        else
            s.push(x);
 
        cout << "Number Inserted: " << x << "\n";
    }
};
 
// Driver Code
int main()
{
    MyStack s;
   
      int ch;
      cout<<"1.push\n2.pop\n3.peek\n4.getmin\n5.exit"<<endl;
      cout<<"choice : ";
      cin>>ch;
      while(ch)
      {
        switch(ch)
        {
            case 1 : 
            {
                int x;
                cout<<"enter the number to be pushed : ";
                cin>>x;
                s.push(x);
                 cout<<"\n1.push\n2.pop\n3.peek\n4.getmin"<<endl;
                 cout<<"choice : ";
                 cin>>ch;
                break;
            }

            case 2 :
            {
                s.pop();
                 cout<<"\n1.push\n2.pop\n3.peek\n4.getmin"<<endl;
                 cout<<"choice : ";
                 cin>>ch;
                break;
            }

            case 3 :
            {
                s.peek();
                 cout<<"\n1.push\n2.pop\n3.peek\n4.getmin"<<endl;
                 cout<<"choice : ";
                 cin>>ch;
                break;
            }

            case 4 :
            {
                s.getMin();
                 cout<<"\n1.push\n2.pop\n3.peek\n4.getmin"<<endl;
                 cout<<"choice : ";
                 cin>>ch;
                break;
            }
            case 5 :
            {
                return 0;
                break;
            }
           
            default : 
            {
                cout<<"enter a valid choice : ";
                cin>>ch;
            }


        }
      }

}