#include<stdio.h>
#include<iostream>
#include<locale.h>

void task6()
{

}
void task5()
{
	printf("Не сделал\n");
}
void task4()
{
	printf("У меня какая то проблема со случайными числами и в итоге я использовал Сканф с\n\n\n\n");
	//int a = 2 + rand() % 5;
	//printf("%d\n", a);
	int a;
	printf("Оценка: ");
	scanf_s("%d", &a);

	switch (a) {
	case 2:printf("Очень плохо\n"); break;
	case 3:printf("Не очень\n"); break;
	case 4:printf("Хорошо\n"); break;
	case 5:printf("Отлично\n"); break;
	}
}
void task3()
{
	int x;
	printf("Пятизначное число = ");
	scanf_s("%d", &x);

	if ((x / 10000 == x % 10) && ((x / 1000) % 10 == ((x % 100) / 10)))
	printf("True\n");
	else printf("False\n");
}
void task2()
{
	int x;
	printf("x(не более пяти знаков) = ");
	scanf_s("%d", &x);
	int a, s, d, f;
	a = x / 1000;
	s = (x / 100) % 10;
	d = (x % 100) / 10;
	f = (x % 10);
	printf("%d", f);
	printf("%d", d);
	printf("%d", s);
	printf("%d\n", a);
}
void task1()
{
	int h, m, s, sec;
	printf("Секунд прошло с начала дня = ");
	scanf_s("%d", &sec);

	h = sec / 3600;
	printf("h = ");
	printf("%d\n", h);
	m = (sec % 3600) / 60;
	printf("m = ");
	printf("%d\n", m);
	s = ((sec % 3600) % 60);
	printf("s = ");
	printf("%d\n", s);
}
int main()
{
	setlocale(LC_ALL, "");

	int task;
	int flag;

start:
	printf("Введите номер задачи:");
	scanf_s("%d", &task);
	switch (task)
	{
	case 1:task1(); break;
	case 2:task2(); break;
	case 3:task3(); break;
	case 4:task4(); break;
	case 5:task5(); break;
	case 6:task5(); break;
	default:
		break;
	}
	printf("Хотите продoлжить?1/0\n");
	scanf_s("%d", &flag);
	if (flag == 1)
		goto start;

	system("pause");
}