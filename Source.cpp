#include <iostream>
#include <cmath>
using namespace std;
#define PI 3.141592654
void Menu() {
    cout << endl << endl << endl << L"\t\t\t	Phan Mem Tinh Toan Luong Giac" << endl;
    cout << endl;
	cout << "\t\t\t\t    MENU" << endl;
	cout << endl << "\t\t\t\t1.Tinh ham sin" << endl;
	cout << endl << "\t\t\t\t2.Tinh ham cos" << endl;
	cout << endl << "\t\t\t\t3.Tinh ham tan" << endl;
	cout << endl << "\t\t\t\t4.Tinh ham cot" << endl;
	cout << endl << "\t\t\t\t5.Huong dan" << endl;
	cout << endl << "\t\t\t\t6.Gioi thieu" << endl;
}
int Choose() {
	cout << "Nhap lua chon cua ban vao day: ";
	int luachon;
	cin >> luachon;
	while (luachon != 1 && luachon !=2 && luachon !=3 && luachon != 4 && luachon != 5 && luachon != 6) {
		cout << "Vui long nhap lai: ";
		cin >> luachon;
	}
	return luachon;
}
void Tinh_Sin() {
	Sin_Menu:
	cout << "1.Tinh ham sin" << endl;
	cout << "2.Tinh ham sin^-1" << endl;

	cout << "Nhap lua chon cua ban vao day (ban co them bam 3 de tro ve menu): ";
	int Sin_Choose;
	cin >> Sin_Choose;

	while (Sin_Choose != 1 && Sin_Choose != 2 && Sin_Choose != 3) {
		cout << "Vui long nhap lai: ";
		cin >> Sin_Choose;
	}

	if (Sin_Choose == 1) {
		bool OutOfLoop = false;
		while (OutOfLoop == false) {
            cout << "Nhap x vao day: ";
		    long double x;
		    cin >> x;
		    cout << "sin(" << x << ") = " << sin(x);

			cout << endl << "Ban co muon lam lai? (1 la co,2 la khong): ";
			int Continue;
            cin >> Continue;

			while (Continue != 1 && Continue != 2) {
				cout << "Vui long nhap lai: ";
				cin >> Continue;
			}

			if (Continue == 2) {
				OutOfLoop = true;
			}
		}
		system("cls");
        goto Sin_Menu;
	}
	else if (Sin_Choose == 2) {
		bool OutOfLoop = false;
		while (OutOfLoop == false) {
            cout << "Nhap x vao day: ";
		    long double x;
		    cin >> x;
		    cout << "sin^-1(" << x << ") = " << asin(x) << " (rad) " << endl;
			cout << "sin^-1(" << x << ") = " << asin(x) * (180.0 / PI) << "*" << endl;

			cout << endl << "Ban co muon lam lai? (1 la co,2 la khong): ";
			int Continue;
            cin >> Continue;

			while (Continue != 1 && Continue != 2) {
				cout << "Vui long nhap lai: ";
				cin >> Continue;
			}

			if (Continue == 2) {
				OutOfLoop = true;
			}
		}
		system("cls");
        goto Sin_Menu;
	}
}
int main() {
    system("cls");
    
    Menu();

    int people_choose = Choose();

    if (people_choose == 1) {
		system("cls");
		Tinh_Sin();
	}
}