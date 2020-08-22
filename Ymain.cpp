#include<iostream>
#include"Ysorce.cpp"
using namespace std;
void main(void)
{
	Vector<int>v(50);
	v.add(0,1);
	v.add(1,11);
	v.add(2,111);
	v.add(3,1111);
	v.add(4,11211);
	v.addElement(123);
	cout<<"********************************************************************************************************"<<endl;
	cout<<"==================-Element Add-=================="<<endl;
	cout<<"1- "<<v.get(0)<<endl;
	cout<<"2- "<<v.get(1)<<endl;
	cout<<"3- "<<v.get(2)<<endl;
	cout<<"4- "<<v.get(3)<<endl;
	cout<<"5- "<<v.get(4)<<endl;
	cout<<"6- "<<v.get(5)<<endl;
	cout<<"==================-Method-=================="<<endl;
	cout<<"Find item "<<v.find(1111)<<endl;
	cout<<"elementAt 2index = " <<v.elementAt(2)<<endl;
	v.set(1,3);
	cout<<"elementAt  1 index after setting = " <<v.elementAt(1)<<endl;
	cout<<"If 123 is in Array "<<v.contains(123)<<endl;
	cout<<"indexOf= "<<v.indexOf(1111)<<endl;
	cout<<"lastIndexOf= "<<v.lastIndexOf(111)<<endl;
	cout<<"lastElement "<<v.lastElement()<<endl;
	cout<<"max cap= "<<v.capacity()<<endl;
	cout<<"Fierst Element = "<<v.firstElement()<<endl;
	cout<<"IS empty= "<<v.empty()<<endl;
	cout<<"Size is= "<<v.size()<<endl;
	cout<<"Find= "<<v.find(11)<<endl;
	cout<<"==================-Making Resize=================="<<endl;
	v.resize();
	cout<<"Max Cap After Resize= "<<v.capacity()<<endl;
	cout<<"==================-Making Copy=================="<<endl;
	Vector<int>t(v);
	cout<<"in copyer victor 1-  = "<<t.get(0)<<endl;
	cout<<"==================-Making Remove=================="<<endl;
	v.remove(111);
	cout<<"After Remove By Item 1-  = "<<v.get(2)<<endl;
	cout<<"Removed index 3 = "<<v.Remove(3)<<endl;
	cout<<"After Remove By Index 4-= "<<v.get(3)<<endl;
	cout<<"IF Array Is empty "<<v.isEmpty()<<endl;
	v.removeAllElements();
	cout<<"IS empty After Clear= "<<v.empty()<<endl;
	cout<<"remove element 1 is "<<v.remove(1)<<endl;
	cout<<"=====================Done=========================="<<endl;
	cout<<"Thx my God in the first and dr.suhad in the second"<<endl;
	Vector<int>z(20);
	z = t + v;
	cout << "t+v=  ";
	for (int i = 0; i < z.size(); i++)
		cout << z.get(i);
	////////////////////////////////////////////////
	system("pause");
}