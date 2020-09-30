
// C++ program to implement a stack that supports 
// getMaximum() in O(1) time and O(1) extra space. 
#include <bits/stdc++.h> 
using namespace std; 
  
// A user defined stack that supports getMax() in 
// addition to push() and pop() 
struct MyStack { 
    stack<int> s; 
    int maxEle; 
  
    // Prints maximum element of MyStack 
    void getMax() 
    { 
            cout << maxEle << "\n"; 
    } 
  
    // Prints top element of MyStack 
   
    // Remove the top element from MyStack 
   
  void pop() 
    { 
        if (s.empty()) { 
            cout << "Stack is empty\n"; 
            return; 
        } 
  
        //cout << "Top Most Element Removed: "; 
        int t = s.top(); 
        s.pop(); 
  
        // Maximum will change as the maximum element 
        // of the stack is being removed. 
        if (t > maxEle) { 
            cout << maxEle << "\n"; 
            maxEle = 2 * maxEle - t; 
        }
	}
  
    // Removes top element from MyStack 
    void push(int x) 
    { 
        // Insert new number into the stack 
        if (s.empty()) { 
            maxEle = x; 
            s.push(x); 
             
            return; 
        } 
  
        // If new number is less than maxEle 
        if (x > maxEle) { 
            maxEle = x; 
        } 
  
        else
            s.push(x); 
  
        
    } 
}; 
  
// Driver Code 
int main() 
{ 
    MyStack s; 
    s.push(3); 
    s.push(5); 
    s.getMax(); 
    s.push(7); 
    s.push(19); 
    s.getMax(); 
      s.pop(); 
    s.getMax(); 
    s.pop(); 
  
    return 0; 
} 

