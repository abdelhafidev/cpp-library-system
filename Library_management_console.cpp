#include <iostream>
#include <string>
#include <vector>
 
 std::vector<std::string> account_saving={"ingriswega","ilmailmer","yardegerlax","tootime"};
 void information_END();
  
 
 std::vector<std::string>::iterator it;
 std::string account_ID;

 
int main() {
    
    
    bool found = true;
    while(found)
       { 
        found=false;
           std::cout<<"Please enter your account_ID : "<<std::endl;
           std::getline(std::cin,account_ID);

      for (const std::string& acc : account_saving)
            {
           if (acc == account_ID )
               {found = true;
                std::cout<<"this account is already taken please try an other account_Id "<<std::endl;
                 break;                
               }
                
            }
                
        }
    
        std::cout<<" a new account submited, we will saved now"<<std::endl;        
        account_saving.push_back(account_ID);
                  
                  
    
        information_END();


    system("pause");
    return 0;
}



 void information_END(){
        std::cout<<account_saving.size()<<std::endl;
        for (int i = 0; i < account_saving.size(); i++)
        {
        std::cout<<account_saving.at(i)<<std::endl;
        }
 }
