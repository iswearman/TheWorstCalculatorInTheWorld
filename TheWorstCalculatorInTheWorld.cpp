#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
	int choice;

	cout << "Pick a choice: \n";
	cout << "1) Calculate compound interest \n";
	cout << "2) Calculate your retirement needs \n";
	cout << "3) General Calculator (THE EXTRA NUMBER CALCULATION IS BROKEN!!!!!!) \n";
	cout << "4) Graphical Representation of Data \n";
	cin >> choice;

	// Compound Interest
	if (choice == 1)
	{
		double principal;
		double rate;
		double time;
		double amount;
		double interest;
		double n;

		cout << "Principal amount: ";
		cin >> principal;

		cout << "Rate of interest (as percentage, e.g. 5 for 5%): ";
		cin >> rate;
		rate = rate / 100; // Convert percentage to decimal

		cout << "Time (in years): ";
		cin >> time;

		cout << "Number of times interest is compounded per year (n): ";
		cin >> n;

		// Compound Interest Formula
		amount = principal * pow(1 + rate / n, n * time);
		interest = amount - principal;

		cout << "Compound Interest after " << time << " years: " << interest << endl;
		cout << "Total Amount after " << time << " years: " << amount << endl;
	}

	// Retirement Needs
	if (choice == 2)
	{
		double current_income;
		double inflation_rate = 0.06; // 6% inflation
		int age_now, age_retire;
		int years_left;
		double needed_income;

		cout << "What is your age? ";
		cin >> age_now;

		cout << "What is your country's age of retirement? ";
		cin >> age_retire;

		years_left = age_retire - age_now;

		if (years_left < 0)
		{
			cout << "You have already retired!" << endl;

		}

		cout << "You have " << years_left << " years left to retire.\n";

		cout << "What is your current income? ";
		cin >> current_income;

		// Inflation-adjusted income needed at retirement
		needed_income = current_income * pow(1 + inflation_rate, years_left);

		cout << "You will need approximately " << needed_income << " per year at retirement with your income at " << current_income << endl;
	}

	// General Calculator
	if (choice == 3)
	{
		int calchoice;

		cout << "Do you want to: \n";
		cout << "1) Addition \n";
		cout << "2) Subtraction \n";
		cout << "3) Multiplication \n";
		cout << "4) Division \n";
		cin >> calchoice;

		if (calchoice == 1)
		{
			int no1;
			int no2;
			string choicethesecond;
			int thchoiceofwhateverthisis;

			cout << "First Number: ";
			cin >> no1;

			cout << "Second Number: ";
			cin >> no2;

			int fin;

			fin = (no1 + no2);

			cout << "Final number is " << fin << endl;

			cout << "Do you want to add another number or are you done? Say 'yes' if yes" << endl;
			cin >> choicethesecond;

			cout << "How many numbers do you want to calculate? (Maximum 10)";
			cin >> thchoiceofwhateverthisis;

			for (thchoiceofwhateverthisis; thchoiceofwhateverthisis <= 10; thchoiceofwhateverthisis++) {
				if (choicethesecond == "yes")
				{
					int no3;
					int finfin;

					cout << "Add third number \n";
					cin >> no3;

					finfin = fin + no3;

					cout << "Final answer is " << finfin << endl;


				}
			}
		}

		if (calchoice == 2)
		{
			int no1;
			int no2;
			string choicethesecond;
			int thchoiceofwhateverthisis;

			cout << "First Number: ";
			cin >> no1;

			cout << "Second Number: ";
			cin >> no2;

			int fin;

			fin = (no1 - no2);

			cout << "Final number is " << fin << endl;

			cout << "Do you want to add another number or are you done? Say 'yes' if yes" << endl;
			cin >> choicethesecond;
			cout << "How many numbers do you want to calculate? (Maximum 10)";
			cin >> thchoiceofwhateverthisis;

			for (thchoiceofwhateverthisis; thchoiceofwhateverthisis <= 10; thchoiceofwhateverthisis++) {
				if (choicethesecond == "yes")
				{
					int no3;
					int finfin;

					cout << "Add third number \n";
					cin >> no3;

					finfin = fin - no3;

					cout << "Final answer is " << finfin << endl;


				}
			}

		}

		if (calchoice == 3)
		{
			int no1;
			int no2;

			cout << "First Number: ";
			cin >> no1;

			cout << "Second Number: ";
			cin >> no2;

			int fin;

			fin = (no1 * no2);

			cout << "Final number is " << fin << endl;

			cout << "Do you want to add another number or are you done? Say 'yes' if yes" << endl;
			string choicethesecond;
			cin >> choicethesecond;
			int thchoiceofwhateverthisis;
			cout << "How many numbers do you want to calculate? (Maximum 10)";
			cin >> thchoiceofwhateverthisis;

			for (thchoiceofwhateverthisis; thchoiceofwhateverthisis <= 10; thchoiceofwhateverthisis++) {
				if (choicethesecond == "yes")
				{
					int no3;
					int finfin;
					cout << "Add third number \n";
					cin >> no3;
					finfin = fin * no3;
					cout << "Final answer is " << finfin << endl;
				}

				if (calchoice == 4)
				{
					int no1;
					int no2;

					cout << "First Number: ";
					cin >> no1;

					cout << "Second Number: ";
					cin >> no2;

					int fin;

					fin = (no1 / no2);

					cout << "Final number is " << fin << endl;

					cout << "Do you want to add another number or are you done? Say 'yes' if yes" << endl;
					string choicethesecond;
					cin >> choicethesecond;
					int thchoiceofwhateverthisis;
					cout << "How many numbers do you want to calculate? (Maximum 10)";
					cin >> thchoiceofwhateverthisis;

					for (thchoiceofwhateverthisis; thchoiceofwhateverthisis <= 10; thchoiceofwhateverthisis++) {
						if (choicethesecond == "yes")
						{
							int no3;
							int finfin;
							cout << "Add third number \n";
							cin >> no3;
							finfin = fin / no3;
							cout << "Final answer is " << finfin << endl;
						}
					}
				}

			}
		}



	}

	// Graphical Representation of Data
	if (choice == 4)
	{
		cout << "Graphical Representation of Data is not implemented yet." << endl;
	}
	// End of program

}
