extern int f1(int x, int y);
extern int f2();

void main(int c, int k){
     int a,b,x,y,z;
     a = 5;            
     while ( k < 100){       /*IN*/
       if (c < 7){           /*IN*/
	 b = a;              /*IN*/
	 x = 1;              /*IN*/ 
       }
       else{                 /*IN*/
	 //b = f2();   // if included the statement a=5 is OUT
	 c = b;              /*IN*/
	 y = 2;              /*IN*/
       }
       k = f1(k,1);          /*IN*/
     }
     z = f1(x,y) ;           /*IN*/
     return;       
     _SLICE(z);
}
