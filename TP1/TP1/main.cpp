#include "Ochered.h"
#include "dochernochered.h"
#include <iostream>
#include <string>;

using namespace std;

template <class G>

void sliyanie(G* VVS)
{
	int nomer1, nomer2, nomer3;

	cout << "kakie ocheredi obedenit" << endl;
	cin >> nomer1;
	cin >> nomer2;
	cout << endl;
	cout << "kuda obedenit";
	cin >> nomer3;
	VVS[nomer3].sliyanie(VVS[nomer1], VVS[nomer2]);
}

template <class G>
void copirovanie(G* VVS, G& q)
{
	int number;
	cout << "Kuda kopirovat" << endl;
	cin >> number;
	VVS[number].copirovanie(q);
}

int vibratochered()

{
	cout << "vibirite nomer ocheredi" << endl;
	int nomer;
	cin >> nomer;
	return nomer;
}

template <class G>
void ydalenie(G& q)
{
	q.ydal_perv();
}


template <class G>
void pocazvse(G& q, const int nomer)
{
	cout << "sostoyanie ocheredi" << "->" << nomer << endl;
	cout << "_____________________________" << endl;

	for (int i = 0; i < q.Getsize(); i++)
	{

	cout << q[i] << " ";

	}

	cout << endl;
	cout << "____________________________" << endl;

}

template <class G>
void dobavit(G& q, const int nomer)
{
	cout << "dobavit element v ochered" << "->" << nomer << endl;
	int chislo;
	cout << "vvedite chislo";
	cin >> chislo;
	q.dobav_v_konec(chislo);

}

void oshibka()
{
	cout << "vibirite syhestvyushi pynkt menu" << endl;
}


template <class G>
void GlavMenu(G* spisokocheredy)
{
	int u = 0; // номер текущей очереди 
	int k; // меню
	int z = 1;

	while (z)
	{

		cout << "                 menu                      " << endl;
		cout << "1. Vivod ocheredi" << endl;
		cout << "2. Ydalit element ocheredi" << endl;
		cout << "3. Dobavit element ocheredi" << endl;
		cout << "4. Sozdanie kopii ocheredi" << endl;
		cout << "5. Vibor ocheredi" << endl;
		cout << "6. Sliyanie ocheredei" << endl;
		cout << "7. Vibor dochernego classa" << endl;
		cout << "8. Naiti sredneegarmonicheskoe" << endl;
		cout << "0. Zakrit programmy" << endl;
		cin >> k;

		system("cls");

		switch (k)
		{
		case 1: pocazvse(spisokocheredy[u], u);
			break;
		case 2: ydalenie(spisokocheredy[u]);
			break;
		case 3: dobavit(spisokocheredy[u], u);
			break;
		case 4: copirovanie(spisokocheredy, spisokocheredy[u]);
			break;
		case 5: u = vibratochered();
			break;
		case 6: sliyanie(spisokocheredy);
			break;
		case 7:
			z = 0;
			break;
		case 8: cout << "sredneegarmonicheskoe ->" << spisokocheredy[u].srednegarmon(spisokocheredy[u]) << endl;
					break;

		case 0: exit(0);
			break;

		default: oshibka();
			break;
		}
	}

}

	
int main()
{
	ochered_private* spisok_private = NULL;
	ochered_protected* spisok_protected = NULL;
	ochered_public* spisok_public = NULL;

	int z = 1;
	while (z) {
		cout << "Vibirite docherniy class" << endl;
		cout << "1 - Private" << endl;
		cout << "2 - Protected" << endl;
		cout << "3 - Public" << endl;
		int select;
		cin >> select;
		cout << "zadaite kollichestvo ocheredei" << endl;
		int num = 1;
		cin >> num;

		system("cls");


		switch (select)
		{
		case 1:
			spisok_private = new ochered_private[num];
			GlavMenu(spisok_private);
			delete[] spisok_private;
			break;

		case 2:
			spisok_protected = new ochered_protected[num];
			GlavMenu(spisok_protected);
			delete[] spisok_protected;
			break;

		case 3:
			spisok_public = new ochered_public[num];
			GlavMenu(spisok_public);
			delete[] spisok_public;
			break;


		default:cout << "oshibka";
			break;

		}
	}



	return 0;

}
