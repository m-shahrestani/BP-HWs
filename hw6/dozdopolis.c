#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <unistd.h>
#include <windows.h>

int m,n,td,tk,tpk[20],xd[100],yd[100], xpk[20][100], ypk[20][100],zp[200][200],vp[100],vd[100],p=0, zd[200][200];
//m,n=bod map , td=tedad dozd , tk=tedad kalantari , tpk=tedad polis har kalantari , xd,yd = mokhtasat dozd , xpk,ypk=mokhtasat polis yek kalantri , zp=zamin farzi polis , zd=zamin farzi dozd , vp=vaziyat didan dozd dar har kalantari,vd vaziyat har dozd
char map[200][200];
void input(void)
{
	int i;
	printf("Enter tedad dozd\n");
	scanf("%d",&td);
	printf("Enter n\n");
	scanf("%d",&n);
	printf("Enter m\n");
	scanf("%d",&m);
	printf("Enter tedad kalantari\n");
	scanf("%d",&tk);
	for(i=0;i<tk;i++)
	{
		printf("Enter tedad polis kalantari %dth \n",i+1);
		scanf("%d",&tpk[i]);
	}
}
void mokhtasat(void)
{
	int i,j;
	for(i=0;i<td;i++)
	{
		vd[i]=1;
		while(1)
		{
			xd[i]=rand()%n;
			yd[i]=rand()%m;
			if(zd[xd[i]][yd[i]]==0)
				break;
		}
		zd[xd[i]][yd[i]]=i+1;
	}
	for(i=0;i<tk;i++)
	{
		for(j=0;j<tpk[i];j++)
		{
			while(1)
			{
				xpk[i][j]=rand()%n;
				ypk[i][j]=rand()%m;
				if(zp[xpk[i][j]][ypk[i][j]]==0 && zd[xpk[i][j]][ypk[i][j]] == 0)
					break;
			}
			zp[xpk[i][j]][ypk[i][j]]=1;
		}
	}
}
void zamin(void)
{
	system("CLS");
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			map[i][j]='-';
		}
	}
	for(i=0;i<td;i++)
	{
		if(vd[i]==1)
			map[xd[i]][yd[i]]='1' + i;
	}
	for(i=0;i<tk;i++)
	{
		for(j=0;j<tpk[i];j++)
		{
			map[xpk[i][j]][ypk[i][j]]='1' + i;
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(zd[i][j]!=0)
				printf("T");
			if(zp[i][j]!=0)
				printf("D");
			printf("%c\t",map[i][j]);
		}
		printf("\n\n\n");
	}
	Sleep(1000);
}
void update(void)
{
	int i,j,k,b,jxd[100],jyd[100],jxpk[20][100],jypk[20][100];
	for(i=0;i<tk;i++)
	{
		for(j=0;j<tpk[i];j++)
		{
			for(k=0;k<td;k++)
			{
				if(vp[i] == 0 && vd[k]==1 && fabs(xpk[i][j]-xd[k])<=2 && fabs(ypk[i][j]-yd[k])<=2)
				{
					vp[i]=k+1;
				}
			}
		}
	}
	for(i=0;i<td;i++)
	{
	    if(vd[i] == 0)  continue;
		while(1)
		{
			jxd[i]=(rand()%3)-1;
			jyd[i]=(rand()%3)-1;
			if(0<=(xd[i]+jxd[i])&&(xd[i]+jxd[i])<n&&0<=(yd[i]+jyd[i])&&(yd[i]+jyd[i])<m && (zd[xd[i] + jxd[i]][yd[i] + jyd[i]] == 0 || (jxd[i] == 0 && jyd[i] == 0)))
			{
				zd[xd[i]][yd[i]] = 0;
				xd[i]+=jxd[i];
				yd[i]+=jyd[i];
                zd[xd[i]][yd[i]] = i+1;
				break;
			}
		}
	}
	for(i=0;i<tk;i++)
	{
		for(j=0;j<tpk[i];j++)
		{
			if(vp[i]==0)
			{
				while(1)
				{
					jxpk[i][j]=(rand()%3)-1;
					jypk[i][j]=(rand()%3)-1;
					if(0<=(xpk[i][j]+jxpk[i][j])&&(xpk[i][j]+jxpk[i][j])<n&&0<=(ypk[i][j]+jypk[i][j])&&(ypk[i][j]+jypk[i][j])<m && (zp[xpk[i][j] + jxpk[i][j]][ypk[i][j] + jypk[i][j]] == 0|| (jxpk[i] == 0 && jypk[i] == 0)))
					{
						zp[xpk[i][j]][ypk[i][j]] = 0;
						xpk[i][j]+=jxpk[i][j];
						ypk[i][j]+=jypk[i][j];
						zp[xpk[i][j]][ypk[i][j]] = 1;
						break;
					}
				}
			}
			if(vp[i]!=0)
			{
				jxpk[i][j]=(xpk[i][j]==xd[vp[i]-1]?0:(xpk[i][j]<xd[vp[i]-1]?1:-1));
				jypk[i][j]=(ypk[i][j]==yd[vp[i]-1]?0:(ypk[i][j]<yd[vp[i]-1]?1:-1));
				if(zp[xpk[i][j] + jxpk[i][j]][ypk[i][j] + jxpk[i][j]] == 0)
				{
                    zp[xpk[i][j]][ypk[i][j]] = 0;
					xpk[i][j]+=jxpk[i][j];
					ypk[i][j]+=jypk[i][j];
                    zp[xpk[i][j]][ypk[i][j]] = 1;
				}
				if(zd[xpk[i][j]][ypk[i][j]] != 0)
				{
				    int d = zd[xpk[i][j]][ypk[i][j]]-1;
				    vd[d] = 0;
				    p++;
				    zd[xpk[i][j]][ypk[i][j]] = 0;
				}
			}
		}
	}
	for(i=0;i<tk;i++)
        if(vp[i]!=0 && vd[vp[i]-1]==0)
            vp[i] = 0;
}

int main()
{
	srand(time(0));
	input();
	mokhtasat();
	while(p!=td)
	{
		zamin();
		update();
	}
	zamin();
	printf("Payan");
	return 0;
}
