#pragma once
#include<iostream>
using namespace std;
class Players {
protected:
	Players* next;
	string ime, prezime;
	int dres;//(1-99)
	const char *oznakaTima;
	const char *oznakaProtivnika;
public:
	Players() {
		next = NULL;
		ime = prezime = "";
		dres = 0;
		oznakaTima = NULL;
		oznakaProtivnika = NULL;
	}

	Players(string ime, string prezime, int dres, const char* tim, const char* protivnik) {
		next = NULL;
		this->ime = ime;
		this->prezime = prezime;
		this->dres = dres;
		oznakaTima = tim;
		oznakaProtivnika = protivnik;
	}

	Players(Players* next, string ime, string prezime, int dres, const char* tim, const char* protivnik) {
		this->next = next;
		this->ime = ime;
		this->prezime = prezime;
		this->dres = dres;
		oznakaTima = tim;
		oznakaProtivnika = protivnik;
	}

	Players* ReturnNext() { return next; }
	string ReturnIme() { return ime; }
	string ReturnPrezime() { return prezime; }
	int ReturnDres() { return dres; }
	const char* ReturnOznakaTima() { return oznakaTima; }
	const char* ReturnOznakaProtivnika() { return oznakaProtivnika; }

	void Print() {
		Check();
		cout << ReturnIme() << "_" << ReturnPrezime() << "_" << ReturnDres() << "_|" << ReturnOznakaTima() << "|_|" << ReturnOznakaProtivnika() << "|"<< endl;
	}

	void Check() {
		int ot = strlen(ReturnOznakaTima());
		int op = strlen(ReturnOznakaProtivnika());
		if (ReturnDres() < 0 && ReturnDres() > 99 && ot>3 && op > 3)
			throw exception("Clanovi nisu lepo uneseni !");
	}
};
