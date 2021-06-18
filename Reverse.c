#include<iostream>
using namespace std;

class StringX
{
	public:
	
	char str[30];
	void Accept()
	{
		cout<<"Enter String: \n";
		scanf("%[^'\n']s",str);
	}
	void RevStrX()
	{
		char *start=str;
		char *end=str;
		while(*start!='\0')
		{
			if(*start==' ')
			{
				while((*start==' ') && (*start!='\0'))
				{
					start++;
					end++;
				}
			}
			else
			{
				int iCnt=0,iTemp=0;
				while(*end!=' ' && *end!='\0')
				{
					iCnt++;
					end++;
				}
				iCnt--;
				end--;
				while(iCnt>=0)
				{
					if(start<end)
					{
						iTemp=*end;
						*end=*start;
						*start=iTemp;
					}
					iCnt--;
					start++;
					end--;
				}
				end=start;
			}
		}
	}
};
int main()
{
	int iRet=0;
	StringX obj;
	obj.Accept();
	obj.RevStrX();
	cout<<obj.str;
	return 0;
}
