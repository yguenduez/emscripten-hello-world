#include <iostream>
#include <emscripten.h>

#include "edgeDevice.h"

extern "C"
{
  int c_add(int value1, int value2)
  {
    return value1 + value2;
  }
}

int main()
{
  auto myEdgeDevice = EdgeDevice{};

  std::cout << "Main Function is called !!!" << std::endl;
  std::cout << "edge device cloud adapter name = " << myEdgeDevice.getCloudAdaptor() << std::endl;
  std::cout << "edge device field adapter size = " << myEdgeDevice.getFieldAdaptor().size() << std::endl;

  return 0;
}