#pragma once
#include<iostream>
#include"Players.h"
using namespace std;
class List {
protected:
	Players* head;

public:

	List() {
		head = NULL;
	}

	~List() {}

	void AddToHead(Players p) {
		head = new Players(head, p.ReturnIme(), p.ReturnPrezime(), p.ReturnDres(), p.ReturnOznakaTima(), p.ReturnOznakaProtivnika());
	}

	Players* ReturnHead() {
		return head;
	}

	//bool operator==(Players* p) {
		//return (head->ReturnDres() == p->ReturnDres() && head->ReturnIme() == p->ReturnIme());
	//}

	bool operator==(int p) {
		if (head == NULL)
			return true;
		return false;
	}
	
	bool operator!=(int p) {
		if (head != NULL)
			return true;
		return false;
	}
};
