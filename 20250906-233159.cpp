#include<iostream>
using namespace std;

int main() {
  
    string sagot;
    
      while (sagot != "yes") {
          cout << "ako nalang kasi Please?: " ;
          getline(cin, sagot);
      
          if (sagot == "yes") {
             cout << "pakasal na tayo agad?" << endl;
          } else {
              cout << "aray ko ha?" << endl;
          }
      
      
      }
      
      
      
      
      
      return 0;
}