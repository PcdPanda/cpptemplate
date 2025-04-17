#include <cpptemplate/main.hpp>
#include <iostream>
using namespace std;

Test::Test() { cout << "Test constructor" << endl; }
Test::~Test() { cout << "Test destructor" << endl; }
void Test::test() { cout << "Calling Test method" << endl; }

int main() {
  cout << "Hello World!" << endl;
  auto test = Test();
  test.test();
  return 0;
}