///////////////////////////////////////////////////////////////////////////////////////////////////
//                         COMPUTER METHODS 3 PRACTICAL TEST 1 (MOCK)
// Name: devashnee bhagawandin
// Student No:214502393
// Date: 2016-03-29
///////////////////////////////////////////////////////////////////////////////////////////////////

// ***** QUESTION 4 ****
// Question 4 has 3 parts (you do NOT need to include each class in a separate file!)
// 4.1 Create a virtual base class "Animal" which has two methods, name() and does(). 
// 4.2 From class "Animal", derive a concrete class "Bird" and "Dog".  Print appropriate message for
//     each method.
// 4.3 Write a driver program which creates an object of each type and demonstrates POLYMORPHISM. 
#include<iostream>
#include<string>
using namespace std;

class animal{
public:

	virtual void name()=0;
	virtual void does()=0;
};

class Bird :public virtual animal{
	
	void name(){
		cout << " a bird";
	}
	void does(){
		cout << "cherps" << endl;
	}
};


class Dog :public virtual animal{
	void name(){
		cout << " a dog";
	}
	void does(){
		cout << "barks" << endl;
	}

};

int main(){
	Dog d;
	Bird b;
	animal	*ptn1=&d; 
	animal *ptn2 = &b;
	ptn1->name();
	ptn1->does();
	ptn2->name();
	ptn2->does();


}