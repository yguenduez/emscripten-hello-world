#include <string>
#include <vector>

class EdgeDevice
{
private:
    std::string cloud_adaptor;
    std::vector<int> field_adaptor;

public:
    EdgeDevice();
    std::string getCloudAdaptor();
    std::vector<int> getFieldAdaptor();
};