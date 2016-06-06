#include <iostream>  
using namespace std;

#include<vector>  
#include "BloomFilter.h"
/*
 利用  bitmap和 hash实现
*/


void Test()
{
	BloomFilter<> bf(30);
	bf.Set("布隆过滤器");
	bf.Set("AAAAAAAAAAA");
	bf.Set("qqqqqqqqq");

	cout << bf.IsIn("布隆过滤器") << endl;
	cout << bf.IsIn("ww") << endl;
}

void main()
{
	Test();
}