 #include "validation.hpp"                                                                                          
                                                                                                                    
 std::string getErrorMessage(ErrorCode code) {                                                                      
     switch (code) {                                                                                                
         case ErrorCode::Ok: return "Ok";                                                                           
         case ErrorCode::PasswordNeedsAtLeastNineCharacters: return "Password needs to have at least nine characters";
         case ErrorCode::PasswordNeedsAtLeastOneNumber: return "Password needs to have at least one number";        
         case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter: return "Password needs to have at least one special character";                                                                                                
         case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter: return "Password needs to have at least one uppercase letter";                                                                                                 
         case ErrorCode::PasswordsDoNotMatch: return "Passwords do not match";                                      
         default: return "Error";                                                                                   
     }                                                                                                              
 }                                                                                                                  
                                                                                                                    
 bool doPasswordsMatch(std::string pwd1, std::string pwd2) {                                                        
     if (pwd1 == pwd2) {                                                                                            
         return true;                                                                                               
     }                                                                                                              
     return false;                                                                                                  
 }                                                                                                                  
                                                                                                                    
 ErrorCode checkPasswordRules(std::string pwd) {                                                                    
     std::string charToChekc = "QWERTYUIOPASDFGHJKLZXCVBNM1234567890!@#$%^&*()";                                    
     if (pwd.size() >= 9) {                                                                                         
         for (int it = 0; it <= pwd.size(); it++) {                                                                 
             if (!isupper(pwd[it])) {                                                                               
                 return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;                                          
             }                                                                                                      
             if (!ispunct(pwd[it])) {                                                                               
                 return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;                                         
             }                                                                                                      
             if (!isdigit(pwd[it])) {                                                                               
                 return ErrorCode::PasswordNeedsAtLeastOneNumber;                                                   
             }                                                                                                      
         }                                                                                                          
         return ErrorCode::Ok;                                                                                      
                                                                                                                    
     } else if (pwd.size() < 9) {                                                                                   
         return ErrorCode::PasswordNeedsAtLeastNineCharacters;                                                      
     }                                                                                                              
     return ErrorCode::Ok;                                                                                          
 }                                                                                                                  
                                                                                                                    
 ErrorCode checkPassword(std::string password, std::string repPassword) {                                           
     if (!doPasswordsMatch(password, repPassword)) {                                                                
         return ErrorCode::PasswordsDoNotMatch;                                                                     
     }                                                                                                              
         return checkPasswordRules(password);                                                                       
 }  
