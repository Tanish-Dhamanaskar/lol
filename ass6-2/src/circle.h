/*
 * circle.h
 *
 *  Created on: 10-Mar-2020
 *      Author: sunbeam
 */

#ifndef CIRCLE_H_
#define CIRCLE_H_

class circle
{
private:
	float radius;

public:
	circle();

	circle(float radius);
	void set_radius(float radius);
	void accept();
	void display();
	float get_radius();
	float calc_area();
	float calc_perimeter();

	virtual ~circle();
};

#endif /* CIRCLE_H_ */
