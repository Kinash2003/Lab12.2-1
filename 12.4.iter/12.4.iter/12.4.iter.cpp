#include <iostream>
#include <Windows.h>
#include <time.h>
using namespace std;

#include <iostream>
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
void Procces(Elem* L);

#ifdef TESTING
int main()
{
	srand((unsigned)time(NULL));

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Elem* first = NULL,
		* last = NULL;

	Info info, N;

	
	
	for (int i = 1; i < 4; i++)
	Enqueue(first, last, i);
	

	cout << "Кількість чисел: ";
	Print(first); cout << endl;
	Procces(first);
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

void Procces(Elem* L)
{
	int count = 0;
	while (L != NULL)
	{
		if (L->info)
		{
			count++;
		}
		L = L->next;
	}
	cout << "Кількість: ";
	cout << count << endl;
}