// proje_V1.1.cpp : Konsol uygulamasý için giriþ noktasýný tanýmlar.
//

#include "stdafx.h"
#include<iostream>
#include<string>

using namespace std;

class harf
{
public:
	char veri;
	int deger;

};

struct dugum
{
	string kelime;
	int konum;
	struct dugum *sonraki;
	struct dugum *onceki;
};

class liste {
private:
	dugum *bas, *son;
public:
	liste()
	{
		//bas = NULL;
		//son = NULL;
	}
};


struct dugum *bas = NULL;
struct dugum *son = NULL;
void son_guncelle()
{
	struct dugum* ptr; 
	ptr = bas;
	while (ptr != NULL)
	{
		son = ptr; 
		ptr = ptr->sonraki;
	}
}

void basa_ekle(string eklenecek)
{
	int konum = 1;
	dugum *gecici = new dugum;
	gecici->kelime = eklenecek;
	//gecici->konum = konum;
	//konum++;
	gecici->sonraki = bas;
	gecici->onceki = NULL;
	bas->onceki = gecici;
	bas = gecici;
	son_guncelle();

}
void sona_ekle(string kelime)
{
	dugum *temp = new dugum;
	temp->kelime = kelime;
	temp->sonraki = NULL;
	temp->onceki = son;
	son->sonraki = temp;
	son = temp;
}

void metin_ekle()
{
	string metin;
	string kelime;
	cout << "Metni giriniz..." << endl;
	cin >> metin;
	getline(cin, metin);
	int uzunluk = metin.length();
	for (int i = 0; i <= uzunluk; i++)
	{
		if (metin[i] != ' ')
		{

			kelime += metin[i];

		}
		else
		{
			sona_ekle(kelime);
			cout << endl;
		}

	}
	cout << "Metin basariyla Eklendi..." << endl;



}

void listele()
{
	struct dugum *ptr;
	ptr = bas;
	while (ptr != NULL)
	{
		cout << ptr->kelime;
		ptr = ptr->sonraki;
	}
	cout << endl;
}
bool liste_bos_mu(dugum *bas)
{
	if (bas == NULL)
		return true;
	else
		return false;
}
void menu()
{
	int islem_numarasi;
	cout << "Yapmak istediginiz islem numarasini seciniz..." << endl;
	cout << " - 1 - Metin Girme" << endl;
	cout << " - 2 - Kelime Sayisi" << endl;
	cout << " - 3 - Kelime Listeleme" << endl;
	cout << " - 4 - Kelime Arama" << endl;
	cout << " - 5 - Kelime Silme" << endl;
	cout << " - 6 - Kelime Degistirme" << endl;
	cout << " - 7 - Cikis" << endl;
	cin >> islem_numarasi;
	switch (islem_numarasi)
	{
	case 1:
		metin_ekle();
		break;
	case 2:
		break;
	case 3:
		break;
	case 4:
		break;
	case 5:
		break;
	case 6:
		break;
	case 7:
		break;



	}


}
void kelime_armam(string aranacak)
{

}



void alfabetik_sirala(string eklenecek)
{
	if (liste_bos_mu(bas) == true)
		basa_ekle(eklenecek);
	else
	{

	}

}

int main()
{
	menu();
	/*class harf dizi[29];
	dizi[0].veri = 'a' || 'A'; dizi[0].deger = 29;
	dizi[1].veri = 'b' || 'B'; dizi[1].deger = 28;
	dizi[2].veri = 'c' || 'C'; dizi[2].deger = 27;
	dizi[3].veri = 'ç' || 'Ç'; dizi[3].deger = 26;
	dizi[4].veri = 'd' || 'D'; dizi[4].deger = 25;
	dizi[5].veri = 'e' || 'E'; dizi[5].deger = 24;*/
	
	
	
	
	
	
	
	listele();
	system("pause");
    return 0;
}

