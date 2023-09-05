#pragma once
#include<iostream>
using namespace std;

// �Լ���������

template <class T>
class MyArray
{
public:
	MyArray(int capacity)
	{
		cout << "�вι������" << endl;
		this->m_Capacity = capacity;
		this->m_size = 0;
		this->pAdress = new T[this->m_Capacity];
	}
	~MyArray()
	{
		cout << "����" << endl;
		if (this->pAdress != NULL)
		{
			delete[] this->pAdress;
			pAdress = NULL;
		}
	}

	//�������� ǳ�������ظ��ͷŵ����� ��Ҫ���
	MyArray(const MyArray& arr)
	{
		cout << "�������" << endl;
		//ǳ����
		this->m_Capacity = arr.m_Capacity;
		this->m_size = arr.m_size;
		//this->pAddess = arr.pAddress;
		
		//���
		this->pAdress = new T[arr.m_Capacity];
		//�����ݿ�����ȥ
		for (int i = 0; i < this->m_size; i++)
		{
			this->pAdress[i] = arr.pAdress[i];
		}
	}

	// operator =  ��ֹǳ�������� 
	MyArray& operator = (const MyArray & arr)
	{
		cout << "�Ⱥ����" << endl;
		//���ԭ������������ ���ͷŵ�����
		if ( this->pAdress !=NULL)
		{
			delete[] this->pAdress;
			this->pAdress = NULL;

			this->m_Capacity = 0;
			this->m_size = 0;
		}

		//���
		this->m_Capacity = arr.m_Capacity;
		this->m_size = arr.m_size;
		this->pAdress = new T[arr.m_Capacity];
		for (int i = 0; i < this->m_size; i++)
		{
			this->pAdress[i] = arr.pAdress[i];
		}
		return *this;
	}

	//β�巨
	void Push_Back(const T & val)
	{
		//�ж������Ƿ�
		if (this->m_Capacity == this->m_size)
		{
			cout << "��������������,����ʧ��" << endl;
			return;
		}
		this->pAdress[this->m_size] = val;
		//���������С
		this->m_size ++;
	}

	//βɾ��
	void Pop_Back()
	{
		// ���û����ʲ������һ��Ԫ�� �߼��ϵ�βɾ
		if (this->m_size == 0)
		{
			cout << "ɾ����" << endl;
			return 0;
		}
		this->m_size --  ;
	}

	//ͨ���±����Ԫ��
	//����[]
	T&  operator [] (int index)
	{
		return this->pAdress[index];
	}

	//�������������
	int getCapacity()
	{
		return this->m_Capacity;
	}

	//��������Ĵ�С
	int getSize()
	{
		return this->m_size;
	}

private:

	T* pAdress; //ָ��������ٵ�����

	int m_Capacity; //����
	int m_size;  //�ߴ�


};