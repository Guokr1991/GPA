//==============================================================================
// Copyright (c) 2017 Advanced Micro Devices, Inc. All rights reserved.
/// \author AMD Developer Tools Team
/// \file
/// \brief Vulkan counter generation for non-AMD hardware (used simply to register the generator)
//==============================================================================

#include "GPACounterGeneratorVKNonAMD.h"
#include "GPACounterGeneratorSchedulerManager.h"

GPA_CounterGeneratorVKNonAMD::GPA_CounterGeneratorVKNonAMD()
{
    SetAllowedCounters(false, false, true); //enable sw counters

    CounterGeneratorSchedulerManager::Instance()->RegisterCounterGenerator(GPA_API_VULKAN, GDT_HW_GENERATION_INTEL, this, false);  // allow future registrations to override this default one
    CounterGeneratorSchedulerManager::Instance()->RegisterCounterGenerator(GPA_API_VULKAN, GDT_HW_GENERATION_NVIDIA, this, false); // allow future registrations to override this default one
}
