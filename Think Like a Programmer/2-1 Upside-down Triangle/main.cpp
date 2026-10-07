#include <iostream>
#include <string>

using namespace std;

int main()
{
  int N=10;
  int ctr=N;
  int spaces=0;
  
  while(ctr > 0) {
      for (int i=0; i < spaces; i++) {  
        cout << " ";
      }

      for (int i=0; i < ctr; i++) {
         cout << "#";
      }
      
      ctr = ctr-2;
      cout << endl;
      spaces++;
  }
}
