#include<iostream>
#include<sstream>
using namespace std;

string month, dayOfWeek, lY;
bool leapYear;
int calendar[37], monthMaxDay;


void leap() {
	cout << "Is it a leap year?" << endl;
	cout << "Enter y for yes, n for no: ";
	getline(cin, lY);

	while (lY.length() > 1 || (lY != "y" && lY != "n")) {
		cout << "Enter y for yes, n for no: ";
		getline(cin, lY);
	}

	cout << month << "'s first day of the week is?";
	getline(cin, dayOfWeek);


	if (lY == "n")
		leapYear = false;
	else
		leapYear = true;
}

void noLeap() {
	cout << month << "'s first day of the week is? ";
	getline(cin, dayOfWeek);
}

string spacer(int currentDay) {
	string space;
	if (calendar[currentDay] < 10) {
		space = "      ";
	}
	else if (calendar[currentDay] >= 10) {
		space = "     ";
	}
	return space;
	
}

void generateCal() {
	int week = 1;

	for (int i = 0; i < monthMaxDay; i++) {
		calendar[i] = i + 1;
	}

	cout << endl << endl << "           " << "SUN" << "    " << "MON" << "    " << "TUE" << "    " << "WED" << "    " << "THU" << "    " << "FRI" << "    " << "SAT" << endl;
	
	if (dayOfWeek == "sun") {
		for (int i = 0; i < monthMaxDay; i+=7) {
			cout << "Week " << week << "     " << calendar[i] << spacer(i) << calendar[i + 1] << spacer(i + 1) << calendar[i + 2] << spacer(i + 2) << calendar[i + 3] << spacer(i + 3) << calendar[i + 4] << spacer(i + 4) << calendar[i + 5] << spacer(i + 5) << calendar[i + 6] << endl;
			week++;
		}
	}
	else if (dayOfWeek == "mon") {
		for (int i = 0; i < monthMaxDay; i += 7) {
			if (i == 0)
				cout << "Week " << week << "     " << "       " << calendar[i] << spacer(i) << calendar[i + 1] << spacer(i + 1) << calendar[i + 2] << spacer(i + 2) << calendar[i + 3] << spacer(i + 3) << calendar[i + 4] << spacer(i + 4) << calendar[i + 5] << endl;
			else
			{
				cout << "Week " << week << "     " << calendar[i-1] << spacer(i-1) << calendar[i ] << spacer(i) << calendar[i + 1] << spacer(i + 1) << calendar[i + 2] << spacer(i + 2) << calendar[i + 3] << spacer(i + 3) << calendar[i + 4] << spacer(i + 4) << calendar[i + 5] << endl;
			}
			week++;

		}
	}
	else if (dayOfWeek == "tue") {
		for (int i = 0; i < monthMaxDay; i += 7) {
			if (i == 0)
				cout << "Week " << week << "     " << "       " << "       " << calendar[i] << spacer(i) << calendar[i + 1] << spacer(i + 1) << calendar[i + 2] << spacer(i + 2) << calendar[i + 3] << spacer(i + 3) << calendar[i + 4] << endl;
			else
			{
				cout << "Week " << week << "     " << calendar[i - 2] << spacer(i - 2) << calendar[i - 1] << spacer(i - 1) << calendar[i] << spacer(i) << calendar[i + 1] << spacer(i + 1) << calendar[i + 2] << spacer(i + 2) << calendar[i + 3] << spacer(i + 3) << calendar[i + 4] << endl;
			}
			week++;

		}
	}
	else if (dayOfWeek == "wed") {
		for (int i = 0; i < monthMaxDay; i += 7) {
			if (i == 0)
				cout << "Week " << week << "     " << "       " << "       " << "       " << calendar[i] << spacer(i) << calendar[i + 1] << spacer(i + 1) << calendar[i + 2] << spacer(i + 2) << calendar[i + 3] << endl;
			else
			{
				cout << "Week " << week << "     " << calendar[i - 3] << spacer(i - 3) << calendar[i - 2] << spacer(i - 2) << calendar[i - 1] << spacer(i - 1) << calendar[i] << spacer(i) << calendar[i + 1] << spacer(i + 1) << calendar[i + 2] << spacer(i + 2) << calendar[i + 3] << endl;
			}
			week++;

		}
	}
	else if (dayOfWeek == "thu") {
		for (int i = 0; i < monthMaxDay; i += 7) {
			if (i == 0)
				cout << "Week " << week << "     " << "       " << "       " << "       " << "       " << calendar[i] << spacer(i) << calendar[i + 1] << spacer(i + 1) << calendar[i + 2] << endl;
			else
			{
				cout << "Week " << week << "     " << calendar[i - 4] << spacer(i - 4) << calendar[i - 3] << spacer(i - 3) << calendar[i - 2] << spacer(i - 2) << calendar[i - 1] << spacer(i - 1) << calendar[i] << spacer(i) << calendar[i + 1] << spacer(i + 1) << calendar[i + 2] << endl;
			}
			week++;

		}
	}
	else if (dayOfWeek == "fri") {
		for (int i = 0; i < monthMaxDay; i += 7) {
			if (i == 0)
				cout << "Week " << week << "     " << "       " << "       " << "       " << "       " << "       " << calendar[i] << spacer(i) << calendar[i + 1] << endl;
			else
			{
				cout << "Week " << week << "     " << calendar[i - 5] << spacer(i - 5) << calendar[i - 4] << spacer(i - 4) << calendar[i - 3] << spacer(i - 3) << calendar[i - 2] << spacer(i - 2) << calendar[i - 1] << spacer(i - 1) << calendar[i] << spacer(i) << calendar[i + 1] << endl;
			}
			week++;

		}
	}
	else if (dayOfWeek == "sat") {
		for (int i = 0; i < monthMaxDay ; i += 7) {
			if (i == 0)
				cout << "Week " << week << "     " << "       " << "       " << "       " << "       " << "       " << "       " << calendar[i] << endl;
			else
			{
				cout << "Week " << week << "     " << calendar[i - 6] << spacer(i - 6) << calendar[i - 5] << spacer(i - 5) << calendar[i - 4] << spacer(i - 4) << calendar[i - 3] << spacer(i - 3) << calendar[i - 2] << spacer(i - 2) << calendar[i - 1] << spacer(i - 1) << calendar[i] << endl;
			}
			week++;
		}
	}
}

void monthCheck() {
	if (month != "feb") {
		noLeap();
	}
	else if (month == "feb") {
		leap();
	}	
}

void requestMonth() {
	cout << "Enter month: ";
	getline(cin, month);

	char letter;
	
	for (int i = 0; i < int(month.length()); i++) {
		letter = month[i];
		month[i] = tolower(letter);
	}
}

int main() {
	requestMonth();

	while (month != "jan" && month != "feb" && month != "mar" && month != "apr" && month != "may" && month != "jun" && month != "jul" &&
		month != " aug" && month != "sep" && month != "oct" && month != "nov" && month != "dec") {
		cout << "Enter the first 3 letter of the Month" << endl <<"Ex. jan, feb, mar, etc." << endl << endl;
		requestMonth();
	}

	monthCheck();

	while (dayOfWeek != "sun" && dayOfWeek != "mon" && dayOfWeek != "tue" && dayOfWeek != "wed" && dayOfWeek != "thu" && dayOfWeek != "fri" && dayOfWeek != "sat") {
		cout << "Enter the first 3 letter of the Day of The Week" << endl << "Ex. sun, mon, tue, etc." << endl << endl;

		cout << month << "'s first day of the week is?";
		getline(cin, dayOfWeek);
	}

	if (month == "jan" || month == "mar" || month == "may" || month == "jul" || month == " aug" || month == "oct" || month == "dec"){
		monthMaxDay = 31;
	}
	else if(month == "apr"|| month == "jun" || month == "sep" || month == "nov") {
		monthMaxDay = 30;
	}
	else if (month == "feb" && leapYear) {
		monthMaxDay = 29;
	}
	else if (month == "feb" && !leapYear) {
		monthMaxDay = 28;
	}
	

	generateCal();
	system("pause");
}