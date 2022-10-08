#include<iostream.h>
#include<conio.h>
class student
{
	public:
	int rolln;
	char nm[10];
	student *next,*prev;
	void acc()
	{
	cout<<"Enter the roll number of the Student : "<<endl;
	cin>>rolln;
	cout<<"Enter the Name of the Student"<<endl;
	cin>>nm;
	}
	void dis()
	{
	cout<<"Roll number: "<<rolln<<"      Name: "<<nm<<endl;
	}
};
class start
{
	public:
	start *next;
}*beg=NULL;

void add_record()
{
	char reply;
	student *s1, *s2;
	do
	{
	if(beg->next==NULL)
	{
		s1=new student;
		s1->acc();
		beg->next=(start *)s1;
		s1->prev=NULL;
	}
	else
	{
		s1=(student *)beg->next;
		while(s1->next!=NULL)
		{
			s1=s1->next;
		}

		s2=new student;
		s2->acc();
		s1->next=s2;
		s2->next=NULL;
		s2->prev=s1;
	}
	cout<<"Do you want to continue? "<<endl;
	cin>>reply;
	}
	while(reply=='y'||reply=='Y');
}
void disp_record()
{
	student *s1=(student *)beg->next;
	cout<<"from left to right : "<<endl;
	while(s1->next!=NULL)
	{
		s1->dis();
		s1=s1->next;
	}
	s1->dis();
	cout<<"right to left : "<<endl;
	while(s1->prev!=NULL)
	{
		s1->dis();
		s1=s1->prev;
	}
	s1->dis();
}
void edit_record()
{
	int r;
	student *s1=(student *)beg->next;
	cout<<"Enter the rollno that you want to edit: "<<endl;
	cin>>r;
	while(s1->next!=NULL)
	{
	if(s1->rolln==r)
	{
		break;
	}
	else
	{
		s1=s1->next;
	}
	}
	if(s1->next==NULL && s1->rolln!=r )
	{
		cout<<"No Data Found"<<endl;
	}
	else
	{
		cout<<"Enter new Name: ";
		cin>>s1->nm;
		cout<<"updated"<<endl;
	}
}
void del_record()
{
	student *s1=(student *)beg->next;
	int r;
	student *s2=s1->next;
	cout<<"Enter the roll number that you want to delete"<<endl;
	cin>>r;
	if(s1->rolln==r)
	{
		beg->next=(start *)s1->next;
		s1->next->prev=NULL;
		delete s1;
		cout<<"Record Deleted"<<endl;
	}
	else
	{
		while(s2->next!=NULL)
		{
			if(s2->rolln==r)
			{
				break;
			}
			else
			{
				s1=s1->next;
				s2=s2->next;

			}
		}
	if(s2->next==NULL && s2->rolln!=r )
	{
		cout<<"No Data Found"<<endl;
	}
	else
	{
		s1->next=s2->next;
		s2->next->prev=s1;
		delete s2;
		cout<<"Record Deleted"<<endl;
	}
	}

}
void main()
{
	int ch;
	a:
	clrscr();
	cout<<"Select from the following menu "<<endl;
	cout<<"1.Add record"<<endl;
	cout<<"2.Display records"<<endl;
	cout<<"3.Edit a record"<<endl;
	cout<<"4.Delete a record"<<endl;
	cout<<"5.Exit"<<endl;
	cout<<"Enter a choice:  ";
	cin>>ch;
	switch(ch)
	{
		case 1:
		add_record();
		getch();
		goto a;

		case 2:
		disp_record();
		getch();
		goto a;

		case 3:
		edit_record();
		getch();
		goto a;

		case 4:
		del_record();
		getch();
		goto a;

		case 5:
		break;

		default:
		cout<<"Wrong choice!!!"<<endl;
		getch();
		goto a;
	}

}