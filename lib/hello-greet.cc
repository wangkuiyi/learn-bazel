#include "lib/hello-greet.h"
#include <string>

std::string get_greet(const ::protos::Greeting& who) {
  return "Hello " + who.name();
}
