
#include "write.h"
#include <iostream>
#include <fstream>

using std::cin;
using std::cout;
using std::endl;
using std::ofstream;

void write(int node, int **a) {//m��ʾ���ĸ���
/*	int **a = new int *[m]; //��̬�����ά����a[m][n]
	for (int i = 0; i < m; ++i) {
		a[i] = new int[n];
	}*/
	ofstream out;
	out.open("network.txt");
	if (out) {
		for (int j = 0; j < node; ++j) {
			for (int k = 0; k < node; ++k) {
				out << a[j][k] << " ";
			}
			out << endl;
		}
	}
	out.close();
	/*for (int i = 0; i < row; i++) {//�ͷ�
		delete[] a[i];
	}
	delete[] a;*/
	cout << "�������";
}