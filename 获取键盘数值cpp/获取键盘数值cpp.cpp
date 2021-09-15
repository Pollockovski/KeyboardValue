#include<iostream>
#include<conio.h>
int main()
{
	int kbh;
	while (true)
	{
		if (_kbhit)
		{
			kbh = _getch();
			std::cout << kbh << ",";
		}
	}
}