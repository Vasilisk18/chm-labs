#include "MyForm.h"
#define _USE_MATH_DEFINES // for C++
#include "math.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ arg) {
  Application::EnableVisualStyles();
  Application::SetCompatibleTextRenderingDefault(false);
  
  Lab2::MyForm form;
  Application::Run(% form);
}

double Lab2::MyForm::k1(double x)
{
  return (x * x + 2);   //(2 + cos(x));
}

double Lab2::MyForm::q1(double x)
{
  return x; //1;
}

double Lab2::MyForm::f1(double x)
{
  return 1;  //x * 2;
}

double Lab2::MyForm::k2(double x)
{
  return (x * x);   //(2 + sin(x));
}

double Lab2::MyForm::q2(double x)
{
  return (x * x);; //1
}

double Lab2::MyForm::f2(double x)
{
  return sin(x * M_PI);; //0
}

double Lab2::MyForm::ai(double x, double ksi, double h)
{
  if (ksi >= x)
    return k1(x - h/2.);

  if ((ksi > x - h) && (ksi < x))
    return 1 / (  (1 / h) *  (ksi - (x - h)) * (1 / k1((x - h + ksi)/2.)) + (1 / h) * (x - ksi) * (1 / k2((x + ksi) / 2.))  );

  if (ksi <= x - h)
    return k2(x - h / 2.);
}

double Lab2::MyForm::ai(double x, double ksi, double h, double k_1, double k_2)
{
  if (ksi >= x)
    return k_1;

  if ((ksi > x - h) && (ksi < x))
    return 1 / (  (1 / h) * (ksi - (x - h)) * (1 / k_1) + (1 / h) * (x - ksi) * (1 / k_2)  );

  if (ksi <= x - h)
    return k_2;
}

double Lab2::MyForm::di(double x, double ksi, double h, double q_1, double q_2)
{
  if (ksi >= x + h / 2.)
    return q_1;

  if ((ksi > x - h / 2.) && (ksi < x + h / 2.))
    return (1. / h) * (q_1 * (ksi - (x - h / 2.)) + q_2 * (x + h / 2. - ksi));

  if (ksi <= x - h / 2.)
    return q_2;
}

double Lab2::MyForm::fii(double x, double ksi, double h, double f_1, double f_2)
{
  if (ksi >= x + h / 2.)
    return f_1;

  if ((ksi > x - h / 2.) && (ksi < x + h / 2.))
    return (1. / h) * (f_1 * (ksi - (x - h / 2.)) + f_2 * (x + h / 2. - ksi));

  if (ksi <= x - h / 2.)
    return f_2;
}

double Lab2::MyForm::di(double x, double ksi, double h)
{
  if (ksi >= x + h/2.)
    return q1(x);

  if ((ksi > x - h / 2.) && (ksi < x + h / 2.))
    return (1./h) * (  q1((x - h/2. + ksi)/2.) * (ksi - (x - h/2.)) + q2( (ksi + x + h/2.) / 2. ) * (x + h/2. - ksi)  );

  if (ksi <= x - h/2.)
    return q2(x);
}

double Lab2::MyForm::fii(double x, double ksi, double h)
{
  if (ksi >= x + h / 2.)
    return f1(x);

  if ((ksi > x - h / 2.) && (ksi < x + h / 2.))
    return (1. / h) * (f1((x - h / 2. + ksi) / 2.) * (ksi - (x - h / 2.)) + f2( (ksi + x + h / 2.) / 2. ) * (x + h / 2. - ksi));

  if (ksi <= x - h / 2.)
    return f2(x);
}
