#pragma once
#include <iostream>
#include <string>

enum class ErrorCode {
    Ok,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoNotMatch
};

std::string getErrorMessage(ErrorCode code);
bool doPasswordsMatch(std::string pwd1, std::string pwd2);
ErrorCode checkPasswordRules(std::string pwd);
ErrorCode checkPassword(std::string password, std::string repPassword);
