#pragma once
#include "stdafx.h"
#include "defines.h"

using namespace std;

class Sensor
{
public:
	Sensor(int t);
	~Sensor();

	bool	setH();
	bool	resetH();
	bool	getH();
	void	setR(float	r);
	float	getR();
	bool	setValue(float v);
	bool	getAlert();

	int		getType();

private:
	float	value;
	int		type;
	bool	status;
	float	conf;
	bool	alert;
};