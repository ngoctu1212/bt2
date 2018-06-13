#include<stdio.h>
#include<fstream>
#include<iostream>
#include<sstream>
#include<stack>
using namespace std;
string s;
void doc_file(){
	ifstream file;
	file.open("BRACKET.INP");
	if (file.fail() == true){
		cout << "File khong ton tai";
	}
	file >> s;
	cout << s << endl;
	file.close();
}
void Bai1(){
	doc_file();
	int n = 0;
	stack <char> st;
	for (int i = 0; i < s.length(); i++){
		if (s[i] == '(') st.push(s[i]);

		else {
			if (!st.empty())	st.pop();
			else { n++; }
		}
	}
	int  k = n;
	while (!st.empty())
	{
		n++;
		st.pop();
	}
	cout << n << endl;
	if (n != 0)
	{
		for (int i = 1; i <= n; i++)
		{
			if (i <= k) cout << "(" << i - 1 << endl;
			else cout << ")" << s.length() + i - k - 1 << endl;

		}
	}
}
int main(){
	Bai1();
	return 0;
}