#include<math.h>

class Complexo
{
private:
	float real, im;
public:
	Complexo (float x, float y)
{
		real = x;
		im = y;
}
	Complexo Conjugado();
	float Modulo();
	Complexo Diferenca(Complexo);
	Complexo Soma(Complexo);
	Complexo Produto(Complexo);
	Complexo Divisao(Complexo);
};