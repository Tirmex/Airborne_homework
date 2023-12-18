#include <iostream>
#include <string>
 
class NotifierBase {
public:
    virtual void Notify(const std::string& message) const = 0;
    virtual ~NotifierBase() {}
};
 
class SmsNotifier : public NotifierBase {
public:
    SmsNotifier(const std::string& number)
        : Number(number) {}
 
    virtual void Notify(const std::string& message) const override {
        SendSms(Number, message);
    }
 
private:
    const std::string Number;
};
 
class EmailNotifier : public NotifierBase {
public:
    EmailNotifier(const std::string& email)
        : Email(email) {}
 
    virtual void Notify(const std::string& message) const override {
        SendEmail(Email, message);
    }
 
private:
    const std::string Email;
