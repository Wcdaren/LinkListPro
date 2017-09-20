#include<stdio.h>
#include<malloc.h>
#include"LinkList.h"

typedef struct _tag_LinkList
{
	LinkListNode header;
	int length;
}TLinkList;

LinkList* LinkList_Create()
{
	TLinkList* ret = (TLinkList*)malloc(sizeof(TLinkList));

	if (ret != NULL)
	{
		ret->length = 0;
		ret->header.next = NULL;
	}

	return ret;
}
