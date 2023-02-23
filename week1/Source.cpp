#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

#include <iostream>

using namespace std;



bool isPrime(int n)

{

	for (int tr = 2; tr < n / 2; tr++)

		if ((n % tr) == 0)

			return false;

	return true;

}

int main()
{
	
	//ex2
	FILE* fd;
	
	if (fopen_s(&fd, "fis.txt", "r") != 0)
		printf("eroare la deschidera fisierului\n");
	else
	{
		long suma=0;
		char sir[200];
		while (fgets(sir, 200, fd))
		{
			if(sir[strlen(sir) - 1] =='\n')
				sir[strlen(sir) - 1] = '\0';
			//printf("%s\n", sir);

			long numar = 0;
			for (int i = 0; i < strlen(sir); i++)
			{
				int nr1 = numar;
				numar = numar * 10 + sir[i] - 48;
				
				
				
			}
			printf("%d\n", numar);
			suma = suma + numar;
		}
		printf("%d\n", suma);
	}
	///ex2
	
	

	/*
	char** mesaj;
	mesaj = new char*[50];
	for (int i = 0; i < 50; i++)
	{
		mesaj[i] = new char[20];
	}

	int index = 0;
	printf("introduceti o propozitie:\n");
	while (scanf_s("%19s", mesaj[index], 19) != 0)
	{
		if (strcmp(mesaj[index], ".") == 0)
			break;
		index++;
		//printf("%d\n", index);
	}
	for (int i = 0; i < index - 1; i++)
	{
		//printf("%s\n", mesaj[i]);
		for (int j = i; j < index; j++)
		{
			if (strlen(mesaj[i]) < strlen(mesaj[j]))
			{
				
				char* aux = new char[20];

				aux = mesaj[i];
				mesaj[i] = mesaj[j];
				mesaj[j] = aux;


			}
			else
				if (strlen(mesaj[i]) == strlen(mesaj[j]))
				{
					if (strcmp(mesaj[i], mesaj[j]) > 0)
					{
						

						char* aux = new char[20];

						aux = mesaj[i];
						mesaj[i] = mesaj[j];
						mesaj[j] = aux;
					}
				}

		}

	}
	for (int i = 0; i < index; i++)
	{
		printf("%s\n", mesaj[i]);
	}

	for (int i = 0; i < 50; i++)
	{
		delete[] mesaj[i];
	}
	delete[] mesaj;
	*/

	
	//ex3
	char mesaj[50][20];
	int index = 0;
	printf("introduceti o propozitie:\n");
	while (scanf_s("%19s", mesaj[index], 19)!=0)
	{
		if (strcmp(mesaj[index], ".") == 0)
			break;
		index++;
		//printf("%d\n", index);
	}
	for (int i = 0; i < index-1; i++)
	{
		//printf("%s\n", mesaj[i]);
		for (int j = i; j < index; j++)
		{
			if (strlen(mesaj[i]) < strlen(mesaj[j]))
			{
				char aux[20];
				strcpy_s(aux,sizeof(aux), mesaj[j]);
				strcpy_s(mesaj[j], sizeof(mesaj[j]), mesaj[i]);
				strcpy_s(mesaj[i], sizeof(mesaj[i]), aux);
				
			}
			else
				if (strlen(mesaj[i]) == strlen(mesaj[j]))
				{
					if (strcmp(mesaj[i], mesaj[j]) > 0)
					{
						char aux[20];
						strcpy_s(aux, sizeof(aux), mesaj[j]);
						strcpy_s(mesaj[j], sizeof(mesaj[j]), mesaj[i]);
						strcpy_s(mesaj[i], sizeof(mesaj[i]), aux);
					}
				}

		}
		
	}
	for (int i = 0; i < index; i++)
	{
		printf("%s\n", mesaj[i]);
	}

	///ex3

	
	
	//ex4
	int n;

	cout << "Enter a number:";

	cin >> n;

	if (isPrime(n))

		cout << n << " is prime !";

	else

		cout << n << " is NOT prime !";

	///ex4
	
	return 0;
}