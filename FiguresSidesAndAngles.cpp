#include <iostream>
using namespace std;


class Figure {
protected:
	string name = "Фигура";
	int a = 0;
	int A = 0;
public:
	virtual string gets() { return name; }
virtual	int getxa() { return a;}
virtual int getxA() { return A; }
	virtual void print_info() {
		cout << gets() << endl << "Стороны: " << getxa() << endl << "Углы: " << getxA();
	}
};

class Triangle: public Figure{
protected:
	int a = 10, b = 20, c = 30;
	int A = 50, B = 60, C = 70;
	string name = "Треугольник";
public:

	Triangle(string p_name, int p_a, int p_b, int p_c, int p_A, int p_B, int p_C) {
		a = p_a; b = p_b; c = p_c;
		A = p_A; B = p_B; C = p_C;
		name = p_name;
	}
	string gets() override { return name; }
	int getxa() override{ return a; }
	int getxb() { return b; }
	int getxc() { return c; }
	int getxA()override{ return A; }
	int getxB() { return B; }
	int getxC() { return C; }

	Triangle() {}
	
	void print_info() override{
		cout << gets() << endl << "Стороны: " << "a = " << getxa() << " b = " << getxb() << " c = " << getxc() << endl;
		cout << "Углы: " << "A = " << getxA() << " B = " << getxB() << " C = " << getxC() << endl << endl;
	}
};
class Rectangular : public Triangle {

public:
	Rectangular(string p_name, int p_a, int p_b, int p_c, int p_A, int p_B, int p_C) :Triangle(p_name, p_a, p_b, p_c, p_A, p_B, p_C) { 
		if (p_C == 90) {
			a = p_a; b = p_b; c = p_c;
			A = p_A; B = p_B; C = p_C;
			name = p_name;
		}
		else {
			cout << "Неверные данные. Прямоугольный треугольник (угол C всегда равен 90)" << endl;
			exit(1);
		}
	}
};
class Isosceles : public Triangle {
public:
	Isosceles(string p_name, int p_a, int p_b, int p_c, int p_A, int p_B, int p_C) {
		if (p_a == p_c && p_A == p_C) {
			a = p_a; b = p_b; c = p_c;
			A = p_A; B = p_B; C = p_C;
			name = p_name;
		}
		else {
			cout << "Неверные данные. Равнобедренный треугольник (стороны a и c равны, углы A и C равны)" << endl;
			exit(1);
	}
	}
};
 class Equilateral : public Triangle {
	
public: 
	Equilateral(string p_name, int p_a, int p_b, int p_c, int p_A, int p_B, int p_C){
		if (p_a == p_b && p_b == p_c && p_A == 60 && p_B == 60 && p_C == 60) {
			a = p_a; b = p_b; c = p_c;
			A = p_A; B = p_B; C = p_C;
			name = p_name;
		}
		else {
			cout << "Неверные данные. Равносторонний треугольник (все стороны равны, все углы равны 60)" << endl;
			exit(1);
		}
	}

};

class Quadrilateral:public Figure{
protected:
	int a = 10, b = 20, c = 30, d = 40;
	int A = 50, B = 60, C = 70, D = 80;
	string name = "Четырёхугольник: ";
public:
	Quadrilateral(string p_name, int p_a, int p_b, int p_c, int p_d, int p_A, int p_B, int p_C, int p_D) {
		a = p_a; b = p_b; c = p_c; d = p_d;
		A = p_A; B = p_B; C = p_C; D = p_D;
		name = p_name;
	}
		Quadrilateral(){}

		string gets() override { return name; }
		int getxa() override { return a; }
		int getxb() { return b; }
		int getxc() { return c; }
		int getxd() { return d; }
		int getxA() override{ return A; }
		int getxB() { return B; }
		int getxC() { return C; }
		int getxD() { return D; }

		void print_info() override {
			cout << gets() << endl << "Стороны: " << "a = " << getxa() << " b = " << getxb() << " c = " << getxc() << " d = " << getxd() << endl;
			cout << "Углы: " << "A = " << getxA() << " B = " << getxB() << " C = " << getxC() << " D = " << getxD() << endl << endl;
		}
};
class Rectangle : public  Quadrilateral {
public:
	Rectangle(string p_name, int p_a, int p_b, int p_c, int p_d, int p_A, int p_B, int p_C, int p_D): Quadrilateral(p_name, p_a, p_b, p_c, p_d, p_A, p_B, p_C, p_D){
		if (p_a  == p_c && p_b == p_d && p_A == 90 && p_B == 90 && p_C == 90 && p_D == 90) {
			a = p_a; b = p_b; c = p_c; d = p_d;
			A = p_A; B = p_B; C = p_C; D = p_D;
			name = p_name;
		}
		else {
			cout << "Неверные данные. Прямоугольник (стороны a,c и b,d попарно равны, все углы равны 90)" << endl;
			exit(1);
		}
	}
};
class Square : public  Quadrilateral {
public: 
	Square(string p_name, int p_a, int p_b, int p_c, int p_d, int p_A, int p_B, int p_C, int p_D) : Quadrilateral(p_name, p_a, p_b, p_c, p_d, p_A, p_B, p_C, p_D){
		if (p_a == p_c && p_c == p_b && p_b == p_d && p_d == p_a && p_A == 90 && p_B == 90 && p_C == 90 && p_D == 90) {
			a = p_a; b = p_b; c = p_c; d = p_d;
			A = p_A; B = p_B; C = p_C; D = p_D;
			name = p_name;
		}
		else {
			cout << "Неверные данные. Квадрат (все стороны равны, все углы равны 90)" << endl;
			exit(1);
		}
	}
};
class Parallelogram : public  Quadrilateral {
public:
	Parallelogram(string p_name, int p_a, int p_b, int p_c, int p_d, int p_A, int p_B, int p_C, int p_D) : Quadrilateral(p_name, p_a, p_b, p_c, p_d, p_A, p_B, p_C, p_D) {
		if (p_a == p_c && p_b == p_d && p_A == p_C && p_B == p_D ) {
			a = p_a; b = p_b; c = p_c; d = p_d;
			A = p_A; B = p_B; C = p_C; D = p_D;
			name = p_name;
		}
		else {
			cout << "Неверные данные. Параллелограмм (стороны a,c и b,d попарно равны, углы A,C и B,D попарно равны)" << endl;
			exit(1);
		}
	}
};
class Rhombus : public  Quadrilateral {
public: 
	Rhombus(string p_name, int p_a, int p_b, int p_c, int p_d, int p_A, int p_B, int p_C, int p_D) : Quadrilateral(p_name, p_a, p_b, p_c, p_d, p_A, p_B, p_C, p_D){
		if (p_a == p_c && p_c == p_b && p_b == p_d && p_d == p_a && p_A == p_C && p_B == p_D) {
			a = p_a; b = p_b; c = p_c; d = p_d;
			A = p_A; B = p_B; C = p_C; D = p_D;
			name = p_name;
		}
		else {
			cout << "Неверные данные. Ромб (все стороны равны, углы A,C и B,D попарно равны)" << endl;
			exit(1);
		}
	}
};
int main() {

	setlocale(LC_ALL, "Russian");


	Triangle tri;
	tri.print_info();

	Figure* rec = new Rectangular("Прямоугольный треугольник:", 10, 20, 10, 50, 60, 90);
	rec->print_info();

	Figure* iso = new Isosceles("Равнобедренный треугольник: ", 10, 20, 10, 50, 60, 50);
	iso->print_info();

	Figure*  equ = new Equilateral("Равносторонний треугольник: ", 30, 30, 30, 60, 60, 60);
	equ->print_info();

	Figure* qua = new Quadrilateral;
	qua->print_info();

	Figure* rect = new Rectangle("Прямоугольник: ", 10, 20, 10, 20, 90, 90, 90, 90);
	rect->print_info();

	Figure* squ = new Square("Квадрат: ", 20, 20, 20, 20, 90, 90, 90, 90);
	squ->print_info();

	Figure* par = new Parallelogram("Параллелограмм: ", 20, 30, 20, 30, 30, 40, 30, 40);
	par->print_info();

	Figure* rho = new Rhombus("Ромб: ", 30, 30, 30, 30, 30, 40, 30, 40);
	rho->print_info();

	delete rec;
	delete iso;
	delete equ;
	delete qua;
	delete rect;
	delete par;
	delete rho;
};