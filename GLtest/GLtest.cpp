// GLtest.cpp: определяет точку входа для консольного приложения.
//
/*Один Гигант хочет подняться по лестнице Волшебной Башни. Он знает, что может перешагнуть через каждую K-ю ступеньку. 
Старый Тролль спрашивает Великана, сколько ступеней он ступит, если на лестнице будет N ступеней. Напишите программу, которая поможет Гиганту ответить на Старый Тролль.
Программа принимает N и K в качестве * аргументов командной строки * (не stdin) и возвращает общее количество ступеней, которые Giant выполняет в стандартный вывод.*/

/*
Example:
[giant@laptop ~]$	./steps 100 0
100
[giant@laptop ~]$	./steps 10 2
4
[giant@laptop ~]$	./steps 11 2
4
[giant@laptop ~]$	./steps 12 2
4
[giant@laptop ~]$	./steps 13 2
5
[giant@laptop ~]$	./steps 986 16
58
Answer to the Task 1
*/

#include "stdafx.h"
#include <iostream>

int main(int argc, char *argv[])
{
	 int N= atoi(argv[1]);
	 int K= atoi(argv[2])+1;
	 int steps = 0;
	 for(int i=0;  i<N; steps++, i += K){ }
	std::cout  << steps;

    return 0;
}

