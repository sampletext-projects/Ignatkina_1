#include <iostream>
using namespace std;


int main()
{
	double period = 1.5;
	for (double x = -3; x <= 5; x += 0.2)
	{
		//эта штука нужна, чтобы сделать красивый вывод.
		//без неё выводит вместо 0 очень маленькое число(погрешность округления)
		//на блок схеме не отображают
		if (abs(x) <= 0.00001)
		{
			x = 0;
		}

		double map_x = x; //значение x в пределах периода
		double result = 0; //значение функции
		while (map_x < 0)
		{
			map_x += period;
		}
		while (map_x > period)
		{
			map_x -= period;
		}

		if (map_x >= 0 && map_x <= 1)
		{
			result = x * x;
		}
		if (map_x >= 1 && map_x <= 1.5)
		{
			result = -x;
		}

		//эта штука нужна, чтобы сделать красивый вывод.
		//без неё выводит вместо 0 очень маленькое число(погрешность округления)
		//на блок схеме не отображают
		if (abs(result) < 0.00001)
		{
			result = 0;
		}

		cout << x << " = " << result << endl;
	}
	return 0;
}
