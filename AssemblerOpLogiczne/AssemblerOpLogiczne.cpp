// AssemblerOpLogiczne.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <bitset>

void ShowDecHexBin(int);
int logicOR(int, int);
int logicXOR(int, int);
int logicAND(int, int);


using namespace std;

int main()
{
	logicOR(150, 100); cout << endl;
	logicXOR(150, 100); cout << endl;
	logicAND(150, 100); cout << endl;

	getchar();
	return 0;
}

void ShowDecHexBin(int number) {
	cout << dec << number;
	cout << "\tHex:" << hex << number;
	cout << "\tBin:" << bitset<16>(number) << endl;
}

int logicOR(int a, int b) {
	int result;
	cout << bitset<16>(a) << "  OR" << endl << bitset<16>(b) << "  :" << endl;
	__asm {
		xor eax, eax
		mov eax, a
		mov ebx, b
		or eax, ebx
		mov result, eax
	}
	cout << bitset<16>(result) << endl;
	return result;
}

int logicXOR(int a, int b) {
	int result;
	cout << bitset<16>(a) << "  XOR" << endl << bitset<16>(b) << "  :" << endl;
	__asm {
		xor eax, eax
		mov eax, a
		mov ebx, b
		xor eax, ebx
		mov result, eax
	}
	cout << bitset<16>(result) << endl;
	return result;
}

int logicAND(int a, int b) {
	int result;
	cout << bitset<16>(a) << "  AND" << endl << bitset<16>(b) << "  :" << endl;
	__asm {
		xor eax, eax
		mov eax, a
		mov ebx, b
		and eax, ebx
		mov result, eax
	}
	cout << bitset<16>(result) << endl;
	return result;
}
