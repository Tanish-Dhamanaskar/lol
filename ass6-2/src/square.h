    /*
 * square.h
 *
 *  Created on: 10-Mar-2020
 *      Author: sunbeam
 */

#ifndef SQUARE_H_
#define SQUARE_H_

class square
{
private:
	float side;

public:
	square();

	square(float side);
	float get_side();
	void set_side(float side);
	void accept();
	void display();
	float calc_area();
	float calc_perimeter();

	virtual ~square();
};

#endif /* SQUARE_H_ */
