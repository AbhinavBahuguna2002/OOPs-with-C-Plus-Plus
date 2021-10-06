#include <bits/stdc++.h>

using namespace std;

int main ()
{
      string s;
      
      cout << "Enter a string: ";
      getline(cin, s);
      
      int i=0, j, size, flag=0;
      
      size= s.size();
      j = size-1;
      
      for (i=0; i<size/2; i++)
      {
               if (s[i] != s[j])
               {
                    flag =1;
                    cout << "String is not palindrome\n";
                     break;         
                }
                j--;
      }
      if (flag == 0)
      cout << "String is palindrome\n"; 
      return 0;
}
 
