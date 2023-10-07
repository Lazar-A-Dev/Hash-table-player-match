#pragma once
#include"List.h"
#include<iostream>
using namespace std;
class HashTable
{
protected:
	List* table;
	int size;
	int lenght;
public:

	HashTable();
	HashTable(int lenght);
	~HashTable();
	void AddToTable(Players p);
	int HashKey(Players p);
	void PrintTable();
};

