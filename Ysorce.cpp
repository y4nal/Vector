#include<iostream>
#include"YHeader.h"
using namespace std;
////////////////////-Constructor -/////////////////
template<typename T>
Vector<T>::Vector(int Mcap)
{
	n = 0;
	maxcapl = Mcap;
	a = new T[maxcapl];
}
template<typename T>
Vector<T>::Vector()
{
		n = 0;
	maxcapl = 10;
	a = new T[maxcapl];
}
//////////////-Distructor-/////////////////////
template<typename T>
Vector<T>::~Vector() {
	if (a != NULL)
		delete[]a;
	a = NULL;
}
/////////////-Copy-/////////////////////
template<typename T>
Vector<T>::Vector(const Vector&obj)
{
	this->maxcapl=obj.maxcapl;
	this->n=obj.n;
	a=new T[maxcapl];
	for(int i=0;i<obj.maxcapl;i++)this->a[i]=obj.a[i];

}
////////////////////-Resize-////////////////
template<typename T>
void Vector<T>::resize() {
	int* b;
	b = new int[2 * maxcapl];
	maxcapl = maxcapl * 2;
	for (int i = 0;i < n;i++)
		b[i] = a[i];
	delete[]a;
	a = b;
}
////////////////-Add-///////////////////////////////
template<typename T>
bool Vector<T>::add(T item)
{
	if(n>=maxcapl)
	{
			Vector<T>::resize();
			a[n]=item;
			n++;
	}
	else
		a[n]=item;
		return true;
}
/////////////// -Add by Location - //////////////
template<typename T>
void Vector<T>::add(T loc, T item)
{
	if (loc >= maxcapl)
	{
		Vector<T>::resize();
		a[loc] = item;
		n++;
	}
	else
		if (a[loc] == NULL) {
			a[loc] = item;
			n++;
		}
		else
			if (a[loc] != NULL)
			{

				for (int i = n;i < loc;i--)
					a[i] = a[i - 1];
				a[loc] = item;
				n++;
			}
}
/////////////// -addElement-/////////////////
template<typename T>
void Vector<T>::addElement(T item) {
	if (n >= maxcapl)
	{
		Vector<T>::resize();
		a[n] = item;
		n++;
	}
	else
	{
		a[n] = item;
		n++;}
}
/////////////////-firstElement-//////////////
template<typename T>
T Vector<T>::firstElement() {
	return a[0];
}
//////////////// -indexOf-////////////////
template<typename T>
int Vector<T>::indexOf(T item)
{
	for (int i = 0;i < n;i++)
		if (a[i] == item)return i;
	return -1;
}
////////////////-remove-///////////////
template<typename T>
bool Vector<T>::remove(T item) 
{
	int i=0;
for(i;a[i]!=item&&i<n;i++)
	
if(i!=n)
{
	for(;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	n--;
	return true;
}
	return false;
}	

//////////////-	isEmpty-////////////
template<typename T>
bool Vector<T>::isEmpty() {
   {
	if(a==NULL)
		return true;
	else
		return false;
   }

}
/////////////-lastElement-/////////////
template<typename T>
T Vector<T>::lastElement()
{
	return a[n-1];
}
//////////////-lastIndexOf-//////////
template<typename T>
int Vector<T>::lastIndexOf(T item)
{
	if (!Vector<T>::empty())
	{
		if (Vector<T>::find(item))
		{
			int last = 0;
			for (int i = 0;i < n;i++)
				if (a[i] == item)last = i;
			return last;
		}
     return -1;
	}
	return -1;
}
template<typename T>
T Vector<T>::Remove(T index)
{
	if(index<0||index>=n)return -1;
	else 
	{
		int w;
		int i=index;
		w=a[i];
		for(;i<n-1;i++)
		{
			a[i]=a[i+1];
		}
		n--;
		return w;
	}
}
///////////////-Find-////////////
template<typename T>
int Vector<T>::find(T item)const
{
	int z=0;
	for (int i = 0;i <= n;i++)
		if (a[i] == item)z++;
	if(z>0)
		return 1;
		else
			return -1;
}
////////////////-Get-//////////////
template<typename T>
T Vector<T>::get(T loc)const {
	return a[loc];

}
////////////-removeAllElements-//////////
template<typename T>
void Vector<T>::removeAllElements()
{
	n=0;
}
template<typename T>
bool Vector<T>::contains(T item)
{
	 if (Vector<T>::find(item))
		 return true;
	 else 
	 return false;
}
//////////////////////////////
template<typename T>
void Vector<T>::insertElementAt(T obj, T index)
{
	if(n>=Maxcap)
		{
			Vector<T>::resize();
			a[n]=obj;
		}
	else
		if(a[index]==NULL)
		{
			a[index]=obj;
			n++;
		}
		else
			if(a[index]!=NULL)
				for(int i=n;i<index;i--)
					a[i]=a[i-1];
	a[index]=obj;
	n++;
}
template<typename T>
T Vector<T>::elementAt(int loc)
{
	return Vector<T>::get( loc);
}
template<typename T>
void Vector<T>::clear()
{
	Vector<T>::removeAllElements
}
template<typename T>
void Vector<T>::set(int loc ,T item)
{
	if(loc<0||loc>=n)
		cout<<"Error U Can`t set it";
	else
		a[loc]=item;
}

///////////////////////////////////-done-////////////////////