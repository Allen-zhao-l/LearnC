/*************************************************************************
	> File Name: calculate.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年03月05日 星期日 13时09分03秒
 ************************************************************************/
#include <iostream>
#include <cstdlib>
#include <cctype>
#include <cstring>
using namespace std;

enum types { DELIMITER = 1, VARIABLE, NUMBER};//定义枚举类型把DELIMITER初试化为1后面的相应的是前面值+1

 

class Info{
public:
 void displayInfo();
};

class parser {
  char *exp_ptr;  // 定义一个指向表达式的指针
  char token[80]; // 存储表达式中的字符变量
  char tok_type;  // 存储具体是什么类型

  void eval_exp2(double &result);
  void eval_exp3(double &result);
  void eval_exp4(double &result);
  void eval_exp5(double &result);
  void eval_exp6(double &result);
  void atom(double &result);
  void get_token();
  void serror(int error);
  int isdelim(char c);
public:
  parser();//类的构照函数
  double eval_exp(char *exp);
};

void Info::displayInfo(){
 cout<<"==============================================================/n";
 cout<<"====================这是一个计算器程序========================/n";
 cout<<"==============================================================/n";
 cout<<"* 说明：可以进行+ - * / % ^ 操作您还可以用括号输入您的表达式 */n";
 cout<<"* 您输入表达式不需要输=号  例：您可输入(6+7)*5//7+4 然后回车 */n";
 cout<<"==============================================================/n/n";
 cout << "/t/t输入点号(.)回车，结束程序运行/n/n";
}

// 类构照函数的具体实现
parser::parser()
{
  exp_ptr = NULL;//把exp_ptr的指针初始化为空
}

// 方法eval_exp的具体实现过程
double parser::eval_exp(char *exp)
{
  double result;

  exp_ptr = exp;//把传递过来的参数exp负给exp_ptr

  get_token();
  if(!*token) {
    serror(2); //输出没有任何表达式的错误信息
    return 0.0;
  }
  eval_exp2(result);
  if(*token) serror(0); // last token must be null
  return result;
}

// 两个变量字符是加或者减操作
void parser::eval_exp2(double &result)
{
  register char op;
  double temp;

  eval_exp3(result);
  while((op = *token) == '+' || op == '-') {
    get_token();
    eval_exp3(temp);
    switch(op) {
      case '-':
        result = result - temp;
        break;
      case '+':
        result = result + temp;
        break;
    }
  }
}

// 两个变量是乘或者除操作 或者是取余
void parser::eval_exp3(double &result)
{
  register char op;
  double temp;

  eval_exp4(result);
  while((op = *token) == '*' || op == '/' || op == '%') {
    get_token();
    eval_exp4(temp);
    switch(op) {
      case '*':
        result = result * temp;
        break;
      case '/':
        result = result / temp;
        break;
      case '%':
        result = (int) result % (int) temp;
        break;
    }
  }
}

// 进行^运算
void parser::eval_exp4(double &result)
{
  double temp, ex;
  register int t;

  eval_exp5(result);
  if(*token== '^') {
    get_token();
    eval_exp4(temp);
    ex = result;
    if(temp==0.0) {
      result = 1.0;
      return;
    }
    for(t=(int)temp-1; t>0; --t) result = result * (double)ex;
  }
}


void parser::eval_exp5(double &result)
{
  register char  op;

  op = 0;
  if((tok_type == DELIMITER) && *token=='+' || *token == '-') {
    op = *token;
    get_token();
  }
  eval_exp6(result);
  if(op=='-') result = -result;
}

// 进行有括号的算法
void parser::eval_exp6(double &result)
{
  if((*token == '(')) {
    get_token();
    eval_exp2(result);
    if(*token != ')')
      serror(1);
    get_token();
  }
  else atom(result);
}

// 取得数值
void parser::atom(double &result)
{
  switch(tok_type) {
    case NUMBER:
      result = atof(token);
      get_token();
      return;
    default:
      serror(0);
  }
}

// 输出出错信息.
void parser::serror(int error)
{
  static char *e[]= {
      "语法错误",
      "不对称的括号",
      "您没有输入任何的表达式！"
  };
  cout << e[error] << endl;
}

// 取得下一个token值
void parser::get_token()
{
  register char *temp; 

  tok_type = 0;
  temp = token;
  *temp = '/0';

  if(!*exp_ptr) return; // 如果到表达式末尾则返回

  while(isspace(*exp_ptr)) ++exp_ptr; //

  if(strchr("+-*/%^=()", *exp_ptr)){  //用strchr函数在字符串"+-*/%^=()"中查找*exp_ptr指向的字符所在位置，判断返回值(非0为真就执行)以便是否执行以下语句
    tok_type = DELIMITER;//把tok_type置为DELIMITER
    // advance to next char
    *temp++ = *exp_ptr++;
  }
  else if(isalpha(*exp_ptr)) {
    while(!isdelim(*exp_ptr)) *temp++ = *exp_ptr++; //isdelim判断是否是分隔符，当*exp_ptr指向的字符不为分隔符时把值负给*temp
    tok_type = VARIABLE;//把tok_type置为VARIABLE
  }
  else if(isdigit(*exp_ptr)) { // isdigit判断*exp_ptr指向的字符是否为数字
    while(!isdelim(*exp_ptr)) *temp++ = *exp_ptr++;
    tok_type = NUMBER;
  }

  *temp = '/0';
}

// isdelim函数的具体实现，如果参数是一个分割符则返回真
int parser::isdelim(char c)
{
  if(strchr(" +-/*%^=()", c) || c==9 || c=='/r' || c==0)//把"+-/*%^=()09/r定义非分隔符
    return 1;
  return 0;
}
int main()
{
  char expstr[80];
  Info prgInfo;
  parser ob; // 创建一个parser类型的实例
  prgInfo.displayInfo();

  for(;;) {
    cout << "请输入你要计算的表达式: ";
    cin.getline(expstr, 79);//读入表达式到名为expstr的数组中，数组大小为79
    if(*expstr=='.') break;
    cout << "计数的结果是: " << ob.eval_exp(expstr) << "/n/n";
  };

  return 0;
} 
