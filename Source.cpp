#include <iostream>
#include <cmath>
using namespace std;
#define PI 3.141592654
// Khai bao cac ham //
void Menu();
int Choose();
void Tinh_Sin();
void Tinh_Cos();
void Tinh_Tan();
void Tinh_Cot();
void Process();
void Introduction();
void Exit();
////////////////////
void Menu() {
    cout << endl << endl << endl << "\t\t\t	Phan Mem Tinh Toan Luong Giac" << endl;
    cout << endl;
	cout << "\t\t\t\t    MENU" << endl;
	cout << endl << "\t\t\t\t1.Tinh ham sin" << endl;
	cout << endl << "\t\t\t\t2.Tinh ham cos" << endl;
	cout << endl << "\t\t\t\t3.Tinh ham tan" << endl;
	cout << endl << "\t\t\t\t4.Tinh ham cot" << endl;
	cout << endl << "\t\t\t\t5.Gioi thieu" << endl;
	cout << endl << "\t\t\t\t6.Thoat" << endl;
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

		    long double nghiem1 = asin(a),nghiem2 = PI - asin(a);
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
void Tinh_Cos() {
	cout << "1.Tinh ham cos" << endl;
	cout << "2.Tinh ham cos^-1" << endl;
	cout << "3.Tinh cos(x) = a" << endl;
	cout << "4.Tinh cos(x) = cos(a)" << endl;

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
		    cout << "cos(" << x << ") = " << cos(x);

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
        Tinh_Cos();
	}
	else if (Sin_Choose == 2) {
		bool OutOfLoop = false;
		while (OutOfLoop == false) {
            cout << "Nhap x vao day: ";
		    long double x;
		    cin >> x;
		    cout << "cos^-1(" << x << ") = " << acos(x) << " (rad) " << endl;
			cout << "cos^-1(" << x << ") = " << acos(x) * (180.0 / PI) << "*" << endl;

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
        Tinh_Cos();
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

		    int k = acos(a); // sin(k) = a

		    long double nghiem1 = acos(k),nghiem2 = -acos(k);
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
		Tinh_Cos();
	}
	else if (Sin_Choose == 4) {
		bool OutOfLoop = false;
		while (OutOfLoop == false) {
            long double a;
		    cout << "Nhap a = ";
		    cin >> a;

		    long double nghiem1 = acos(a),nghiem2 = -acos(a);
		    if (nghiem1 == nghiem2) {
			   cout << "Phuong trinh co 1 nghiem: " << nghiem1 << " + k2r" << endl;
		    }
		    else {
			   cout << "Phuong trinh co 2 nghiem: " << endl;
			   cout << "Nghiem 1 : " << nghiem1 << " + k2r" << endl;
			   cout << "Nghiem 2 : -" << nghiem2 << " + k2r" << endl;
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
		Tinh_Cos();
	}
}
void Tinh_Tan() {
	cout << "1.Tinh ham tan" << endl;
	cout << "2.Tinh ham tan^-1" << endl;
	cout << "3.Tinh tan(x) = a" << endl;
	cout << "4.Tinh tan(x) = tan(a)" << endl;

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
		    cout << "tan(" << x << ") = " << tan(x);

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
        Tinh_Tan();
	}
	else if (Sin_Choose == 2) {
		bool OutOfLoop = false;
		while (OutOfLoop == false) {
            cout << "Nhap x vao day: ";
		    long double x;
		    cin >> x;
		    cout << "tan^-1(" << x << ") = " << atan(x) << " (rad) " << endl;
			cout << "tan^-1(" << x << ") = " << atan(x) * (180.0 / PI) << "*" << endl;

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
        Tinh_Tan();
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

		    int k = atan(a); 

		    cout << "Phuong trinh co 1 nghiem la: " << k << " + kr" << endl;

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
		Tinh_Tan();
	}
	else if (Sin_Choose == 4) {
		bool OutOfLoop = false;
		while (OutOfLoop == false) {
            long double a;
		    cout << "Nhap a = ";
		    cin >> a;

		    cout << "Phuong trinh co 1 nghiem la: " << atan(a) << " + kr" << endl;

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
		Tinh_Tan();
	}
}
void Tinh_Cot() {
	cout << "1.Tinh ham cot" << endl;
	cout << "2.Tinh ham cot^-1" << endl;
	cout << "3.Tinh cot(x) = a" << endl;
	cout << "4.Tinh cot(x) = cot(a)" << endl;

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
		    cout << "cot(" << x << ") = " << 1 / tan(x);

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
        Tinh_Cot();
	}
	else if (Sin_Choose == 2) {
		bool OutOfLoop = false;
		while (OutOfLoop == false) {
            cout << "Nhap x vao day: ";
		    long double x;
		    cin >> x;
		    cout << "tan^-1(" << x << ") = " << 1 / atan(x) << " (rad) " << endl;
			cout << "tan^-1(" << x << ") = " << (1 / atan(x)) * (180.0 / PI) << "*" << endl;

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
        Tinh_Cot();
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

		    int k = 1 / atan(a); 

		    cout << "Phuong trinh co 1 nghiem la: " << k << " + kr" << endl;

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
		Tinh_Cot();
	}
	else if (Sin_Choose == 4) {
		bool OutOfLoop = false;
		while (OutOfLoop == false) {
            long double a;
		    cout << "Nhap a = ";
		    cin >> a;

		    cout << "Phuong trinh co 1 nghiem la: " << 1 / atan(a) << " + kr" << endl;

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
		Tinh_Cot();
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
	else if (people_choose == 2) {
		system("cls");
		Tinh_Cos();
	}
	else if (people_choose == 3) {
		system("cls");
		Tinh_Tan();
	}
	else if (people_choose == 4) {
		system("cls");
		Tinh_Cot();
	}
	else if (people_choose == 5) {
		system("cls");
		Introduction();
	}
	else if (people_choose == 6) {
		Exit();
	} 
}
void Introduction() {
	cout << "Day la phan mem tinh ham luong giac" << endl;

	cout << endl << "--Hoangbonduy (28/9/2020)--" << endl;

	cout << endl << "Nhap phim bat ky de tro ve man hinh chinh: ";

	string temp;
	cin >> temp;
    
	Process();
}
void Exit() {
	exit(0);
}
int main() {
   Process();
}