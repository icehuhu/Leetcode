#include "stdafx.h"
#include <iostream>
#include <time.h>
#include <string>
#include <map>
#include <unordered_map>  
#include <vector>
#include <algorithm>

 struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

 ListNode* ConvertVectortoListNode(std::vector<int>& vec)
 {
	 ListNode* result;
	 ListNode* i;
	 ListNode* j;
	 i = new ListNode(1);
	 result = i;
	 j = i;
	 for (int k = 0; k < vec.size(); k++)
	 {
		 i = new ListNode(vec[k]);
		 j->next = i;
		 j = i;
	 }
	 return result->next;
 }

int main()
{
	std::string a;

	ListNode* r;
	std::vector<int> v1 = { 1,5,7,9 };
	std::vector<int> v2 = { 3,6,7,9 };
	while (r!=NULL)
	{
		std::cout << r->val << ',';
		r = r->next;
	}

	std::cin>>a;
}

