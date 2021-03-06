// sortiranja.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <stdio.h> 

using namespace std;

void bubblesort(int lista[], int velicina) {
	int temp;
	bool bila_zamjena = true;

	for (int i = 0; bila_zamjena == true; i++) {
		bila_zamjena = false;
		for (int j = 0; j < velicina - 1 - i; j++) {
			if (lista[j] > lista[j + 1]) {
				temp = lista[j];
				lista[j] = lista[j + 1];
				lista[j + 1] = temp;
				bila_zamjena = true;
			}
		}
	}
}

void selectionsort(int lista[], int velicina) {
	int temp;

	for (int i = 0; i < velicina; i++) {
		
		int min = i;
		for (int j = i + 1; j < velicina; j++) {

			if (lista[j] < lista[min]) {
			min = j;
			
			}
		}
		temp = lista[i];
		lista[i] = lista[min];
		lista[min] = temp;
	}
}

void insertionsort(int lista[], int velicina) {
	
	for (int i = 0; i < velicina; i++) 
	{
		int temp = lista[i];
		int manji = i - 1;

		while (manji >= 0 && lista[manji] > temp) 
		{
			lista[manji + 1] = lista[manji];
			manji = manji - 1;
		}
		lista[manji + 1] = temp;
	}
	

}

int main()
{
	int lista[5] = {25,5,214,4,8}; 
	//bubblesort(lista, 5);
	//selectionsort(lista, 5);
	insertionsort(lista, 5);


	for (int i = 0; i < 5; i++) {
		cout << lista[i] << endl;
	}
}

