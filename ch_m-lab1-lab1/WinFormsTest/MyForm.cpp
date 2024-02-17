#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void main(array<String^>^ arg) 
{
  Application::EnableVisualStyles();
  Application::SetCompatibleTextRenderingDefault(false);

  WinFormsTest::MyForm form; //WinFormsTest - имя вашего проекта
  Application::Run(% form);
}


double WinFormsTest::MyForm::rk(double x0, double v0, double h)
{
	double k1, k2, k3, k4;


	if (comboBox1->SelectedIndex == 0)
	{
		k1 = dudx1(x0, v0);
		k2 = dudx1(x0 + h / 2., v0 + k1 * h / 2.);
		k3 = dudx1(x0 + h / 2., v0 + k2 * h / 2.);
		k4 = dudx1(x0 + h, v0 + k3 * h);

		v0 = v0 + (h / 6.) * (k1 + 2 * k2 + 2 * k3 + k4);			//s shagom h
	}
	else
		if (comboBox1->SelectedIndex == 1)
		{
			k1 = dudx2(x0, v0);
			k2 = dudx2(x0 + h / 2., v0 + k1 * h / 2.);
			k3 = dudx2(x0 + h / 2., v0 + k2 * h / 2.);
			k4 = dudx2(x0 + h, v0 + k3 * h);
			v0 = v0 + (h / 6.) * (k1 + 2 * k2 + 2 * k3 + k4);
		}


	return v0;
}


double WinFormsTest::MyForm::rk2(double x0, double v0, double h)
{
	double k1, k2, k3, k4;
	h = h / 2.;

	int i = 0;


	for (int j = 0; j < 2; j++)
	{
		if (comboBox1->SelectedIndex == 0)
		{
			k1 = dudx1(x0, v0);
			k2 = dudx1(x0 + h / 2., v0 + k1 * h / 2.);
			k3 = dudx1(x0 + h / 2., v0 + k2 * h / 2.);
			k4 = dudx1(x0 + h, v0 + k3 * h);

			v0 = v0 + (h / 6.) * (k1 + 2 * k2 + 2 * k3 + k4);			//s shagom h
		}
		else
			if (comboBox1->SelectedIndex == 1)
			{
				k1 = dudx2(x0, v0);
				k2 = dudx2(x0 + h / 2., v0 + k1 * h / 2.);
				k3 = dudx2(x0 + h / 2., v0 + k2 * h / 2.);
				k4 = dudx2(x0 + h, v0 + k3 * h);
				v0 = v0 + (h / 6.) * (k1 + 2 * k2 + 2 * k3 + k4);
			}
	}

	return v0;
}


double WinFormsTest::MyForm::dudx1(double x, double u)
{
	return (-3. * u / 2.);
}


double WinFormsTest::MyForm::dudx2(double x, double u)
{
	return (u * u / pow(1 + x * x, 1.0 / 3.0) + u - u * u * u * sin(10 * x * PI / 180));
}


double WinFormsTest::MyForm::du1dx(double x, double u1, double u2)
{
	return u2;
}

double WinFormsTest::MyForm::du2dx(double x, double u1, double u2, double a, double b)
{
	return ( -a * u2 * u2 - b * u1);
}

std::array<double, 2> WinFormsTest::MyForm::rk(double x0, double h, double u1, double u2, double a, double b)
{
	double k11, k12, k13, k14;
	double k21, k22, k23, k24;

	std::array<double, 2> res;

	k11 = du1dx(x0, u1, u2);
	k21 = du2dx(x0, u1, u2, a , b);

	k12 = du1dx(x0 + h / 2., u1 + k11 * h / 2., u2 + k21 * h / 2.);
	k22 = du2dx(x0 + h / 2., u1 + k11 * h / 2., u2 + k21 * h / 2., a, b);

	k13 = du1dx(x0 + h / 2., u1 + k12 * h / 2., u2 + k22 * h / 2.);
	k23 = du2dx(x0 + h / 2., u1 + k12 * h / 2., u2 + k22 * h / 2., a, b);

	k14 = du1dx(x0 + h, u1 + k13 * h, u2 + k23 * h);
	k24 = du2dx(x0 + h, u1 + k13 * h, u2 + k23 * h, a, b);

	res[0] = u1 + (h / 6.) * (k11 + 2 * k12 + 2 * k13 + k14);
	res[1] = u2 + (h / 6.) * (k21 + 2 * k22 + 2 * k23 + k24);

	return res;
}


std::array<double, 2> WinFormsTest::MyForm::rk2(double x0, double h, double u1, double u2, double a, double b)
{
	double k11, k12, k13, k14;
	double k21, k22, k23, k24;
	std::array<double, 2> res;

	h = h / 2.;
	
	for (int j = 0; j < 2; j++)
	{
		k11 = du1dx(x0, u1, u2);
		k21 = du2dx(x0, u1, u2, a, b);

		k12 = du1dx(x0 + h / 2., u1 + k11 * h / 2., u2 + k21 * h / 2.);
		k22 = du2dx(x0 + h / 2., u1 + k11 * h / 2., u2 + k21 * h / 2., a, b);

		k13 = du1dx(x0 + h / 2., u1 + k12 * h / 2., u2 + k22 * h / 2.);
		k23 = du2dx(x0 + h / 2., u1 + k12 * h / 2., u2 + k22 * h / 2., a, b);

		k14 = du1dx(x0 + h, u1 + k13 * h, u2 + k23 * h);
		k24 = du2dx(x0 + h, u1 + k13 * h, u2 + k23 * h, a, b);

		u1 = u1 + (h / 6.) * (k11 + 2 * k12 + 2 * k13 + k14);
		u2 = u2 + (h / 6.) * (k21 + 2 * k22 + 2 * k23 + k24);
	}

	res[0] = u1;
	res[1] = u2;

	return res;
}