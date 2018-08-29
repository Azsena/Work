#include <iostream>
using namespace std;

int main()
{
  
  bool prime_number = true;
  int q, f;

  cout << "Enter a positive integer: ";
  cin >> q;

  for(f = 2; f <= q / 2; ++f)
  {
      if(q % f == 0)
      {
          prime_number = false;
          break;
      }
  }
  if (prime_number)
      cout << "This is a prime number";
  else
      cout << "This is not a prime number";

  return 0;
}
