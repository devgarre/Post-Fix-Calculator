#include <iostream>
#include <stack>
#include <string>
using namespace std;

string calculation;
string currentCharacter;
int value1;
int value2;
int solution;
stack <int> valueList;

int main() {

	cout << "Enter the expression you would like to calculate (seperate each value with a space): ";
	cin >> calculation;



	if (currentCharacter == "*") {
		value2 = valueList.top();
		valueList.pop();
		value1 = valueList.top();
		valueList.pop();
		solution = value1 * value2;
		valueList.push(solution);
	}
	else if (currentCharacter == "/") {
		value2 = valueList.top();
		valueList.pop();
		value1 = valueList.top();
		valueList.pop();
		solution = value1 / value2;
		valueList.push(solution);
	}
	else if (currentCharacter == "+") {
		value2 = valueList.top();
		valueList.pop();
		value1 = valueList.top();
		valueList.pop();
		solution = value1 + value2;
		valueList.push(solution);
	}
	else if (currentCharacter == "-") {
		value2 = valueList.top();
		valueList.pop();
		value1 = valueList.top();
		valueList.pop();
		solution = value1 - value2;
		valueList.push(solution);
	}
	else if (currentCharacter == "%") {
		value2 = valueList.top();
		valueList.pop();
		value1 = valueList.top();
		valueList.pop();
		solution = value1 % value2;
		valueList.push(solution);
	}
	else {
		int tempValue = stoi(currentCharacter);
		valueList.push(tempValue);
	}

	system("pause");
	return 0;
}