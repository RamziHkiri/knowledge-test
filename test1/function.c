#include"main.h"
void initializeStack(Stack *s)
{
    *(s)->n = NULL;
    *(s)->next= NULL;
}
void push(Stack *s, int value)
{
    Stack *node;
    node = malloc(sizeof(Stack));
	if (!node)
		return (NULL);
    node->n =value;
    node->next = s;
    s= node;

}
int pop(Stack *s)
{
    int len=0
    if (s!=NULL)
    {
        while (s->next!=NULL)
        {
            len +=1;
            s= s->next;
        }
        free(s);
    }
    return(len);

}
int isEmpty(Stack *s)
{
    if (Stack->next !=NULL)
    {
        return (0);
    }
    else 
    {
        return(1);
    }

}