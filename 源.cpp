#include <iostream>  
using namespace std;

#include<vector>  
#include "BloomFilter.h"
/*
 ����  bitmap�� hashʵ��
*/


void Test()
{
	BloomFilter<> bf(30);
	bf.Set("��¡������");
	bf.Set("AAAAAAAAAAA");
	bf.Set("qqqqqqqqq");

	cout << bf.IsIn("��¡������") << endl;
	cout << bf.IsIn("ww") << endl;
}

void main()
{
	Test();
}