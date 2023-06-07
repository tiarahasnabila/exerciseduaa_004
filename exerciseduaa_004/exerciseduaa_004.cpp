// ex#include <iostream>
using namespace std;

class bidangDatar {
	private:
	int x; //variabel untuk menyimpan input dari lingkaran maupun bujursangkar
	public:
	bidangDatar(){ //constructor
		x = 0;
	}
	virtual void input(){} // fungsi yang menerima input dan mengirim input melalui fungsi setX untuk disimpan di x
	virtual float Luas(int a) { return 0; } //fungsi untuk menghitung luas
	virtual float Keliling(int a) { return 0; } //fungsi untuk menghitung keliling
	void setX (int a) { //fungsi untuk memberi/mengirim nilai pada x
		this->x = a;
	}
	int getX(){ //fungsi untuk membaca/mengambil nilai dalam x
		return x;
	}
};

class Lingkaran : public bidangDatar{
public:
	virtual void input();
	cout << " Lingkaran dibuat" << endl;
	cout << " Masukkan jejari " << endl;
	virtual float Luas(int a) { return 0; }
	virtual float Keliling(int a) { return 0; }
};

class Bujursangkar :public bidangDatar { 
public : 
	virtual void input() {}
		cout << "Bujursangkar dibuat" << endl;
		cout << " Masukkan sisi " << endl;
		virtual float Luas(int a)	{return 0;}
		virtual Keliling(int a)		{return 0;}
};

int main() {	Lingkaran;	Bujursangkar;	return 0;};