/* 
 * File:   Numbers.h
 * Author: rcc
 *
 * Created on May 2, 2016, 3:21 PM
 */

#ifndef NUMBERS_H
#define	NUMBERS_H
using namespace std;

class Numbers
{
private:
	int number;
public:
	Numbers(int num);
	void setNum(int);
	int getNum();
	static void print(int);
};

Numbers::Numbers(int num)
{
	number = num;
}

void Numbers::setNum(int num)
{
	number = num;
}
int Numbers::getNum()
{
	return number;
}
void Numbers::print(int num)
{
	int tensPlace;
	int onesPlace;
	int hunPlace;
	int thPlace;
	string lessThan20[21] = {
		"zero", "one", "two", "three", "four", "five", "six", "seven", "eigth", "nine", "ten",
		"eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty"
	};
	string tens[9] = { " ","twenty", "thirty","forty","fifty","sixty","seventy","eighty", "ninety" };
	string hundreds[2] = { " ", "hundred" };
	string thousand[2] = { " ", "thousand" };

	cout << "The number you input is " << num << endl;
    
	if (num <= 20 && num > 0)
	{
	cout << "The number is " << lessThan20[num] << endl;
	}
	else if ((num < 99) && (num >= 21))
	{
		tensPlace = num / 10;
		onesPlace = num % 10;
		cout << "The number is "  << tens[tensPlace-1] << " " << lessThan20[onesPlace] << " dollars" << endl;

	}
	else if ((num <= 999) && (num >= 100))
	{
		hunPlace = num / 100;
		tensPlace = ((num%100))/ 10;
		onesPlace = num % 10;
		cout << "The number is " << lessThan20[hunPlace] << " " << hundreds[1] << " ";
		cout << tens[tensPlace - 1] << " ";
		cout << lessThan20[onesPlace]  << " dollars" << endl;
	}
	else if ((num <= 9999) && (num >= 1000))
	{
		thPlace = num / 1000;
		hunPlace = ((num % 1000)) / 100;
		tensPlace = (num % 100) / 10;
		onesPlace = num % 10;
		cout << "The number is " << lessThan20[thPlace] << " " << thousand[1] << " ";
		cout << lessThan20[hunPlace] << " " << hundreds[1] << " ";
		cout << tens[tensPlace - 1] << " ";
		cout << lessThan20[onesPlace] << " dollars" << endl;
	}
        else
        {
            cout << "Invalid input " << endl;
        }
}



#endif	/* NUMBERS_H */

