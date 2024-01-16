#include <iostream>
using namespace std;

//class Student {
//private:
//	string name;
//	int age;
//public:
//	Student(string name, int age) {
//		this->age = age;
//		this->name = name;
//	}
//	void show() {
//		cout << "name: " << name << " age: " << age << endl;
//	};
//};

//class Student {
//private:
//	int numerator;
//	int denominator;
//
//
//public:
//	Drob (int numerator, int denominator) {
//		this->numerator = numerator;
//		this->denominator = denominator;
//	}
//	void show() {
//		cout << numerator << "/" << denominator <<endl;
//	}
//
//};

class Student {
private:
	int number;
	string name;
	double avg;
public:
	Student(int number, string name, double avg) {
		this->number = number;
		this->name = name;
		this->avg = avg;
	}
	void show() {
		cout << "number:" << number << " name:" << name << "avg:" << avg;
	};
	string getStatus() {
		if (avg == 5) 	return  " Otl";
		
		if (avg == 4) 	return " Hor";
		
		if (avg == 3) 	return " fri";
		
		if (avg == 2)	return " db";
		else return " S";
	};
};

class Sa {
private:
	int num;
	int denum;
	double total ;
public:
	Sa(int num, int denum) {
		
			total = num / denum;

		this->num = num % denum;
		this->denum = denum;
	}
	void show() {
		if (total == 0)
			cout << total << " " << num << "/" << denum;
	}
	/*void res() {
		this->total = num / denum;
		int remains = num % denum;
		if (total > 0) cout << total << " " << remains << "/" << denum;
	}*/
};

int main() {
	
	Sa st1(4, 7);
	st1.show();

	return 0;
	
}