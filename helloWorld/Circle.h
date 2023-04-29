#ifndef CIRCLE_H
#define CIRCLE_H

class Circle
{
public:
	Circle();//no args con
	Circle(double radius);//con
	double getRadius() const;
	void setRadius(double radius);
	double circumeference() const;//c=2*pi*r
	double area() const ;//a=pi*r^2


	

private:
	double radius;//data member

};
#endif // !CIRCLE_H
