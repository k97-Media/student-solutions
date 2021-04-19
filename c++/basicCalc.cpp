#include <iostream>

using namespace std;

int main()
{
  cout<<"____WELCOME____" << endl;
  cout<<"Please write two numbers to calculate" << endl;
  cout<<"________________________________________" << endl;
  int num1, num2, op;
  cout<<"Insert first Number : ";
  cin >> num1;
  cout<<"________________________________________" << endl;
  cout<<"Choose an Operation : " << endl;
  cout<<" 1 for (+) " << endl;
  cout<<" 2 for (-) " << endl;
  cout<<" 3 for (*) " << endl;
  cout<<" 4 for (/) " << endl;
  cout<<"Choose : ";
  cin >> op;
  cout<<"________________________________________" << endl;
  cout<<"Insert second Number : ";
  cin >> num2;

  switch(op){
    case 1:
      cout<<" Result is : " << num1 + num2 << endl;
      break;
    case 2:
      cout<<" Result is : " << num1 - num2 << endl;
      break;
    case 3:
      cout<<" Result is : " << num1 * num2 << endl;
      break;
    case 4:
      cout<<" Result is : " << num1 / num2 << endl;
      break;
  }
  return 0;
}
