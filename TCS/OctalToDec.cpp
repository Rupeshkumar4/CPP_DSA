#include <iostream> 
using namespace std; 
int OctToDec(string n)  
{  
  return stoi(n, 0, 8);  
} 
int main() 
{ 
  
  string n = "67"; 
  cout << OctToDec(n); 
  return 0; 
} 