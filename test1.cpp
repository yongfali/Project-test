#include<iostream>
 using namespace std;
 
 class A{};
 
 class B{ char m_data;};
 
 class C{
 	char m_data[100];
 };
 
 class D{
 	char *data;
 	D():data(new char[100]){}
 	~D(){delete [] data;}
 };
 
 //参数 argc表示参数的数量，agrv表示参数数组，第一个为文件存放的地址 
 int main(int argc, char *argv[]){
 	char data[10];
 	char *pData = data;
 	
 	cout << sizeof(data) << endl;
 	cout << sizeof(pData) << endl;
 	
 	cout << sizeof(A) << endl;
	cout << sizeof(B) << endl;
	cout << sizeof(C) << endl;
	cout << sizeof(D) << endl;
		
 	//for(int i = 0; i < argc; i++)  
       // cout << "argument["<< i<< "] is: " << argv[i] << endl;  
    //system("pause");  
 }