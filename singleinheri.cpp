 #include<iostream>
 using namespace std;
 class base
 {
 	public:
 		void base_class(void);
 };
 void base::base_class(void)
 {
 	cout<<"base class method"<<endl;
 }
 class derived:public base
 {
 	public:
 		void derived_class(void);
 };
 void derived::derived_class(void)
 {
 	cout<<"derived class method"<<endl;
 }
 int main()
 {
 	derived ob;
 	ob.base_class();
 	ob.derived_class();
 	return 0;
 }
