/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
#include <stdio.h>

struct ListNode {
      int val;
     struct ListNode *next;
 };

struct ListNode *addTwoNumbers(struct ListNode *l1, struct ListNode *l2)
{
    const int node_len = sizeof(struct ListNode);

    struct ListNode *a = (struct ListNode*)malloc(node_len);
    struct ListNode *b = a;
    const struct ListNode void_node = {
        0,
        NULL
    };

    int flag = 0;

    do
    {
        a->val = l1->val + l2->val + flag;

        if (a->val >= 10)
        {
            flag = 1;
            a->val = a->val - 10;
        }
        else
            flag = 0;

        if (l1->next == NULL && l2->next == NULL && flag == 0)
        {
            a->next = NULL;
            break;
        }
        else
            a->next = (struct ListNode*)malloc(node_len);

        a = a->next;
        l1 = (l1->next == NULL) ? &void_node : l1->next;
        l2 = (l2->next == NULL) ? &void_node : l2->next;
    } while(1);

    return b;
}
