#include<iostream>
#include"HashTable.h"
using namespace std;
void main() {
	try {
		HashTable h(25);

		Players p1("Dejan", "Markovic", 23, "SRB", "ITA");
		Players p2("Marko", "Mitic", 55, "SRB", "ITA");
		Players p3("Pera", "Blagojevic", 2, "SRB", "ITA");
		Players p4("Mila", "Petrovic", 56, "SRB", "ITA");
		Players p5("Ilija", "Denic", 4, "SRB", "ITA");
		Players p6("Stefan", "Djordjevic", 13, "SRB", "ITA");
		Players p7("Lazar", "Arsic", 16, "SRB", "ITA");
		Players p8("Uros", "Stefanovic", 52, "SRB", "ITA");
		Players p9("Nikola", "Ilic", 11, "SRB", "ITA");
		Players p10("Jovan", "Peric", 24, "SRB", "ITA");

		h.AddToTable(p1);
		h.AddToTable(p2);
		h.AddToTable(p3);
		h.AddToTable(p4);
		h.AddToTable(p5);
		h.AddToTable(p6);
		h.AddToTable(p7);
		h.AddToTable(p8);
		h.AddToTable(p9);
		h.AddToTable(p10);

		h.PrintTable();
		system("pause");
	}
	catch (char* s) {
		cout << s << endl;
	}
}