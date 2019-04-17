#include <iostream>
using namespace std;

class Boat;
class Car{
private:
	int weight;
public:
	Car(int j):weight(j){}
	friend int getTotalWeight(Car &c,Boat &b);

};

class Boat{
private:
	int weight;
public:
	Boat(int j):weight(j){}
	friend int getTotalWeight(Car &c,Boat &b);

};

int getTotalWeight(Car &c,Boat &b){
	return c.weight+b.weight;
}

int main(){
	Car c1(3);
	Boat b1(5);
	cout<<getTotalWeight(c1,b1)<<endl;
	return 0;
}