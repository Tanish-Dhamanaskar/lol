n/*
 * rectangle.h
 *
 *  Created on: 10-Mar-2020
 *      Author: sunbeam
 */

#ifndef RECTANGLE_H_
#define RECTANGLE_H_

class rectangle
{
private:
	float length;
	float breadth;

public:
	rectangle();

	rectangle(float length,float breadth);
	float get_length();
	void set_length(float length);
	float get_breadth();
	void set_breadth(float breadth);
	void accept();
	void display();
	float calc_area();
	float calc_perimeter();

	virtual ~rectangle();
};

#endif /* RECTANGLE_H_ */
