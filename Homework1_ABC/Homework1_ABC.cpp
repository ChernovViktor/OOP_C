
#include <iostream>
#include <conio.h>
#include <windows.h>
#include <math.h>

using namespace std;

double arr[4] = {};
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

void Show_ABC(Point &A, Point &B, Point &C)
{
	A.show("A");
	B.show("B");
	C.show("C");
}
void distance_to_point(Point& A, Point& B, Point& C)
{

		cout << "Выберите до какой точки вы хотите измерить расстояние, нажмите на латинице 'a' , 'b' или 'c'\n";

		switch (_getch())
		{
		case 'a':
		{
			cout << "Расстояние до точки равно " << A.distance() << endl;
			system("pause");
			break;
		}
		case 'b':
		{
			cout << "Расстояние до точки равно " << B.distance() << endl;
			system("pause");
			break;
		}
		case 'c':
		{
			cout << "Расстояние до точки равно " << C.distance() << endl;
			system("pause");
			break;
		}
		default:
		{
			cout << "Невернно введены данные, такой точки нет\n";
			distance_to_point(A,B,C);
		}
		}
	
}
void distance_between_point(Point& A, Point& B, Point& C)
{
	Show_ABC(A,B,C);
	cout << "Выберите первую букву (нажмите 'a', 'b' или 'c')\n";
	switch (_getch())
	{
	  case 'a':
	  {
		  arr[0] = A.get_x();
		  arr[1] = A.get_y();
		  cout << "Выберите вторую букву (нажмите 'b' или 'c')\n";
		  switch (_getch())
		  {
		  case 'b':
		  {
			  arr[2] = B.get_x();
			  arr[3] = B.get_y();
			  break;
		  }
		  case 'c':
		  {
			  arr[2] = C.get_x();
			  arr[3] = C.get_y();
			  break;
		  }
		  }
		  break;
	  }
	  case 'b':
	  {
		  arr[0] = B.get_x();
		  arr[1] = B.get_y();
		  cout << "Выберите вторую букву (нажмите 'a' или 'c')\n";
		  switch (_getch())
		  {
		  case 'a':
		  {
			  arr[2] = A.get_x();
			  arr[3] = A.get_y();
			  break;
		  }
		  case 'c':
		  {
			  arr[2] = C.get_x();
			  arr[3] = C.get_y();
			  break;
		  }
		  }
		  break;
	  }
	  case 'c':
	  {
		  arr[0] = C.get_x();
		  arr[1] = C.get_y();
		  cout << "Выберите вторую букву (нажмите 'a' или 'b')\n";
		  switch (_getch())
		  {
		  case 'a':
		  {
			  arr[2] = A.get_x();
			  arr[3] = A.get_y();
			  break;
		  }
		  case 'b':
		  {
			  arr[2] = B.get_x();
			  arr[3] = B.get_y();
			  break;
		  }
		  }
		  break;
	  }
	}
	
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
		distance_to_point(A, B, C);
	}
	case '2':
	{
		distance_between_point(A, B, C);
		cout << "Расстояние между точками = " << (sqrt(pow(abs(arr[2]-arr[0]), 2) + pow(abs(arr[3] - arr[1]), 2)));
	}
	}
}


