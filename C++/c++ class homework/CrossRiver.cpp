#include <iostream>
using namespace std;

/**
 *农夫过河问题
 */

/*设置经过的最多步骤*/
enum { MAX_STEP = 15 };
 
/* 每种操作所对应的文字描述*/
char * chop[8] = {
	    "sheep_go","sheep_come","vegetable_go","vegetable_come",
		"wolf_go","wolf_come","nothing_go","nothing_come"
};
 
int isFinal(int iStep);
int isFeasible(int iStep,int i) ;
int islegal(int *p);
void print(int iStep);
 
/*状态数组，最多15步*/
int ans[MAX_STEP][4] = {0};
 
/*操作记录数组，每个步骤所对应的操作*/
int solve[MAX_STEP] = {0};
 
int main()
{
	int i;
	int iStep;
	iStep = 1;
	solve[1] = 0;
	/*
		初始时农夫、狼、羊、白菜均未过河，记录其状态为{1,1,1,1}
		则他们过河完成以后其状态为{0,0,0,0}
	*/
	for(i = 0;i < 4; ++i) 
		ans[0][i] = 1;   
 
	while(iStep > 0)    
	{
		++solve[iStep];    //变为下一个操作
		while((solve[iStep] <= 8)&&(!isFeasible(iStep,solve[iStep]))) //检测该操作是否可行
			++solve[iStep];
 
		if(solve[iStep] <= 8)  //如果操作可行
		{
 
			if(isFinal(iStep)) {print(iStep);}   //若已经完成，则打印结果
			else
			{
				++iStep;           //进行下一步
			   solve[iStep] = 0;     //初始时无操作
			}
		}
		else -- iStep;    //遍历所有的操作皆不可行则回溯到上一步
	} //end while

	return 0;
}
 
/*
	根据操作数组solve中的操作记录
	依次显示操作过程
*/
void print(int iStep)
{
	int i;
	for(i = 1;i <= iStep; ++i)
	{
        cout << chop[solve[i] - 1] << endl; //solve[i]代表第i步所对应的操作
	}
	cout << "Succed!" << endl << endl;
}
 
/*
	检测是否到达结束状态
*/
int isFinal(int iStep)
{
	if((ans[iStep][0] + ans[iStep][1] + ans[iStep][2] + ans[iStep][3]) == 0) return 1; //对应状态为全0则结束
	else return 0;
}
 
/*
	检测在第iStep步使用操作i是否可行
*/
int isFeasible(int iStep,int i)
{
	int chAns[4];    //用于copy前一个步骤的状态
	int j,k;         //用于遍历数组 
 
	for (k = 0;k < 4; ++k) chAns[k] = ans[iStep-1][k];  //copy
 
	switch(i)      //操作i所对应的状态改变
	{
	case 1:if(chAns[0] == 0 || chAns[2] == 0)  return 0;   //sheep_go
		else chAns[0] = chAns[2] = 0;
		break;
	case 2:if(chAns[0] == 1 || chAns[2] == 1)  return 0;   //sheep_come
		else chAns[0] = chAns[2] = 1;
		break;
	case 3:if(chAns[0] == 0 || chAns[3] == 0)  return 0;	 //vegetable_go
		else chAns[0] = chAns[3] = 0;
		break;
    case 4:if(chAns[0] == 1 || chAns[3] == 1)  return 0;   //vegetable_come
		else chAns[0] = chAns[3] = 1;
		break;
	case 5:if(chAns[0] == 0 || chAns[1] == 0)  return 0;   //wolf_go
		else chAns[0] = chAns[1] = 0;
		break;
	case 6:if(chAns[0] == 1 || chAns[1] == 1)  return 0;   //wolf_come
		else chAns[0] = chAns[1] = 1;
		break;
	case 7:if(chAns[0] == 0)  return 0;               //nothing_go
		else chAns[0] = 0;
		break;
	case 8:if(chAns[0] == 1)  return 0;              //nothing_come
		else chAns[0] = 1;
		break;
	}
 
	/*
		当前状态不能与之前的状态相同，
		否则陷入无限重复情况
	*/
	for (j = 0; j < iStep; ++j)
	{
		for (k = 0; k < 4; ++k)
			if(ans[j][k] != chAns[k]) break;
		if (k >= 4)  return 0;                 //与之前状态相同
	}
 
	if(!islegal(chAns)) return 0;           //检查chAns所对应的状态是否是合法状态
	else { // 当前状态是可行的
		for (k = 0; k < 4; ++k) ans[iStep][k] = chAns[k];  //copy
		solve[iStep] = i;      //记录到操作记录数组
		return 1;
	}
}
 
/*
检查数组p所对应的状态是否合法，
即是否存在狼吃羊或羊吃白菜的情况
*/
int islegal(int *p)
{
	if((p[1] == p[2])&&(p[1] != p[0])) return 0;
	if((p[2] == p[3])&&(p[2] != p[0])) return 0;
	return 1;
}