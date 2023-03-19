#include <iostream>
using namespace std;

class Triangle {
	int a = 10, b = 20, c = 30;
	int A = 50, B = 60, C = 70;
public:

	Triangle(int p_a, int p_b, int p_c, int p_A, int p_B, int p_C) {
		a = p_a; b = p_b; c = p_c;
		A = p_A; B = p_B; C = p_C;
	}
	Triangle(){}
	
	void show() {
		cout << "Стороны: " << "a = " << a << " b = " << b << " c = " << c << endl;
		cout << "Углы: " << "A = " << A << " B = " << B << " C = " << C << endl << endl;
	}
};
class Rectangular : public Triangle {
public: 
	Rectangular():Triangle(10, 20, 30, 50, 60, 90) {}
};
class Isosceles : public Triangle {
public: 
	Isosceles():Triangle(10, 20, 10, 50, 60, 50) {}
};
class Equilateral : public Triangle {
public: 
	Equilateral():Triangle(30, 30, 30, 60, 60, 60){}
};

class Quadrilateral {
	int a = 10, b = 20, c = 30, d = 40;
	int A = 50, B = 60, C = 70, D = 80;
public:
	Quadrilateral(int p_a, int p_b, int p_c, int p_d, int p_A, int p_B, int p_C, int p_D) {
		a = p_a; b = p_b; c = p_c; d = p_d;
		A = p_A; B = p_B; C = p_C; D = p_D;
	}
		Quadrilateral(){}

		void show2() {
			cout << "Стороны: " << "a = " << a << " b = " << b << " c = " << c << " d = " << d << endl;
			cout << "Углы: " << "A = " << A << " B = " << B << " C = " << C << " D = " << D << endl << endl;
		}
};
class Rectangle : public  Quadrilateral {
public:
	Rectangle(): Quadrilateral(10, 20, 10, 20, 90, 90, 90, 90){}
};
class Square : public  Quadrilateral {
public: 
	Square(): Quadrilateral(20, 20, 20, 20, 90, 90, 90, 90){}
};
class Parallelogram : public  Quadrilateral {
public:
	Parallelogram(): Quadrilateral(20, 30, 20, 30, 30, 40, 30, 40){}
};
class Rhombus : public  Quadrilateral {
public: 
	Rhombus(): Quadrilateral(30, 30, 30, 30, 30, 40, 30, 40){}
};
int main() {

	setlocale(LC_ALL, "Russian");

	Triangle tri;
	cout << "Треугольник: " << endl;
	tri.show();

	Rectangular rec;
	cout << "Прямоугольный треугольник: " << endl;
	rec.show();

	Isosceles iso;
	cout << "Равнобедренный треугольник: " << endl;
	iso.show();
	
	Equilateral equ;
	cout << "Равносторонний треугольник: " << endl;
	equ.show();
	
	Quadrilateral qua;
	cout << "Четырёхугольник: " << endl;
	qua.show2();
	
	Rectangle rect;
	cout << "Прямоугольник: " << endl;
	rect.show2();
	
	Square squ;
	cout << "Квадрат: " << endl;
	squ.show2();
	
	Parallelogram par;
	cout << "Параллелограмм: " << endl;
	par.show2();
	
	Rhombus rho;
	cout << "Ромб: " << endl;
	rho.show2();
};