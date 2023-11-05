
// #include <iostream>
// using namespace std;

// class Person {
//   public:
// 	int x;
// 	//virtual pointer vptr
//   	virtual void fun() {cout<< "person" << "\n";}
//   	virtual void fun2() {cout<< "person2" << "\n";}
// };
// class Eslam : public Person {
//   public:
// 	int y;
//   	void fun() {cout<< "eslam" << "\n";}
//   	void fun2() {cout<< "eslam2" << "\n";}
// };
// class Amir : public Person {
//   public:
// 	int y;
//   	void fun() {cout<< "amir" << "\n";}
//   	void fun2() {cout<< "amir2" << "\n";}
// };
// //dependancy injection
// void display(Person *temp) { temp -> fun(); }

// int main() {
// 	Eslam es;
// 	Amir am;

// 	//what is this mean -> p pointer point to address of es
// 	//virtual key word is make the function point to other function that the class pointer point at it.
// 	Person *p = &es;
// 	display(&es);
// 	p->fun();
// 	p = &am;
// 	display(&am);
// 	p->fun();
//   	cout<< sizeof(es) << "\n";
//    return 0;
// }


// template design pattern
#include <iostream>
using namespace std;

class Output {
  public:
	//virtual pointer vptr
  	virtual void turnon() {cout<< "pin is high" << "\n";}
};
class Led : public Output {
  public:
  	void turnon() {cout<< " led on " << "\n";}
};
class Motor : public Output {
  public:
  	void turnon() {cout<< " motor on " << "\n";}
};

//dependancy injection
void Makeon(Output *device) { device->turnon(); }
//why i put temp as a pointer ??

int main() {
    Led led1;
    Makeon(&led1);
    
    Motor motor1;
	Makeon(&motor1);
	
   return 0;
}
