#include "stdafx.h"
#include <iostream>

int main(int argc, char *argv[])
{
	 int N= atoi(argv[1]);		//Количество ступеней
	 int K= atoi(argv[2])+1;	//Шаг великана
	 int steps = 0;
	 for(int i=0;  i<N; steps++, i += K){ }//К переменной "i" додается шаг пока выполняется условие, 
	 				       //а переменная "steps" инкрементируется при каждом шаге
	std::cout  << steps;

    return 0;
}
