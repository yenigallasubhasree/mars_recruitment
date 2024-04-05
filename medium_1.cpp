#include <iostream>

using namespace std;

// Define a custom data type
struct club {
  string name;
  int roll_no;
};
//a function named printFunction is created
void printFunction(const club& mem) {
    cout << to_string(mem.roll_no)+mem.name << endl;
    cout << "THIS IS DISPLAYED BY CALLING FUNCTION" << endl;
  }
//lambda function
auto printstatement = [](const club& mem) {
  return to_string(mem.roll_no) + mem.name;
};  
int main() 
{
 // a variable that can store an object   
  auto variable = club{" I want to get into a techincal club ", 1079};
 // Use the lambda function to print the mars object 
  cout << printstatement(variable) << endl;
  cout << "THIS IS DISPLYED WITHOUT CALLING THE FUNCTION" << endl;
// Pass the mars object to a function named printfunction  
 printFunction(variable);
  return 0;
}
