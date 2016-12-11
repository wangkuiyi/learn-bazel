#ifndef LIB_HELLO_GREET_H_
#define LIB_HELLO_GREET_H_

#include "protos/my.pb.h"

#include <string>

std::string get_greet(const ::protos::Greeting &who);

#endif
