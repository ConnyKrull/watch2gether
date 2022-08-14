#include <iostream>
#include <Windows.h>
#include <shellapi.h>
#define forx(x) for(int i = 0; i<x; i++)

class mainC {
public:
	void spamFenster() {
			ShellExecute(0, 0, L"https::/w2g.tv", 0,0, NULL);



	}



};


int main() {
	mainC mainF;
	mainF.spamFenster();





}