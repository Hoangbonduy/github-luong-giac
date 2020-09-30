#include <iostream>
#include <cmath>
using namespace std;
#define PI 3.141592654
// Khai bao cac ham //
void Menu();
int Choose();
void Tinh_Sin();
void Process();
////////////////////
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
	cout << endl << "\t\t\t\t7.Thoat" << endl;
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
	cout << "1.Tinh ham sin" << endl;
	cout << "2.Tinh ham sin^-1" << endl;
	cout << "3.Tinh sin(x) = a" << endl;
	cout << "4.Tinh sin(x) = sin(a)" << endl;

	cout << "Nhap lua chon cua ban vao day (ban co them bam 0 de tro ve menu): ";
	int Sin_Choose;
	cin >> Sin_Choose;

	while (Sin_Choose != 1 && Sin_Choose != 2 && Sin_Choose != 0 && Sin_Choose != 3 && Sin_Choose != 4) {
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
        Tinh_Sin();
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
        Tinh_Sin();
	}
	else if (Sin_Choose == 0) {
        Process();
	}
	else if (Sin_Choose == 3) {
		bool OutOfLoop = false;
		while (OutOfLoop == false) {
            long double a;
		    cout << "Nhap a = ";
		    cin >> a;

		    int k = asin(a); // sin(k) = a

		    long double nghiem1 = asin(k),nghiem2 = PI - asin(k);
		    if (nghiem1 == nghiem2) {
			   cout << "Phuong trinh co 1 nghiem: " << nghiem1 << " + k2r" << endl;
		    }
		    else {
			   cout << "Phuong trinh co 2 nghiem: " << endl;
			   cout << "Nghiem 1 : " << nghiem1 << " + k2r" << endl;
			   cout << "Nghiem 2 : " << nghiem2 << " + k2r" << endl;
		    }

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
		Tinh_Sin();
	}
	else if (Sin_Choose == 4) {
		bool OutOfLoop = false;
		while (OutOfLoop == false) {
            long double a;
		    cout << "Nhap a = ";
		    cin >> a;

		    long double nghiem1 = a,nghiem2 = PI - a;
		    if (nghiem1 == nghiem2) {
			   cout << "Phuong trinh co 1 nghiem: " << nghiem1 << " + k2r" << endl;
		    }
		    else {
			   cout << "Phuong trinh co 2 nghiem: " << endl;
			   cout << "Nghiem 1 : " << nghiem1 << " + k2r" << endl;
			   cout << "Nghiem 2 : " << nghiem2 << " + k2r" << endl;
		    }

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
		Tinh_Sin();
	}
}
void Process() {
    system("cls");
    
    Menu();

    int people_choose = Choose();

    if (people_choose == 1) {
		system("cls");
		Tinh_Sin();
	}
}
int main() {
   Process();
}