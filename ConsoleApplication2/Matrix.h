#pragma once
#include <iostream>
class Matrix
{
public:
	Matrix(int m, int n);			 //����һ��m*n��ȫ�����
	Matrix(int n);				 //����һ��n*n�ĵ�λ����
	Matrix(const Matrix &);		 //�������캯�������
	Matrix(double* items, int m, int n);//�������鿽��һ������
	~Matrix();

	int getRowNum() const;				//���ؾ��������
	int getColNum() const;				//���ؾ��������

	Matrix Trans() const;				//������ת��
	//��������б任
	//���j=-1,���i����multiply��
	//���j��ȡֵ��Χ�ڣ��򽫵�i������multiply���ӵ�j��
	void RowSwap(int i, int j, double multiply);
	//��������
	void RowSwap(int i, int j);
	double get(int i, int j) const;			//���ؾ����i��j��Ԫ��
	void set(int i, int j, double val);		//���þ����i��j��Ԫ��

	Matrix operator +(const Matrix &m);	 	//�����������
	Matrix operator -(const Matrix &m);	 	//�����������
	Matrix operator *(const Matrix &m);	 	//�����������
	Matrix operator *(const double f);	 	//������Գ���,�����Ǿ�����ǰ�������ں�
	Matrix Inverse();
	void Matrix_free();                     //�ͷ��ڴ�
	friend std::ostream& operator <<(std::ostream &os, const Matrix &m);//������<<

private:
	double *item;		//ָ�������Ԫ�ص�ָ��
	int rowNum;		//��������
	int colNum;		//��������
};
