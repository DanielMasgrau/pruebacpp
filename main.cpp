 #include <iostream>
   
   int main (int argc, char** argv){
   		
	   //std::cout << argc << std::endl;

	   if (argc > 1){
	   	
	   std::cout << argv[1] << std::endl;
       std::cout << "Holi Adri!" << std::endl;

	   }

	   else{ 
	   	   std::cout << "Introduce un nombre como parametro!!!" << std::endl;
	   }


       return 0;
   }            
