#include<stdio.h>
void print(char table[3][3]);
char winner(char table[3][3]);
int main()
{
	int t=5,x,y;
	char table[3][3]={{'0','0','0'},{'0','0','0'},{'0','0','0'}},turn;
	printf("symbol assigned to player one is ='X'\nand for player two is ='O'\n");
	print(table);
	while(t--)
	{
		printf("for one:");
		scanf("%d%d",&x,&y); //for user one
		table[x][y]='X';
		print(table);
		if(t<3)
		{
			if(winner(table))
				break;
		}
		if(t==1)
			break;
		printf("for two:");
		scanf("%d%d",&x,&y);//for user two
		table[x][y]='Q';
		print(table);
		if(t<3)
		{
			if(winner(table))
				break;
		}
	}
	if(t==1)
		printf("Draw");
	else if(winner(table)=='X')
		printf("Player One has won:)");
	else if(winner(table) =='O')
		printf("Player two has won:)");
	return 0;
}
void print(char a[3][3])
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for( j=0;j<3;j++)
			printf("%c ",a[i][j]);
		printf("\n");
	}
}
char winner(char a[3][3])
{	
	int c;
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
		{
			c=2;
			if(a[i][j]==a[i][c] && a[i][j]!='0')
				return a[i][j];
			if(a[j][i]==a[c][i] && a[j][i]!='0')
				return a[j][i];
		}
	if(a[0][0]==a[1][1] && a[1][1]==a[0][0] && a[1][1]!='0')
		return a[0][0];
	if(a[0][2]==a[1][1] && a[1][1]==a[2][0] && a[1][1]!='0')
		return a[2][0];
	return '\0';
}
