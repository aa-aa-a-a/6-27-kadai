#include <iostream>
#include<string>
#include<time.h>

using namespace std;


class Rand
{
public:

	int answer = 0;


	Rand()
	{
		int t = (int)time(nullptr);
		answer = t % 10;

		answer = 

		for (int i = 0; i < 4; i++)
		{
			cout << answer;
		}
	}

};
class Hozi
{
public:
	int number = 0;

	Hozi()
	{
		cout << number << endl;
	}

};

class Hikaku : public Rand
{
public:
	int HitCount = 0;
	int BlowCount = 0;

	Hikaku(int answre , int number)
	{

		if (answer == number)
		{
			cout << "あたり" << endl;
			return;
		}
		else if (answer < number)
		{
			cout << "でかい" << endl;
			return;
		}
		else if (answer > number)
		{
			cout << "ちいさい" << endl;
			return;
		}

	}

};
class Uketori : public Hikaku
{
	int answer() {}
	
};


int main()
{
	Rand();
}