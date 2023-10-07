#include "HashTable.h"
HashTable::HashTable() {
	table = NULL;
	lenght = 0;
	size = 0;
}

HashTable::HashTable(int lenght) {
	this->lenght = lenght;
	table = new List[lenght];
	size = 0;
}

HashTable::~HashTable() {
	delete[] table;
}

void HashTable::AddToTable(Players p) {
	int indeks = HashKey(p);
	if (table[indeks] == NULL) {
		table[indeks].AddToHead(p);
		size++;
	}
	else {
		while (table[indeks] != NULL) {
			indeks++;
		}
		table[indeks].AddToHead(p);
		size++;
	}
}

int HashTable::HashKey(Players p) {
	int value = p.ReturnDres();
	value%= size + 1;
	if (value >= 0 && value < lenght)
		return value;
	else {
		while (value > lenght)
			value -= lenght;
		return value;
	}
}

void HashTable::PrintTable() {
	cout << "Table: " << endl;
	for (int i = 0; i < lenght; i++) {
		cout << "[" << i << "]-> ";
		Players* tmp = table[i].ReturnHead();
		if (tmp != NULL) {
			tmp->Print();
			tmp = tmp->ReturnNext();
		}
		cout << endl;
	}
	
}