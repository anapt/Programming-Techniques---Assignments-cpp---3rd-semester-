#ifndef FUNCTIONS_HPP_INCLUDED
#define FUNCTIONS_HPP_INCLUDED

#include <iostream>
#include <complex>

using namespace std;

float add(float n1, float n2)
{
	float result;

	result=n1+n2;
	return result;
}

complex<double> add(double p1r, double p1im, double p2r, double p2im)
{

	double real_res, imag_res;

	real_res = p1r + p2r;
	imag_res = p1im + p2im;
	complex<double> result(real_res,imag_res);
	return result;
}

float sub(float n1, float n2)
{
	float result;

	result= n1-n2;
	return result;

}


complex<double> sub(double p1r, double p1im, double p2r, double p2im)
{
	double real_res, imag_res;

	real_res = p1r - p2r;
	imag_res = p1im - p2im;
	complex<double> result(real_res, imag_res);
	return result;
}

float mult(float n1, float n2)
{
	float result;

	result = n1*n2;
	return result;

}

complex<double> mult(double p1r, double p1im, double p2r, double p2im)
{
	double real_res, imag_res;

	real_res = p1r*p2r - p1im*p2im;
	imag_res = p1r*p2im + p2r*p1im;
	complex<double> result(real_res, imag_res);
	return result;
}

float div(float n1, float n2)
{
	float result;

	result = n1/n2;
	return result;

}

complex<double> div(double p1r, double p1im, double p2r, double p2im)
{
	double real_res, imag_res, denom, numer_real, numer_imag;

	denom = p2r*p2r + p2im*p2im ;
	p2im = -p2im;
	numer_real = p1r*p2r - p1im*p2im;
	numer_imag = p1r*p2im + p2r*p1im;
	real_res = numer_real / denom ;
	imag_res = numer_imag / denom ;
	complex<double> result(real_res, imag_res);
	return result;

}

#endif // FUNCTIONS_HPP_INCLUDED
