#pragma once
#include<iostream>
using namespace std;

// 自己的数组类

template <class T>
class MyArray
{
public:
	MyArray(int capacity)
	{
		cout << "有参构造调用" << endl;
		this->m_Capacity = capacity;
		this->m_size = 0;
		this->pAdress = new T[this->m_Capacity];
	}
	~MyArray()
	{
		cout << "析构" << endl;
		if (this->pAdress != NULL)
		{
			delete[] this->pAdress;
			pAdress = NULL;
		}
	}

	//拷贝构造 浅拷贝有重复释放的问题 需要深拷贝
	MyArray(const MyArray& arr)
	{
		cout << "深拷贝构造" << endl;
		//浅拷贝
		this->m_Capacity = arr.m_Capacity;
		this->m_size = arr.m_size;
		//this->pAddess = arr.pAddress;
		
		//深拷贝
		this->pAdress = new T[arr.m_Capacity];
		//将数据拷贝过去
		for (int i = 0; i < this->m_size; i++)
		{
			this->pAdress[i] = arr.pAdress[i];
		}
	}

	// operator =  防止浅拷贝问题 
	MyArray& operator = (const MyArray & arr)
	{
		cout << "等号深拷贝" << endl;
		//如果原来堆区有数据 先释放掉数据
		if ( this->pAdress !=NULL)
		{
			delete[] this->pAdress;
			this->pAdress = NULL;

			this->m_Capacity = 0;
			this->m_size = 0;
		}

		//深拷贝
		this->m_Capacity = arr.m_Capacity;
		this->m_size = arr.m_size;
		this->pAdress = new T[arr.m_Capacity];
		for (int i = 0; i < this->m_size; i++)
		{
			this->pAdress[i] = arr.pAdress[i];
		}
		return *this;
	}

	//尾插法
	void Push_Back(const T & val)
	{
		//判断容量是否够
		if (this->m_Capacity == this->m_size)
		{
			cout << "数组容量不够了,插入失败" << endl;
			return;
		}
		this->pAdress[this->m_size] = val;
		//更新数组大小
		this->m_size ++;
	}

	//尾删法
	void Pop_Back()
	{
		// 让用户访问不到最后一个元素 逻辑上的尾删
		if (this->m_size == 0)
		{
			cout << "删完了" << endl;
			return 0;
		}
		this->m_size --  ;
	}

	//通过下标访问元素
	//重载[]
	T&  operator [] (int index)
	{
		return this->pAdress[index];
	}

	//返回数组的容量
	int getCapacity()
	{
		return this->m_Capacity;
	}

	//返回数组的大小
	int getSize()
	{
		return this->m_size;
	}

private:

	T* pAdress; //指向堆区开辟的数组

	int m_Capacity; //容量
	int m_size;  //尺寸


};