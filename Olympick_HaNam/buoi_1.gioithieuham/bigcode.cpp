#include <iostream>
#include <fstream>
#include<vector>
#include<string>
#include<cstring>
#pragma warning(disable:4996)
using namespace std;
typedef struct DT {
	string copy;
}DT;
class poly
{
public:

	double *coef;
	int deg;
	
	poly(int _deg = 0);
	poly(const poly &);
	poly(int k, double v);
	~poly() { delete coef; }
	poly & operator = (const poly &);
	double value(double);
	double & operator [](int k)const { return coef[k]; }
	poly operator * (const poly &)const;
	poly operator + (const poly &)const;
	poly operator - (const poly &)const;
	poly operator - ()const;

	poly operator * (double);
	poly operator + (double f) { return (*this) + poly(0, f); }
	poly operator - (double f) { return (*this) - poly(0, f); }

	friend poly operator * (double f, poly a) { return  a * f; }
	friend poly operator + (double f, poly a) { return  a + f; }
	friend poly operator - (double f, poly a) { return -a + f; }

	friend ostream & operator << (ostream &, const poly &);
	friend istream & operator >> (istream &, poly &);
	void set(int m, double v[]);
	friend poly Tao_Da_Thuc(DT s);
};

void poly::set(int m, double v[])
{
	this->~poly();
	deg = m;
	coef = new double[deg + 1];
	for (int k = 0; k <= deg; k++) coef[k] = v[k];
}

poly::poly(int _deg)
{
	deg = _deg;
	if (deg < 0) deg = 0;
	coef = new double[deg + 1];
	for (int k = 0; k <= deg; k++) coef[k] = 0;
}

poly::poly(const poly &a)
{
	deg = a.deg;
	coef = new double[deg + 1];
	for (int k = 0; k <= deg; k++) coef[k] = a[k];
}

poly& poly:: operator = (const poly &b)
{
	if (this != &b)
	{
		this->~poly();
		deg = b.deg;
		coef = new double[deg + 1];
		for (int k = 0; k <= deg; k++) coef[k] = b.coef[k];
	}
	return *this;
}

poly::poly(int k, double v)
{
	deg = k;
	coef = new double[k + 1];
	for (int j = 0; j < deg; j++) coef[j] = 0;
	coef[deg] = v;
}


poly poly:: operator * (double f)
{
	poly c(*this);
	for (int k = 0; k <= deg; k++) c[k] *= f;
	while (c.deg && c[c.deg] == 0) c.deg--;
	return c;
}

poly poly::operator + (const poly &b)const
{
	if (deg <= b.deg)
	{
		poly c(b);
		for (int k = 0; k <= deg; k++) c[k] += coef[k];
		while (c.deg && c[c.deg] == 0) c.deg--;
		return c;
	}
	else return b + *this;
}

poly poly::operator - ()const
{
	poly c(*this);
	for (int k = 0; k <= deg; k++) c[k] = -c[k];
	return c;
}

poly poly::operator - (const poly &b)const
{
	return *this + -b;
}

poly poly::operator * (const poly &b)const
{
	poly c(deg + b.deg);
	for (int k = 0; k <= deg; k++)
		for (int j = 0; j <= b.deg; j++)
			c[k + j] = c[k + j] + coef[k] * b[j];
	while (c.deg && c[c.deg] == 0) c.deg--;
	return c;
}


int operator == (const poly &a, const poly &b)
{
	if (a.deg != b.deg) return 0;
	int k = 0;
	while (k <= a.deg && a[k] == b[k]) k++;
	return k > a.deg;
}

double poly::value(double x)
{
	double val = coef[deg];
	for (int k = deg - 1; k >= 0; k--)
		val = val*x + coef[k];
	return val;
}
ostream & operator << (ostream & pout, const poly &p)
{
	int k = 0;
	while (k <= p.deg && p[k] == 0) k++;
	if (k > p.deg) { pout << 0; return pout; }
	if (k == 0) pout << p[k];
	else
	{
		if (p[k] == 1) pout << "x";
		else if (p[k] == -1) pout << "-x";
		else pout << p[k] << "x";
		if (k > 1) pout << "^" << k;
	}

	while (++k <= p.deg)
		if (p[k] > 0)
		{
			pout << " + ";
			if (p[k] != 1) pout << p[k];
			pout << "x"; if (k > 1) pout << "^" << k;
		}
		else if (p[k] < 0)
		{
			pout << " - ";
			if (p[k] != -1) pout << -p[k];
			pout << "x"; if (k > 1) pout << "^" << k;
		}
	return pout;
}

istream & operator >> (istream & pin, poly &p)
{
	do
	{
		cout << "Bac cua da thuc: "; pin >> p.deg;
	} while (p.deg < 0);

	p.coef = new double[p.deg + 1];
	cout << "Nhap lien tiep " << p.deg + 1 << " he so tu bac 0 den bac " << p.deg << ": ";
	for (int k = 0; k <= p.deg; k++) pin >> p[k];
	while (p[p.deg] == 0) p.deg--;
	return pin;
}
void File_end(ifstream &filein, vector<DT> &dt) {
	DT p;
	while (!filein.eof()) {
		getline(filein, p.copy);
		dt.push_back(p);
	}
}
void Tong(vector<poly>&c, vector<char>index, char a1, char b1) {
	int i, j;
	poly a;
	for (i = 0; i < index.size(); i++) {
		if (a1 == index[i]) break;
	}
		
	for (j = 0; j < index.size(); j++) {
		if (b1 == index[j]) break;
	}	
	a = c[i] + c[j];
	c.push_back(a);
}
void Hieu(vector<poly>&c, vector<char>index, char a1,char b1) {
	int i, j;
	poly a;
	for (i = 0; i < index.size(); i++) {
		if (a1 == index[i]) break;
	}
		
	for (j = 0; j < index.size(); j++) {
		if (b1 == index[j]) break;
	}
		
	a = c[i] - c[j];
	c.push_back(a);
}
void Nhan(vector<poly>&c, vector<char>index, char a1, char b1) {
	int i, j;
	poly a;
	for (i = 0; i < index.size(); i++) {
		if (a1 == index[i]) break;
	}
		
	for (j = 0; j < index.size(); j++) {
		if (b1 == index[j]) break;
	}
	a = c[i] * c[j];
	c.push_back(a);
	
}
int Dem(DT s) {
	int count = 0, i = 0;
	while (s.copy[i] != ']') {
		if (s.copy[i] == ' ')
			count++;
		i++;
	}
	return count;
}
poly Tao_Da_Thuc(DT s) {
	int k = 0, l = 0,i=0;
	double hs[10];
	poly p;
	char *s1 = new char[Dem(s) - 2];
	while (s.copy[k] != '\0') {
		if (s.copy[k] == '[') {
			while (s.copy[k] != ']') {
				k++;
				s1[l] = s.copy[k];
				l++;
			}
			
		}
		k++;
	}
		char * p1 = strtok(s1, " ");
		while (p1 != 0)
		
		p.deg = i - 1;
		p.coef = new double[p.deg + 1];
		i = 0;
		for (int k = p.deg; k >= 0; k--) {
			p[k] = hs[i];
			i++;
		}
		return p;
}
void main()
{
	vector<poly> a;
	vector<char> index;
	char z;
	int k;
	vector<DT>s;
	poly b;
	ifstream filein("Text.txt", ios::in);
	File_end(filein, s);
	for (int j = 0; j < s.size(); j++) {
		int i = 0;
		z = s[j].copy[1];
		index.push_back(z);
		while (s[j].copy[i] != '\0') {
			if (s[j].copy[i] == '[') {
				b = Tao_Da_Thuc(s[j]);
				cout << b <<endl;
			}
			if (s[j].copy[i] == '+') {
				if (s[j].copy[i - 2] == ']') {
					for (k = 0; k < index.size(); k++) {
						if (s[j].copy[i + 3] == index[k])break;
					}
					b = b + a[k];
					a.push_back(b);
				}
				if (s[j].copy[i - 2] != ']') {
					char a1 = s[j].copy[i - 2];
					char b1 = s[j].copy[i + 3];
					Tong(a, index, a1, b1);
				}
			}
			if (s[j].copy[i] == '-'&&s[j].copy[i+1]==' ') {
				if (s[j].copy[i - 2] == ']') {
					for (k = 0; k < index.size(); k++) {
						if (s[j].copy[i + 3] == index[k])break;
					}
					b = b - a[k];
					a.push_back(b);
				}
				if (s[j].copy[i - 2] != ']') {
					char a1 = s[j].copy[i - 2];
					char b1 = s[j].copy[i + 3];
					Hieu(a, index, a1, b1);
					
				}
			}
			if (s[j].copy[i] == '*') {
				if (s[j].copy[i - 2] == ']') {
					for (k = 0; k < index.size(); k++) {
						if (s[j].copy[i + 3] == index[k])break;
					}
					b = b * a[k];
					a.push_back(b);
				}
				if (s[j].copy[i - 2] != ']') {
					char a1 = s[j].copy[i - 2];
					char b1 = s[j].copy[i + 3];
					Nhan(a, index, a1, b1);
					
				}
			}
			i++;
		}
	}
	system("pause ");
}
