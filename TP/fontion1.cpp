#include <iostream>

int main(){

  float x, images;

  std::cout << "Please enter a value of x to calculate: "; std::cin >> x;

  if (x == 3){
    std::cout << "Valeur interdit, divise by 0" << std::endl;
    return 0;
  }

  else if (x < 0)
    x = -x;

  images = (x + 3 * (x * x))/((2/3)*(x*x) - 6);

  std::cout << "The images of " << x << " is " << images << std::endl;

  return 0;

}

