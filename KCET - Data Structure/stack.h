int arr[20],top=-1;
void push(int x)
{
	top++;
	arr[top]=x;
}
int pop()
{
	return arr [top--];
}
