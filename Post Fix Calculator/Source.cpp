//calls libraries
#include <iostream>
#include <stack>
#include <string>
#include <sstream>
using namespace std;

//name all relevant variables and creates the stack
string calculation;
string currentCharacter;
int value1;
int value2;
int solution;
int tempValue;
stack <int> valueList;

//main fucntion
int main() {

	//takes user input
	cout << "Enter the expression you would like to calculate (seperate each value with a space): ";
	getline(cin, calculation);

	//loops the character test for each section of the string divided by spaces
	istringstream test(calculation);
	while (test >> currentCharacter) {

		//tests what the current character is and performs a function or logs it in the string based on the contents
		if (currentCharacter == "*") {
			//takes the last 2 values in the stack and performs the relevant function
			value2 = valueList.top();
			valueList.pop();
			value1 = valueList.top();
			valueList.pop();
			solution = value1 * value2;
			//enters the new value into the stack
			valueList.push(solution);
		}
		else if (currentCharacter == "/") {
			//takes the last 2 values in the stack and performs the relevant function
			value2 = valueList.top();
			valueList.pop();
			value1 = valueList.top();
			valueList.pop();
			solution = value1 / value2;
			//enters the new value into the stack
			valueList.push(solution);
		}
		else if (currentCharacter == "+") {
			//takes the last 2 values in the stack and performs the relevant function
			value2 = valueList.top();
			valueList.pop();
			value1 = valueList.top();
			valueList.pop();
			solution = value1 + value2;
			//enters the new value into the stack
			valueList.push(solution);
		}
		else if (currentCharacter == "-") {
			//takes the last 2 values in the stack and performs the relevant function
			value2 = valueList.top();
			valueList.pop();
			value1 = valueList.top();
			valueList.pop();
			solution = value1 - value2;
			//enters the new value into the stack
			valueList.push(solution);
		}
		else if (currentCharacter == "%") {
			//takes the last 2 values in the stack and performs the relevant function
			value2 = valueList.top();
			valueList.pop();
			value1 = valueList.top();
			valueList.pop();
			solution = value1 % value2;
			//enters the new value into the stack
			valueList.push(solution);
		}
		else if (currentCharacter == "^") {
			//takes the last 2 values in the stack and performs the relevant function
			value2 = valueList.top();
			valueList.pop();
			value1 = valueList.top();
			valueList.pop();
			solution = pow(value1, value2);
			//enters the new value into the stack
			valueList.push(solution);
		}
		else {
			//logs the current character value in the stack
			stringstream test(currentCharacter);
			test >> tempValue;
			valueList.push(tempValue);
		}
	}

	//once the loop finishes, prints out the final result
	cout << "The solution of the equation is " << valueList.top() << endl;
	valueList.pop();


	system("pause");
	return 0;
}