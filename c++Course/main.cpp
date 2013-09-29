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
		//�����ʼ��Ϊ-1

	}


	int action;
	do{
		cout<<"-----------�˵�-----------"<<endl;
		cout<<"1)ѧ���б�"<<endl;
		cout<<"2)����ѧ��"<<endl;
		cout<<"3)ѧ����ѡ"<<endl;
		cout<<"4)���"<<endl;
		cout<<"5)�˳�����"<<endl<<endl;

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
			cout<<"�������˴���Ĳ˵��������ѡ��";
		}
	}while(1);
}


void list(){
	cout<<endl<<"-------ѧ������-------"<<endl;
	cout<<"����\t"<<"����"<<endl;
	for(int i=0;i<studentCount;i++){
		if(-1!=students[i].grade){
		cout<<students[i].name<<"\t"<<students[i].grade<<endl;
		}else{
		cout<<students[i].name<<"\t"<<"δ���"<<endl;
		}
	}
	cout<<"-------ѧ������-------"<<endl<<endl;
}

void grade(){
	struct Student student;
	int count;
	cout<<"�����ٸ�ѧ�����?"<<endl;
	cin>>count;

	for(int i=0;i<count;i++){

		input(student);
		int pos = find(student.name);

		if(pos == studentCount){
			cout<<"û�����ѧ��!"<<endl;
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
		cout<<"�Ѿ������ѧ����!";
	}
}

void drop(){
	struct Student student;
	input(student);

	int pos = find(student.name);
	if(pos == studentCount){
		cout<<"û�����ѧ����"<<endl;
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
	cout<<"������";
	cin>>student.name;

//	cout<<"������";
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
	cout<<"������";
	cin>>r;
	return r;
}
