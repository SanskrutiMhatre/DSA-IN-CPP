#include <iostream>
using namespace std;
int main() {
  int quantity;
  int price;
  int discount;

  cout << "ENTER THE QUANTITY:";
  cin >> quantity;
  price = quantity * 100;
  discount = price - (price * 0.1);

  if (price > 1000) {
    cout << "YOUR TOTAL BILL IS:" << discount;
  } else {
    cout << "YOUR TOTAL BILL IS:" << price << endl;
  }
}