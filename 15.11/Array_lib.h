#pragma once

int** Array2d(int rows, int colms, int C);// �������� 2d ������� � ���������� ���  �� ���������
void output(int** array, int rows, int colms);//�����  2d �������
void cleanArray2d(int** array, int rows);
int** EmptyArray2d(int rows, int colms);