//#define _CRT_SECURE_NO_WARNINGS
#include "pch.h"
#include<iostream>
#include<stdio.h>
#include <fstream>
#include<string.h>
#include<stdlib.h>
using namespace std;

//2019-7-22
//int ARRAY_COUNT[100] = { 0 };
//int arr_count = 0;
//2019-7-22

//##2019-7-22
int is_shuzu = 0;
int aaaa = 0;
int CHA_ZHAO_RETURN = 0;
//##2019-7-22
//##2019-7-22-new
int FLAGG = 0;
int FLAGGG = 0;
int new_value = 0;
//##2019-7-22-new

int FLFL = 0;
int PRINTF_OPERATION = 0;
//mips_var
int temp_temp = 0;
int mips_i = 0;
int mips_ii = 0;
int TIAO_COUNT = 0;//��Ҫ���ڶԲ�ͬ����ת���б�𣬱�֤ÿһ����תλ�ö�һ�޶�
int SB_ITEM = 0;//��Ҫ���ڶԼӼ��˳������λ�ý��мӼ�����
int DI_JIAN = 0;//ʹ����sub\add\mul\div�ȼ����У�ÿ�μ��������Ҫ�ѱ�����һ��������ִ�е�run�����±��һ����
int BIAO_JI_FUN = 0;
int COUNT_SCANF = 0;

int global_eye = -1;
int bean = 0;
int scanf_count = 0;
int remove_tt = 0;

int global_g = -1;
int X86 = 0;
int ASC = 0;
int FPP = 0;
int done_if = -1;
int array_count = 0;
//mips_shuzu
/*translate the string line*/
char zi_fu_chuan[100] = { 0 };
int zi_fu_chuan_item = 0;
int zi_fu_line_item = 0;
//##2019-7-22
struct ARRAY_STORE
{
	char array_store[100];
};
ARRAY_STORE BIG[100];
int big_item = 0;
//##2019-7-22
struct zi_fu_line
{
	char zifu[100];
};
zi_fu_line z_z[100];

/*�ڶ�����������飬ʹ���ڼ�����*/
char zi_fu_chuan_two[100] = { 0 };
int zi_fu_chuan_item_two = 0;
int zi_fu_line_item_two = 0;
struct zi_fu_line_two
{
	char zifu_two[100];
};
zi_fu_line_two z_z_two[100];
/*�м���벿��*/
struct P_CODE
{
	int op_num;
	int lev;
	int x_int;
	float y_float;
	char z_char[100];
};
P_CODE p_list[10000];
int p_list_item = 0;//P_CODE�������������±�
					/*���ű���*/
union FU_HAO_BIAO_COMBINE
{
	int INT_num;
	float FLOAT_num;
	int ASCLL_num;
};
struct FU_HAO_BIAO
{
	char *name;
	int kind;////////0:����...1:�޷���ֵ����...2:�з���ֵ����...3:��������...4:����...5:main����...6:����
	int type;
	int lev;
	int adr;
	FU_HAO_BIAO_COMBINE com_bine;
};
FU_HAO_BIAO FU_list[1000];//���ű�ṹ�����СΪ100
int FU_item = 1;//���ű���±��1��ʼ����

int VOID_FLAG = 0;//������޷���ֵ����
int VOID_SYM = 0;//����޷���ֵ����
int FLAG_add_sub = 0;//switch�б��+��-��

int getsym_count = 0;//�ʷ�������ǣ��ڶ��β��ٴδ��ļ��ж�ȡ����
int OPP[1000] = { 0 };//switch�д��ÿ������䣨case����ǰ��Ҫ���������λ������
int op_item = 0;//OPP�����±����

int x = 0;//����з���ֵreturn(1)������
int y = 0;//����޷���ֵ���return;����
int RET_FLAG;//����Ƿ�ӷ��ű���ֵ


int X_a[100];//�����ò���Ϊ100��MKF\CAL���a����ֵֻ����100��a��
int X_item = 0;//���a�������±�

int para_value;//���ǹ�ͬ��ǲ���������ֵ������statement�����
int para_value2;
int para_value_shuzu[100];//����100��������������
int pv_item = 0;//�����±�

int hang_number = 1;//���кŽ��м���
int symbol_array[10000] = { 0 };//���symbol�ı������
int symarr = 0;//�������±�
int SBSB = 0;

int printf_flag = 11;//˭��printf_flagС����ת����˭������
int printf_flag2 = 0;
int printf_flag3 = 0;
int printf_flag4 = 11;
int printf_flag_judge;//switch case judge
int FLAG_IN_CONST = 0;//��ǳ���˵���е�+\-
int FLAG_IN_CONST2 = 0;
int FLAG_ADD_SUB = 0;//���switch����е�+\-��

int judge_if1 = 0;//judge the type(from the condition) is or not same(point to if)
int judge_if2 = 0;

int judge_while1 = 0;//judge the type(from the condition)is or not same(point to while)
int judge_while2 = 0;
int FLAG_JUMP_MAIN = 0;//���main���������main�����е�return���
int printf_flag2_use = 0;
int printf_flag3_use = 0;
int temp_ARRAY_count = 0;
int error_count = 0;

int fu_he_flag = 0;//just like the key 

char switch_case[100];//���switch-case��case����
int sc_item = 0;

/*����һЩ���������ַ��Լ��ַ�����*/
char zi_fu;//Ŀ�ļ�¼�ַ�
char zi_fu_two;
char zi_fu_three;
int ascll_num;//Ŀ�ļ�¼�ַ���ascll��
int ascll_num_two;
int ascll_num_three;

int SYMBOL_FLAG_W = 0;//��¼������ǰ��symbolֵ�����ڴ����﷨��ͻ��
int OP[10000] = { 0 };//op_number��¼����

int printf_sc = 0;//switch-case����ǣ��ж������Ƿ�һ��
int start;
int LEV_count_list[10];//������������飬�±�Ϊ��Σ���ʵ�����㣬����Ϊ�ò��Ӧ�ı�����
int op_number = 0;//ָ����
int lev = 1;

/*�����漰��һЩ�ַ��Լ��ַ����Ĳ���*/
char print_f[100] = { 0 };//����case����Լ�printf����У���Ҫ���е�һ�ַ���ȡ�Ĵ�ȡ����
int printf_item = 0;//printf_item
char Print_F[100] = { 0 };
int Print_f = 0;

int int_num = 0;//��¼��������ֵ
float real_num = 0;//��¼ʵ������ֵ
int fu_int_num;//�����ʱ����Ҫһ��int_num�ĸ��ư�

float run[40000];//����ջ�������
int btab[100];//�ֳ����������飬�������100������ͬʱ����
int run_item = 0, btab_item = 0;

/*cattoken���鼰�±�*/
char number_ident[21] = { 0 };//��־����׼����20��
static int number_ident_item = 0;

/*�ַ�������*/
char CHUAN[30000][21] = { 0 };
static int CHUAN_item = 0;

/*һЩ�����ض��ĳ���Ĺؼ�flag*/
//int flag, flag_flag, flag_flag_flag, flag_main, flag_main_two = 0;
int flag = 0;
int flag_flag = 0;
int flag_flag_flag = 0;
int flag_main = 0;
int flag_main_two = 0;
/*�ʷ����������Ľ�������﷨����ʹ��*/
int symbol;

string filename;
//char ssym[14] = { '(',')','{','}',',',';',':','+','-','*','/','.','[',']' };

/*�ļ����������*/
char token2[20] = { 0 };//�ļ���ֻ������Ϊ20��

						/*�ʷ�����ʵ��һ���ַ�һ���ַ���ȡ�������ַ����ַ������ж�*/
char ch = '\0';

/*c0-�ķ��ؼ�������*/
string keyword[16] = { " ","const","int","float","char","void","main","if","else","switch","case","default","while",
"return","scanf","printf" };

/*c0-�ķ�һЩ�ؼ��ֺͷ���*/
string keyword_za[41] = { " ","const","int","float","char","void","main","if","else","switch","case","default","while",
"return","scanf","printf","(",")","{","}",",","=",";"," "," "," ","<",">","<=",">=","==","!=",
":","+","-","*","/",".","[","]"," " };

/*�������*/
string keyword_za_sym[41] = { " ","const_sym","int_sym","float_sym","char_sym","void_sym","main_sym","if_sym","else_sym",
"switch_sym","case_sym","default_sym","while_sym","return_sym","scanf_sym","printf_sym","lp","rp",
"lb","rb","comma","equal","semi","ident","digit","string","small","big","small_equal","big_equal",
"equal_equal","not_equal","colon","add","sub","mult","div","spot","lff","rff","real" };


/*�ʷ�����������Ҫ��������*/

/*���ұ����ֺ���*/
int reserver(string str);

/*ת��int���ͺ���*/
int transNum();

/*��պ�����ÿ�δʷ���������clear()����һ���ʷ����Ӳ�����һЩ�ַ���*/
void clear(void);

/*�ʷ������ؼ�����*/
int getsym(int flag);


/*�﷨����������Ҫ��������*/

/*��������*/
void error(int aa);



/*��غ�������������*/
//##2019-7-22
int CHA_ZHAO(char *INPUT);
//##2019-7-22
int FU_ZHI_TWO(char chch, int inin);
void clear_clear();
void clear_clear_two();
int transla(char *zifu);
int transla_two(char *zifu_two);
int interprent();
void get_out_of_FU_list();
void CLEAR_C();
void CLEAR();
void FUZHI();
int gen(int op_num, int lev, int x_int);
int gen(int op_num, int lev, float y_float);
int gen(int op_num, int lev, char *z_char);
int RE_find(int s_select);
void trans_catToken();
int find(int select_s);
void fuzhi();
int enter(int lev, int type, int kind, int whichcount, int num_num);
bool factor(int typ);
bool item(int typ);
bool expression(int typ);
bool wu_fu_hao_digital(int typ);
bool constant_description(int typ);
bool variable_description(int typ);
bool statement(int typ);

bool paralist(int typ);
bool return_no_return(int typ);
bool return_value_function_definition(int typ);
bool no_return_value_function_definition(int typ);
bool fu_he_statement(int typ);

bool return_no_void_tance(int typ);
bool no_return_void_tance(int typ);
bool main_function(int typ);
bool program(int typ);


/*�ʷ�����������Ҫ�ж�bool���ͺ���*/
bool isSpace(char a) { return (a == ' ') ? true : false; }
bool isTab(char a) { return (a == '\t') ? true : false; }
bool isNewline(char a) { return (a == '\n') ? true : false; }
bool isExc(char a) { return (a == '\r') ? true : false; }
bool isLetter(char a) { return ((a >= 'a'&&a <= 'z') || (a >= 'A'&&a <= 'Z') || (a == '_')) ? true : false; }
bool isDigit(char a) { return (a >= '0'&&a <= '9') ? true : false; }
void catToken(char a) { number_ident[number_ident_item++] = a; }
bool isLss(char a) { return (a == '<') ? true : false; }
bool isEqu(char a) { return (a == '=') ? true : false; }
bool isGtr(char a) { return (a == '>') ? true : false; }
bool isEqual(char a) { return (a == '=') ? true : false; }
bool isEm(char a) { return (a == '!') ? true : false; }
bool isPoint(char a) { return (a == '.') ? true : false; }



//##2019-7-22
int CHA_ZHAO(char *INPUT)
{
	int cha_zhao_item;
	for (cha_zhao_item = 0; cha_zhao_item < big_item; cha_zhao_item++)
	{
		if (strcmp(BIG[cha_zhao_item].array_store, INPUT) == 0)//�������
		{
			return cha_zhao_item;
		}
	}
	return 0;
}
//##2019-7-22

int FU_ZHI_TWO(char chch, int inin)
{
	clear_clear_two();
	zi_fu_line_item_two = global_g;
	zi_fu_chuan_two[zi_fu_chuan_item_two] = chch;
	zi_fu_chuan_item_two = zi_fu_chuan_item_two + 1;
	zi_fu_chuan_two[zi_fu_chuan_item_two] = 48 + inin;
	transla_two(zi_fu_chuan_two);
	return 0;
}

void clear_clear()
{
	memset(zi_fu_chuan, 0, 100 * sizeof(char));
	zi_fu_chuan_item = 0;
}

void clear_clear_two()
{
	memset(zi_fu_chuan_two, 0, 100 * sizeof(char));
	zi_fu_chuan_item_two = 0;
}

int transla(char *zifu)
{
	strcpy(z_z[zi_fu_line_item].zifu, zifu);
	zi_fu_line_item = zi_fu_line_item + 1;
	return 0;
}

int transla_two(char *zifu_two)
{
	strcpy(z_z_two[zi_fu_line_item_two].zifu_two, zifu_two);
	return 0;
}

void get_out_of_FU_list()
{
	int i;
	for (i = FU_item - 1; i > 0; i--)
	{
		LEV_count_list[lev] = 0;
		if (FU_list[i].kind == 3 || FU_list[i].kind == 1 || FU_list[i].kind == 2)
		{
			break;
		}
		if (FU_list[i].kind == 0 || FU_list[i].kind == 4)
		{
			FU_item = FU_item - 1;
		}
	}
}
void CLEAR_C()
{
	memset(print_f, 0, 100 * sizeof(char));
	printf_item = 0;
}
void CLEAR()
{
	memset(Print_F, 0, 100 * sizeof(char));
	Print_f = 0;
}
void FUZHI()
{
	int i = 0;
	for (i = 0; i < printf_item - 1; i++)
	{
		Print_F[i] = print_f[i];
	}
	Print_f = i;
}

int gen(int op_num, int lev, int x_int)//������������
{
	if (op_number < 10000)
	{
		p_list[op_number].op_num = op_num;
		p_list[op_number].lev = lev;
		p_list[op_number].x_int = x_int;
		op_number = op_number + 1;
	}
	else
	{
		cout << "gen out of range should be error" << endl;
		return 1;
	}
	return 0;
}

int gen(int op_num, int lev, float y_float)//����ʵ������
{
	if (op_number < 10000)
	{
		p_list[op_number].op_num = op_num;
		p_list[op_number].lev = lev;
		p_list[op_number].y_float = y_float;
		op_number = op_number + 1;
	}
	else
	{
		cout << "gen out of range should be error" << endl;
		return 1;
	}
	return 0;
}

int gen(int op_num, int lev, char *z_char)//������ַ����Ĳ���
{
	if (op_number < 10000)
	{
		p_list[op_number].op_num = op_num;
		p_list[op_number].lev = lev;
		strcpy(p_list[op_number].z_char, z_char);
		op_number = op_number + 1;
	}
	else
	{
		cout << "gen out of range should be error" << endl;
		return 1;
	}
	return 0;
}
int RE_find(int s_select)
{
	int iii = 0;
	int jjj = 1;
	if (FU_item == 1)
	{
		return 0;
	}

	for (iii = FU_item - 1; iii > 0; iii--)
	{
		if (FU_list[iii].lev < lev)
		{
			jjj = 0;
		}
		if (jjj)
		{
			if (!(strcmp(FU_list[iii].name, CHUAN[s_select])))
			{
				return iii;
			}
		}
	}
	return 0;
}



/*���ҷ��ű�*/
int find(int select_s)
{
	int ii = 0;
	int jj = 1;
	for (ii = FU_item - 1; ii > 0; ii--)
	{
		if (FU_list[ii].lev < lev) { jj = 0; }
		if (FU_list[ii].kind != 3 || jj)//������ǲ������߲�������һ�㣬�Ϳ��Բ鿴���ű�
		{
			if (!strcmp(FU_list[ii].name, CHUAN[select_s])) { return ii; }
		}
	}
	return 0;
}

/*��¼���ű�*/
int enter(int lev, int type, int kind, int whichcount, int num_num)
{//������Ҫ���Ϸ��ű����ֵ���ж�error���
 //int temp_ARRAY_count = 0;
	if (FU_item < 1000)
	{

		FU_list[FU_item].lev = lev;
		FU_list[FU_item].type = type;
		FU_list[FU_item].kind = kind;
		FU_list[FU_item].name = CHUAN[whichcount];
		if (kind == 0 || kind == 3)//����Ǳ������߲���
		{

			LEV_count_list[lev] = LEV_count_list[lev] + 1;
			FU_list[FU_item].adr = LEV_count_list[lev];//�ò��Ӧ�ı�����+1
		}
		if (kind == 6)//����ͨ��kind
		{
			if (LEV_count_list[lev] == 0)
			{
				temp_ARRAY_count = 0;
			}
			LEV_count_list[lev] = LEV_count_list[lev] + 1;
			temp_ARRAY_count = temp_ARRAY_count + 1;
			FU_list[FU_item].adr = temp_ARRAY_count * 200;
			//temp_ARRAY_count = LEV_count_list[lev]*100;
			//FU_list[FU_item].adr = temp_ARRAY_count;//��¼����Ļ�����ַ
			if (type == 11 || type == 12)//��������ͻ����ַ�������,�����¼��������Ĵ�С
			{
				FU_list[FU_item].com_bine.INT_num = num_num;//6,11,xx������Ĵ�С������ű��Ӧ����
			}
		}
		if (kind == 1 || kind == 2 || kind == 5)
		{
			FU_list[FU_item].adr = op_number;//�޷���ֵ���������з���ֵ������������������ADR����P_CODE�ĵڼ���ָ�������ת
		}
		if (kind == 4)//���Ϊ����
		{
			LEV_count_list[lev] = LEV_count_list[lev] + 1;////////////////////////////////////
			FU_list[FU_item].adr = LEV_count_list[lev];//�ò��Ӧ�ı�����+1//////////////////
			if (type == 11)//���Ϊint ����
			{
				if (num_num)//���������
				{
					FU_list[FU_item].com_bine.INT_num = int_num;
				}
				else//����Ǹ���
				{
					FU_list[FU_item].com_bine.INT_num = 0 - int_num;
				}
			}
			else if (type == 12)//���Ϊchar ����
			{

				FU_list[FU_item].com_bine.ASCLL_num = ascll_num;//��Ҫ���ַ�ת����ascii����ʽ�����������д���?????????????????????????????????????????
			}
			else if (type == 9)//���Ϊfloat ����
			{

				if (num_num)//���������
				{
					FU_list[FU_item].com_bine.FLOAT_num = real_num;
				}
				else//����Ǹ���
				{
					FU_list[FU_item].com_bine.FLOAT_num = 0 - real_num;
				}
			}
		}
		FU_item = FU_item + 1;
		//cout << "name:" << FU_list[FU_item - 1].name << "	" << "lev:" << FU_list[FU_item - 1].lev << "	" << "type:" << FU_list[FU_item - 1].type << "	" << "kind:" << FU_list[FU_item - 1].kind << "	" << "adr:" << FU_list[FU_item - 1].adr << endl;
	}
	else
	{
		cout << "���ű�����" << endl;
	}
	return 0;
}

void error(int flag)
{
	error_count++;
	switch (flag)
	{
	case 0:cout << "program is error" << endl; break;
	case 1:cout << "constant_description is error" << endl; break;
	case 2:cout << "variable_description is error" << endl; break;
	case 3:cout << "return_value_function_definition is error" << endl; break;
	case 4:cout << "no_return_value_function_definition is error" << endl; break;
	case 5:cout << "common2_function is error" << endl; break;
	case 6:cout << "comma_function is error" << endl; break;
	case 7:cout << "fu_he_statement is error" << endl; break;
	case 8:cout << "statement is error" << endl; break;
	case 9:cout << "expression is error" << endl; break;
	case 10:cout << "wu_fu_hao_digital is error" << endl; break;
	case 11:cout << "item is error" << endl; break;
	case 12:cout << "factor is error" << endl; break;
	case 13:cout << "const not followed int|float|char " << endl; break;
	case 14:cout << "ȱ�ٱ�ʶ��" << endl; break;
	case 15:cout << "ȱ�ٵ��ں�" << endl; break;
	case 16:cout << "���ں��ұ߲�ƥ��" << endl; break;
	case 17:cout << "��β�����ǷֺŻ��߷���ֵ�ô�ط�" << endl; break;
	case 18:cout << "ȱ�ٵ�����" << endl; break;
	case 19:cout << "������ƥ���ַ�����" << endl; break;
	case 20:cout << "���Ͳ�ƥ��,������ȱ�ٲ���" << endl; break;
	case 21:cout << "��β��������Բ����" << endl; break;
	case 22:cout << "�����ܴ�С����" << endl; break;
	case 23:cout << "��β�������ҷ�����" << endl; break;
	case 24:cout << "ȱ����Բ����" << endl; break;
	case 25:cout << "ȱ��˫����" << endl; break;
	case 26:cout << "���Ǽӷ������(+|-)" << endl; break;
	case 27:cout << "ȱ���������" << endl; break;
	case 28:cout << "ȱ��case" << endl; break;
	case 29:cout << "ȱ��ð��" << endl; break;
	case 30:cout << "�Ҵ����Ų�ƥ��" << endl; break;
	case 31:cout << "���ű���û���ҵ���Ҫ�õ���Ԫ��" << endl; break;
	case 32:cout << "�з���ֵ�����������Ӧ��Բ��������" << endl; break;
	case 33:cout << "ӦΪ������" << endl; break;
	case 34:cout << "��Ч��ʶ��" << endl; break;
	case 35:cout << "0��������Ϊ���������ֵ" << endl; break;
	case 36:cout << "�˴�ӦΪ��ϵ�����" << endl; break;
	case 37:cout << "������int|float|char|void" << endl; break;
	case 38:cout << "���Ͳ���ident|main" << endl; break;
	case 39:cout << "�ļ�Ϊ��" << endl; break;
	case 40:cout << "��ֵ����������Ҳ�ƥ��" << endl; break;
	case 41:cout << "switch - case���Ͳ�ƥ��" << endl; break;
	case 42:cout << "switch-case��䣬�������Ͳ���int|char" << endl; break;
	case 43:cout << "case �������Ԫ�����¶���" << endl; break;
	case 44:cout << "����Ԫ�ز�������" << endl; break;
	case 45:cout << "���ű��г����ظ�Ԫ�أ����豨����" << endl; break;
	case 46:cout << "�������ʽ����Ϊ����" << endl; break;
	case 47:cout << "ȱ��return���" << endl; break;
	case 48:cout << "�з���ֵ����ȱ��return��x��" << endl; break;
	case 49:cout << "�޷���ֵ����ȱ��return��" << endl; break;
	case 50:cout << "���鳬������ֵ" << endl; break;
	case 51:cout << "�����жϲ�����char����" << endl; break;
	case 52:cout << "�����������Ͳ�ƥ��" << endl; break;
	case 53:cout << "ȱ�ٿ�ö�ٱ���" << endl; break;
	case 100:cout << "�ļ��Ѿ���ȡ���" << endl; break;
	}
	//return 1;
}
/*��Ҫ������ʵ�ֲ���(�����ʷ����������﷨������)*/
int reserver(string str)
{
	int i = 0;
	for (i = 0; i < 16; i++)
	{
		if (str == keyword[i]) { return i; }
	}
	return 0;/////////////////////////���Ż�
}
/*�ַ�����ת����int����*/
int transNum()
{
	return (atoi(number_ident));
}

/*��Ҫ��cattokenת����ȫ��Сд��ĸ*/
void trans_catToken()
{
	strlwr(number_ident);
}
void fuzhi()
{
	for (number_ident_item = 0; number_ident_item < 20; number_ident_item++)
	{
		CHUAN[CHUAN_item][number_ident_item] = number_ident[number_ident_item];
	}
	CHUAN_item = CHUAN_item + 1;
}
void clear(void)
{
	/*for (number_ident_item = 0; number_ident_item<20; number_ident_item++)
	{
	number_ident[number_ident_item] = '\0';
	}
	number_ident_item = 0;*/
	memset(number_ident, 0, 20 * sizeof(char));
	number_ident_item = 0;
}
int getsym(int flag)
{
	int_num = 0;
	real_num = 0;
	double t = 0.0;
	int tt = 1;
	static char data[300000] = { 0 };
	static int data_item = -1;/////////�����ָ���
	static int j = -1;/////////////////��Լ�ָ���
					  //static int getsym_count = 0;
	symbol = 0;
	if (getsym_count == 0)
	{
		data_item = 0;
		FILE *fp;
		//fp = fopen("C:/Users/dalao/Documents/Visual Studio 2015/Projects/16182685_�����_�﷨����/16182685_test.txt", "r");
		fp = fopen(token2, "r");
		if (fp == NULL) { error(39); }
		do
		{
			ch = fgetc(fp);
			if (ch == EOF) { break; }
			data[data_item++] = ch;
		} while (1);
		fclose(fp);
		data_item = -1;
		getsym_count = getsym_count + 1;
	}
	if (flag == 1) { j = data_item; }//////////flag = 1 ������Ҫ����ָ���ֵ������ָ��
	if (flag == 2)//////////flag = 2 ������Ҫ�ü�ָ�������ǰ̽�⣬������ָ���ֵ���ֲ��䣬�����ü�ָ���ƶ�
	{
		clear();
		j = j + 1;
		ch = data[j];
		while (isSpace(ch) || isTab(ch) || isNewline(ch) || isExc(ch))
		{
			j = j + 1;
			ch = data[j];
		}
		if (ch == '\0')
		{
			cout << "finish" << endl;
			return 0;///////////�����ָ��̽�⵽�ļ�ĩβ����ôӦ������̽�⣬��Ȼ������������ĸ��ʺܵͣ�������Ҫ�Ժ��Ż�
		}
		if (isLetter(ch))////����ĸ 
		{
			while (isLetter(ch) || isDigit(ch))////����ĸ�������� 
			{
				catToken(ch);//����ĸ��������ɵ��ַ����������� 
				j = j + 1;
				ch = data[j];
			}
			trans_catToken();
			j = j - 1;
			int resultValue;
			resultValue = reserver(number_ident);//�жϹؼ��� 
			if (resultValue == 0) { symbol = 23; }
			else { symbol = resultValue; }
		}
		else if (isDigit(ch))
		{
			//tt = 1;
			while (isDigit(ch))
			{
				catToken(ch);
				//int_num = int_num + (int)(ch - '0')*tt;
				//tt = tt * 10;
				j = j + 1;
				ch = data[j];
			}
			j = j - 1;

			j = j + 1;
			ch = data[j];
			int_num = transNum();
			if (isPoint(ch))
			{
				t = 0.1;
				real_num = int_num;
				catToken(ch);
				j = j + 1;
				ch = data[j];
				if (isDigit(ch))
				{
					while (isDigit(ch))
					{
						catToken(ch);
						real_num = real_num + (int)(ch - '0')*t;
						t = t / 10;
						j = j + 1;
						ch = data[j];
					}
					j = j - 1;
					symbol = 40;
				}
				else { j = j - 2; }
			}
			else
			{
				j = j - 1;
				symbol = 24;//���������֣�����ʵ��
			}
		}
		else if (isLss(ch))
		{
			j = j + 1;
			ch = data[j];
			if (isEqu(ch)) { symbol = 28; }
			else
			{
				j = j - 1;
				symbol = 26;////С�ں�
			}
		}
		else if (isGtr(ch))
		{
			j = j + 1;
			ch = data[j];
			if (isEqu(ch)) { symbol = 29; }
			else
			{
				j = j - 1;
				symbol = 27;////���ں�
			}
		}
		else if (isEqual(ch))
		{
			j = j + 1;
			ch = data[j];
			if (isEqual(ch)) { symbol = 30; }
			else
			{
				j = j - 1;
				symbol = 21;////���ں�
			}
		}
		else if (isEm(ch))
		{
			j = j + 1;
			ch = data[j];
			if (isEqual(ch)) { symbol = 31; }
			else { j = j - 1; }
		}
		else if (ch == '+') { symbol = 33; }
		else if (ch == '-') { symbol = 34; }
		else if (ch == '*') { symbol = 35; }
		else if (ch == '/') { symbol = 36; }
		else if (ch == ',') { symbol = 20; }
		else if (ch == ';') { symbol = 22; }
		else if (ch == ':') { symbol = 32; }
		else if (ch == '(') { symbol = 16; }
		else if (ch == ')') { symbol = 17; }
		else if (ch == '{') { symbol = 18; }
		else if (ch == '}') { symbol = 19; }
		else if (ch == '[') { symbol = 38; }
		else if (ch == ']') { symbol = 39; }
		else if (ch == '.') { symbol = 37; }
		else if (ch == '"') { symbol = 200; }
		else if (ch == 39) { symbol = 100; }
		else { symbol = 0; }
	}
	if (flag == 3)///////////////flag = 3 �����Ž����ַ���������ʱ����Ҫ��ȡ��һ���ַ�����̽��ָ���޹أ�
	{
		data_item = data_item + 1;//
		ch = data[data_item];
		return ch;
	}
	if (flag == 4) { data_item = data_item - 1; }//�﷨�����У������ַ����ַ���������while ѭ������һ���ַ�

	if (flag == 0)
	{
		clear();
		data_item = data_item + 1;//
		ch = data[data_item];

		while (isSpace(ch) || isTab(ch) || isNewline(ch) || isExc(ch))
		{
			if (isNewline(ch))
			{
				hang_number += 1;
				//cout << hang_number << endl;

			}
			data_item = data_item + 1;
			ch = data[data_item];

		}
		if (ch == '\0')
		{
			cout << "finish" << endl;
			return 0;
		}
		if (isLetter(ch))////����ĸ 
		{
			while (isLetter(ch) || isDigit(ch))////����ĸ�������� 
			{
				catToken(ch);//����ĸ��������ɵ��ַ����������� 
				data_item = data_item + 1;
				ch = data[data_item];
			}
			trans_catToken();
			fuzhi();
			data_item = data_item - 1;
			int resultValue;
			resultValue = reserver(number_ident);//�жϹؼ��� 
			if (resultValue == 0) { symbol = 23; }
			else { symbol = resultValue; }
		}
		else if (isDigit(ch))
		{
			//tt = 1;
			while (isDigit(ch))
			{

				catToken(ch);
				//int_num = int_num + (int)(ch - '0')*tt;
				//tt = tt * 10;
				data_item = data_item + 1;
				ch = data[data_item];
			}
			data_item = data_item - 1;

			data_item = data_item + 1;
			ch = data[data_item];
			int_num = transNum();
			if (isPoint(ch))
			{
				t = 0.1;
				real_num = int_num;
				catToken(ch);
				data_item = data_item + 1;
				ch = data[data_item];
				if (isDigit(ch))
				{
					while (isDigit(ch))
					{
						catToken(ch);
						real_num = real_num + (int)(ch - '0')*t;
						t = t / 10;
						data_item = data_item + 1;
						ch = data[data_item];
					}
					data_item = data_item - 1;
					symbol = 40;
				}
				else { data_item = data_item - 2; }
			}
			else
			{
				data_item = data_item - 1;
				symbol = 24;
			}
		}
		else if (isLss(ch))
		{
			data_item = data_item + 1;
			ch = data[data_item];
			if (isEqu(ch)) { symbol = 28; }
			else
			{
				data_item = data_item - 1;
				symbol = 26;////С�ں�
			}
		}
		else if (isGtr(ch))
		{
			data_item = data_item + 1;
			ch = data[data_item];
			if (isEqu(ch)) { symbol = 29; }
			else
			{
				data_item = data_item - 1;
				symbol = 27;////���ں�
			}
		}
		else if (isEqual(ch))
		{
			data_item = data_item + 1;
			ch = data[data_item];
			if (isEqual(ch)) { symbol = 30; }
			else
			{
				data_item = data_item - 1;
				symbol = 21;////���ں�
			}
		}
		else if (isEm(ch))
		{
			data_item = data_item + 1;
			ch = data[data_item];
			if (isEqual(ch)) { symbol = 31; }
			else { data_item = data_item - 1; }
		}
		else if (ch == '+') { symbol = 33; }
		else if (ch == '-') { symbol = 34; }
		else if (ch == '*') { symbol = 35; }
		else if (ch == '/') { symbol = 36; }
		else if (ch == ',') { symbol = 20; }
		else if (ch == ';') { symbol = 22; }
		else if (ch == ':') { symbol = 32; }
		else if (ch == '(') { symbol = 16; }
		else if (ch == ')') { symbol = 17; }
		else if (ch == '{') { symbol = 18; }
		else if (ch == '}') { symbol = 19; }
		else if (ch == '[') { symbol = 38; }
		else if (ch == ']') { symbol = 39; }
		else if (ch == '.') { symbol = 37; }
		else if (ch == '"') { symbol = 200; }
		else if (ch == 39) { symbol = 100; }
		else { symbol = 0; }
	}
	return 1;
}

bool factor(int typ)//�������У����ʽ�У�����ֻ��Ҫ��������ֵ�Ϳ�����
{
	int iiii = 0;//��ѯ���ű����
	int ret_ret = 0;//����ֵ����
	int op_number4;
	bool anti2 = false;
	if (symbol == 33 || symbol == 34)//�����+��-
	{
		if (symbol == 34) { anti2 = true; }
		if (!getsym(0)) { return false; }
		symbol_array[symarr++] = symbol;
	}
	if (symbol == 24)											//���������
	{
		if (is_shuzu == 1)
		{
			global_g = global_g + 1;
			cout << "li" << "\t" << "$t" << 7 + aaaa << "\t" << int_num << endl;
			FU_ZHI_TWO('t', 7 + aaaa);
		}
		else
		{
			global_g = global_g + 1;
			cout << "li" << "\t" << "$t" << global_g << "\t" << int_num << endl;
			FU_ZHI_TWO('t', global_g);
		}
		gen(1, 11, int_num);									//������������������
		printf_flag = 11;										//������flag���
		if (!getsym(0)) { return false; }
		symbol_array[symarr++] = symbol;
	}
	else if (symbol == 40)										//�����float����
	{
		//if (para_value2 != 0 && para_value2 != 9) { cout << "�������Ͳ�ƥ��" << endl; }
		gen(1, 9, real_num);									//����float��				
		printf_flag = 9;										//float-flag���
		if (!getsym(0)) { return false; }
		symbol_array[symarr++] = symbol;
	}
	else if (symbol == 100)//�ַ�
	{
		getsym(3);//��ȡ��һ�ַ�
		if (ch == '_' || ch == '+' || ch == '-' || ch == '*' || ch == '/' || (ch >= 'a'&&ch <= 'z') || (ch >= 'A'&&ch <= 'Z') || (ch >= '0'&&ch <= '9'))
		{
			zi_fu_two = ch;											//��¼��ǰ��ȡ�ַ�
			ascll_num_two = (int)zi_fu_two;							//���ַ�ת����ascll��

			getsym(3);												//������ȡһ����һ�ַ�
			if (ch == '\'')											//����ǵ����ţ������
			{
				X86 = 1;

				global_g = global_g + 1;
				cout << "li" << "\t" << "$t" << global_g << "\t" << ascll_num_two << endl;

				FU_ZHI_TWO('t', global_g);

				cout << "move" << "\t" << "$a0" << "\t" << "$" << z_z_two[global_g].zifu_two << endl;
				if (PRINTF_OPERATION == 1)
				{
					PRINTF_OPERATION = 0;
					FLFL = 1;
					cout << "li" << "\t" << "$v0" << "\t" << 11 << endl;
					cout << "syscall" << endl;
				}
				//if (para_value2 != 0 && para_value2 != 12) { cout << "�������Ͳ�ƥ��" << endl; }
				gen(1, 12, zi_fu_two);								//�������������ַ���ascll�룩


				printf_flag = 12;									//�ַ���flag���
				if (!getsym(0)) { return false; }
				symbol_array[symarr++] = symbol;
			}
			else { error(18); }
		}
		else { error(19); }
	}
	else if (symbol == 23)//ident
	{
		ret_ret = find(CHUAN_item - 1);						//��ѯ���ű��ҵ��ñ�ʶ����Ӧ���ű�λ�ã������ء�
		if (ret_ret == 0) { error(31); }
		if (FU_list[ret_ret].kind == 4)						//����ǳ���
		{

			if (FU_list[ret_ret].type == 11)				//���������
			{

				global_g = global_g + 1;
				//cout << "li" << "\t" << "$t" << global_g << "\t" << int_num << endl;
				cout << "li" << "\t" << "$t" << global_g << "\t" << FU_list[ret_ret].com_bine.INT_num << endl;
				FU_ZHI_TWO('t', global_g);

				if (gen(1, FU_list[ret_ret].type, FU_list[ret_ret].com_bine.INT_num)) { return 1; }
				printf_flag = 11;							//����flag���
			}
			if (FU_list[ret_ret].type == 12)				//�����char����
			{


				//2019-7-21
				X86 = 0;
				//2019-7-21
				global_g = global_g + 1;

				cout << "li" << "\t" << "$t" << global_g << "\t" << FU_list[ret_ret].com_bine.ASCLL_num << endl;
				//2019-7-20
				FU_ZHI_TWO('t', global_g);
				//2019-7-20
				if (gen(1, FU_list[ret_ret].type, FU_list[ret_ret].com_bine.ASCLL_num)) { return 1; }
				printf_flag = 12;							//�ַ���flag���
			}
			if (FU_list[ret_ret].type == 9)					//�����float����
			{
				if (gen(1, FU_list[ret_ret].type, FU_list[ret_ret].com_bine.FLOAT_num)) { return 1; }
				printf_flag = 9;							//float����flag���
			}
			if (!getsym(0)) { return false; }
			symbol_array[symarr++] = symbol;
		}
		else if (FU_list[ret_ret].kind == 3)//����ǲ���
		{
			////mips

			global_g = global_g + 1;
			mips_i = FU_list[ret_ret].adr - 1;
			//cout << "move" << "\t" << "$a" << mips_i << "\t" << "$a" << mips_i << endl;
			cout << "lw" << "\t" << "$a" << mips_i << "\t" << mips_i * 4 << "($0)" << endl;//global_g
			FU_ZHI_TWO('a', mips_i);//global_g
			////
			if (gen(0, FU_list[ret_ret].lev, FU_list[ret_ret].adr)) { return 1; }
			printf_flag = FU_list[ret_ret].type;
			if (!getsym(0)) { return false; }
			symbol_array[symarr++] = symbol;
		}
		else if (FU_list[ret_ret].kind == 0)//����Ǳ���
		{

			global_g = global_g + 1;
			mips_i = FU_list[ret_ret].adr - 1;
			cout << "lw" << "\t" << "$t" << mips_i << "\t" << 400 + mips_i * 4 << "($0)" << endl;//global_g
			FU_ZHI_TWO('t', mips_i);//global_g

			////2019-7-20���
			/*if (FU_list[ret_ret].type == 12 && PRINTF_OPERATION == 1)//char
			{
				PRINTF_OPERATION = 0;
				cout << "move" << "\t" << "$a0" << "\t" << "$" << z_z_two[global_g].zifu_two << endl;
				cout << "li" << "\t" << "$v0" << "\t" << 1 << endl;
				cout << "syscall" << endl;
				global_g = global_g - 1;
			}*/
			////2019-7-20���
			if (gen(0, FU_list[ret_ret].lev, FU_list[ret_ret].adr)) { return 1; }
			printf_flag = FU_list[ret_ret].type;
			if (!getsym(0)) { return false; }
			symbol_array[symarr++] = symbol;
			//cout << "lw" << "\t" << "$t" << DI_JIAN + 1 << "\t" << int_num << ;
			//FU_ZHI_TWO();
		}
		else if (FU_list[ret_ret].kind == 2)//���з���ֵ�������岿�֣�Ҳ���Ƕ����˺���������
		{
			BIAO_JI_FUN = 1;
			if (!getsym(0)) { return false; }
			symbol_array[symarr++] = symbol;
			if (symbol == 16)												//���Բ����
			{
				//��������ָ�type������������
				if (gen(23, FU_list[ret_ret].type, 0)) { return 1; }
				if (!getsym(0)) { return false; }
				symbol_array[symarr++] = symbol;
				for (iiii = ret_ret + 1; iiii < 100; iiii++)//�ӵ�ǰԪ�ؿ�ʼ���������Ϊ�������������Ѿ���¼���
				{
					if (FU_list[iiii].kind != 3) { break; }//���Ǻ���������ֱ������ѭ��
					para_value2 = FU_list[iiii].type;

					if (expression(typ))//����Ǻ�������������ִ��ѭ����������ʽ���֣�����������
					{
						//���ʽ��������Ƕ��ţ�˵��������û���ж���ϣ�����ѭ����
						////
						global_g = global_g - 1;//?
						cout << "sw" << "\t" << "$" << z_z_two[global_g + 1].zifu_two << "\t" << FU_list[iiii].adr * 4 - 4 << "($0)" << endl;

						////

						SBSB = 0;
						if (para_value2 != 0 && para_value2 != printf_flag)
						{
							cout << "paralist type is error!" << endl;
						}


						if (symbol == 20)
						{
							if (!getsym(0)) { return false; }
							symbol_array[symarr++] = symbol;
						}
						else { break; }
					}
					else { return false; }
				}
				para_value2 = 0;
				if ((FU_list[iiii].kind != 3 && symbol != 17)) //|| (FU_list[iiii + 1].kind == 3 && symbol == 17))
				{
					cout << "the paralist transmit is error!" << endl;
				}

				if (gen(24, 0, FU_list[ret_ret].adr)) { return 1; }
				cout << "jal" << "\t" << FU_list[ret_ret].name << endl;
				global_g = global_g + 1;
				//cout << "move" << "\t" << "$v0" << "\t" << "$t0" << endl;
				FU_ZHI_TWO('v', 0);
				global_g = global_g - 1;
				if (symbol == 17)
				{
					global_g = global_g + 1;
					printf_flag = FU_list[ret_ret].type;
					if (!getsym(0)) { return false; }
					symbol_array[symarr++] = symbol;
				}
				else { return false; }
			}
			else { error(32); }
		}
		else if (FU_list[ret_ret].kind == 6)
		{


			FLAGGG = 1;
			if (!getsym(0)) { return false; }
			symbol_array[symarr++] = symbol;
			if (symbol == 38)
			{
				is_shuzu = 1;
				for (aaaa = 0; aaaa < big_item; aaaa++)
				{
					if (strcmp(BIG[aaaa].array_store, FU_list[ret_ret].name) == 0)
					{
						break;
					}
				}
				if (!getsym(0)) { return false; }
				symbol_array[symarr++] = symbol;
				if (expression(typ))
				{
					if (is_shuzu == 1)
					{
						cout << "mul" << "\t" << "$t" << 7 + aaaa << "\t" << "$" << z_z_two[global_g].zifu_two << "\t" << "$s7" << endl;
						FU_ZHI_TWO('t', 7 + aaaa);
					}
					else
					{
						cout << "mul" << "\t" << "$t" << global_g << "\t" << "$" << z_z_two[global_g].zifu_two << "\t" << "$s7" << endl;
						FU_ZHI_TWO('t', global_g);
					}
					SBSB = 0;
					//printf_flag = FU_list[ret_ret].type;
					if (printf_flag != 11) { error(44); }
					if (gen(33, 0, FU_list[ret_ret].com_bine.INT_num)) { return 1; }//������������������Ĵ�С
					if (gen(31, 0, 0)) { return 1; }//���鶥��Ԫ�����ջ���Ƚϣ��쿴�Ƿ�Խ��
					op_number4 = op_number;
					if (gen(39, 0, 0)) { return 1; }
					p_list[op_number4].x_int = op_number;
					//����Ӧ�ü�һ��ָ������ж������Ƿ�Խ�磬�������Խ�磬��ôJUBָ���equ����������
					//�˴�ָ���ִ����������equ=1,˵������ͨ�У�Ҳ������ת��������е���һ������ִ�С�
					//������ָ����Ŀ����Ϊ�˽��б���ʹ��.
					if (gen(30, 0, 0)) { return 1; }//������Ե�ַ��������������main_address���ݴ����ƫ�Ƶ�ַ

					if (gen(35, FU_list[ret_ret].lev, FU_list[ret_ret].adr)) { return 1; }//LDQ,ȡֵ��ջ��

					//##2019-7-22

					CHA_ZHAO_RETURN = CHA_ZHAO(CHUAN[CHUAN_item - 1]);
					cout << "lw" << "\t" << "$" << z_z_two[global_g].zifu_two << "\t" << aaaa * 4 + aaaa * 200 << "(" << "$" << z_z_two[global_g].zifu_two << ")" << endl;
					//cout << "lw" << "\t" << "$" << z_z_two[global_g].zifu_two << "\t" << "data" << CHA_ZHAO_RETURN + 1 << "(" << "$" << z_z_two[global_g].zifu_two << ")" << endl;
					//##2019-7-22
					is_shuzu = 0;
					if (symbol == 39)
					{
						printf_flag = FU_list[ret_ret].type;
						if (!getsym(0)) { return false; }
						symbol_array[symarr++] = symbol;
					}
					else { error(23); }
				}
				else { return false; }
			}
			else { error(33); }
		}
		//else if (FU_list[ret_ret].kind == 1) { cout << "FU_list[ret_ret].kind is:" << FU_list[ret_ret].kind << endl; }
		else { error(34); }
	}
	else if (symbol == 16)//(
	{
		if (!getsym(0)) { return false; }
		symbol_array[symarr++] = symbol;
		if (expression(typ))
		{
			SBSB = 0;
			if (symbol == 17)
			{
				symbol_array[symarr++] = symbol;
				if (printf_flag == 12)//char
				{
					printf_flag = 11;
				}
				//printf_flag = 11;
				//cout << "printf_flag is"<<printf_flag << endl;
				if (!getsym(0)) { return false; }
				symbol_array[symarr++] = symbol;
			}
			else { error(21); }
		}
		else { return false; }
	}

	else { error(20); }
	if (anti2)
	{
		if (gen(15, 0, 0)) { return 1; }
	}
	//cout << "factor success" << endl;
	return true;
}
bool item(int typ)
{
	int f_f = 0;
	if (factor(typ))
	{
		if (printf_flag2_use == 0)
		{
			printf_flag2 = printf_flag;
			printf_flag2_use = 1;
		}
		while (symbol == 35 || symbol == 36)/*����ǳ˳�*/
		{

			if (symbol == 36)
			{

				/*printf_flag2 = 9;
				printf_flag2_use = 1;*/
				SBSB = 9;

			}
			else
			{
				printf_flag2 = printf_flag;
				if (printf_flag2 == 12)
				{
					printf_flag2 == 11;
				}
				printf_flag2_use = 1;
			}
			//printf_flag2 = printf_flag;
			if (symbol == 35) { f_f = 13; }
			else if (symbol == 36) { f_f = 14; }
			if (!getsym(0)) { return false; }
			symbol_array[symarr++] = symbol;
			if (factor(typ))
			{

				if (printf_flag3_use == 0)
				{
					printf_flag3 = printf_flag;
					printf_flag3_use = 1;
				}
				//������Ҫ����������ʽ��float���ͣ���������int���͵�
				if (printf_flag2 > printf_flag3)
				{
					printf_flag2_use = 0;
					printf_flag3_use = 0;
					printf_flag = printf_flag3;
				}
				else if (printf_flag2 == 12 && printf_flag3 == 12)//������߶���char���ͣ���ô��Ӧ�ð���int���ͼ���
				{
					printf_flag2_use = 0;
					printf_flag3_use = 0;
					printf_flag = 11;
				}

				//�������������ͬ�����Ҷ���������ת���ַ���
				else
				{
					printf_flag2_use = 0;
					printf_flag3_use = 0;
					printf_flag = printf_flag2;
				}
				if (SBSB == 9)
				{
					printf_flag = 9;
				}
				if (gen(f_f, 0, 0)) { return 1; }
				////mips
				//SB_ITEM = SB_ITEM - 1;
				if (f_f == 13)
				{


					global_g = global_g - 1;
					cout << "mul" << "\t" << "$t" << global_g << "\t" << "$" << z_z_two[global_g].zifu_two << "\t" << "$" << z_z_two[global_g + 1].zifu_two << endl;

					FU_ZHI_TWO('t', global_g);
				}
				if (f_f == 14)
				{

					global_g = global_g - 1;
					cout << "div" << "\t" << "$t" << global_g << "\t" << "$" << z_z_two[global_g].zifu_two << "\t" << "$" << z_z_two[global_g + 1].zifu_two << endl;

					FU_ZHI_TWO('t', global_g);
				}
				////
				if (f_f == 13) { ; }
				else if (f_f == 14) { ; }
			}
			else { return false; }
		}
		printf_flag2_use = 0;
		printf_flag3_use = 0;
	}
	else { return false; }
	return true;
}
bool expression(int typ)
{
	int f_f_f = 0;
	bool anti = false;
	if (symbol == 33 || symbol == 34)
	{
		if (symbol == 34) { anti = true; }
		if (!getsym(0)) { return false; }
		symbol_array[symarr++] = symbol;
	}
	if (item(typ))
	{
		if (printf_flag2_use == 0)
		{
			printf_flag2 = printf_flag;
			printf_flag2_use = 1;
		}
		//����Ǽ���
		if (anti)//����Ǽ���
		{
			//�Ǹ���
			if (gen(15, 0, 0)) { return 1; }//gen(11,11,0)

		}
		while (symbol == 33 || symbol == 34)
		{

			printf_flag2 = printf_flag;
			if (printf_flag2 == 12)
			{
				printf_flag2 = 11;
			}
			printf_flag2_use = 1;
			//����ǼӺ�
			if (symbol == 33) { f_f_f = 10; }
			//����Ǽ���
			else if (symbol == 34) { f_f_f = 11; }
			if (!getsym(0)) { return false; }
			symbol_array[symarr++] = symbol;
			if (item(typ))
			{
				if (printf_flag3_use == 0)
				{
					printf_flag3 = printf_flag;
					printf_flag3_use = 1;
				}
				if (printf_flag2 > printf_flag3)
				{
					printf_flag = printf_flag3;
					printf_flag2_use = 0;
					printf_flag3_use = 0;
				}
				else if (printf_flag2 == 12 && printf_flag3 == 12)//������߶���char���ͣ���ô��Ӧ�ð���int���ͼ���
				{
					printf_flag2_use = 0;
					printf_flag3_use = 0;
					printf_flag = 11;
				}
				//�������������ͬ�����Ҷ���������ת���ַ���
				else
				{
					printf_flag2_use = 0;
					printf_flag3_use = 0;
					printf_flag = printf_flag2;
				}
				if (SBSB == 9)
				{
					printf_flag = 9;
				}
				//������Ҫ����������ʽ��float���ͣ���������int���͵�
				if (gen(f_f_f, 0, 0)) { return 1; }
				////mips
				if (f_f_f == 10)
				{

					global_g = global_g - 1;
					cout << "add" << "\t" << "$t" << global_g << "\t" << "$" << z_z_two[global_g].zifu_two << "\t" << "$" << z_z_two[global_g + 1].zifu_two << endl;

					FU_ZHI_TWO('t', global_g);
				}
				if (f_f_f == 11)
				{

					global_g = global_g - 1;
					cout << "sub" << "\t" << "$t" << global_g << "\t" << "$" << z_z_two[global_g].zifu_two << "\t" << "$" << z_z_two[global_g + 1].zifu_two << endl;

					FU_ZHI_TWO('t', global_g);
				}
				////
				if (f_f_f == 10) { ; }
				else if (f_f_f == 11) { ; }
			}
			else { return false; }
		}
		printf_flag2_use = 0;
		printf_flag3_use = 0;
	}
	else { return false; }
	return true;
}
bool wu_fu_hao_digital(int typ)
{
	if (symbol == 24)
	{

		if (int_num == 0) { error(35); }
	}
	else { error(22); }
	return true;
}
bool constant_description(int typ)//����˵��
{
	int type = 0;
	if (symbol == 2 || symbol == 3 || symbol == 4)
	{
		if (symbol == 2)//int
		{
			if (!getsym(0)) { return false; }
			symbol_array[symarr++] = symbol;
			while (1)
			{
				if (symbol == 23)
				{
					if (!getsym(0)) { return false; }
					symbol_array[symarr++] = symbol;
					if (symbol == 21)//=
					{
						if (!getsym(0)) { return false; }
						symbol_array[symarr++] = symbol;
						if (symbol == 33 || symbol == 34)
						{
							FLAG_IN_CONST = symbol;
							if (!getsym(0)) { return false; }
							symbol_array[symarr++] = symbol;
							if (symbol == 24)
							{
								type = 11;
								if (RE_find(CHUAN_item - 1) != 0) { error(45); }
								if (FLAG_IN_CONST == 33)
								{

									enter(lev, type, 4, CHUAN_item - 1, true);
								}
								else if (FLAG_IN_CONST == 34)
								{

									enter(lev, type, 4, CHUAN_item - 1, false);
								}

								if (!getsym(0)) { return false; }
								symbol_array[symarr++] = symbol;
								if (symbol == 20)
								{
									if (!getsym(0)) { return false; }
									symbol_array[symarr++] = symbol;
									continue;
								}
								else if (symbol == 22) { break; }
								else { error(17); break; }
							}
							else
							{
								cout << "not find the specific int_number" << endl;
							}
						}
						else if (symbol == 24)
						{
							type = 11;
							if (RE_find(CHUAN_item - 1) != 0) { error(45); }
							enter(lev, type, 4, CHUAN_item - 1, true);
							if (!getsym(0)) { return false; }
							symbol_array[symarr++] = symbol;
							if (symbol == 20)
							{
								if (!getsym(0)) { return false; }
								symbol_array[symarr++] = symbol;
								continue;
							}
							else if (symbol == 22) { break; }
							else { error(17); break; }
						}
						else { error(16); break; }
					}
					else { error(15); break; }
				}
				else { error(14); break; }
			}
		}
		else if (symbol == 3)//float
		{
			if (!getsym(0)) { return false; }
			symbol_array[symarr++] = symbol;
			while (1)
			{
				if (symbol == 23)
				{
					if (!getsym(0)) { return false; }
					symbol_array[symarr++] = symbol;
					if (symbol == 21)
					{
						if (!getsym(0)) { return false; }
						symbol_array[symarr++] = symbol;
						if (symbol == 33 || symbol == 34)
						{
							FLAG_IN_CONST2 = symbol;
							if (!getsym(0)) { return false; }
							symbol_array[symarr++] = symbol;
							if (symbol == 40)
							{
								type = 9;
								if (RE_find(CHUAN_item - 1) != 0) { error(45); }
								if (FLAG_IN_CONST2 == 33)
								{

									enter(lev, type, 4, CHUAN_item - 1, true);
								}
								else if (FLAG_IN_CONST2 == 34)
								{

									enter(lev, type, 4, CHUAN_item - 1, false);
								}

								if (!getsym(0)) { return false; }
								symbol_array[symarr++] = symbol;
								if (symbol == 20)
								{
									if (!getsym(0)) { return false; }
									symbol_array[symarr++] = symbol;
									continue;
								}
								else if (symbol == 22) { break; }
								else { error(17); break; }
							}
							else
							{
								cout << "not find the specific int_number" << endl;
							}
						}
						else if (symbol == 40)
						{
							type = 9;
							if (RE_find(CHUAN_item - 1) != 0) { error(45); }
							enter(lev, type, 4, CHUAN_item - 1, true);
							if (!getsym(0)) { return false; }
							symbol_array[symarr++] = symbol;
							if (symbol == 20)
							{
								if (!getsym(0)) { return false; }
								symbol_array[symarr++] = symbol;
								continue;
							}
							else if (symbol == 22) { break; }
							else { error(17); break; }
						}
						else { error(16); break; }
					}
					else { error(15); break; }
				}
				else { error(14); break; }
			}
		}
		else
		{
			if (!getsym(0)) { return false; }
			symbol_array[symarr++] = symbol;
			while (1)
			{
				if (symbol == 23)
				{
					if (!getsym(0)) { return false; }
					symbol_array[symarr++] = symbol;
					if (symbol == 21)
					{
						if (!getsym(0)) { return false; }
						symbol_array[symarr++] = symbol;
						if (symbol == 100)
						{
							ch = getsym(3);
							if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch >= 'a'&&ch <= 'z' || ch >= 'A'&&ch <= 'Z' || ch >= '0'&&ch <= '9' || ch == '_')
							{
								zi_fu = ch;
								ascll_num = (int)zi_fu;
								getsym(3);
								if (ch == '\'')
								{
									//2019-7-21
									global_g = global_g + 1;
									cout << "li" << "\t" << "$t" << global_g << "\t" << ascll_num_two << endl;

									FU_ZHI_TWO('t', global_g);

									cout << "move" << "\t" << "$a0" << "\t" << "$" << z_z_two[global_g].zifu_two << endl;
									//2019-7-21
									type = 12;
									if (RE_find(CHUAN_item - 1) != 0) { error(45); }
									enter(lev, type, 4, CHUAN_item - 1, true);
									if (!getsym(0)) { return false; }
									symbol_array[symarr++] = symbol;
									if (symbol == 20)
									{
										if (!getsym(0)) { return false; }
										symbol_array[symarr++] = symbol;
										continue;
									}
									else if (symbol == 22) { break; }
									else { error(17); break; }
								}
								else { error(18); break; }
							}
							else { error(19); break; }
						}
						else { error(18); break; }
					}
					else { error(15); break; }
				}
				else { error(14); break; }
			}
		}
	}
	else { error(13); }
	return true;
}
bool variable_description(int typ)//����˵��
{
	int temp_var;
	if (symbol == 2 || symbol == 3 || symbol == 4)
	{
		if (symbol == 2) { temp_var = 11; }
		if (symbol == 3) { temp_var = 9; }
		if (symbol == 4) { temp_var = 12; }
		if (!getsym(0)) { return false; }
		symbol_array[symarr++] = symbol;
		while (1)
		{
			if (symbol == 23)
			{
				if (!getsym(0)) { return false; }
				symbol_array[symarr++] = symbol;
				if (symbol == 38)
				{
					if (!getsym(0)) { return false; }
					symbol_array[symarr++] = symbol;
					if (wu_fu_hao_digital(typ))
					{
						fu_int_num = int_num;
						if (!getsym(0)) { return false; }
						symbol_array[symarr++] = symbol;
						if (symbol == 39)
						{

							array_count = array_count + 1;
							//##2019-7-22
							strcpy(BIG[big_item].array_store, CHUAN[CHUAN_item - 1]);
							big_item += 1;
							//##2019-7-22


							//2019-7-22
							//ARRAY_COUNT[arr_count] = array_count;
							//arr_count += 1;
							//2019-7-22
							//cout << "data" << array_count << ":" << "." << " " << "0" << ":" << fu_int_num << endl;
							if (RE_find(CHUAN_item - 1) != 0) { error(45); }
							enter(lev, temp_var, 6, CHUAN_item - 1, fu_int_num);//symbol==24
							if (!getsym(0)) { return false; }
							symbol_array[symarr++] = symbol;
							if (symbol == 20)
							{
								if (!getsym(0)) { return false; }
								symbol_array[symarr++] = symbol;
								continue;
							}
							else if (symbol == 22) { break; }
							else { error(17); }
						}
						else { error(23); }
					}
					else { return false; }
				}
				else if (symbol == 22)//����Ƿֺ�
				{
					if (RE_find(CHUAN_item - 1) != 0) { error(45); }
					enter(lev, temp_var, 0, CHUAN_item - 1, true);
					break;
				}
				else if (symbol == 20)//����Ƕ���
				{
					if (RE_find(CHUAN_item - 1) != 0) { error(45); }
					enter(lev, temp_var, 0, CHUAN_item - 1, true);
					if (!getsym(0)) { return false; }
					symbol_array[symarr++] = symbol;
					continue;
				}
				else { error(17); }
			}
			else { error(14);  break; }
		}
	}
	else { error(20); }
	return true;
}
bool statement(int typ)
{
	int f_f_f_f = 0;
	int op_number1, op_number22, op_number4, op_number5, op_number8, op_number2, op_number67;
	int ret_find;
	int i_5;
	int sc_i;
	if (symbol == 15)//printf
	{
		if (!getsym(0)) { return false; }
		symbol_array[symarr++] = symbol;
		if (symbol == 16)
		{
			if (!getsym(0)) { return false; }
			symbol_array[symarr++] = symbol;
			if (symbol == 200)
			{
				getsym(3);
				CLEAR();
				print_f[printf_item] = ch;
				printf_item = printf_item + 1;
				while (ch == 32 || ch == 33 || (ch >= 35 && ch <= 126) || ch == ' ' || ch == '\r' || ch == '\n' || ch == '\t')
				{
					getsym(3);//�����ַ���ȡ
					print_f[printf_item] = ch;
					printf_item = printf_item + 1;
				}
				getsym(4);//�Ѷ��ȡ�����ݸ�����
				FUZHI();

				if (!getsym(0)) { return false; }
				symbol_array[symarr++] = symbol;
				if (symbol == 200)
				{
					if (gen(8, 5, Print_F)) { return 1; }
					//2019-7-21-new
					cout << "la" << "\t" << "$a0" << "\t" << Print_F << endl;
					cout << "li" << "\t" << "$v0" << "\t" << 4 << endl;
					cout << "syscall" << endl;
					//2019-7-21-new

					//global_g = global_g - 1;
					if (!getsym(0)) { return false; }
					symbol_array[symarr++] = symbol;
					//CLEAR();
					//CLEAR_C();//���Կ��Ǵ˽���������
					if (symbol == 17)
					{
						CLEAR();
						CLEAR_C();
						if (!getsym(0)) { return false; }
						symbol_array[symarr++] = symbol;
						if (symbol == 22)
						{
							if (!getsym(0)) { return false; }
							symbol_array[symarr++] = symbol;
						}
						else { error(17); }
					}
					else if (symbol == 20)//����
					{
						if (!getsym(0)) { return false; }
						symbol_array[symarr++] = symbol;
						if (expression(typ))
						{
							SBSB = 0;
							if (gen(8, printf_flag, 0)) { return 1; }

							CLEAR();
							CLEAR_C();
							if (symbol == 17)
							{
								if (!getsym(0)) { return false; }
								symbol_array[symarr++] = symbol;
								if (symbol == 22)
								{

									if (!getsym(0)) { return false; }
									symbol_array[symarr++] = symbol;
								}
								else { error(17); }
							}
							else { error(21); }
						}
						else { return false; }
					}
					else { error(21); }
				}
				else { error(25); }
			}
			else
			{
				PRINTF_OPERATION = 1;
				if (expression(typ))
				{
					/*if (printf_flag == 12)//char
					{


						cout << "move" << "\t" << "$a0" << "\t" << "$" << z_z_two[global_g].zifu_two << endl;
						cout << "li" << "\t" << "$v0" << "\t" << 11 << endl;
						cout << "syscall" << endl;
						global_g = global_g - 1;
					}*/
					if (X86 == 0)
					{
						if (printf_flag == 12)
						{
							cout << "move" << "\t" << "$a0" << "\t" << "$" << z_z_two[global_g].zifu_two << endl;
							cout << "li" << "\t" << "$v0" << "\t" << 11 << endl;
							cout << "syscall" << endl;
							global_g = global_g - 1;
							PRINTF_OPERATION = 0;
						}
						if (printf_flag == 11)
						{
							cout << "move" << "\t" << "$a0" << "\t" << "$" << z_z_two[global_g].zifu_two << endl;
							cout << "li" << "\t" << "$v0" << "\t" << 1 << endl;
							cout << "syscall" << endl;
							global_g = global_g - 1;
							PRINTF_OPERATION = 0;
						}
						if (printf_flag == 9)
						{
							cout << "move" << "\t" << "$a0" << "\t" << "$" << z_z_two[global_g].zifu_two << endl;
							cout << "li" << "\t" << "$v0" << "\t" << 1 << endl;
							cout << "syscall" << endl;
							global_g = global_g - 1;
							PRINTF_OPERATION = 0;
						}
					}
					else
					{
						//add2019-7-20

						if (FLFL != 1)
						{

							PRINTF_OPERATION = 0;
							cout << "li" << "\t" << "$v0" << "\t" << 11 << endl;
							cout << "syscall" << endl;
							X86 = 0;

						}
						else
						{
							FLFL = 0;
							X86 = 0;
						}

						//add2019-7-20


					}
					//PRINTF_OPERATION = 0;
					SBSB = 0;
					if (gen(8, printf_flag, 0)) { return 1; }

					CLEAR();
					CLEAR_C();
					if (symbol == 17)
					{
						if (!getsym(0)) { return false; }
						symbol_array[symarr++] = symbol;
						if (symbol == 22)
						{
							if (!getsym(0)) { return false; }
							symbol_array[symarr++] = symbol;
						}
						else { error(17); }
					}
					else { error(21); }
				}
				else { return false; }
			}
		}
		else { error(24); }
	}
	else if (symbol == 14)//scanf
	{
		if (!getsym(0)) { return false; }
		symbol_array[symarr++] = symbol;
		if (symbol == 16)//(
		{
			while (1)
			{
				if (!getsym(0)) { return false; }
				symbol_array[symarr++] = symbol;
				if (symbol == 23)//ident
				{
					f_f_f_f = find(CHUAN_item - 1);
					if (f_f_f_f == 0) { cout << "not find the element which we will use" << endl; }
					if (FU_list[f_f_f_f].kind == 0 || FU_list[f_f_f_f].kind == 3)//����Ǳ������߲���
					{
						////mips
						if (FU_list[f_f_f_f].type == 11)//int
						{
							//cout << "la" << "\t" << "$a0" << "\t" << "input" << endl;
							//cout << "li" << "\t" << "$v0" << "\t" << 4 << endl;
							//cout << "syscall" << endl;
							cout << "li" << "\t" << "$v0" << "\t" << 5 << endl;
							cout << "syscall" << endl;
							cout << "move" << "\t" << "$a" << scanf_count << "\t" << "$v0" << endl;

						}
						if (FU_list[f_f_f_f].type == 12)//char
						{
							//cout << "la" << "\t" << "$a0" << "\t" << "input" << endl;
							//cout << "li" << "\t" << "$v0" << "\t" << 4 << endl;
							//cout << "syscall" << endl;
							cout << "li" << "\t" << "$v0" << "\t" << 12 << endl;
							cout << "syscall" << endl;
							cout << "move" << "\t" << "$a" << scanf_count << "\t" << "$v0" << endl;

						}
						mips_i = FU_list[f_f_f_f].adr - 1;
						cout << "sw" << "\t" << "$a" << scanf_count << "\t" << 400 + mips_i * 4 << "($0)" << endl;
						scanf_count = scanf_count + 1;
						/*if (zi_fu_line_item_two == 0)
						{
						cout << "sw" << "\t" << "$v0" << "\t" << 400 << "($0)" << endl;
						}
						else
						{
						cout << "sw" << "\t" << "$" << z_z_two[zi_fu_line_item_two - 1].zifu_two << "\t" << 400 + FU_list[f_f_f_f].adr * 4 << "($0)" << endl;
						}*/
						////
						if (gen(6, FU_list[f_f_f_f].type, 0)) { return 1; }

						if (gen(22, FU_list[f_f_f_f].lev, FU_list[f_f_f_f].adr)) { return 1; }
						//�������ݲ����ݵ�����ջ��
					}
					//������Ǳ������߲��������豨����
					if (!getsym(0)) { return false; }
					symbol_array[symarr++] = symbol;
					if (symbol == 17)
					{
						COUNT_SCANF = COUNT_SCANF + 1;
						break;
					}
					else if (symbol == 20)
					{
						COUNT_SCANF = COUNT_SCANF + 1;
						continue;
					}
					else { error(21); break; }
				}
				else { error(14); break; }
			}
			if (!getsym(0)) { return false; }
			symbol_array[symarr++] = symbol;
			if (symbol == 22)
			{
				if (!getsym(0)) { return false; }
				symbol_array[symarr++] = symbol;
			}
			else { error(17); }
		}
		else { error(24); }
	}
	else if (symbol == 7)//if���
	{

		if (!getsym(0)) { return false; }
		symbol_array[symarr++] = symbol;
		if (symbol == 16)
		{
			FPP = 1;
			if (!getsym(0)) { return false; }
			symbol_array[symarr++] = symbol;
			if (expression(typ))
			{
				SBSB = 0;
				if (printf_flag == 12) { error(51); }//�������ַ�����
				judge_if1 = printf_flag;
				//cout << "expression in if type is" << printf_flag << endl;
				//if (printf_flag != 11) { error(46); }
				/*��һ���жϱ��ʽ0-1,not ending.................*/
				//����жϱ��ʽ�Ƿ�Ϊ�㣿
				//����ָ������ж�
				//�ڽ���ִ�е���ʱ��ʱ�򣬱��ʽ��ֵ�Ѿ���ջ����λ��ֻ��Ҫһ��ָ���ֵȡ����������0�ȽϾͿ�����
				//������ʽ��ֵΪ�㣬��ô����ת��else��ִ�У�������ת�������������ȡsymbol
				if (symbol != 17)
				{
					if (symbol == 26 || symbol == 27 || symbol == 28 || symbol == 29 || symbol == 30 || symbol == 31)
					{
						if (symbol == 27) { f_f_f_f = 16; }
						else if (symbol == 29) { f_f_f_f = 20; }
						else if (symbol == 26) { f_f_f_f = 17; }
						else if (symbol == 28) { f_f_f_f = 21; }
						else if (symbol == 30) { f_f_f_f = 18; }
						else if (symbol == 31) { f_f_f_f = 19; }
						if (!getsym(0)) { return false; }
						symbol_array[symarr++] = symbol;
						if (expression(typ))
						{
							////

							if (f_f_f_f == 21)//<=
							{

								global_g = global_g - 1;
								cout << "sub" << "\t" << "$s0" << "\t" << "$" << z_z_two[global_g].zifu_two << "\t" << "$" << z_z_two[global_g + 1].zifu_two << endl;
								cout << "bgtz" << "\t" << "$s0" << "\t" << "tiao" << TIAO_COUNT << endl;

								global_g = global_g - 1;

							}
							if (f_f_f_f == 17)//<
							{
								global_g = global_g - 1;
								cout << "sub" << "\t" << "$s0" << "\t" << "$" << z_z_two[global_g].zifu_two << "\t" << "$" << z_z_two[global_g + 1].zifu_two << endl;
								cout << "bgez" << "\t" << "$s0" << "\t" << "tiao" << TIAO_COUNT << endl;

								global_g = global_g - 1;
							}
							if (f_f_f_f == 18)//==
							{
								global_g = global_g - 1;
								cout << "bne" << "\t" << "$" << z_z_two[global_g].zifu_two << "\t" << "$" << z_z_two[global_g + 1].zifu_two << "\t" << "tiao" << TIAO_COUNT << endl;
								global_g = global_g - 1;

							}
							if (f_f_f_f == 19)//!=
							{
								global_g = global_g - 1;
								cout << "beq" << "\t" << "$" << z_z_two[global_g].zifu_two << "\t" << "$" << z_z_two[global_g + 1].zifu_two << "\t" << "tiao" << TIAO_COUNT << endl;
								global_g = global_g - 1;

							}
							if (f_f_f_f == 20)//>=
							{
								global_g = global_g - 1;
								cout << "sub" << "\t" << "$s0" << "\t" << "$" << z_z_two[global_g].zifu_two << "\t" << "$" << z_z_two[global_g + 1].zifu_two << endl;
								cout << "bltz" << "\t" << "$s0" << "\t" << "tiao" << TIAO_COUNT << endl;
								global_g = global_g - 1;

							}
							if (f_f_f_f == 16)//>
							{
								global_g = global_g - 1;
								cout << "sub" << "\t" << "$s0" << "\t" << "$" << z_z_two[global_g].zifu_two << "\t" << "$" << z_z_two[global_g + 1].zifu_two << endl;
								cout << "blez" << "\t" << "$s0" << "\t" << "tiao" << TIAO_COUNT << endl;
								global_g = global_g - 1;

							}
							////
							SBSB = 0;
							if (printf_flag == 12) { error(51); }
							judge_if2 = printf_flag;
							if (judge_if1 != judge_if2) { error(52); }
							if (gen(f_f_f_f, 0, 0)) { return 1; }
						}
						else { return false; }
					}
					else { error(36); }
				}
				else
				{
					//if(printf_flag==9){cout <<"do not allowed float type in this choice"<<endl;}
					if (gen(37, 0, 0)) { return 1; }//JET �ж������Ƿ�Ϊ0�������0��ֱ����else���֣���������תָ��
				}
				//else{ cout << "���ǹ�ϵ�����,���п�����(a)������ʽ���������ﲻ�豨��" << endl; }
				op_number1 = op_number;//������ת׼��
				if (gen(3, 0, 0)) { return 1; }
				if (symbol == 17)
				{
					if (!getsym(0)) { return false; }
					symbol_array[symarr++] = symbol;
					if (statement(typ))//����Ϊ�棬��������䲿��
					{

						if (symbol == 8)//else�ж�����
						{
							//done_if = done_if + 1;
							//cout << "j" << "\t" << "done_if" << done_if << endl;
							op_number2 = op_number;
							if (gen(4, 0, 0)) { return 1; }//��ʱ��������Ϊ�沿�֣�������ת�Ƶ�������
							cout << "tiao" << TIAO_COUNT << ":" << endl;
							TIAO_COUNT = TIAO_COUNT + 1;
							p_list[op_number1].x_int = op_number;//����Ϊ�٣���ת���������ڶ�����䲿�ֽ���
							if (!getsym(0)) { return false; }
							symbol_array[symarr++] = symbol;
							if (statement(typ))
							{
								//done_if = done_if + 1;
								p_list[op_number2].x_int = op_number;
								//cout << "j" << "\t" << "done_if" << done_if << endl;
							}//����Ϊ�٣���������䲿��
							else { return false; }
						}
						//û��else��䣬��ִ�д˲���
						else
						{
							cout << "tiao" << TIAO_COUNT << ":" << endl;
							TIAO_COUNT = TIAO_COUNT + 1;
							p_list[op_number1].x_int = op_number;

						}

					}
					else { return false; }
				}
				else { error(21); }
			}
			else { return false; }
		}
		else { error(24); }

	}
	else if (symbol == 12)//while
	{

		if (!getsym(0)) { return false; }
		symbol_array[symarr++] = symbol;//��symbol��ֵ�����Ӧ��ר�Ŵ�symbol��������
		if (symbol == 16)
		{
			op_number22 = op_number;//��¼whileѭ���Ŀ�ʼλ��
			cout << "while:" << endl;
			if (!getsym(0)) { return false; }
			symbol_array[symarr++] = symbol;
			if (expression(typ))
			{
				SBSB = 0;
				if (printf_flag == 12) { error(51); }//������ʽ��������char���ͣ�����
				judge_while1 = printf_flag;//��¼��ǰ���ʽ���������ڼ�������Ƿ�ƥ��ʹ��
										   //cout << "expression in while type is" << printf_flag << endl;
										   //if (printf_flag != 11) { error(46); }
				if (symbol == 26 || symbol == 27 || symbol == 28 || symbol == 29 || symbol == 30 || symbol == 31)
				{
					if (symbol == 27) { f_f_f_f = 16; }
					else if (symbol == 29) { f_f_f_f = 20; }
					else if (symbol == 26) { f_f_f_f = 17; }
					else if (symbol == 28) { f_f_f_f = 21; }
					else if (symbol == 30) { f_f_f_f = 18; }
					else if (symbol == 31) { f_f_f_f = 19; }
					if (!getsym(0)) { return false; }
					symbol_array[symarr++] = symbol;
					if (expression(typ))
					{
						/*clear_clear();
						zi_fu_chuan[zi_fu_chuan_item] = 't';
						zi_fu_chuan_item = zi_fu_chuan_item + 1;
						zi_fu_chuan[zi_fu_chuan_item] = 48 + SB_ITEM;
						transla(zi_fu_chuan);*/
						if (f_f_f_f = 16)//>
						{
							/*global_g = global_g - 1;
							cout << "sub" << "\t" << "$s0" << "\t" << "$" << z_z_two[global_g].zifu_two << "\t" << "$" << z_z_two[global_g + 1].zifu_two << endl;
							cout << "bgtz" << "\t" << "$s0" << "\t" << "tiao" << TIAO_COUNT << endl;
							global_g = global_g - 1;*/
							global_g = global_g - 1;
							cout << "sub" << "\t" << "$s0" << "\t" << "$" << z_z_two[global_g].zifu_two << "\t" << "$" << z_z_two[global_g + 1].zifu_two << endl;
							cout << "blez" << "\t" << "$s0" << "\t" << "out_while" << endl;
							global_g = global_g - 1;
						}
						if (f_f_f_f = 20)//>=
						{
							global_g = global_g - 1;
							cout << "sub" << "\t" << "$s0" << "\t" << "$" << z_z_two[global_g].zifu_two << "\t" << "$" << z_z_two[global_g + 1].zifu_two << endl;
							cout << "bltz" << "\t" << "$s0" << "\t" << "out_while" << endl;
							global_g = global_g - 1;
						}
						if (f_f_f_f = 17)//<
						{
							global_g = global_g - 1;
							cout << "sub" << "\t" << "$s0" << "\t" << "$" << z_z_two[global_g].zifu_two << "\t" << "$" << z_z_two[global_g + 1].zifu_two << endl;
							cout << "bgez" << "\t" << "$s0" << "\t" << "out_while" << endl;
							global_g = global_g - 1;
						}
						if (f_f_f_f = 21)//<=
						{
							global_g = global_g - 1;
							cout << "sub" << "\t" << "$s0" << "\t" << "$" << z_z_two[global_g].zifu_two << "\t" << "$" << z_z_two[global_g + 1].zifu_two << endl;
							cout << "bgtz" << "\t" << "$s0" << "\t" << "out_while" << endl;
							global_g = global_g - 1;
						}
						if (f_f_f_f = 18)//==
						{
							global_g = global_g - 1;
							cout << "bne" << "\t" << "$" << z_z_two[global_g].zifu_two << "\t" << "$" << z_z_two[global_g + 1].zifu_two << "\t" << "out_while" << endl;
							global_g = global_g - 1;
						}
						if (f_f_f_f = 19)//!=
						{
							global_g = global_g - 1;
							cout << "beq" << "\t" << "$" << z_z_two[global_g].zifu_two << "\t" << "$" << z_z_two[global_g + 1].zifu_two << "\t" << "out_while" << endl;
							global_g = global_g - 1;
						}
						SBSB = 0;
						if (printf_flag == 12) { error(51); }//���ʽ��������char ����
						judge_while2 = printf_flag;//��¼��ʱ���ʽ������
						if (judge_while1 != judge_while2) { error(52); }//whileѭ���������ͽ��бȽϣ������һ�±���

						if (gen(f_f_f_f, 0, 0)) { return false; }
						op_number1 = op_number;//��¼��ʱwhileѭ����λ��
						if (gen(3, 0, 0)) { return false; }//����һ����תָ��

						if (symbol == 17)
						{
							if (!getsym(0)) { return false; }
							symbol_array[symarr++] = symbol;
							if (statement(typ))
							{
								if (gen(2, 0, op_number22)) { return false; }//��ָ����ת��whileѭ���Ŀ�ʼλ��
								cout << "j" << "\t" << "while" << endl;
								p_list[op_number1].x_int = op_number;//��¼whileѭ��������P-CODEλ��
								cout << "out_while:" << endl;
							}
							else { return false; }
						}
						else { error(21); }
					}
					else { return false; }
				}
				else
				{
					//if(printf_flag==9){cout <<"not be allowed float type in this choice"<<endl;}
					if (gen(43, 0, 0)) { return 1; }//�жϱ��ʽ��ֵ�Ƿ�Ϊ0
					op_number1 = op_number;

					cout << "beq" << "\t" << "$" << z_z_two[global_g].zifu_two << "\t" << "$0" << "\t" << "out_while" << endl;
					if (gen(3, 0, 0)) { return 1; }//������ʽ��ֵΪ0��������ת�Ƶ�whileѭ�����档
					if (symbol == 17)//)
					{
						if (!getsym(0)) { return false; }
						symbol_array[symarr++] = symbol;
						if (statement(typ))
						{
							if (gen(2, 0, op_number22)) { return 1; }//�ٴν���whileѭ���ж�
							cout << "j" << "\t" << "while" << endl;
							p_list[op_number1].x_int = op_number;
							cout << "out_while:" << endl;
						}
						else { return false; }
					}
					else { error(21); }
				}
			}
			else { return false; }
		}
		else { error(24); }
	}
	else if (symbol == 23)
	{
		ret_find = find(CHUAN_item - 1);//���ҷ��ű����ݣ����Ƿ���ڣ������򷵻�Ԫ���±�
		if (ret_find == 0) { cout << "not find the element which be token in the FU_list before" << endl; }
		if (!getsym(0)) { return false; }
		symbol_array[symarr++] = symbol;
		if (FU_list[ret_find].kind == 0 || FU_list[ret_find].kind == 3)//˵���Ǳ������߲��� || FU_list[ret_find].kind == 3
		{
			if (symbol == 21)//=
			{
				if (!getsym(0)) { return false; }
				symbol_array[symarr++] = symbol;
				RET_FLAG = find(CHUAN_item - 1);
				if (RET_FLAG == 0) { cout << "not find the element which be token in the FU_list before" << endl; }
				if (FU_list[RET_FLAG].kind == 1) { cout << "�޷���ֵ���������Ը�ֵ�����" << endl; }
				if (expression(typ))
				{
					SBSB = 0;

					if (FU_list[ret_find].type != printf_flag) { error(40); }//��ֵ����������Ͳ�ƥ��
					FU_list[ret_find].type = printf_flag;
					if (gen(22, FU_list[ret_find].lev, FU_list[ret_find].adr)) { return 1; }
					if (BIAO_JI_FUN == 1)
					{
						BIAO_JI_FUN = 0;
						mips_i = FU_list[ret_find].adr - 1;
						cout << "sw" << "\t" << "$v0" << "\t" << 400 + mips_i * 4 << "($0)" << endl;
					}
					else
					{
						global_g = global_g - 1;
						mips_i = FU_list[ret_find].adr - 1;
						cout << "sw" << "\t" << "$" << z_z_two[global_g + 1].zifu_two << "\t" << 400 + mips_i * 4 << "($0)" << endl;

					}
					if (symbol == 22)
					{
						if (!getsym(0)) { return false; }
						symbol_array[symarr++] = symbol;
					}
					else { error(17); }
				}

				else { return false; }
			}
			else { error(15); }
		}

		else if (FU_list[ret_find].kind == 1 || FU_list[ret_find].kind == 2)//��������޷���ֵ��������
		{
			if (symbol == 16)
			{
				if (gen(23, FU_list[ret_find].type, 0)) { return 1; }
				if (!getsym(0)) { return false; }
				symbol_array[symarr++] = symbol;
				for (i_5 = ret_find + 1; i_5 < 100; i_5++)
				{
					if (FU_list[i_5].kind != 3) { break; }
					para_value = FU_list[i_5].type;//���ҷ��ű��в��������ͣ���������ʱ������
					if (expression(typ))
					{
						SBSB = 0;
						//add something
						////mips
						global_g = global_g - 1;
						cout << "sw" << "\t" << "$" << z_z_two[global_g + 1].zifu_two << "\t" << FU_list[i_5].adr * 4 - 4 << "($0)" << endl;

						////
						if (para_value != 0 && para_value != printf_flag) { cout << "�������Ͳ�ƥ��" << endl; }
						if (symbol == 20)
						{
							if (!getsym(0)) { return false; }
							symbol_array[symarr++] = symbol;
						}
					}
					else { return false; }
				}
				para_value = 0;
				if ((FU_list[i_5].kind != 3 && symbol != 17)) { cout << "����������ƥ��" << endl; }
				if (gen(24, 0, FU_list[ret_find].adr)) { return 1; }
				cout << "jal" << "\t" << FU_list[ret_find].name << endl;

				if (symbol == 17)
				{
					if (!getsym(0)) { return false; }
					symbol_array[symarr++] = symbol;
					if (symbol == 22)
					{
						if (!getsym(0)) { return false; }
						symbol_array[symarr++] = symbol;
					}
					else { error(17); }
				}
				else { return false; }
			}
			else { error(24); }
		}
		else if (FU_list[ret_find].kind == 6)//������
		{

			if (symbol == 38)//[
			{
				is_shuzu = 1;
				for (aaaa = 0; aaaa < big_item; aaaa++)
				{
					if (strcmp(BIG[aaaa].array_store, FU_list[ret_find].name) == 0)
					{
						break;
					}
				}
				if (!getsym(0)) { return false; }
				symbol_array[symarr++] = symbol;
				if (expression(typ))
				{

					if (is_shuzu == 1)
					{
						cout << "mul" << "\t" << "$t" << 7 + aaaa << "\t" << "$" << z_z_two[global_g].zifu_two << "\t" << "$s7" << endl;
						FU_ZHI_TWO('t', 7 + aaaa);
					}
					else
					{
						cout << "mul" << "\t" << "$t" << global_g << "\t" << "$" << z_z_two[global_g].zifu_two << "\t" << "$s7" << endl;
						FU_ZHI_TWO('t', global_g);
					}
					SBSB = 0;
					//cout << "expression in array type is" << printf_flag << endl;
					if (printf_flag != 11) { error(44); }//�ж�������ں������ǲ������͵ģ����������ᱨ��
														 //PUF,�����ű������С�����ջ�����Ա�Ƚϣ���������С�Ƿ�Խ��
					if (gen(33, 0, FU_list[ret_find].com_bine.INT_num)) { return 1; }

					//��ָ�JUB    �ж�ָ��жϱ��ʽ��ֵ�Ƿ�������������ޣ�ջ�����ջ��ֵ���бȽϣ�
					if (gen(31, 0, 0)) { return 1; }


					op_number4 = op_number;
					if (gen(39, 0, 0)) { return 1; }

					//cout << "not pi pei" << endl;
					p_list[op_number4].x_int = op_number;

					//JSW,�����ַ��������䲿��Ϊ�˷�ֹ�����Ӳ��ֳ�ͻ������������һ������main2_address
					if (gen(36, 0, 0)) { return 1; }
					is_shuzu = 0;
					if (symbol == 39)//]
					{
						if (!getsym(0)) { return false; }
						symbol_array[symarr++] = symbol;
						if (symbol == 21)//=
						{
							//##2019-7-22-new
							new_value = CHUAN_item - 1;
							FLAGG = 1;
							//##2019-7-22-new
							if (!getsym(0)) { return false; }
							symbol_array[symarr++] = symbol;
							if (expression(typ))
							{
								SBSB = 0;

								if (FU_list[ret_find].type != printf_flag) { error(40); }
								FU_list[ret_find].type = printf_flag;
								//STW ��ͬ��sto���ǣ�����һ������main2_address,���ڽ�������ƫ�Ƶ�ַ����
								if (gen(34, FU_list[ret_find].lev, FU_list[ret_find].adr)) { return 1; }
								global_g = global_g - 1;

								//##2019-7-22-new

								if (FLAGG == 1 && FLAGGG == 1)
								{
									for (aaaa = 0; aaaa < big_item; aaaa++)
									{
										if (strcmp(BIG[aaaa].array_store, FU_list[ret_find].name) == 0)
										{
											break;
										}
									}
									FLAGG = 0;
									FLAGGG = 0;
									CHA_ZHAO_RETURN = CHA_ZHAO(CHUAN[new_value]);
									cout << "sw" << "\t" << "$" << z_z_two[global_g + 1].zifu_two << "\t" << aaaa * 4 + aaaa * 200 << "(" << "$" << z_z_two[global_g].zifu_two << ")" << endl;
								}
								else
								{
									for (aaaa = 0; aaaa < big_item; aaaa++)
									{
										if (strcmp(BIG[aaaa].array_store, FU_list[ret_find].name) == 0)
										{
											break;
										}
									}
									CHA_ZHAO_RETURN = CHA_ZHAO(CHUAN[CHUAN_item - 1]);
									cout << "sw" << "\t" << "$" << z_z_two[global_g + 1].zifu_two << "\t" << aaaa * 4 + aaaa * 200 << "(" << "$" << z_z_two[global_g].zifu_two << ")" << endl;
								}
								//##2019-7-22-new

								//cout << "sw" << "\t" << "$" << z_z_two[global_g + 1].zifu_two << "\t" << "data" << array_count << "(" << "$" << z_z_two[global_g].zifu_two << ")" << endl;
								//##2019-7-22
								//CHA_ZHAO_RETURN = CHA_ZHAO(CHUAN[CHUAN_item - 1]);
								//cout << "sw" << "\t" << "$" << z_z_two[global_g + 1].zifu_two << "\t" << "data" << CHA_ZHAO_RETURN + 1 << "(" << "$" << z_z_two[global_g].zifu_two << ")" << endl;
								//##2019-7-22
								if (symbol == 22)
								{
									if (!getsym(0)) { return false; }
									symbol_array[symarr++] = symbol;
								}
								else { error(29); }
							}
							else { return false; }
						}
						else { error(15); }
					}
					else { error(23); }
				}
				else { return false; }
			}
			else { error(32); }
		}
		else { cout << "�����ڱ�ʶ�����룬����������" << endl; }
	}/////////////////getsym(0);
	else if (symbol == 9)
	{
		int op_number20 = 0, op_number21 = 0, k;
		sc_item = 0;
		op_number5 = 0;

		if (!getsym(0)) { return false; }
		symbol_array[symarr++] = symbol;
		if (symbol == 16)//(
		{
			if (!getsym(0)) { return false; }
			symbol_array[symarr++] = symbol;
			if (expression(typ))
			{

				SBSB = 0;
				printf_flag_judge = printf_flag;
				if (printf_flag == 11 || printf_flag == 12)
				{
					if (symbol == 17)
					{
						if (!getsym(0)) { return false; }
						symbol_array[symarr++] = symbol;
						if (symbol == 18)//{
						{
							if (!getsym(0)) { return false; }
							symbol_array[symarr++] = symbol;
							while (1)
							{
								if (symbol == 10)//case
								{
									if (!getsym(0)) { return false; }
									symbol_array[symarr++] = symbol;
									if (symbol == 33 || symbol == 34)
									{
										FLAG_ADD_SUB = symbol;
										FLAG_add_sub = symbol;
										if (!getsym(0)) { return false; }
										symbol_array[symarr++] = symbol;
										if (symbol == 24)//int
										{
											printf_sc = 11;
											if (printf_sc == printf_flag_judge)
											{
												if (sc_item == 0)
												{
													if (FLAG_ADD_SUB == 33)
													{
														FLAG_ADD_SUB = 0;
														switch_case[sc_item++] = int_num;
													}
													else if (FLAG_ADD_SUB == 34)
													{
														FLAG_ADD_SUB = 0;
														switch_case[sc_item++] = -int_num;
													}
												}
												else
												{
													if (FLAG_ADD_SUB == 33)
													{
														for (sc_i = 0; sc_i < sc_item; sc_i++)
														{
															if (switch_case[sc_i] == int_num)
															{
																error(43);
																break;
															}
														}
													}
													if (FLAG_ADD_SUB == 34)
													{
														for (sc_i = 0; sc_i < sc_item; sc_i++)
														{
															if (switch_case[sc_i] == -int_num)
															{
																error(43);
																break;
															}
														}
													}
													if (FLAG_ADD_SUB == 33)
													{
														FLAG_ADD_SUB = 0;
														switch_case[sc_item++] = int_num;
													}
													else if (FLAG_ADD_SUB == 34)
													{
														FLAG_ADD_SUB = 0;
														switch_case[sc_item++] = -int_num;
													}
												}
											}
											else { error(42); }
											if (FLAG_add_sub == 33)
											{
												if (gen(1, 11, int_num)) { return 1; }
											}
											else if (FLAG_add_sub == 34)
											{
												if (gen(1, 11, -int_num)) { return 1; }
											}

											printf_flag = 11;
											if (gen(26, 0, 0)) { return 1; }//compare

											op_number20 = op_number;
											if (gen(28, 0, 0)) { return 1; }//��������ת

											if (!getsym(0)) { return false; }
											symbol_array[symarr++] = symbol;
											if (symbol == 32)//:
											{
												if (!getsym(0)) { return false; }
												symbol_array[symarr++] = symbol;
												if (statement(typ))
												{

													op_number21 = op_number;
													OPP[op_item++] = op_number21;
													if (gen(42, 0, op_number21)) { return 1; }//��������ת
													p_list[op_number20].x_int = op_number;//��������ת
													if (symbol == 11) { break; }
													if (symbol == 19) { break; }
													continue;
												}
												else { return false; }
											}
											else { error(29); break; }
										}
										else { error(53); }

									}

									else if (symbol == 24)//int
									{
										cout << "tia" << TIAO_COUNT << ":" << endl;
										TIAO_COUNT = TIAO_COUNT + 1;
										printf_sc = 11;
										if (printf_sc == printf_flag_judge)
										{
											if (sc_item == 0)

											{
												switch_case[sc_item++] = int_num;
											}
											else
											{
												for (sc_i = 0; sc_i < sc_item; sc_i++)
												{
													if (switch_case[sc_i] == int_num)
													{
														error(43);
														break;
													}
												}
												switch_case[sc_item++] = int_num;
											}
										}
										else { error(42); }
										if (gen(1, 11, int_num)) { return 1; }

										cout << "li" << "\t" << "$t0" << "\t" << int_num << endl;


										printf_flag = 11;

										if (gen(26, 0, 0)) { return 1; }
										//global_g = global_g - 1;
										cout << "bne" << "\t" << "$" << z_z_two[global_g].zifu_two << "\t" << "$t0" << "\t" << "tia" << TIAO_COUNT << endl;
										//global_g = global_g - 1;
										op_number20 = op_number;
										if (gen(28, 0, 0)) { return 1; }

										if (!getsym(0)) { return false; }
										symbol_array[symarr++] = symbol;
										if (symbol == 32)//:
										{
											if (!getsym(0)) { return false; }
											symbol_array[symarr++] = symbol;
											if (statement(typ))
											{

												op_number21 = op_number;
												OPP[op_item++] = op_number21;
												if (gen(42, 0, op_number21)) { return 1; }
												cout << "j" << "\t" << "done" << endl;
												p_list[op_number20].x_int = op_number;


												if (symbol == 11) { break; }
												if (symbol == 19) { break; }
												continue;
											}
											else { return false; }
										}
										else { error(29); break; }
									}
									else if (symbol == 100)
									{////////������һ��Сbug������û�з���'  a'�����������һ���ո�����
										getsym(3);
										if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '_' || (ch >= 'a'&&ch <= 'z') || (ch >= 'A'&&ch <= 'Z') || (ch >= '0'&&ch <= '9'))
										{
											zi_fu_three = ch;
											ascll_num_three = (int)zi_fu_three;
											getsym(3);
											if (ch == '\'')
											{
												printf_sc = 12;
												if (printf_sc == printf_flag_judge)
												{
													if (sc_item == 0)
													{
														switch_case[sc_item++] = int_num;
													}
													else
													{
														for (sc_i = 0; sc_i < sc_item; sc_i++)
														{
															if (switch_case[sc_i] == zi_fu_three)
															{
																error(43);
																break;
															}
														}
														switch_case[sc_item++] = zi_fu_three;
													}
												}
												else { error(42); }

												//symbol = 25;//˵�����ַ����͵�
												if (gen(1, 12, zi_fu_three)) { return 1; }

												printf_flag = 12;
												if (gen(26, 0, 0)) { return 1; }


												op_number20 = op_number;
												if (gen(28, 0, 0)) { return 1; }

												if (!getsym(0)) { return false; }
												symbol_array[symarr++] = symbol;
												if (symbol == 32)//:
												{
													if (!getsym(0)) { return false; }
													symbol_array[symarr++] = symbol;
													if (statement(typ))
													{

														op_number21 = op_number;
														OPP[op_item++] = op_number21;
														if (gen(42, 0, op_number21)) { return 1; }
														p_list[op_number20].x_int = op_number;


														if (symbol == 11) { break; }
														if (symbol == 19) { break; }//add++++++++
														continue;
													}
													else { return false; }
												}
												else { error(29); break; }
											}
											else { error(18); break; }
										}
										else
										{/*ע��ָ��Ļ���*/
											error(19);
											break;
										}
									}

									else { error(20); break; }
								}
								else
								{

									error(28);
									break;
								}
							}

							if (symbol == 19)//}
							{
								cout << "tia" << TIAO_COUNT << ":" << endl;
								for (k = 0; k < op_item; k++)
								{
									p_list[OPP[k]].x_int = op_number;
								}
								op_item = 0;
								cout << "done:" << endl;
								//p_list[op_number21].x_int = op_number;
								if (!getsym(0)) { return false; }
								symbol_array[symarr++] = symbol;
								return true;
							}
							else
							{
								cout << "tia" << TIAO_COUNT << ":" << endl;

								if (!getsym(0)) { return false; }
								symbol_array[symarr++] = symbol;
								if (symbol == 32)//:
								{


									if (!getsym(0)) { return false; }
									symbol_array[symarr++] = symbol;
									if (statement(typ))
									{
										cout << "done:" << endl;
										if (symbol == 19)
										{
											for (k = 0; k < op_item; k++)
											{
												p_list[OPP[k]].x_int = op_number;
											}
											op_item = 0;
											//p_list[op_number21].x_int = op_number;
											if (!getsym(0)) { return false; }
											symbol_array[symarr++] = symbol;
											return true;
										}
										else { error(30); }

									}
									else { return false; }

								}
								else { error(29); }
							}
							//bug//

						}
						//add

						else { error(27); }

					}
					else { error(21); }
				}
				else { error(41); }
			}
			else { return false; }
		}
		else { error(24); }
	}
	else if (symbol == 18)
	{
		//lev=lev+1;
		if (!getsym(0)) { return false; }
		symbol_array[symarr++] = symbol;
		if (symbol == 19)//}
		{
			if (!getsym(0)) { return false; }
			symbol_array[symarr++] = symbol;
			return true;
		}
		while (1)
		{
			if (statement(typ))
			{
				if (symbol == 19)
				{
					//lev=lev-1;
					if (!getsym(0)) { return false; }
					symbol_array[symarr++] = symbol;
					break;
				}
			}
			else { return false; }
		}
	}/////////////////getsym(0);
	else if (symbol == 22)
	{
		//y = 0;
		if (!getsym(0)) { return false; }
		symbol_array[symarr++] = symbol;
	}
	else
	{

		if (symbol == 13)
		{
			if (!getsym(0)) { return false; }
			symbol_array[symarr++] = symbol;
			/*if (FPP == 1)
			{
				cout << "done_if" << done_if << ":" << endl;
				FPP = 0;
			}*/
			if (symbol == 16)//(
			{

				if (!getsym(0)) { return false; }
				symbol_array[symarr++] = symbol;
				if (expression(typ))
				{
					SBSB = 0;
					if (gen(7, 11, 0)) { return 1; }

					if (symbol == 17)
					{
						////mips

						//cout << "move" << "\t" << "$v0" << "\t" << "$t" << zi_fu_line_item_two - 2 << endl;
						cout << "move" << "\t" << "$v0" << "\t" << "$" << z_z_two[global_g].zifu_two << endl;
						FU_ZHI_TWO('v', 0);
						//zi_fu_line_item_two = zi_fu_line_item_two - 1;
						for (mips_i = LEV_count_list[lev]; mips_i >= 0; mips_i--)
						{
							if (mips_i == 0)
							{
								cout << "lw" << "\t" << "$ra" << "\t" << "0($sp)" << endl;
							}
							else
							{
								cout << "lw" << "\t" << "$a" << mips_i - 1 << "\t" << mips_i * 4 << "($sp)" << endl;
							}
						}
						cout << "addi" << "\t" << "$sp" << "\t" << "$sp" << "\t" << temp_temp << endl;
						cout << "jr" << "\t" << "$ra" << endl;

						////
						if (!getsym(0)) { return false; }
						symbol_array[symarr++] = symbol;
						if (symbol == 22)
						{
							global_g = global_g - 1;

							x = 1;
							y = 1;
							if (!getsym(0)) { return false; }
							symbol_array[symarr++] = symbol;
						}
						else { error(17); }
					}
					else { error(21); }
				}
				else { return false; }
			}
			else if (symbol == 22)
			{
				//y = 0;
				//y = 0;
				////mips
				for (mips_i = LEV_count_list[lev]; mips_i >= 0; mips_i--)
				{
					if (mips_i == 0)
					{
						cout << "lw" << "\t" << "$ra" << "\t" << "0($sp)" << endl;
					}
					else
					{
						cout << "lw" << "\t" << "$a" << mips_i - 1 << "\t" << mips_i * 4 << "($sp)" << endl;
					}
				}
				cout << "addi" << "\t" << "$sp" << "\t" << "$sp" << "\t" << temp_temp << endl;
				cout << "jr" << "\t" << "$ra" << endl;
				////
				if (FLAG_JUMP_MAIN == 1)
				{
					FLAG_JUMP_MAIN = 0;
					//JUMP
					op_number67 = op_number;
					if (gen(44, 0, 0)) { return 1; }
					// jump to here!
					p_list[op_number67].x_int = op_number;
				}
				else
				{
					if (gen(1, 11, 0)) { return 1; }
					if (gen(7, 11, 0)) { return 1; }
				}
				//jump to here!(error!)

				if (!getsym(0)) { return false; }
				symbol_array[symarr++] = symbol;
			}
			else { error(17); }
		}

		else
		{
			error(47);
		}
	}
	return true;
}

bool paralist(int typ)
{
	int temp;
	while (1)
	{
		if (symbol == 2 || symbol == 3 || symbol == 4)
		{
			if (symbol == 2) { temp = 11; }
			if (symbol == 3) { temp = 9; }
			if (symbol == 4) { temp = 12; }
			if (!getsym(0)) { return false; }
			symbol_array[symarr++] = symbol;
			if (symbol == 23)//��ʱ�϶�֪�����ǲ�������˵Ǳ�
			{
				if (RE_find(CHUAN_item - 1) != 0) { error(45); }
				enter(lev, temp, 3, CHUAN_item - 1, true);
				if (!getsym(0)) { return false; }
				symbol_array[symarr++] = symbol;
				if (symbol == 20)
				{
					if (!getsym(0)) { return false; }
					symbol_array[symarr++] = symbol;
					continue;
				}
				else { break; }
			}
			else { error(14); break; }
		}
		else if (symbol == 17) { break; }
		else { error(13); break; }
	}
	return true;
}
bool return_no_return(int typ)
{
	if (symbol == 23)
	{
		if (!getsym(0)) { return false; }
		symbol_array[symarr++] = symbol;
		if (symbol == 16)
		{
			if (RE_find(CHUAN_item - 1) != 0) { error(45); }
			if (VOID_FLAG == 1)
			{
				VOID_FLAG = 0;
				enter(lev, typ, 1, CHUAN_item - 1, true);
				cout << CHUAN[CHUAN_item - 1] << ":" << endl;
			}
			else
			{
				enter(lev, typ, 2, CHUAN_item - 1, true);
				cout << FU_list[FU_item - 1].name << ":" << endl;
			}

			if (!getsym(0)) { return false; }
			symbol_array[symarr++] = symbol;
			lev = lev + 1;

			if (paralist(typ))
			{
				if (symbol == 17)
				{
					if (!getsym(0)) { return false; }
					symbol_array[symarr++] = symbol;
					if (symbol == 18)
					{
						if (!getsym(0)) { return false; }
						symbol_array[symarr++] = symbol;
						if (symbol == 19) { return true; }
						if (fu_he_statement(typ))
						{

							if (flag == 0)
							{

								if (!getsym(0)) { return false; }
								symbol_array[symarr++] = symbol;
							}
							flag = 0;
							if (symbol == 19) { ; }
							else { error(30); }
						}
						else { return false; }
					}
					else { error(27); }
				}
				else { error(21); }
			}
			else { return false; }
		}
		else { error(24); }
	}
	else { error(14); }
	return true;

}
bool return_value_function_definition(int typ)//�з���ֵ��������
{
	if (symbol == 2 || symbol == 3 || symbol == 4)
	{
		if (symbol == 2) { typ = 11; }
		if (symbol == 3) { typ = 9; }
		if (symbol == 4) { typ = 12; }
		if (!getsym(0)) { return false; }
		symbol_array[symarr++] = symbol;
		if (return_no_return(typ))
		{
			y = 0;
			//if (!getsym(0)) { return false; }/////////////////////�¼��ϵ�ָ��
			if (x == 0) { error(48); }
			else { x = 0; }
		}
		else { return false; }
	}
	else { error(13); }
	return true;
}
bool no_return_value_function_definition(int typ)//�޷���ֵ��������
{
	if (symbol == 5)
	{
		typ = 12;
		VOID_FLAG = 1;
		VOID_SYM = 1;
		if (!getsym(0)) { return false; }
		symbol_array[symarr++] = symbol;
		if (return_no_return(typ))
		{
			if (y == 1 && VOID_SYM == 1)
			{
				VOID_SYM = 0;
				y = 0;
				error(49);
			}
			//################add-2019-7-18

			for (mips_i = LEV_count_list[lev]; mips_i >= 0; mips_i--)
			{
				if (mips_i == 0)
				{
					cout << "lw" << "\t" << "$ra" << "\t" << "0($sp)" << endl;
				}
				else
				{

					cout << "lw" << "\t" << "$a" << mips_i - 1 << "\t" << mips_i * 4 << "($sp)" << endl;
				}
			}
			cout << "addi" << "\t" << "$sp" << "\t" << "$sp" << "\t" << "16" << endl;
			cout << "jr" << "\t" << "$ra" << endl;
			//################
						//if (!getsym(0)) { return false; }//////////////�¼��ϵ�ָ��
						/*if (y == 1) { error(49); }
						else { y = 1; }*/
		}
		else { return false; }
	}
	else { error(20); }
	return true;
}
bool fu_he_statement(int typ)
{

	if (symbol == 1)
	{
		while (1)
		{
			if (symbol == 1)
			{
				if (!getsym(0)) { return false; }
				symbol_array[symarr++] = symbol;
				if (symbol == 2 || symbol == 3 || symbol == 4)
				{
					if (constant_description(typ))
					{
						getsym(1);
						if (!getsym(2)) { return false; }
						if (symbol == 1)
						{
							if (!getsym(0)) { return false; }
							symbol_array[symarr++] = symbol;
							continue;
						}
						else if (symbol == 19)
						{
							if (!getsym(0)) { return false; }
							symbol_array[symarr++] = symbol;
							flag = 1;
							return true;
						}
						else
						{
							if (!getsym(0)) { return false; }
							symbol_array[symarr++] = symbol;
							//fu_he_flag = 1; 
							break;
						}
					}
					else { return false; }
				}
				else { error(13); }
			}
			else { break; }
		}
	}
	if (symbol == 2 || symbol == 3 || symbol == 4)
	{
		while (1)
		{
			if (symbol == 2 || symbol == 3 || symbol == 4)
			{
				if (symbol == 2) { typ = 11; }
				if (symbol == 3) { typ = 9; }
				if (symbol == 4) { typ = 12; }
				if (variable_description(typ))
				{
					getsym(1);
					if (!getsym(2)) { return false; }
					if (symbol == 2 || symbol == 3 || symbol == 4)
					{
						if (!getsym(0)) { return false; }
						symbol_array[symarr++] = symbol;
						continue;
					}
					else if (symbol == 19)
					{
						if (!getsym(0)) { return false; }
						symbol_array[symarr++] = symbol;
						flag = 1;
						return true;
					}
					else
					{
						if (!getsym(0)) { return false; }//=+++++++++++++++++++++++
						symbol_array[symarr++] = symbol;
						//key_to_19 = 1;
						break;
					}
				}
				else { return false; }
			}
			else { error(13); break; }
		}
	}
	if (symbol == 18 || symbol == 7 || symbol == 12 || symbol == 23 || symbol == 14 || symbol == 15 || symbol == 9
		|| symbol == 13 || symbol == 22)
	{
		if (gen(9, 0, LEV_count_list[lev])) { return 1; }
		temp_temp = LEV_count_list[lev] * 4 + 4;
		cout << "addi" << "\t" << "$sp" << "\t" << "$sp" << "\t" << 0 - temp_temp << endl;
		for (mips_i = 0; mips_i <= LEV_count_list[lev]; mips_i++)
		{
			if (mips_i == 0)
			{
				cout << "sw" << "\t" << "$ra" << "\t" << "0($sp)" << endl;
			}
			else
			{

				cout << "sw" << "\t" << "$a" << mips_i - 1 << "\t" << mips_i * 4 << "($sp)" << endl;
			}
		}
		while (1)
		{
			if (symbol == 18 || symbol == 7 || symbol == 12 || symbol == 23 || symbol == 14 || symbol == 15 || symbol == 9
				|| symbol == 13 || symbol == 22)
			{
				if (statement(typ))
				{
					if (symbol == 18 || symbol == 7 || symbol == 12 || symbol == 23 || symbol == 14 || symbol == 15 || symbol == 9
						|| symbol == 13 || symbol == 22)
					{
						continue;
					}
					else if (symbol == 19)
					{
						getsym(1);
						//if (!getsym(2)) { return false; }
						if (!getsym(2)) { ; }
						if (symbol == 19)
						{
							if (!getsym(0)) { return false; }
							symbol_array[symarr++] = symbol;
							flag = 1;
							return true;
						}
						else if (symbol == 18 || symbol == 22)
						{
							if (!getsym(0)) { return false; }
							continue;
						}
						else
						{
							flag = 1;
							symbol = symbol_array[symarr - 1];
							return true;
						}
					}
					else { error(30); break; }
				}
				else { return false; }
			}
			else { break; }
		}
	}

	error(20);
	return true;
}///////success stop getsym();


bool return_no_void_tance(int typ)
{
	while (1)
	{
		while (1)
		{
			if (!getsym(0)) { return false; }
			symbol_array[symarr++] = symbol;
			if (return_value_function_definition(typ))
			{
				get_out_of_FU_list();
				lev = lev - 1;
				if (gen(7, 0, 0)) { return 1; }

				getsym(1);
				if (!getsym(2)) { return false; }
				if (symbol == 2 || symbol == 3 || symbol == 4) { continue; }
				else if (symbol == 5) { break; }
				else { error(37); break; }
			}
			else { return false; }
		}
		while (1)
		{
			if (!getsym(2)) { return false; }
			if (symbol == 23)//ident
			{
				if (!getsym(0)) { return false; }
				symbol_array[symarr++] = symbol;
				if (no_return_value_function_definition(typ))
				{
					get_out_of_FU_list();
					lev = lev - 1;
					if (gen(25, 0, 0)) { return 1; }

					getsym(1);
					if (!getsym(2)) { return false; }
					if (symbol == 5) { continue; }
					else if (symbol == 2 || symbol == 3 || symbol == 4)
					{
						flag_flag = 1;
						break;
					}
				}
				else { return false; }
			}
			else if (symbol == 6)
			{
				flag_main = 1;
				break;
			}
			else if (symbol == 0) { return false; }
			else { error(14); break; }
		}
		if (flag_flag == 1)
		{
			flag_flag = 0;
			continue;
		}
		else if (flag_main == 1) { break; }
		else { break; }
	}
	if (flag_main == 1)
	{
		flag_main = 0;
		if (main_function(typ))
		{
			;
		}
		else { return false; }
	}
	return true;
}
bool no_return_void_tance(int typ)
{
	while (1)
	{
		while (1)
		{
			if (!getsym(0)) { return false; }
			symbol_array[symarr++] = symbol;
			if (no_return_value_function_definition(typ))
			{
				get_out_of_FU_list();
				lev = lev - 1;
				if (gen(25, 0, 0)) { return 1; }

				getsym(1);
				if (!getsym(2)) { return false; }
				if (symbol == 5)
				{
					if (!getsym(2)) { return false; }
					if (symbol == 23) { continue; }
					else if (symbol == 6)
					{
						flag_main_two = 1;
						break;
					}
					else { error(20); }
				}
				else if (symbol == 2 || symbol == 3 || symbol == 4) { break; }
				else { error(37); break; }
			}
			else { return false; }
		}
		while (1)
		{
			if (flag_main_two == 1) { break; }
			if (!getsym(0)) { return false; }
			symbol_array[symarr++] = symbol;
			if (return_value_function_definition(typ))
			{
				get_out_of_FU_list();
				lev = lev - 1;
				if (gen(7, 0, 0)) { return 1; }

				getsym(1);
				if (!getsym(2)) { return false; }
				if (symbol == 2 || symbol == 3 || symbol == 4) { continue; }
				else if (symbol == 5)
				{
					SYMBOL_FLAG_W = symbol;
					getsym(2);
					if (symbol == 6)
					{
						flag_main_two = 1;
						break;
					}
					else
					{
						symbol = SYMBOL_FLAG_W;
						SYMBOL_FLAG_W = 0;
						flag_flag_flag = 1;
						break;
					}
				}
			}
			else if (symbol == 0) { return false; }
			else { return false; }
		}
		if (flag_flag_flag == 1)
		{
			flag_flag_flag = 0;
			continue;
		}
		else if (flag_main_two == 1) { break; }
		else { break; }
	}
	if (flag_main_two == 1)
	{
		flag_main_two = 0;
		if (main_function(typ)) { ; }
		else { return false; }
	}
	return true;
}
bool main_function(int typ)
{
	cout << "main:" << endl;
	FLAG_JUMP_MAIN = 1;
	start = op_number;
	if (!getsym(0)) { return false; }
	symbol_array[symarr++] = symbol;
	if (!getsym(0)) { return false; }
	symbol_array[symarr++] = symbol;
	enter(lev, 0, 5, CHUAN_item - 1, true);//the second number shoulb be 2 from count 1 number
										   //FU_list[FU_item-1].adr=op_number;
	if (!getsym(0)) { return false; }
	symbol_array[symarr++] = symbol;
	if (symbol == 16)
	{
		if (!getsym(0)) { return false; }
		symbol_array[symarr++] = symbol;
		if (symbol == 17)
		{
			if (!getsym(0)) { return false; }
			symbol_array[symarr++] = symbol;
			if (symbol == 18)
			{
				lev = lev + 1;//lev++
				if (!getsym(0)) { return false; }
				symbol_array[symarr++] = symbol;
				if (symbol == 19) { return true; }
				if (fu_he_statement(typ))
				{

					if (flag == 0)
					{

						if (!getsym(0)) { return false; }
						symbol_array[symarr++] = symbol;
					}

					flag = 0;
					if (symbol == 19)
					{
						get_out_of_FU_list();
						lev = lev - 1;
						//if (gen(25, 0, 0)) { return 1; }
						//cout << "EXP" << "	" << "0" << "	" << "0" << endl;
						//cout << "main_function is success" << endl;
					}
					else { error(30); }
				}
				else { return false; }
			}
			else { error(27); }
		}
		else { error(21); }
	}
	else { error(24); }
	return true;
}
bool program(int typ)//������
{
	int temp = 0;
	while (1)
	{
		if (symbol == 1)//const
		{
			if (!getsym(0)) { return false; }//const
			symbol_array[symarr++] = symbol;
			if (!getsym(0)) { return false; }//int|float|char|
			symbol_array[symarr++] = symbol;
			if (constant_description(typ))
			{
				getsym(1);
				if (!getsym(2)) { return false; }
				if (symbol == 1) { continue; }
			}
			else { return false; }
		}
		break;
	}
	while (1)
	{
		if (symbol == 2 || symbol == 3 || symbol == 4)//int|float|char	(future1)
		{
			//if (!getsym(0)) { return false; }						//pass  future1
			if (symbol == 2) { temp = 11; }
			if (symbol == 3) { temp = 9; }
			if (symbol == 4) { temp = 12; }
			if (!getsym(2)) { return false; }
			if (symbol == 23)										//(future2)
			{
				if (!getsym(2)) { return false; }					//(future3)
				if (symbol == 16)
				{

					if (return_no_void_tance(temp)) { ; }
					else { return false; }
				}
				else
				{
					if (!getsym(0)) { return false; }
					symbol_array[symarr++] = symbol;
					if (variable_description(temp))
					{
						getsym(1);
						if (!getsym(2)) { return false; }
						if (symbol == 2 || symbol == 3 || symbol == 4) { continue; }
					}
					else { return false; }
				}
			}
			else { error(14); break; }
		}
		break;
	}
	if (symbol == 5)
	{
		if (!getsym(2)) { return false; }
		if (symbol == 23)
		{
			if (no_return_void_tance(typ)) { ; }
			else { return false; }
		}
		else if (symbol == 6)
		{
			if (main_function(typ))
			{
				;

			}
			else { return false; }
		}
		else { error(38); }
	}
	return true;
}

int main()
{
	int typ = 0;
	int i = 0;
	//scanf("%s\n", &filename);
	cout << "�������ļ���:";
	cin >> token2;
	for (i = 0; i < 10; i++) { LEV_count_list[i] = 0; }
	do
	{
		cout << ".data" << endl;
		//cout << "data1:.space" << "\t" << "20" << endl;
		//cout << "data2:.space" << "\t" << "20" << endl;
		//cout << "data3:.space" << "\t" << "20" << endl;
		cout << "la" << "\t" << "$t7" << "\t" << "data1" << endl;
		cout << "la" << "\t" << "$t8" << "\t" << "data2" << endl;
		cout << "la" << "\t" << "$t9" << "\t" << "data3" << endl;
		cout << "hello:.asciiz \"hello\"" << endl;
		cout << "input:.asciiz \"please input : \"" << endl;
		cout << ".text" << endl;
		cout << "li" << "\t" << "$s7" << "\t" << 4 << endl;
		cout << "j" << "\t" << "main" << endl;

		//cout << "1" << endl;
		if (!getsym(2)) { return -1; }
		if (!program(typ)) { return -1; }

	} while (ch != '\0');
	cout << "�������ݲ�֧�־�������������������������1�������򽫲��ٽ���ִ��" << endl;

	if (error_count == 0)
	{
		cout << "interprent output" << endl;
		interprent();
		cout << "program over!" << endl;
	}
	else
	{
		cout << "Ŀǰ�д����޷�����ִ��" << endl;
	}
	//cout << "interprent output" << endl;
	//interprent();
	return 0;
}
int interprent()
{
	int i;
	int a;
	int equ = 1;
	int main_address = 0, main2_address = 0;
	int fang = -1;
	int ZHAN = 0;
	float swap;
	int swap1;
	char swap2;
	float swap3;
	btab[btab_item++] = 0;
	run[run_item++] = 0;
	run[run_item++] = 0;
	//����������������������Ľ���ִ�г����btab[]���֣����Ѿ�����������Ļ���ַ���֣���ˣ�����ֻҪ����
	//�����Ӧ�±��ֵ�������ʵ��������Ϳ��Դﵽ���������Ӧλ�ñ�����Ŀ��
	for (i = 1; i < 1000; i++)//���ں����ڲ�Ҳ���ǲ��Ƕ��㶨��ı����������ô������ĵ�ַ�����¼���
	{
		if (FU_list[i].kind == 0)//����run_item+1��ֻ��Ӧ�ڶԶ���ı�������
		{
			run_item = run_item + 1;
		}
		else if (FU_list[i].kind == 6)//����run_item+1����������ֻ���ڶ�����ˣ�����ں����ڲ����֣���Ȼ���Լ�1��û�й�ϵ��
		{

			run_item = run_item + FU_list[i].com_bine.INT_num;//��������������Ͻ�����ֵ
		}
		else if (FU_list[i].kind != 0 && FU_list[i].kind != 4)//���������ߺ�������,����ѭ�������ǲ����붥���������
		{
			break;
		}
	}//��ˣ�����forѭ����Ŀ�����ڶԶ���ĸ��ֱ��������������������ͨ�������������������������
	btab[btab_item++] = run_item;// the number is due to the size of array
	run[run_item++] = 0;
	run[run_item++] = 0;
	for (i = start; i < op_number; i++)
	{
		cout << p_list[i].op_num << "	" << p_list[i].lev << "	" << p_list[i].x_int << endl;
		switch (p_list[i].op_num)
		{
		case 0://LDA	�ӵ�ַ�ж�ȡֵ
			if (p_list[i].lev == 1)//����ǵ�һ�㣬��ַ���ڣ���һ��ı�������+1
			{
				run[run_item++] = run[btab[0] + p_list[i].x_int + 1];
			}
			else                   //������ǵ�һ�㣬��ַ���ڣ���һ���
			{
				run[run_item++] = run[btab[btab_item - 1] + p_list[i].x_int + 1];
			}
			break;

		case 1://LDI	�������������ŵ�����ջջ��
			if (p_list[i].lev == 11 || p_list[i].lev == 12)
			{
				run[run_item++] = p_list[i].x_int;//�����x_int���Ӧ��������ֵ�������char���ͣ����Ӧascll��
			}
			else if (p_list[i].lev == 9)
			{
				run[run_item++] = p_list[i].y_float;
			}
			break;

		case 2://JMD	����whileѭ���У�Ϊ�˽�����Ӧ��ѭ����ת,��ת����ͷ
			i = p_list[i].x_int - 1;
			break;

		case 3://JMC	��������ת������if,switch-case�����
			if (!equ) { i = p_list[i].x_int - 1; }
			break;

		case 4://JMP	if��while���е���������ת
			i = p_list[i].x_int - 1;
			break;

		case 6://RED
			if (p_list[i].lev == 11)
			{
				cin >> swap1;
				run[run_item++] = swap1;
			}
			else if (p_list[i].lev == 12)
			{
				cin >> swap2;
				run[run_item++] = swap2;
			}
			else if (p_list[i].lev == 9)
			{
				cin >> swap3;
				run[run_item++] = swap3;
			}
			break;

		case 7://EXF	��������ָ��
			i = run[btab[btab_item - 1]] - 1;
			run[btab[btab_item - 1]] = run[--run_item];
			run[run_item] = 0;
			run_item = btab[--btab_item] + 1;
			break;

		case 8://WRR	��������ָ��
			if (p_list[i].lev == 5) { cout << p_list[i].z_char << endl; }
			else if (p_list[i].lev == 12) { cout << (char)run[--run_item] << endl; }
			else { cout << run[--run_item] << endl; }
			break;

		case 9://INF	����ռ�ָ��
			run_item = btab[btab_item - 1] + p_list[i].x_int + 2; //+ 100;
			break;

		case 10://ADD	�Ӽ��˳�ָ��ͨ����Ҫջ�����ջ��Ԫ�����㣬ͬʱʹ����Ϻ���Ҫ��ջ��Ԫ�����
			run[run_item - 2] = run[run_item - 1] + run[run_item - 2];
			run_item = run_item - 1;
			run[run_item] = 0;
			break;

		case 11://SUB	
			run[run_item - 2] = run[run_item - 2] - run[run_item - 1];
			run_item = run_item - 1;
			run[run_item] = 0;
			break;

		case 13://MUL
			run[run_item - 2] = run[run_item - 2] * run[run_item - 1];
			run_item = run_item - 1;
			run[run_item] = 0;
			break;

		case 14://DIV
			run[run_item - 2] = run[run_item - 2] / run[run_item - 1];
			run_item = run_item - 1;
			run[run_item] = 0;
			break;

		case 15://MUS
			run[run_item - 1] = -run[run_item - 1];
			break;

		case 16://>
			if (run[run_item - 2] > run[run_item - 1])//��ϵ������Ƚ����㣬�Ƚ���ɺ���Ҫ����Ӧ�������
			{
				run[run_item - 2] = 0;
				run[run_item - 1] = 0;
				equ = 1;
			}
			else
			{
				run[run_item - 2] = 0;
				run[run_item - 1] = 0;
				equ = 0;
			}
			break;

		case 17://<
			if (run[run_item - 2] < run[run_item - 1])
			{
				run[run_item - 2] = 0;
				run[run_item - 1] = 0;
				equ = 1;
			}
			else
			{
				run[run_item - 2] = 0;
				run[run_item - 1] = 0;
				equ = 0;
			}
			break;

		case 18://==
			if (run[run_item - 2] == run[run_item - 1])
			{
				run[run_item - 2] = 0;
				run[run_item - 1] = 0;
				equ = 1;
			}
			else
			{
				run[run_item - 2] = 0;
				run[run_item - 1] = 0;
				equ = 0;
			}
			break;

		case 19://!=
			if (run[run_item - 2] != run[run_item - 1])
			{
				run[run_item - 2] = 0;
				run[run_item - 1] = 0;
				equ = 1;
			}
			else
			{
				run[run_item - 2] = 0;
				run[run_item - 1] = 0;
				equ = 0;
			}
			break;

		case 20://>=
			if (run[run_item - 2] >= run[run_item - 1])
			{
				run[run_item - 2] = 0;
				run[run_item - 1] = 0;
				equ = 1;
			}
			else
			{
				run[run_item - 2] = 0;
				run[run_item - 1] = 0;
				equ = 0;
			}
			break;

		case 21://<=
			if (run[run_item - 2] <= run[run_item - 1])
			{
				run[run_item - 2] = 0;
				run[run_item - 1] = 0;
				equ = 1;
			}
			else
			{
				run[run_item - 2] = 0;
				run[run_item - 1] = 0;
				equ = 0;
			}
			break;

		case 22://STO	��ջ�����������Ӧλ��,��LDAָ��ķ�����
			if (p_list[i].lev == 1) { run[btab[0] + p_list[i].x_int + 1] = run[--run_item]; }//1 level
			else { run[btab[btab_item - 1] + p_list[i].x_int + 1] = run[--run_item]; }//2 level
			break;

		case 23://CAL	��������ָ��
			a = run_item;
			X_a[X_item++] = a;//������ջ�ĵ�ǰ�±�Ž�һ���ݴ�������
			run[run_item + 1] = p_list[i].lev;
			run_item = run_item + 2;
			break;

		case 24://MKF
			btab[btab_item++] = X_a[--X_item];//��Ҫ���ղŴ��������ջ�±�ֵ�ŵ�һ���ֳ�������btab��
			run[X_a[X_item]] = i + 1;//�ѵ�ǰָ��λ�õ���һ��ָ��λ�÷ŵ�����ջ�У���ʱ����ջ���±���CAL����֮ǰ��¼���±�
			i = p_list[i].x_int - 1;//jump to the aim address
			break;

		case 25://EXP
			i = run[btab[btab_item - 1]] - 1;//��Ҫ������ջ��ȡ����ַ��λ��
			run[run_item] = 0;
			run_item = btab[--btab_item];//��ԭ������ջ���±�ֵȡ��������ǰ����ջ���±�ֵ���Ǻ�������ǰ���±�ֵ
			break;

		case 26://JUD	�ж�ջ���ʹ�ջ����Ԫ���Ƿ�һ�£����������ж���
			if (run[run_item - 2] == run[run_item - 1]) { equ = 1; }
			else { equ = 0; }
			break;

		case 28://JMCC
			if (!equ)
			{
				i = p_list[i].x_int - 1;
				run_item = run_item - 1;
			}
			break;

		case 30://JSQ	��Ҫ�����ʽ��ֵ������ջջ��ȡ���������е�ַ��ƫ�Ƽ��㡣
			if (equ)
			{
				main_address = run[--run_item];
				run[run_item] = 0;
			}
			break;

		case 31://JUB  �ж�ָ��жϱ��ʽ��ֵ�Ƿ�������������ޣ�ջ�����ջ��ֵ���бȽϣ�
			if (ZHAN >= run[run_item - 1])
			{
				equ = 1;
				ZHAN = 0;
			}
			else
			{
				equ = 0;
				ZHAN = 0;
			}
			break;

		case 32://PUT	���ӷ��ű���ȡ���������������ֵ��������ջջ��
			run[run_item++] = p_list[i].x_int;
			break;

		case 33://PUF	�����ű�ȡ���������������ֵ�ŵ���ջ����ȥ
			ZHAN = p_list[i].x_int - 1;
			break;

		case 34://STW	������ջջ������浽֮ǰ��Ԥ����λ�ã������������λ��
			if (p_list[i].lev == 1)
			{
				run[main2_address + btab[0] + p_list[i].x_int + 20000] = run[--run_item];
				//main_address = 0;
			}
			else
			{
				run[main2_address + btab[btab_item - 1] + p_list[i].x_int + 20000] = run[--run_item];
				//main_address = 0;
			}
			break;

		case 35://LDQ	��ȡ����ĵ�ַ�������ַ������Ҫ����Ļ���ַ�Լ���������ƫ�Ƶ�ַ��
			if (p_list[i].lev == 1) { run[run_item++] = run[btab[0] + p_list[i].x_int + main_address + 20000]; }
			else { run[run_item++] = run[btab[btab_item - 1] + p_list[i].x_int + main_address + 20000]; }
			break;

		case 36://JSW	��Ҫ�����ʽ��ֵ������ջջ��ȡ���������е�ַ��ƫ�Ƽ��㡣
			if (equ)
			{
				main2_address = run[--run_item];
				run[run_item] = 0;
			}
			break;

		case 37://JET	�жϱ��ʽ��ֵ�Ƿ�Ϊ�㣬���Ϊ�㣬����ת��else��ִ��
			if (run[run_item - 1] == 0)
			{
				run[run_item - 1] = 0;
				equ = 0;
			}

			else { equ = 1; }//����ת������˳��ִ��
			break;

		case 38://JTE	���Ϊ�棬��ת��else��ִ�У������˳��ִ��
			if (equ) { i = p_list[i].x_int - 1; }
			break;

		case 39://JSZ	��JUBָ�ִͬ�С�����JUB�жϵ������������Ƿ���������Խ���������
			if (equ) { i = p_list[i].x_int - 1; }
			else { error(50); }
			break;//�������Ϊ�棬��ô��˵�����ʽ��ֵ��û�С�����������Ͻ�ֵ����ô�Ϳ��������������֣�

		case 42://WU_JUMP,��������תָ��,����switch_case�У��������һ����ִ֧�У�Ϊ����������switch_caseѭ��
			i = p_list[i].x_int - 1;
			break;

		case 43://JUDGE_ZERO
			if (run[run_item - 1] > 0)
			{
				run[run_item - 1] = 0;
				equ = 1;
			}
			else
			{
				run[run_item - 1] = 0;
				equ = 0;
			}
			break;

		case 44://NO reason for JUMP
			i = p_list[i].x_int - 1;
			break;
		}
	}
	return 0;
}