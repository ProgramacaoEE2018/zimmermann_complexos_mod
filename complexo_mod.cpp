#include <math.h>
#include "Complexo.h"

Complexo Complexo::Conjugado()
	{
		return Complexo(real, -im);
	}
float  Complexo::Modulo()
	{
		float mod
		mod = sqrt(real ^ 2 + im ^ 2);
		return mod
	}
Complexo	Complexo::Diferenca(Complexo z)
	{
		Complexo z1(real, im);
		z1.real = this->real - z.real;
		z1.im = this->im - z.im;
		return z1;
	}

Complexo	Complexo :: Produto(Complexo z) 
	{
		Complexo z2(real, im);
		z2.real = (this->real * z.real) - (this->im * z.im);
		z2.im = (this->real * z.im) + (this->im * z.real);
		return z2;
	}

Complexo	Complexo::Divisao(Complexo z)
	{
		Complexo z3(real, im);
		z3.real = (this->real*z.real + this->im * z.im)/(z.real^2 + z.im^2);
		z3.im = -this -> (real*z.im + this->im* z.real) / (z.real ^ 2 + z.im ^ 2);
		return z3;
	}

Complexo	Complexo::Soma(Complexo z)
	{
		Complexo z4(real, im);
		z4.real = this->real + z.real;
		z4.im = this->im + z.im;
		return z4
	}

