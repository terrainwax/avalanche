#ifndef AVALANCHE_LOGIN_FLOOD_H_
#define AVALANCHE_LOGIN_FLOOD_H_

#include "LoginMethod.h"

namespace avalanche {

class LoginFlood : public LoginMethod {
private:
    s32 m_Delay;

    bool ReadMethodJSON(const Json::Value& node) override;

public:
    LoginFlood();

    std::size_t Login(std::vector<Instance>& instances);
};

} // ns avalanche

#endif