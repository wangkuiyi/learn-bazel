#include "lib/hello-greet.h"
#include "main/hello-time.h"
#include "protos/my.pb.h"
#include <iostream>
#include <string>

int main(int argc, char** argv) {
  protos::Greeting g;
  g.set_name("world");
  if (argc > 1) {
    g.set_name(argv[1]);
  }
  std::cout << get_greet(g) <<std::endl;
  print_localtime();
  return 0;
}
