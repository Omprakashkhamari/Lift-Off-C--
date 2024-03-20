# include <iostream>
using namespace std;
int main() {
  char output;
  float num1, num2;
  cout << "Enter operator: +, -, *, /: ";
  cin >> output;
  cout << "Enter two numbers: ";
  cin >> num1 >> num2;
  switch(output) 
  {
    case '+':
      cout << num1 << " + " << num2 << " = " << num1 + num2;
      break;
    case '-':
      cout << num1 << " - " << num2 << " = " << num1 - num2;
      break;
    case '*':
      cout << num1 << " * " << num2 << " = " << num1 * num2;
      break;
    case '/':
      cout << num1 << " / " << num2 << " = " << num1 / num2;
      break;
    default:
      cout << "Error! operator is not correct";
      break;
  }
 return 0;
}