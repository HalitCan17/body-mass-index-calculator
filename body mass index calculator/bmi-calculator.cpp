#include <iostream>
using namespace std;

//Basic body mass index calculator



int main()
{
	float height, weight, bmi;

	cout << "Welcome to BMI Calculator!" << endl;

	//get the user's height and weight information
	cout << "Enter a your height in cm: ";
	cin >> height;
	cout << "Enter a your weight in kg: ";
	cin >> weight;

	//calculate the bmi
	bmi = weight / (height * height) * 10000;

	// print the result to the screen
	cout << "your body mass index: " << bmi << endl;


	/*determine user's category based on bmi size
	underweight; < 18.5
	healthy weight; 18.5-24.9
	overweight; 25-30
	obesity; >30
	*/

	if (bmi < 18.5)
	{
		cout << "You're underweight! Consider consulting with a healthcare provider." << endl;
	}
	else if (bmi >= 18.5 && bmi < 24.9)
	{
		cout << "You're at a healthy weight! Keep up the good work!" << endl;
	}
	else if (bmi >= 25 && bmi < 30)
	{
		cout << "You're overweight! Consider a balanced diet and regular exercise." << endl;
	}
	else
	{
		cout << "You're obese! It's important to consult with a healthcare provider." << endl;
	}





	return 0;

}