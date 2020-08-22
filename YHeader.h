#pragma once
#ifndef AYVector					
#define AYVector
template<typename T>
class Vector
{
private:
	T* a;
	int maxcapl;
	int n;
public:
	Vector(T Mcap);//done
	Vector();//done
	Vector(const Vector& obj);//done
	~Vector();//done
	bool add(T item);
	void addElement(T item);//done
	inline bool empty()const { return n<=0; };//done
	inline int size()const{return n;};//done
	int capacity()const { return maxcapl; };//done
	T firstElement();//done
	int indexOf(T item);//done
	T lastElement();//done
	int lastIndexOf(T item);//done
	void resize();//done
	void add(T loc, T item);//done
	int find(T item)const;//done
	T get(T loc)const;//done
	bool remove(T item);//done
	T Remove(T index);//done
	void removeAllElements();//done
	void clear();
	bool contains(T item);//done
	bool isEmpty();//done
	void insertElementAt(T obj, T index);
	T elementAt(int loc);
	void set(int loc,T item);

};



#endif