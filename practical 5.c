#include<stdio.h>
int main()
{
double tp=1441981744,tm,tw,tlp,tlm,tlw,tim,tiw;
tw=(48.4*1441981744)/100;
tm=tp-tw;
tlp=(85.95*1441981744)/100;
tlm=(80.95*tm)/100;
tlw=(62.84*tw)/100;
tim=tm-tlm;
tiw=tw-tlw;
printf("Total Population:%lf\n",tp);
printf("Total Men:%lf\n",tm);
printf("Total women:%lf\n",tw);
printf("Total Literal Men:%lf\n",tlm);
printf("Total Literal Women:%lf\n",tlw);
printf("Total Iliteral Men:%lf\n",tim);
printf("Total Iliteral Women:%lf\n",tiw);
return 0;
}
