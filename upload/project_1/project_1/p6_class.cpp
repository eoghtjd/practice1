#include<iostream>
#include <cstdlib>
#include <ctime>
#include<vector>

using namespace std;
//��� , �������, ��ĳ����, �����Լ�

//���� ������� �����Լ� �־��??
class motherclass {

public:
	
	virtual double cal(double x, double y) = 0;
};
class add :motherclass {

	
public:
	double cal(double x, double y) {

		return x + y; }

};
	
class sub :motherclass{
public:
	double cal(double x, double y)  {

		return x - y; }

};
class multiple :motherclass {
public:
	double cal(double x, double y)  {

		return x * y; }

};
class divide :motherclass {
public:
	double cal(double x, double y)  {
		
		if (y==0) {
			cout << "y could not be 0" << endl;
			return 0;
		}

		return x / y; }

};


int main() {
	//���� ��ĳ����
	//��ĳ����
	add* p = new motherclass();
	



	return 0;
}