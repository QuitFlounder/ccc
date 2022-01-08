# c100
100天开发c编译器

build step:
  1. cd c100/
  2. mkdir cmake-build-debug
  3. cd cmake-build-debug 
  4. cmake ..
  5. make
  6. ./c100 "5+(1-3)*4/2" > tmp.s
  7. clang tmp.s ../src/driver.c -o tmp.out
  8. ./tmp.out

day1: 支持编译5+1-3*4/2   
day2: 支持编译5+(1-3)*4/2   
day3: 支持编译a=3;5+a\*4/2-a;      
day4: 支持错误提示, eg 输入"4+3"会提示 ';' expected    
day5: 编译 a=3;a==3;a!=3;a>3;a>=3;a<3;a<=3;    
day6: 编译 
a=3; if (a!=4) a = 5;     
a=3; if (a!=4) a = 5; else a = 6;     
a=3; if (a!=4) {a = 5;a = a + a;} else {a = a*a; a = a + 10;};   
