
#include <iostream> 
#include <stack> 
#include <queue> 
using namespace std; 

  

void showq(queue <int> gq) 
{ 

    queue <int> g = gq; 

    while (!g.empty()) 

    { 

        cout << '\t' << g.front(); 

        g.pop(); 

    } 

    cout << '\n'; 
} 

  

void showstack(stack <int> s) 
{ 

    while (!s.empty()) 

    { 

        cout << '\t' << s.top(); 

        s.pop(); 

    } 

    cout << '\n'; 
} 

  

int main () 
{ 

    stack <int> s; 

    s.push(63);

    s.push(5); 

    s.push(1); 

  

    cout << "The stack is : "; 

    showstack(s); 

    cout << "\ns.size() : " << s.size(); 

    cout << "\ns.top() : " << s.top(); 

    cout << "\ns.pop() : "; 

    s.pop(); 

    showstack(s); 

  
  queue <int> q; 

    q.push(10); 

    q.push(20); 

    q.push(30); 

    cout << "The queue q is : "; 

    showq(q); 

    cout << "\nq.size() : " << q.size(); 

    cout << "\nq.front() : " << q.front(); 

    cout << "\nq.back() : " << q.back(); 

    cout << "\nq.pop() : "; 

    q.pop(); 

    showq(q);

    return 0; 
} 