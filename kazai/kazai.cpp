#include <iostream>
#include<string>
#include<time.h>
using namespace std;

class Rand
{
public:

	int answer;
	 void nAnswer(int a) { a = 0; }



	Rand()
	{
		int t = (int)time(nullptr);
		int a = t % 10;
		for (int i = 0; i < 4; i++)
		{
			cout << &nAnswer << endl;
		};
	}

};
class Hozi
{
public:
	int number;

};
class Hikaku : public Rand , public Hozi
{
private:
	string Hit;
	string Blow;
public:
	void hit_(string h)  {}
	void blow_(string b) {}

	Hikaku(int answre , int number)
	{

	}
};
class Uketori
{

};


int main()
{
	Rand();
	
}