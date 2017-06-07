#!/bin/sh

echo "#ifndef $1_h
#define $1_h

class 
{
	public:
	$1();
	$1();

	private:
};
#endif" >> $1.cc

echo "#include  “$1.h”

$1::$1()
{}

$1::~$1()
{}" >> $1.h 
