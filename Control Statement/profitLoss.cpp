#include <iostream>
using namespace std;

int main()
{
  int cost_price, sell_price;
  cout << "Enter your cost price and sell price: ";
  cin >> cost_price >> sell_price;

  if (sell_price > cost_price)
  {
    cout << (sell_price - cost_price) << " rupees of profit";
  }
  else if (sell_price == cost_price)
  {
    cout << "no loss no profit";
  }
  else
  {
    cout << (cost_price - sell_price) << " rupees of loss";
  }
}