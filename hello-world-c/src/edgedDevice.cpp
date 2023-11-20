#include "edgeDevice.h"

EdgeDevice::EdgeDevice()
{
    cloud_adaptor = "netilion SDK for C++";
    for (int i = 0; i < 5; i++)
        field_adaptor.push_back(i);
}

std::string EdgeDevice::getCloudAdaptor()
{
    return cloud_adaptor;
}

std::vector<int> EdgeDevice::getFieldAdaptor()
{
    return field_adaptor;
}