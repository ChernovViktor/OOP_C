
#include <iostream>
#include <conio.h>
#include <windows.h>
#include <math.h>

using namespace std;

class Point 
{
	double x;
	double y;
public:

	double get_x()const
	{
		return x;
	}

	double get_y()const
	{
		return y;
	}

	void set_x(double x)
	{
		this->x = x;
	}
	void set_y(double y)
	{
		this->y = y;
	}
	void cin_xy(string a)
	{
		do
		{
			cout << "Введите координаты точки " << a << " от -10 до 10 включительно \n" << a << " [ ; ]\n";
			cin >> x;
			system("cls");
			cout << "Введите координаты точки " << a << " от -10 до 10 включительно \n" << a << " [" << x << "; ]\n";
			cin >> y;
			system("cls");
			cout << a << " [" << x << ";" << y << "]\n";
			if (x < -10 || x > 10 || y < -10 || y > 10)
			{
				system("cls");
				cout << "Некорректные данные, введите числа от -10 до 10 включительно\n";
			}
		} while (x < -10 || x > 10 || y < -10 || y > 10);
	}
	void show(string a)
	{
		cout << a << " [" << x << ";" << y << "]\n";
	}
	double distance()
	{
		return (sqrt(pow(x,2) + pow(y,2)));
	}
};

/*
void Point_k(Point &A, string a)
{
	do
	{
		cout << "Введите координаты точки от 0 до 9 включительно" << a << "\n" << a << " [ ; ]\n";
		A.set_x(_getch() - 48);
		system("cls");
		cout << "Введите координаты точки  от 0 до 9 включительно" << a << "\n" << a << " [" << A.get_x() << "; ]\n";
		A.set_y(_getch() - 48);
		system("cls");
		cout << a << " [" << A.get_x() << ";" << A.get_y() << "]\n";
		if (A.get_x() < 0 || A.get_x() > 9 || A.get_y() < 0 || A.get_y() > 9) cout << "Некорректные данные, введите числа от 0 до 9 включительно\n";
	} while (A.get_x() < 0 || A.get_x() > 9 || A.get_y() < 0 || A.get_y() > 9);
}
*/
void Show_ABC(Point &A, Point &B, Point &C)
{
	A.show("A");
	B.show("B");
	C.show("C");
}
void distance_to_point(Point& A, Point& B, Point& C)
{
	cout << "Выберите до какой точки вы "
}

int main()
{
	setlocale(LC_ALL, "ru");
	Point A;
	A.cin_xy("A");
	Point B;
	B.cin_xy("B");
	Point C;
	C.cin_xy("C");

	system("cls");
	Show_ABC(A, B, C);
	cout << "Выберите действие:\n1) Измерить расстояние до точки\n2)измерить расстояние между точками\n";
	switch (_getch())
	{
	case '1':
	{

	}
	case '2':
	{

	}
	}
}


