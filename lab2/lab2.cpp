// lab2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
	double a, b, c,j,k,l;
	int n,d,e,f,g,h,i;
	
   //cout << "Hello World!\n";
	cout << "vyberite nomer zadaniya\n";
	cin >> n;

	switch(n)
	{ 
	
		case 1:
			cout << "vvedite dliny otrezkov\n";
			cin >> a >> b>> c;
			if ((a + b > c) && (a + c > b) && (b + c > a)) {
				cout << "treugolnik suschestvuet\n";
			}
			else {
				cout << "treugolnik ne suschestvuet\n";
			}
				break;
		case 2:
			cout << "vvedite nomer goda\n";
			cin >> d;
			if ((d % 400 ==0) || (d % 4==0)&&(d % 100!=0)) {
				cout << "god visokosniy\n";
			}
			else {
				cout << "god ne visokosniy\n";
			}
			break;
		case 3:
		case 4:
			cout << "vvedite koordinaty pervogo ugla (x,y) \n";
			cin >> d >> e;
			cout << "vvedite koordinaty vtorogo ugla (x,y) \n";
			cin >> f >> g;
			cout << "vvedite koordinaty tochki (x,y)\n";
			cin >> h >> i;
			if ( (((h-d)*(h-f)) < 0) && (((i - e) * (i - g)) < 0) ) {
				cout << "tochka lezhit v pryamougolnike\n";
			}
			else {
				cout << "tochka ne  lezhit v pryamougolnike\n";
			}
			break;
		case 5:
			cout << "vvedite x\n";
			cin >> a;
			if (abs(a)>=2) 
				cout << "f(x) =0\n";
			else if (abs(a) <= 1) 
				cout << "f(x) =1\n";
			else 
				cout << "f(x) = " << abs(a)-1;
			break;
		case 6:
			cout << "vvedite a,b,c\n";
			cin >> a >> b >> c;
			j = b * b - 4 * a * c;
			if (j>0)
				cout << "x1 = "<< (-b-sqrt(j))/2/a <<"x2 = " << (-b + sqrt(j)) / 2 / a;
			else if (j==0)
				cout << "x1 = " << -b / 2 / a;
			else
				cout << "korney net";
			break;
		case 7:
			cout << "vvedite summu deneg\n";
			cin >>d;
			cout <<"10: " << d /10 <<"\n";
			cout << "5: " << d % 10 / 5 << "\n";
			cout << "2: " << d % 10 % 5 / 2 << "\n";
			cout << "1: " << d % 10 % 5 % 2 << "\n";
			break;
	}
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
