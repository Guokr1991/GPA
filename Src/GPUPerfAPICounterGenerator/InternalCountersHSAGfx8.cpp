//==============================================================================
// Copyright (c) 2010-2017 Advanced Micro Devices, Inc. All rights reserved.
/// \author AMD Developer Tools Team
/// \file
/// \brief  HSA internal counter definitions for GFX8
//==============================================================================

#include "GPAInternalCountersGfx8.h"
#include "InternalCountersHSAGfx8.h"

// This file is autogenerated by the ConvertHWEnums project

GPA_HardwareCounterDesc* HSACounterGroupArrayGfx8[] =
{
    CB0countersGfx8,
    CB1countersGfx8,
    CB2countersGfx8,
    CB3countersGfx8,
    CPFcountersGfx8,
    DB0countersGfx8,
    DB1countersGfx8,
    DB2countersGfx8,
    DB3countersGfx8,
    GRBMcountersGfx8,
    GRBMSE0countersGfx8,
    PA_SU0countersGfx8,
    PA_SC0countersGfx8,
    SPI0countersGfx8,
    SQ0countersGfx8,
    SQ_ES0countersGfx8,
    SQ_GS0countersGfx8,
    SQ_VS0countersGfx8,
    SQ_PS0countersGfx8,
    SQ_LS0countersGfx8,
    SQ_HS0countersGfx8,
    SQ_CS0countersGfx8,
    SX0countersGfx8,
    TA0countersGfx8,
    TA1countersGfx8,
    TA2countersGfx8,
    TA3countersGfx8,
    TA4countersGfx8,
    TA5countersGfx8,
    TA6countersGfx8,
    TA7countersGfx8,
    TA8countersGfx8,
    TA9countersGfx8,
    TA10countersGfx8,
    TA11countersGfx8,
    TA12countersGfx8,
    TA13countersGfx8,
    TA14countersGfx8,
    TA15countersGfx8,
    TCA0countersGfx8,
    TCA1countersGfx8,
    TCC0countersGfx8,
    TCC1countersGfx8,
    TCC2countersGfx8,
    TCC3countersGfx8,
    TCC4countersGfx8,
    TCC5countersGfx8,
    TCC6countersGfx8,
    TCC7countersGfx8,
    TCC8countersGfx8,
    TCC9countersGfx8,
    TCC10countersGfx8,
    TCC11countersGfx8,
    TCC12countersGfx8,
    TCC13countersGfx8,
    TCC14countersGfx8,
    TCC15countersGfx8,
    TD0countersGfx8,
    TD1countersGfx8,
    TD2countersGfx8,
    TD3countersGfx8,
    TD4countersGfx8,
    TD5countersGfx8,
    TD6countersGfx8,
    TD7countersGfx8,
    TD8countersGfx8,
    TD9countersGfx8,
    TD10countersGfx8,
    TD11countersGfx8,
    TD12countersGfx8,
    TD13countersGfx8,
    TD14countersGfx8,
    TD15countersGfx8,
    TCP0countersGfx8,
    TCP1countersGfx8,
    TCP2countersGfx8,
    TCP3countersGfx8,
    TCP4countersGfx8,
    TCP5countersGfx8,
    TCP6countersGfx8,
    TCP7countersGfx8,
    TCP8countersGfx8,
    TCP9countersGfx8,
    TCP10countersGfx8,
    TCP11countersGfx8,
    TCP12countersGfx8,
    TCP13countersGfx8,
    TCP14countersGfx8,
    TCP15countersGfx8,
    GDScountersGfx8,
    VGT0countersGfx8,
    IA0countersGfx8,
    MC0countersGfx8,
    SRBMcountersGfx8,
    WDcountersGfx8,
    CPGcountersGfx8,
    CPCcountersGfx8,
};

GPA_CounterGroupDesc HWHSAGroupsGfx8[] =
{
    {0, "CB0", 0, 396, 4},
    {1, "CB1", 1, 396, 4},
    {2, "CB2", 2, 396, 4},
    {3, "CB3", 3, 396, 4},
    {4, "CPF", 0, 19, 2},
    {5, "DB0", 0, 257, 4},
    {6, "DB1", 1, 257, 4},
    {7, "DB2", 2, 257, 4},
    {8, "DB3", 3, 257, 4},
    {9, "GRBM", 0, 34, 2},
    {10, "GRBMSE", 0, 15, 4},
    {11, "PA_SU", 0, 153, 4},
    {12, "PA_SC", 0, 397, 8},
    {13, "SPI", 0, 197, 6},
    {14, "SQ", 0, 299, 16},
    {15, "SQ_ES", 0, 299, 16},
    {16, "SQ_GS", 0, 299, 16},
    {17, "SQ_VS", 0, 299, 16},
    {18, "SQ_PS", 0, 299, 16},
    {19, "SQ_LS", 0, 299, 16},
    {20, "SQ_HS", 0, 299, 16},
    {21, "SQ_CS", 0, 299, 16},
    {22, "SX", 0, 34, 4},
    {23, "TA0", 0, 119, 2},
    {24, "TA1", 1, 119, 2},
    {25, "TA2", 2, 119, 2},
    {26, "TA3", 3, 119, 2},
    {27, "TA4", 4, 119, 2},
    {28, "TA5", 5, 119, 2},
    {29, "TA6", 6, 119, 2},
    {30, "TA7", 7, 119, 2},
    {31, "TA8", 8, 119, 2},
    {32, "TA9", 9, 119, 2},
    {33, "TA10", 10, 119, 2},
    {34, "TA11", 11, 119, 2},
    {35, "TA12", 12, 119, 2},
    {36, "TA13", 13, 119, 2},
    {37, "TA14", 14, 119, 2},
    {38, "TA15", 15, 119, 2},
    {39, "TCA0", 0, 35, 4},
    {40, "TCA1", 1, 35, 4},
    {41, "TCC0", 0, 192, 4},
    {42, "TCC1", 1, 192, 4},
    {43, "TCC2", 2, 192, 4},
    {44, "TCC3", 3, 192, 4},
    {45, "TCC4", 4, 192, 4},
    {46, "TCC5", 5, 192, 4},
    {47, "TCC6", 6, 192, 4},
    {48, "TCC7", 7, 192, 4},
    {49, "TCC8", 8, 192, 4},
    {50, "TCC9", 9, 192, 4},
    {51, "TCC10", 10, 192, 4},
    {52, "TCC11", 11, 192, 4},
    {53, "TCC12", 12, 192, 4},
    {54, "TCC13", 13, 192, 4},
    {55, "TCC14", 14, 192, 4},
    {56, "TCC15", 15, 192, 4},
    {57, "TD0", 0, 55, 2},
    {58, "TD1", 1, 55, 2},
    {59, "TD2", 2, 55, 2},
    {60, "TD3", 3, 55, 2},
    {61, "TD4", 4, 55, 2},
    {62, "TD5", 5, 55, 2},
    {63, "TD6", 6, 55, 2},
    {64, "TD7", 7, 55, 2},
    {65, "TD8", 8, 55, 2},
    {66, "TD9", 9, 55, 2},
    {67, "TD10", 10, 55, 2},
    {68, "TD11", 11, 55, 2},
    {69, "TD12", 12, 55, 2},
    {70, "TD13", 13, 55, 2},
    {71, "TD14", 14, 55, 2},
    {72, "TD15", 15, 55, 2},
    {73, "TCP0", 0, 180, 4},
    {74, "TCP1", 1, 180, 4},
    {75, "TCP2", 2, 180, 4},
    {76, "TCP3", 3, 180, 4},
    {77, "TCP4", 4, 180, 4},
    {78, "TCP5", 5, 180, 4},
    {79, "TCP6", 6, 180, 4},
    {80, "TCP7", 7, 180, 4},
    {81, "TCP8", 8, 180, 4},
    {82, "TCP9", 9, 180, 4},
    {83, "TCP10", 10, 180, 4},
    {84, "TCP11", 11, 180, 4},
    {85, "TCP12", 12, 180, 4},
    {86, "TCP13", 13, 180, 4},
    {87, "TCP14", 14, 180, 4},
    {88, "TCP15", 15, 180, 4},
    {89, "GDS", 0, 121, 4},
    {90, "VGT", 0, 146, 4},
    {91, "IA", 0, 24, 4},
    {92, "MC", 0, 33, 4},
    {93, "SRBM", 0, 27, 2},
    {94, "WD", 0, 37, 4},
    {95, "CPG", 0, 48, 2},
    {96, "CPC", 0, 24, 2},
};

GPA_SQCounterGroupDesc HWHSASQGroupsGfx8[] =
{
    {14, 0, SQ_ALL},
    {15, 0, SQ_ES},
    {16, 0, SQ_GS},
    {17, 0, SQ_VS},
    {18, 0, SQ_PS},
    {19, 0, SQ_LS},
    {20, 0, SQ_HS},
    {21, 0, SQ_CS},
};


unsigned int HWHSASQIsolatedGroupsGfx8[] =
{
    23, // Ta
    24, // Ta
    25, // Ta
    26, // Ta
    27, // Ta
    28, // Ta
    29, // Ta
    30, // Ta
    31, // Ta
    32, // Ta
    33, // Ta
    34, // Ta
    35, // Ta
    36, // Ta
    37, // Ta
    38, // Ta
    39, // Tca
    40, // Tca
    41, // Tcc
    42, // Tcc
    43, // Tcc
    44, // Tcc
    45, // Tcc
    46, // Tcc
    47, // Tcc
    48, // Tcc
    49, // Tcc
    50, // Tcc
    51, // Tcc
    52, // Tcc
    53, // Tcc
    54, // Tcc
    55, // Tcc
    56, // Tcc
    57, // Td
    58, // Td
    59, // Td
    60, // Td
    61, // Td
    62, // Td
    63, // Td
    64, // Td
    65, // Td
    66, // Td
    67, // Td
    68, // Td
    69, // Td
    70, // Td
    71, // Td
    72, // Td
    73, // Tcp
    74, // Tcp
    75, // Tcp
    76, // Tcp
    77, // Tcp
    78, // Tcp
    79, // Tcp
    80, // Tcp
    81, // Tcp
    82, // Tcp
    83, // Tcp
    84, // Tcp
    85, // Tcp
    86, // Tcp
    87, // Tcp
    88, // Tcp
};

const unsigned int HWHSAGroupCountGfx8 = sizeof(HWHSAGroupsGfx8) / sizeof(GPA_CounterGroupDesc);
const unsigned int HWHSASQGroupCountGfx8 = sizeof(HWHSASQGroupsGfx8) / sizeof(GPA_SQCounterGroupDesc);
const unsigned int HWHSASQIsolatedGroupCountGfx8 = sizeof(HWHSASQIsolatedGroupsGfx8) / sizeof(unsigned int);
