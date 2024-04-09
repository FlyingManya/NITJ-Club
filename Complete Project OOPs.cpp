#include<iostream>
#include<string.h>//using it for strings as well as getline()
#include<fstream>//using it for file hndling
#include<stdlib.h>//for using the exit() function
#include<sstream>//for reading multiple lines from a file
using namespace std;

class Student
{
    public:
    string name;
    int rollNo;
    string Branch;
    string academics;
    string cultural;
    int year;
    
    //member functions inside the class
        void getdetails()
        {
              cout<<"Enter Name : ";
              cin>>name;
              cout<<endl;
    
              cout<<"Enter Roll No : ";
              cin>>rollNo;
              cout<<endl;
    
              cout<<"Enter your Branch : ";
              cin>>Branch;
              cout<<endl;
    
              cout<<"Enter Year : ";
              cin>>year;
              cout<<endl; 
        }
        void printDetails()
        {
        	cout<<"**********************************"<<endl;
        	cout<<"Name of the Student : "<<name<<endl;
        	cout<<"Roll no : "<<rollNo<<endl;
        	cout<<"Branch : "<<Branch<<endl;
        	cout<<"Year : "<<year<<endl;
        	
        	//Academic Acheivements
        	//cultural Achievements
        	
        	cout<<"************************************"<<endl;
		}
        
        //member functions outside the class
        void academic_acheivements();
        void cultural_acheivements();
        
};

Student stu[30];//Global declaration of array of object

void Student:: academic_acheivements()
{
	cout<<endl;
	cout<<"******Please Add your Academic Achievements*********"<<endl;
    
    string CA;//coding_achievement;
    string ME;//mech;
    string maths;
    string L;//literacy;
    string P;//painting;
    
    
    int choice;
    cout<<"\n**************************************"<<endl;
    cout<<"Press 1 : Coding "<<endl;
    cout<<"Press 2 : Mecahnics"<<endl;
    cout<<"Press 3 : Mathematics"<<endl;
    cout<<"Press 4 : Literary"<<endl;
    cout<<"Press 5 : Art & Creativity"<<endl;
    cout<<"Press 6 to exit"<<endl;
    cout<<"**************************************"<<endl;
    cout<<endl;
    cin>>choice;
    
    switch(choice)
    {
        case 1 :
        
        cout<<"**Please mention the programming languages you know**"<<endl;
        cout<<"(Format : language1 language2 ....  )"<<endl;
        cout<<"e.g. java-python- "<<endl;
        cout<<endl;
        
        cout<<"*********************************************"<<endl;
        
        cout<<"\n**Please mention other coding acheivements**\n";
        cout<<"For Data Structures and Algorithm , type : dsa"<<endl;
        cout<<"For Web Development , type : WebD"<<endl;
        cout<<"For Machine Learning , type : MachLearn"<<endl;
        cout<<"(Format : write keywords with spaces"<<endl;
        cout<<"e.g. dsa WebD )"<<endl;
        cin>>CA;
        
        academics= academics+CA;
        
        return academic_acheivements();
        
        
        case 2 :
        
        cout<<"**Please enter your achievements in Mechanics**"<<endl;
        cout<<"For Car Designing , type CarD"<<endl;
        cout<<"For Robotics , type Robo"<<endl;
        cout<<"For Appliance Designing , appdes "<<endl;
        cin>>ME;
        
        academics=academics+ME;
        
        return academic_acheivements();
        
        case 3:
        
        cout<<"**Please enter your achievements in Mathematics**"<<endl;
        cout<<"For Calculus Achievements , type Calculus"<<endl;
        cout<<"For Numerical Analysis , type NM"<<endl;
        cout<<"For other achievements , type other_maths"<<endl;
        cin>>maths;
        
        academics=academics+maths;
        
        return academic_acheivements();
        
        case 4:
        
        cout<<"**Please enter your achievements in Literary**"<<endl;
        cout<<"For debate and Extempore , type DebExt"<<endl;
        cout<<"For Poetry , type Poet"<<endl;
        cout<<"For Story writting , type StoryTeller"<<endl;
        cin>>L;
        
        academics=academics+L;
        return academic_acheivements();
        
        
        case 5:
        
        cout<<"**Please enter your achievements in Art**"<<endl;
        cout<<"For Painting & art , type paint "<<endl;
        cout<<"For Craft and SUPW , type Craft"<<endl;
        cout<<"For Sketching and digital art , type Sketch "<<endl;
        cin>>P;
        
        academics=academics+P;
        return academic_acheivements();
        
        case 6:
        break;
    }
    cout<<"Academics : "<<academics<<endl;
}



bool FindString(string str,string s)
{		
    if(str.find(s)<=str.length())
    {
    	return true;
	}
	return false;
}

void AddMembers(Student s1 , string s)//we will send the academics string to this function(s=academic_achievements)
//passing object as an argument
	{
		cout<<endl;
		cout<<"****CLUBS RECOMMENDED****"<<endl;
		if(FindString(s,"java")||FindString(s,"python")||FindString(s,"c++")||FindString(s,"dsa")||FindString(s,"WebD")||FindString(s,"MachLearn"))
		{	
				//add Name to coding club file
				ofstream myfile("Coding_Club.txt", ios::app);//opening file in append mode so that changes are saved
					myfile<<"Name of the student : "<<s1.name<<endl;
					myfile<<"DETAILS :  Branch("<<s1.Branch<<")   RollNo("<<s1.rollNo<<")  "<<"Year("<<s1.year<<")"<<endl;
					myfile.close();
				
				
				cout<<"Coding Club"<<endl;
		}
		if(FindString(s,"CarD")||FindString(s,"Robo")||FindString(s,"appdes"))
		{
			//add to mechanics club
			ofstream myfile("Mechanics_Club.txt", ios::app);//opening file in append mode so that changes are saved
					myfile<<"Name of the student : "<<s1.name<<endl;
					myfile<<"DETAILS :  Branch("<<s1.Branch<<")   RollNo("<<s1.rollNo<<")  "<<"Year("<<s1.year<<")"<<endl;
					myfile.close();
					
			cout<<"Mechanics club"<<endl;
			
		}
		if(FindString(s,"NM")||FindString(s,"Calculs")||FindString(s,"other_math"))
		{
			//addd names to Maths club
			ofstream myfile("Maths_Club.txt", ios::app);//opening file in append mode so that changes are saved
					myfile<<"Name of the student : "<<s1.name<<endl;
					myfile<<"DETAILS :  Branch("<<s1.Branch<<")   RollNo("<<s1.rollNo<<")  "<<"Year("<<s1.year<<")"<<endl;
					myfile.close();
			cout<<"mathematics club"<<endl;
		}
		if(FindString(s,"DebExt")||FindString(s,"Poet")||FindString(s,"StoryTeller"))
		{
			//Add names to Literary Club
			ofstream myfile("Literary_Club.txt", ios::app);//opening file in append mode so that changes are saved
					myfile<<"Name of the student : "<<s1.name<<endl;
					myfile<<"DETAILS :  Branch("<<s1.Branch<<")   RollNo("<<s1.rollNo<<")  "<<"Year("<<s1.year<<")"<<endl;
					myfile.close();
		
			cout<<"Literary club"<<endl;
			
		}
		if(FindString(s,"Paint")||FindString(s,"Craft")||FindString(s,"Sketch"))
		{
			//add names to art club
			ofstream myfile("Art_Club.txt", ios::app);//opening file in append mode so that changes are saved
					myfile<<"Name of the student : "<<s1.name<<endl;
					myfile<<"DETAILS :  Branch("<<s1.Branch<<")   RollNo("<<s1.rollNo<<")  "<<"Year("<<s1.year<<")"<<endl;
					myfile.close();
					
			cout<<"Art Club"<<endl;
			
		}
		
	}
	
	

void student_details()
{
    int c=1;//to store the order of the object
    int n;
    cout<<"Enter the number of student whose details you want to add"<<endl;
    cin>>n;
    for(int i=c;i<=n;i++)
    {
     
        stu[i].getdetails();
        stu[i].academic_acheivements();
        //stu[i].cultural_acheivements();
        AddMembers(stu[i] , stu[i].academics);//sending object and academic achievements  
        
    }
   /* for(int i=c;i<n;i++)
    {
    	stu[i].printDetails();
	}*/
    
}


class Clubs
{
    protected://encapsulation
    string Club_name;
    //string list_of_members;
    string tagline;
    
    public:
     virtual void DisplayList()
	 {
	 	cout<<"list of club members"<<endl;
	 }//creating a virtual function
	 
	virtual ~Clubs() //creating a virtual destructor to avoid memory leak
	{
		//cout<<"Virtual Destructor called"<<endl;
	}
};

class Coding_club:public Clubs //Inherited from Clubs
{
	public:
		void DisplayList()
		{
			cout<<"Welcome to the official Coding club of NITJ"<<endl;
			cout<<"******"<<Club_name<<"******"<<endl;
			cout<<"Tagline : "<<tagline;
			cout<<endl;
			cout<<"*****************List of Members*****************"<<endl;
			
			/*char arr[1000];//creating a character array that will store all the characters from the file and then prints it
			ifstream obj("Coding_Club.txt");//reading from the file
			obj.getline(arr,1000);//used for taking multiple line input
			cout<<arr<<endl;
			obj.close();*/
	
    ifstream file("Coding_Club.txt");
    if (!file)
    {
        cout << "could not find/open file\n";
        
    } 

    string word;
    string desc;
    string line;

    while (getline(file, line) && (line != "."))
	 {
        istringstream iss(line);
        iss >> word;
        getline(iss, desc);
        cout << word << ":  " << desc << "\n";
    }
		file.close();	
		}
		virtual ~Coding_club()
		{
			//cout<<"Coding club destructor called"<<endl;
		}
		Coding_club()//default Constructor
		{
			Club_name="CODING ENTHUSIAST";
			tagline="Eat Sleep Code Repeat";
		}
	
};

class Mechanics_club:public Clubs //Inherited from Clubs
{
	public:
		void DisplayList()
		{
			cout<<"Welcome to the official Coding club of NITJ"<<endl;
			cout<<"******"<<Club_name<<"******"<<endl;
			cout<<"Tagline : "<<tagline;
			cout<<endl;
			cout<<"*****************List of Members*****************"<<endl;
			
			/*//read from Mechanics Club File
			char arr[1000];//creating a character array that will store all the characters from the file and then prints it
			ifstream obj("Mechanics_Club.txt");//reading from the file
			obj.getline(arr,1000);//used for taking multiple line input
			cout<<arr<<endl;
			obj.close();*/
			
					ifstream file("Mechanics_Club.txt");
    				if (!file)
    				{
        				cout << "could not find/open file\n";
        
    				} 

    				string word;
    				string desc;
    				string line;

    				while (getline(file, line) && (line != ".")) 
					{
        			istringstream iss(line);
        			iss >> word;
        			getline(iss, desc);
        			cout << word << ":  " << desc << "\n";
   					}	
   					file.close();
		}
		virtual ~Mechanics_club()
		{
			cout<<"Mechanics club destructor called"<<endl;
		}
		Mechanics_club()//default Constructor
		{
			Club_name="WE ARE YOUR'E MECHANICS";
			tagline="let's fix the world with a screwDriver'";
		}
	
};
class Maths_club:public Clubs //Inherited from Clubs
{
	public:
		
		void DisplayList()
		{
			cout<<"Welcome to the official Mathematics club of NITJ"<<endl;
			cout<<"******"<<Club_name<<"******"<<endl;
			cout<<"Tagline : "<<tagline;
			cout<<endl;
			cout<<"*****************List of Members*****************"<<endl;
			
		/*	//read from Maths Club File
			char arr[1000];//creating a character array that will store all the characters from the file and then prints it
			ifstream obj("Maths_Club.txt");//reading from the file
			obj.getline(arr,1000);//used for taking multiple line input
			cout<<arr<<endl;
			obj.close();  */
			
			ifstream file("Maths_Club.txt");
    				if (!file)
    				{
        				cout << "could not find/open file\n";
        
    				} 

    				string word;
    				string desc;
    				string line;

    				while (getline(file, line) && (line != ".")) 
					{
        			istringstream iss(line);
        			iss >> word;
        			getline(iss, desc);
        			cout << word << ":  " << desc << "\n";
   					}	
   					file.close();
		}
		virtual ~Maths_club()
		{
			cout<<"Maths club destructor called"<<endl;
		}
		Maths_club()//default Constructor
		{
			Club_name="MATHEMATICIANS";
			tagline="2+2=5";
		}
	
};
class Literary_club:public Clubs //Inherited from Clubs
{
	public:
		void DisplayList()
		{
			cout<<"Welcome to the official Literature club of NITJ"<<endl;
			cout<<"******"<<Club_name<<"******"<<endl;
			cout<<"Tagline : "<<tagline;
			cout<<endl;
			cout<<"*****************List of Members*****************"<<endl;
			
		/*	//read from literary Club File
			char arr[1000];//creating a character array that will store all the characters from the file and then prints it
			ifstream obj("Literary_Club.txt");//reading from the file
			obj.getline(arr,1000);//used for taking multiple line input
			cout<<arr<<endl;
			obj.close();  */
			
			ifstream file("Literary_Club.txt");
    				if (!file)
    				{
        				cout << "could not find/open file\n";
        
    				} 

    				string word;
    				string desc;
    				string line;

    				while (getline(file, line) && (line != ".")) 
					{
        			istringstream iss(line);
        			iss >> word;
        			getline(iss, desc);
        			cout << word << ":  " << desc << "\n";
   					}	
   					file.close();
		}
		virtual ~Literary_club()
		{
			cout<<"literary club destructor called"<<endl;
		}
		Literary_club()//default Constructor
		{
			Club_name="LITERATURE PIRATES";
			tagline="let's dive into the sea of knowledge";
		}
	
};
class Art_club:public Clubs //Inherited from Clubs
{
	public:
		void DisplayList()
		{
			cout<<"Welcome to the official Art club of NITJ"<<endl;
			cout<<"******"<<Club_name<<"******"<<endl;
			cout<<"Tagline : "<<tagline;
			cout<<endl;
			cout<<"*****************List of Members*****************"<<endl;
			
		/*	//read from Art Club File
			char arr[1000];//creating a character array that will store all the characters from the file and then prints it
			ifstream obj("Art_Club.txt");//reading from the file
			obj.getline(arr,1000);//used for taking multiple line input
			cout<<arr<<endl;
			obj.close();   */
			
			ifstream file("Art_Club.txt");
    				if (!file)
    				{
        				cout << "could not find/open file\n";
        
    				} 

    				string word;
    				string desc;
    				string line;

    				while (getline(file, line) && (line != ".")) 
					{
        			istringstream iss(line);
        			iss >> word;
        			getline(iss, desc);
        			cout << word << ":  " << desc << "\n";
   					}	
   					file.close();
		}
		virtual ~Art_club()
		{
			cout<<"art club destructor called"<<endl;
		}
		Art_club()//default Constructor
		{
			Club_name="ELEGENTO ARTISTS";
			tagline="Let's paint the skies'";
		}
	
};

void view_clubs()
{
	cout<<"Choose the club you want to visit"<<endl;
	cout<<"*****************************************"<<endl;
	int c;
	    cout<<"Press 1 : Coding Club"<<endl;
		cout<<"Press 2 : Mechanics Club"<<endl;
		cout<<"Press 3 : Mathematics Club"<<endl;
		cout<<"Press 4 : Literary Club"<<endl;
	    cout<<"Press 5 : Art Club"<<endl;
	    cin>>c;
	    
	    //Runtime polymorphism
	    Clubs *ptr=NULL;//base class pointer
	    
	    switch(c)
	    {
	    	//enclosing all the cases with curly bracekets sinsce they contains same named variables which are causing problems
	    	case 1:
	    		{
				
	    		Coding_club obj;//Object od derived class
	    		ptr = &obj;//base class pointer pointing to derived class object
	    		ptr->DisplayList();
	    		break;
	    	}
	    
	    	case 2:
	    		{
				
	    		Mechanics_club obj;//Object od derived class
	    		ptr = &obj;//base class pointer pointing to derived class object
	    		ptr->DisplayList();
	    		break;
	    	}
	    		
	    	case 3:
	    		{
				
	    		Maths_club obj;//Object od derived class
	    		ptr = &obj;//base class pointer pointing to derived class object
	    		ptr->DisplayList();
	    		break;
	    	}
	    		
	    	case 4:
	    		{
				
	    		Literary_club obj;//Object od derived class
	    		ptr = &obj;//base class pointer pointing to derived class object
	    		ptr->DisplayList();
	    		break;
	    	}
	    		
	    	case 5:
	    		{
				
	    		Art_club obj;//Object od derived class
	    		ptr = &obj;//base class pointer pointing to derived class object
	    		ptr->DisplayList();
	    		break;
	    	}
	    		
	    	default:
	    		cout<<"Wrong Choice, kindly try again"<<endl;
	    		return view_clubs();
		}
		
	
	
}



void MainMenu()
{
    int choice;
    cout<<"Press 1 : Enter Students Details"<<endl;
    cout<<"Press 2 : View Clubs & list of student"<<endl;
    cout<<"Press 3 : exit"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1:
        student_details();
        break;
        
        case 2:
        view_clubs();
        break;
        
        case 3:
        break;
        
        default:
        	cout<<"Invalid Choice, please try again"<<endl;
        	return MainMenu();
        
    }
}

int main()
{
 
 MainMenu();
  
return 0;

}
