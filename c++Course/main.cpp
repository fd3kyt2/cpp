#include "iostream"
using namespace std;

#define COURSE_CAPACITY 100

struct Student{
	char name[20];
	int grade;
}students[COURSE_CAPACITY];

int studentCount = 0;

void list();
void add();
void drop();
void grade();
void input(struct Student &student);
int inputGrade();
int find(char* model);

int main()
{
	for(int i=0;i<COURSE_CAPACITY;i++){
		students[i].grade=-1;
		//下面初始化为-1

	}


	int action;
	do{
		cout<<"-----------菜单-----------"<<endl;
		cout<<"1)学生列表"<<endl;
		cout<<"2)新增学生"<<endl;
		cout<<"3)学生退选"<<endl;
		cout<<"4)打分"<<endl;
		cout<<"5)退出程序"<<endl<<endl;

		cin>>action;
		switch(action){
		case 1:
			list();
			break;
		case 2:
			add();
			break;
		case 3:
			drop();
			break;
		case 4:
			grade();
			break;
		case 5:
			return 0;
		default:
			cout<<"您输入了错误的菜单项，请重新选择！";
		}
	}while(1);
}


void list(){
	cout<<endl<<"-------学生名单-------"<<endl;
	cout<<"姓名\t"<<"分数"<<endl;
	for(int i=0;i<studentCount;i++){
		if(-1!=students[i].grade){
		cout<<students[i].name<<"\t"<<students[i].grade<<endl;
		}else{
		cout<<students[i].name<<"\t"<<"未打分"<<endl;
		}
	}
	cout<<"-------学生名单-------"<<endl<<endl;
}

void grade(){
	struct Student student;
	int count;
	cout<<"给多少个学生打分?"<<endl;
	cin>>count;

	for(int i=0;i<count;i++){

		input(student);
		int pos = find(student.name);

		if(pos == studentCount){
			cout<<"没有这个学生!"<<endl;
		}else{
			students[pos].grade=inputGrade();
		}
	}
}

void add(){
	struct Student newStudent;
	input(newStudent);

	int i = find(newStudent.name);
	if(i == studentCount){
		strcpy(students[i].name , newStudent.name);
		students[i].grade = newStudent.grade;
		studentCount++;
	}else{
		cout<<"已经有这个学生了!";
	}
}

void drop(){
	struct Student student;
	input(student);

	int pos = find(student.name);
	if(pos == studentCount){
		cout<<"没有这个学生！"<<endl;
	}else{
//		students[i].grade -= student.grade;
//		for(int i=pos-1;i>pos;i--){
		for(int i=pos;i<studentCount-1;i++){
			students[i]=students[i+1];
		}
		studentCount-=1;
	}
}

void input(struct Student &student){
	cout<<"姓名：";
	cin>>student.name;

//	cout<<"数量：";
//	cin>>student.grade;
	student.grade=-1;
}

int find(char* model){
	int i;
	for(i=0;i<studentCount;i++){
		if(strcmp(students[i].name,model) == 0){
			break;
		}
	}
	return i;
}


int inputGrade(){
	int r;
	cout<<"分数：";
	cin>>r;
	return r;
}
