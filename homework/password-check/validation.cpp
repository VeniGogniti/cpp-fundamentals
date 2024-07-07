#include "validation.hpp"
ErrorCode checkPassword(std::string password, std::string repPassword) {
    if (!doPasswordsMatch(password, repPassword)) {
        return ErrorCode::PasswordsDoNotMatch;
    }
        return checkPasswordRules(password);
}
