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

	const int N = 3;//���-�� ����
	Book book[N];
	int t = 0;
	for (int i = 0; i < N; i++)
	{
		cout << "������� �������� " << i + 1 << " �����: ";
		cin >> book[i].Title;
		cout << "������� ������ " << i + 1 << " �����: ";
		cin >> book[i].Author;
		cout << "������� ������������ " << i + 1 << " �����: ";
		cin >> book[i].Publisher;
		cout << "������� ���� " << i + 1 << " �����: ";
		cin >> book[i].Genre;
		cout << "\n";
	}

	do
	{
		cout << "�������� ��� ������ �������(���������� ��� ����� �������-1,������������ ��������� �����-2,����� ���� ���� �� ������-3,����� ����� �� ��������-4,���������� �� �������� ����-5,���������� �� ������-6,���������� �� ������������-7, ��� �� ��������� ������ ��������� ������-0)\n";
		cin >> t;

		if (t == 1)
		{
			cout << "\n������ ���� ����\n";
			for (int i = 0; i < N; i++)
			{
				cout << "�������� " << i + 1 << " �����: ";
				cout << book[i].Title << "\n";
				cout << "����� " << i + 1 << " �����: ";
				cout << book[i].Author << "\n";
				cout << "������������ " << i + 1 << " �����: ";
				cout << book[i].Publisher << "\n";
				cout << "���� " << i + 1 << " �����: ";
				cout << book[i].Genre << "\n";
				cout << "\n";
			}
		}

		if (t == 2)
		{
			cout << "\n�������������� �����\n";
			int x = 0;
			int y = 0;
			do
			{
				for (int i = 0; i < N; i++)
				{
					cout << "����� ����� " << i + 1 << "\n";
					cout << "�������� " << i + 1 << " �����: ";
					cout << book[i].Title << "\n";
					cout << "����� " << i + 1 << " �����: ";
					cout << book[i].Author << "\n";
					cout << "������������ " << i + 1 << " �����: ";
					cout << book[i].Publisher << "\n";
					cout << "���� " << i + 1 << " �����: ";
					cout << book[i].Genre << "\n";
					cout << "\n";
				}

				cout << "������� ����� ����� �� ������ ��������������� ���� ��� �� � ��������������� ��� �� ����� ������� 0 \n";
				cin >> x;
				if (x == 0)
				{
					break;
				}
				x--;

				cout << "\n������� ��� ������ ���������������(�������� �������-1,������-2,������������-3,����-4) ��� �� ����� �������-0\n";
				cin >> y;
				if (y == 0)
				{
					break;
				}
				if (y == 1)
				{
					cout << "������� �������� " << x + 1 << " �����: ";
					cin >> book[x].Title;
				}
				if (y == 2)
				{
					cout << "������� ������ " << x + 1 << " �����: ";
					cin >> book[x].Author;
				}
				if (y == 3)
				{
					cout << "������� ������������ " << x + 1 << " �����: ";
					cin >> book[x].Publisher;
				}
				if (y == 4)
				{
					cout << "������� ���� " << x + 1 << " �����: ";
					cin >> book[x].Genre;
				}
				cout << "\n";
				cout << "���������� ������� ��������\n";
				cout << "����� ����� " << x + 1 << "\n";
				cout << "�������� " << x + 1 << " �����: ";
				cout << book[x].Title << "\n";
				cout << "����� " << x + 1 << " �����: ";
				cout << book[x].Author << "\n";
				cout << "������������ " << x + 1 << " �����: ";
				cout << book[x].Publisher << "\n";
				cout << "���� " << x + 1 << " �����: ";
				cout << book[x].Genre << "\n";
				cout << "\n";
			} while (y != 0 || x != 0);
		}


		if (t == 3)
		{
			cout << "\n����� ���� �� ������\n";
			Book searchbook;
			cout << "������� ������\n";
			cin >> searchbook.Author;
			for (int i = 0; i < N; i++)
			{
				for (int k = 0; k < strlen(searchbook.Author); k++)
				{
					for (int j = 0; j < strlen(searchbook.Author); j++)
					{
						if (searchbook.Author[k] == book[i].Author[j])
						{
							cout << "�������� " << i + 1 << " �����: ";
							cout << book[i].Title << "\n";
							cout << "����� " << i + 1 << " �����: ";
							cout << book[i].Author << "\n";
							cout << "������������ " << i + 1 << " �����: ";
							cout << book[i].Publisher << "\n";
							cout << "���� " << i + 1 << " �����: ";
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
			cout << "\n����� ����� �� ��������\n";
			Book searchbook;
			cout << "������� ��������\n";
			cin >> searchbook.Title;
			for (int i = 0; i < N; i++)
			{
				for (int k = 0; k < strlen(searchbook.Title); k++)
				{
					for (int j = 0; j < strlen(searchbook.Title); j++)
					{
						if (searchbook.Title[k] == book[i].Title[j])
						{
							cout << "�������� " << i + 1 << " �����: ";
							cout << book[i].Title << "\n";
							cout << "����� " << i + 1 << " �����: ";
							cout << book[i].Author << "\n";
							cout << "������������ " << i + 1 << " �����: ";
							cout << book[i].Publisher << "\n";
							cout << "���� " << i + 1 << " �����: ";
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
			cout << "\n���������� ���� �� ��������\n";
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
				cout << "�������� " << i + 1 << " �����: ";
				cout << book[i].Title << "\n";
				cout << "����� " << i + 1 << " �����: ";
				cout << book[i].Author << "\n";
				cout << "������������ " << i + 1 << " �����: ";
				cout << book[i].Publisher << "\n";
				cout << "���� " << i + 1 << " �����: ";
				cout << book[i].Genre << "\n";
				cout << "\n";
			}
		}


		if (t == 6)
		{
			cout << "\n���������� ���� �� ������\n";
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
				cout << "�������� " << i + 1 << " �����: ";
				cout << book[i].Title << "\n";
				cout << "����� " << i + 1 << " �����: ";
				cout << book[i].Author << "\n";
				cout << "������������ " << i + 1 << " �����: ";
				cout << book[i].Publisher << "\n";
				cout << "���� " << i + 1 << " �����: ";
				cout << book[i].Genre << "\n";
				cout << "\n";
			}
		}

		if (t == 7)
		{
			cout << "\n���������� ���� �� ������������\n";
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
				cout << "�������� " << i + 1 << " �����: ";
				cout << book[i].Title << "\n";
				cout << "����� " << i + 1 << " �����: ";
				cout << book[i].Author << "\n";
				cout << "������������ " << i + 1 << " �����: ";
				cout << book[i].Publisher << "\n";
				cout << "���� " << i + 1 << " �����: ";
				cout << book[i].Genre << "\n";
				cout << "\n";
			}
		}
	}while (t != 0);

	return 0;
}