/***************************************************
Code written for the optimization exercises purposes
by Lukasz Sztangret, PhD
Department of Applied Computer Science and Modelling
AGH University of Science and Technology
***************************************************/

#include"opt_alg.h"

using namespace std;

int main()
{
	try
	{
		cout << "LAB NUMBER " << LAB_NO << endl;
		cout << "LAB PART " << LAB_PART << endl << endl;
#if LAB_NO==0
		
#elif LAB_NO==1 && LAB_PART==1

		double t0 = 0;
		double dt = 0.1;
		double tend = 50;
		matrix Y0 = matrix(2, new double[2]{ 0,0 });
		matrix *Y = solve_ode(t0, dt, tend, Y0);		//zwraca 2 macierze - pierwsza to czas(jedna kolumna-w tym wypadku 0-50), druga to szukane funkcje, tyle kolumn ile szukanych funkcji
		matrix OUT = hcat(Y[0], Y[1]);
		ofstream S("wyniki.csv");
		S << OUT;
		S.close();

#elif LAB_NO==1 && LAB_PART==2
		
#elif LAB_NO==2 && LAB_PART==1
		//przyjmujemy 3 ró¿ne wartoœci alpha i robimy dla ka¿dej metodê ekspansji 100 razy
		//dla ka¿dej wartoœci alpha robimy fibonacciego i lagrange i zapisujemy w macierzy
		//liczymy wartoœci œrednie dla ró¿nych wartoœci
		//analiza wyników i wnioski
		double x0 = -20, d = 1, alpha = 2, epsilon = 1e-5, gamma = 1e-200;
		int Nmax = 1000;
		double *p = expansion(x0, d, alpha, Nmax);
		cout << p[0] << "\t" << p[1] << endl;

		solution::clear_calls();

		solution opt_f = fib(p[0], p[1], epsilon);
		cout << opt_f << endl;

		solution::clear_calls();


		solution opt_l = lag(p[0], p[1], epsilon, gamma, Nmax);
		cout << opt_l << endl;

		solution::clear_calls();

#elif LAB_NO==2 && LAB_PART==2
		//tak jak wy¿ej ale wielkoœæ przedzia³u ustawiamy na od -100 do 100
		double x0 = -20, d = 1, alpha = 2, gamma = 1e-200;
		int Nmax = 1000;
		double epsilon = 1e-5;
		matrix ab_F(1, 1, 200);
		fib(-100, 100, epsilon, &ab_F);
		cout << ab_F << endl;

		matrix ab_F2(1, 1, 200);
		lag(-100, 100, epsilon, gamma, Nmax, &ab_F2,nullptr);
		cout << ab_F2 << endl;

#elif LAB_NO==2 && LAB_PART==3
		solution test(0.001);
		test.fit_fun();
		cout << test << endl;

#elif LAB_NO==3 && LAB_PART==1
		
#elif LAB_NO==3 && LAB_PART==2
		
#elif LAB_NO==3 && LAB_PART==3
		
#elif LAB_NO==4 && LAB_PART==1
		
#elif LAB_NO==4 && LAB_PART==2
		
#elif LAB_NO==5 && LAB_PART==1
		
#elif LAB_NO==5 && LAB_PART==2
		
#elif LAB_NO==5 && LAB_PART==3
		
#elif LAB_NO==6 && LAB_PART==1
		
#elif LAB_NO==6 && LAB_PART==2
		
#elif LAB_NO==7 && LAB_PART==1
		
#elif LAB_NO==7 && LAB_PART==2
		
#endif
	}
	catch (char * EX_INFO)
	{
		cout << EX_INFO << endl;
	}
	system("pause");
	return 0;
}
