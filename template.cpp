#include<iostream>
#include<string>
using namespace std;

//实现通用对数据进行排序的函数
//规则从大到小
//算法 选择
//测试 char数组 、int数组

template<class T>
void mySwap(T&a, T&b)
{
	T temp = a;
	a = b;
	b = temp;
}


//排序算法
template <class T>
void mySort(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		int max = i;//认定最大值的下标

		for (int j = i + 1; j < len; j++)
		{
			//认定是最大值比遍历的数值要小，说明j下标的元素才是真正的最大值
			if (arr[max] > arr[j])
			{
				max=j;//更新最大值下标
			}
		}
		if(max!=i)
		{
			//交换max和i元素
			mySwap(arr[max], arr[i]);
		}
	}
}
template<class T>
void printArray(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";

	}
	cout << endl;
}


void test01()
{
	//测试char数组
	char charArr[] = "abdcfe";
	int num = sizeof(charArr) / sizeof(char);
	mySort(charArr, num);
	printArray(charArr, num);
}

void test02()
{
	int intArr[] = { 7,5,1,3,9,2,4,6,8 };
	int num = sizeof(intArr) / sizeof(int);
	mySort(intArr, num);
	printArray(intArr, num);
}

int main()
{
	test01();
	test02();

	system("pause");
	return 0;

}
