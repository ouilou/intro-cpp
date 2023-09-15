#include <iostream>

int main()

{
  float a,b,c,d,trans;

  std::cout << "Enter a, b, c, d (following by a space): ";
  std::cin >> a >> b >> c >> d;

  trans = a;
  a = b;
  b = c;
  c = d;
  d = trans;

  std::cout << a << " then " << b << " then "  <<  c  << " then " <<  d  << std::endl;


  return 0;

}




