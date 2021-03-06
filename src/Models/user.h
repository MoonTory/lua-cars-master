#ifndef USER_H
#define USER_H

#include <string>

namespace Luna {

    enum UserLevel
    {
        USER_ADMIN,
        USER_CLIENT,
        USER_DEV
    };

    class User
    {
    public:
        User() { }
        User(const std::string &_username, const std::string &_password,
             UserLevel _level);
        ~User();

        std::string username() const;
        void setUsername(const std::string &username);

        void setPassword(const std::string &password);
        std::string password() const;

        std::string level() const;
        void setLevel(const UserLevel &level);

    private:
        std::string m_username;
        std::string m_password;
        UserLevel m_level;
    };

} // namespace Luna

#endif // USER_H
