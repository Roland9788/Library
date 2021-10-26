#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

struct Book
{
	char Title[100];
	char Author[100];
	char Publisher[100];
	char Genre[100];
};

int main()
{
	setlocale(LC_ALL, "Rus");

	const int N = 3;//кол-во книг
	Book book[N];
	int t = 0;
	for (int i = 0; i < N; i++)
	{
		cout << "Введите название " << i + 1 << " книги: ";
		cin >> book[i].Title;
		cout << "Введите автора " << i + 1 << " книги: ";
		cin >> book[i].Author;
		cout << "Введите издательство " << i + 1 << " книги: ";
		cin >> book[i].Publisher;
		cout << "Введите жанр " << i + 1 << " книги: ";
		cin >> book[i].Genre;
		cout << "\n";
	}

	do
	{
		cout << "Выберете что хотите сделать(Напечатать все книги введите-1,редакировать выбранную книгу-2,поиск всех книг по автору-3,поиск книги по названию-4,Сортировка по названию книг-5,Сортировка по автору-6,Сортировка по издательству-7, что бы закончить работу программы ввдите-0)\n";
		cin >> t;

		if (t == 1)
		{
			cout << "\nПечать всех книг\n";
			for (int i = 0; i < N; i++)
			{
				cout << "Название " << i + 1 << " книги: ";
				cout << book[i].Title << "\n";
				cout << "Автор " << i + 1 << " книги: ";
				cout << book[i].Author << "\n";
				cout << "Издательство " << i + 1 << " книги: ";
				cout << book[i].Publisher << "\n";
				cout << "Жанр " << i + 1 << " книги: ";
				cout << book[i].Genre << "\n";
				cout << "\n";
			}
		}

		if (t == 2)
		{
			cout << "\nРедоктирование книги\n";
			int x = 0;
			int y = 0;
			do
			{
				for (int i = 0; i < N; i++)
				{
					cout << "Номер книги " << i + 1 << "\n";
					cout << "Название " << i + 1 << " книги: ";
					cout << book[i].Title << "\n";
					cout << "Автор " << i + 1 << " книги: ";
					cout << book[i].Author << "\n";
					cout << "Издательство " << i + 1 << " книги: ";
					cout << book[i].Publisher << "\n";
					cout << "Жанр " << i + 1 << " книги: ";
					cout << book[i].Genre << "\n";
					cout << "\n";
				}

				cout << "Введите номер книги из списка представленного выше что бы её отредактировать что бы выйти введите 0 \n";
				cin >> x;
				if (x == 0)
				{
					break;
				}
				x--;

				cout << "\nВведите что хотите отредактировать(название введите-1,автора-2,издательство-3,жанр-4) что бы выйти введите-0\n";
				cin >> y;
				if (y == 0)
				{
					break;
				}
				if (y == 1)
				{
					cout << "Введите название " << x + 1 << " книги: ";
					cin >> book[x].Title;
				}
				if (y == 2)
				{
					cout << "Введите автора " << x + 1 << " книги: ";
					cin >> book[x].Author;
				}
				if (y == 3)
				{
					cout << "Введите издательство " << x + 1 << " книги: ";
					cin >> book[x].Publisher;
				}
				if (y == 4)
				{
					cout << "Введите жанр " << x + 1 << " книги: ";
					cin >> book[x].Genre;
				}
				cout << "\n";
				cout << "Информация успешно изменена\n";
				cout << "Номер книги " << x + 1 << "\n";
				cout << "Название " << x + 1 << " книги: ";
				cout << book[x].Title << "\n";
				cout << "Автор " << x + 1 << " книги: ";
				cout << book[x].Author << "\n";
				cout << "Издательство " << x + 1 << " книги: ";
				cout << book[x].Publisher << "\n";
				cout << "Жанр " << x + 1 << " книги: ";
				cout << book[x].Genre << "\n";
				cout << "\n";
			} while (y != 0 || x != 0);
		}


		if (t == 3)
		{
			cout << "\nПоиск книг по автору\n";
			Book searchbook;
			cout << "Введите автора\n";
			cin >> searchbook.Author;
			for (int i = 0; i < N; i++)
			{
				for (int k = 0; k < strlen(searchbook.Author); k++)
				{
					for (int j = 0; j < strlen(searchbook.Author); j++)
					{
						if (searchbook.Author[k] == book[i].Author[j])
						{
							cout << "Название " << i + 1 << " книги: ";
							cout << book[i].Title << "\n";
							cout << "Автор " << i + 1 << " книги: ";
							cout << book[i].Author << "\n";
							cout << "Издательство " << i + 1 << " книги: ";
							cout << book[i].Publisher << "\n";
							cout << "Жанр " << i + 1 << " книги: ";
							cout << book[i].Genre << "\n";
							break;
						}
						break;
					}
				}
			}
		}


		if (t == 4)
		{
			cout << "\nПоиск книги по названию\n";
			Book searchbook;
			cout << "Введите название\n";
			cin >> searchbook.Title;
			for (int i = 0; i < N; i++)
			{
				for (int k = 0; k < strlen(searchbook.Title); k++)
				{
					for (int j = 0; j < strlen(searchbook.Title); j++)
					{
						if (searchbook.Title[k] == book[i].Title[j])
						{
							cout << "Название " << i + 1 << " книги: ";
							cout << book[i].Title << "\n";
							cout << "Автор " << i + 1 << " книги: ";
							cout << book[i].Author << "\n";
							cout << "Издательство " << i + 1 << " книги: ";
							cout << book[i].Publisher << "\n";
							cout << "Жанр " << i + 1 << " книги: ";
							cout << book[i].Genre << "\n";
							break;
						}
						break;
					}
				}
			}
		}


		if (t == 5)
		{
			cout << "\nСортировка книг по названию\n";
			char temp[100];
			for (int i = 0; i < N; i++)
			{
				for (int j = 0; j < N; j++)
				{
					if (static_cast<int>(book[j].Title[0]) > static_cast<int> (book[i].Title[0]))
					{
						strcpy(temp, book[i].Title);
						strcpy(book[i].Title, book[j].Title);
						strcpy(book[j].Title, temp);

						strcpy(temp, book[i].Author);
						strcpy(book[i].Author, book[j].Author);
						strcpy(book[j].Author, temp);

						strcpy(temp, book[i].Publisher);
						strcpy(book[i].Publisher, book[j].Publisher);
						strcpy(book[j].Publisher, temp);

						strcpy(temp, book[i].Genre);
						strcpy(book[i].Genre, book[j].Genre);
						strcpy(book[j].Genre, temp);
					}
				}
			}
			for (int i = 0; i < N; i++)
			{
				cout << "Название " << i + 1 << " книги: ";
				cout << book[i].Title << "\n";
				cout << "Автор " << i + 1 << " книги: ";
				cout << book[i].Author << "\n";
				cout << "Издательство " << i + 1 << " книги: ";
				cout << book[i].Publisher << "\n";
				cout << "Жанр " << i + 1 << " книги: ";
				cout << book[i].Genre << "\n";
				cout << "\n";
			}
		}


		if (t == 6)
		{
			cout << "\nСортировка книг по автору\n";
			char temp[100];
			for (int i = 0; i < N; i++)
			{
				for (int j = 0; j < N; j++)
				{
					if (static_cast<int>(book[j].Author[0]) > static_cast<int> (book[i].Author[0]))
					{
						strcpy(temp, book[i].Title);
						strcpy(book[i].Title, book[j].Title);
						strcpy(book[j].Title, temp);

						strcpy(temp, book[i].Author);
						strcpy(book[i].Author, book[j].Author);
						strcpy(book[j].Author, temp);

						strcpy(temp, book[i].Publisher);
						strcpy(book[i].Publisher, book[j].Publisher);
						strcpy(book[j].Publisher, temp);

						strcpy(temp, book[i].Genre);
						strcpy(book[i].Genre, book[j].Genre);
						strcpy(book[j].Genre, temp);
					}
				}
			}
			for (int i = 0; i < N; i++)
			{
				cout << "Название " << i + 1 << " книги: ";
				cout << book[i].Title << "\n";
				cout << "Автор " << i + 1 << " книги: ";
				cout << book[i].Author << "\n";
				cout << "Издательство " << i + 1 << " книги: ";
				cout << book[i].Publisher << "\n";
				cout << "Жанр " << i + 1 << " книги: ";
				cout << book[i].Genre << "\n";
				cout << "\n";
			}
		}

		if (t == 7)
		{
			cout << "\nСортировка книг по издательству\n";
			char temp[100];
			for (int i = 0; i < N; i++)
			{
				for (int j = 0; j < N; j++)
				{
					if (static_cast<int>(book[j].Publisher[0]) > static_cast<int> (book[i].Publisher[0]))
					{
						strcpy(temp, book[i].Title);
						strcpy(book[i].Title, book[j].Title);
						strcpy(book[j].Title, temp);

						strcpy(temp, book[i].Author);
						strcpy(book[i].Author, book[j].Author);
						strcpy(book[j].Author, temp);

						strcpy(temp, book[i].Publisher);
						strcpy(book[i].Publisher, book[j].Publisher);
						strcpy(book[j].Publisher, temp);

						strcpy(temp, book[i].Genre);
						strcpy(book[i].Genre, book[j].Genre);
						strcpy(book[j].Genre, temp);
					}
				}
			}
			for (int i = 0; i < N; i++)
			{
				cout << "Название " << i + 1 << " книги: ";
				cout << book[i].Title << "\n";
				cout << "Автор " << i + 1 << " книги: ";
				cout << book[i].Author << "\n";
				cout << "Издательство " << i + 1 << " книги: ";
				cout << book[i].Publisher << "\n";
				cout << "Жанр " << i + 1 << " книги: ";
				cout << book[i].Genre << "\n";
				cout << "\n";
			}
		}
	}while (t != 0);

	return 0;
}