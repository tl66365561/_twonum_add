ass Solution {
	public:
		ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
			ListNode* new_List=new ListNode(0);           
			ListNode*a=l1;
			ListNode*b=l2;
			ListNode*cur=new_List;
			int sum=0;
			int carry=0;
			while(a!=NULL || b!=NULL)
			{
				//如果节点已经为空了，val的值是什么呢?

				int x=(a==NULL) ? 0 : a->val;
				int y=(b==NULL) ? 0 : b->val;

				sum=x+y+carry;
				carry=sum/10;
				cur->next = new ListNode(sum%10);
				cur = cur->next;
				if(a != NULL) 
					a=a->next;

				if(b  != NULL)
					b=b->next;

			}
			if(carry>0)
				cur->next=new ListNode(carry);

			return new_List->next;
		}
};

