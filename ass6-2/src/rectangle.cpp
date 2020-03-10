s/*
 * rectangle.cpp
 *
 *  Created on: 10-Mar-2020
 *      Author: sunbeam
 */
#include<iostream>
#include "rectangle.h"
using namespace std;
	rectangle::rectangle()
	{
		this->breadth=0;
		this->length=0;
	}
//-------------------------------------------------------------------------------------------------------------------------
	rectangle::rectangle(float length,float breadth)
	{
		this->length=length;
		this->breadth=breadth;
	}
//-------------------------------------------------------------------------------------------------------------------------
	float rectangle::rectangle:: get_length()
	{
		return this->length;
	}
//-------------------------------------------------------------------------------------------------------------------------
	void rectangle::rectangle:: set_length(float length)
	{
		this->length=length;
	}
//-------------------------------------------------------------------------------------------------------------------------
	float rectangle::rectangle:: get_breadth()
	{
		return this->breadth;
	}
//-------------------------------------------------------------------------------------------------------------------------
	void rectangle::rectangle:: set_breadth(float breadth)
	{
		this->breadth=breadth;
	}
//-------------------------------------------------------------------------------------------------------------------------
	void rectangle::accept()
	{
		cout<<"ENTER LENGTH OF RECTANGLE";
		cin>>this->length;
		cout<<"ENTER BREADTH OF RECTANGLE";
		cin>>this->breadth;
	}
//-------------------------------------------------------------------------------------------------------------------------
	void rectangle::display()
	{
		cout<< "LENGTH  :"<< this->length;
		cout<<"BREADTH  :"<<this->breadth;
	}
//-------------------------------------------------------------------------------------------------------------------------
	float rectangle::calc_area()
	{
		return (this->length*this->breadth);
	}
//-------------------------------------------------------------------------------------------------------------------------
	float rectangle::calc_perimeter()
	{
		return 2(this->length * this->breadth);
	}
//-------------------------------------------------------------------------------------------------------------------------
rectangle::~rectangle()
{}

