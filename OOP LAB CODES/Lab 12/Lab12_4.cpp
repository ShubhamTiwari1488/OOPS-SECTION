
#include<iostream>
using namespace std; 


//class shape
class Shape
{
public:
	virtual void display()
	{
		
	}
	virtual float area(){
		return 0;
	}
};


//class Circle inheriting class Shape
class Circle: public Shape
{
private:
	float radius;
public:
	Circle(float radius){
		this->radius=radius;
	}


	void setRadius(float radius){
		this->radius=radius;
	}
	float getRadius(){
		return this->radius;
	}
	void display()
	{
		cout<<"Circle radius: "<<this->radius<<"\n";
		cout<<"Circle area: "<<this->area()<<"\n";
	}
	float area(){
		return 3.14*this->radius*this->radius;
	}
};






int main()
{
	int r;
	
	cout<<"\nEnter the radius of the circle ";
	cin>>r;
	
	Shape *s;
	Circle c(r);
	s=&c;
	s->display();


	return 0;
}
