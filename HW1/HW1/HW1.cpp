   
      #include <iostream>
   
    #include <iomanip>
   
       
   
      const float PI= 3.14;
  
     
  
      float circle_area(float &radius);
  
       
  
      float circle_area(float &radius)
  
      {
  
      using namespace std;
  
       
  
      float area= PI*radius*radius;
  
      cout<< "The area of the circle with radius "<<radius<< " is: "<< area << setprecision(2) << endl;
  
      return (area);
  
      }

     
  
      int main()
  
      {
  
      using namespace std;
  
       
  
      float radius;
  
      cout<< "What is the radius of the circle:> ";
  
      cin >> radius;
 
      circle_area(radius);
  
      return 0;
  
      }