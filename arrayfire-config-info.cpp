// Copyright (c) 2019 Nicholas Corgan
// SPDX-License-Identifier: BSD-3-Clause

#include <arrayfire.h>

#include <iostream>
#include <vector>

int main(int, char**)
{
    std::cout << "ArrayFire Config Info" << std::endl << std::endl;

    const int availableBackends = af::getAvailableBackends();
    const std::vector<af::Backend> backends =
    {
        AF_BACKEND_CUDA,
        AF_BACKEND_OPENCL,
        AF_BACKEND_CPU
    };
    for(af::Backend backend: backends)
    {
        if(availableBackends & backend)
        {
            af::setBackend(backend);
            af::info();
        }
    }
}
