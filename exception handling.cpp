# include<iostream>
# include<stdio.h>
using namespace std;
class publication
 {
 private:
 	string title;
 	
 	public:
 		int price;
 	void add()
 	{
 		try
 		{

 		cout << "Enter Title of the Publication : ";
 		getline(cin, title);

 		try
		  {
		     cout << " Enter Price of Publication : ";
 		     cin >> price;
 		     if(price<0)
			  {
				  throw price;

			  }
 		      catch(int)
			   {
				   cout<<"Invalid price"<<endl;
			   }

		   }
	   }
    }


 	void display()
 	{
 	    cout<< "\nTitle of Publication : "<< title;
 		cout<< "\nPublication Price : "<< price;
 	}
 };
 class book : public publication
 {
 	private:
 		int page_count;
 	public:
 		void add_book()
 		{
 			try
 				{
 					add();
 					cout << "Enter Page Count of Book : ";
 					cin >> page_count;
 					if (page_count <= 0)
 					{
 						throw page_count;
 					}
 				}
 				catch(...)
 				{
 					cout << "\nInvalid Page Count!!!";
 					page_count = 0;
 				}
 		}
 		void display_book()
 		{
 			display();
 			cout << "\nPage Count : " << page_count;

 		}
 };

 int main()
 {

	 book b1;
	 b1.add_book();
	 b1.display_book();
	 return 0;
}
