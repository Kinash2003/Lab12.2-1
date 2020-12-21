#include <iostream>
#include <Windows.h>
#include <time.h>

#define TESTING

using namespace std;

typedef int Info;
struct Elem
{
	Elem* next,
		* prev;
	Info info;
};
void Enqueue(Elem*& first, Elem*& last, Info value);
void Print(Elem* first);
void Procces(Elem* L, int count);

#ifdef TESTING
int main()
{
	srand((unsigned)time(NULL));

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	Elem* first = NULL,
		* last = NULL;

	Info info, N;

	
	for (int i = 1; i < 6; i++)
		Enqueue(first, last, i);


	cout << "Кількість чисел:  ";
	Print(first); cout << endl;
	Procces(first, 0);
	Print(first); cout << endl;
	return 0;
}
#endif 

void Enqueue(Elem*& first, Elem*& last, Info value)
{
	Elem* tmp = new Elem;
	tmp->info = value;
	tmp->next = NULL;
	if (last != NULL)
		last->next = tmp;
	tmp->prev = last;
	last = tmp;
	if (first == NULL)
		first = tmp;
}
void Print(Elem* L)
{
	while (L != NULL)
	{
		cout << L->info << " ";
		L = L->next;
	}
}

void Procces(Elem* L, int count)
{
	if (L != NULL)
	{
		if (L->info )
		{
			return Procces(L = L->next, ++count);
		}
		return Procces(L = L->next, count);
	}
	else
		cout << "Кількість: ";
		cout << count << endl;
}