//==============================================================================
// Copyright (c) 2015-2017 Advanced Micro Devices, Inc. All rights reserved.
/// \author AMD Developer Tools Team
/// \file
/// \brief  PublicCounterDefinitions for DX11GFX7 for testing
//==============================================================================

// *** Note, this is an auto-generated file. Do not edit. Execute PublicCounterCompiler to rebuild.

#include "PublicCountersDX11Gfx7.h"

const GPACounterDesc DX11GFX7_PUBLIC_COUNTERS[DX11GFX7_PUBLIC_COUNTER_COUNT] =
{
    {"GPUTime", "Timing", "Time this API call took to execute on the GPU in milliseconds. Does not include time that draw calls are processed in parallel.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_MILLISECONDS},
    {"GPUBusy", "Timing", "The percentage of time GPU was busy.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE},
    {"GPUBusyCycles", "Timing", "Number of GPU cycles that the GPU was busy.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES},
    {"TessellatorBusy", "Timing", "The percentage of time the tessellation engine is busy.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE},
    {"TessellatorBusyCycles", "Timing", "Number of GPU cycles that the tessellation engine is busy.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES},
    {"VSBusy", "Timing", "The percentage of time the ShaderUnit has vertex shader work to do.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE},
    {"VSBusyCycles", "Timing", "Number of GPU cycles that the ShaderUnit has vertex shader work to do.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES},
    {"VSTime", "Timing", "Time vertex shaders are busy in milliseconds.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_MILLISECONDS},
    {"HSBusy", "Timing", "The percentage of time the ShaderUnit has hull shader work to do.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE},
    {"HSBusyCycles", "Timing", "Number of GPU cycles that the ShaderUnit has hull shader work to do.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES},
    {"HSTime", "Timing", "Time hull shaders are busy in milliseconds.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_MILLISECONDS},
    {"DSBusy", "Timing", "The percentage of time the ShaderUnit has domain shader work to do.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE},
    {"DSBusyCycles", "Timing", "Number of GPU cycles that the ShaderUnit has domain shader work to do.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES},
    {"DSTime", "Timing", "Time domain shaders are busy in milliseconds.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_MILLISECONDS},
    {"GSBusy", "Timing", "The percentage of time the ShaderUnit has geometry shader work to do.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE},
    {"GSBusyCycles", "Timing", "Number of GPU cycles that the ShaderUnit has geometry shader work to do.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES},
    {"GSTime", "Timing", "Time geometry shaders are busy in milliseconds.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_MILLISECONDS},
    {"PSBusy", "Timing", "The percentage of time the ShaderUnit has pixel shader work to do.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE},
    {"PSBusyCycles", "Timing", "Number of GPU cycles that the ShaderUnit has pixel shader work to do.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES},
    {"PSTime", "Timing", "Time pixel shaders are busy in milliseconds.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_MILLISECONDS},
    {"CSBusy", "Timing", "The percentage of time the ShaderUnit has compute shader work to do.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE},
    {"CSBusyCycles", "Timing", "Number of GPU cycles that the ShaderUnit has compute shader work to do.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES},
    {"CSTime", "Timing", "Time compute shaders are busy in milliseconds.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_MILLISECONDS},
    {"VSVerticesIn", "VertexShader", "The number of vertices processed by the VS.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS},
    {"VSVALUInstCount", "VertexShader", "Average number of vector ALU instructions executed in the VS. Affected by flow control.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS},
    {"VSSALUInstCount", "VertexShader", "Average number of scalar ALU instructions executed in the VS. Affected by flow control.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS},
    {"VSVALUBusy", "VertexShader", "The percentage of GPUTime vector ALU instructions are being processed by the VS.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE},
    {"VSVALUBusyCycles", "VertexShader", "Number of GPU cycles where vector ALU instructions are being processed by the VS.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES},
    {"VSSALUBusy", "VertexShader", "The percentage of GPUTime scalar ALU instructions are being processed by the VS.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE},
    {"VSSALUBusyCycles", "VertexShader", "Number of GPU cycles where scalar ALU instructions are being processed by the VS.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES},
    {"HSPatches", "HullShader", "The number of patches processed by the HS.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS},
    {"HSVALUInstCount", "HullShader", "Average number of vector ALU instructions executed in the HS. Affected by flow control.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS},
    {"HSSALUInstCount", "HullShader", "Average number of scalar ALU instructions executed in the HS. Affected by flow control.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS},
    {"HSVALUBusy", "HullShader", "The percentage of GPUTime vector ALU instructions are being processed by the HS.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE},
    {"HSVALUBusyCycles", "HullShader", "Number of GPU cycles vector where ALU instructions are being processed by the HS.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES},
    {"HSSALUBusy", "HullShader", "The percentage of GPUTime scalar ALU instructions are being processed by the HS.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE},
    {"HSSALUBusyCycles", "HullShader", "Number of GPU cycles where scalar ALU instructions are being processed by the HS.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES},
    {"DSVerticesIn", "DomainShader", "The number of vertices processed by the DS.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS},
    {"DSVALUInstCount", "DomainShader", "Average number of vector ALU instructions executed in the DS. Affected by flow control.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS},
    {"DSSALUInstCount", "DomainShader", "Average number of scalar ALU instructions executed in the DS. Affected by flow control.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS},
    {"DSVALUBusy", "DomainShader", "The percentage of GPUTime vector ALU instructions are being processed by the DS.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE},
    {"DSVALUBusyCycles", "DomainShader", "Number of GPU cycles where vector ALU instructions are being processed by the DS.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES},
    {"DSSALUBusy", "DomainShader", "The percentage of GPUTime scalar ALU instructions are being processed by the DS.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE},
    {"DSSALUBusyCycles", "DomainShader", "Number of GPU cycles where scalar ALU instructions are being processed by the DS.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES},
    {"GSPrimsIn", "GeometryShader", "The number of primitives passed into the GS.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS},
    {"GSVerticesOut", "GeometryShader", "The number of vertices output by the GS.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS},
    {"GSVALUInstCount", "GeometryShader", "Average number of vector ALU instructions executed in the GS. Affected by flow control.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS},
    {"GSSALUInstCount", "GeometryShader", "Average number of scalar ALU instructions executed in the GS. Affected by flow control.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS},
    {"GSVALUBusy", "GeometryShader", "The percentage of GPUTime vector ALU instructions are being processed by the GS.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE},
    {"GSVALUBusyCycles", "GeometryShader", "Number of GPU cycles where vector ALU instructions are being processed by the GS.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES},
    {"GSSALUBusy", "GeometryShader", "The percentage of GPUTime scalar ALU instructions are being processed by the GS.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE},
    {"GSSALUBusyCycles", "GeometryShader", "Number of GPU cycles where scalar ALU instructions are being processed by the GS.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES},
    {"PrimitiveAssemblyBusy", "Timing", "The percentage of GPUTime that primitive assembly (clipping and culling) is busy. High values may be caused by having many small primitives; mid to low values may indicate pixel shader or output buffer bottleneck.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE},
    {"PrimitiveAssemblyBusyCycles", "Timing", "Number of GPU cycles the primitive assembly (clipping and culling) is busy. High values may be caused by having many small primitives; mid to low values may indicate pixel shader or output buffer bottleneck.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES},
    {"PrimitivesIn", "PrimitiveAssembly", "The number of primitives received by the hardware. This includes primitives generated by tessellation.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS},
    {"CulledPrims", "PrimitiveAssembly", "The number of culled primitives. Typical reasons include scissor, the primitive having zero area, and back or front face culling.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS},
    {"ClippedPrims", "PrimitiveAssembly", "The number of primitives that required one or more clipping operations due to intersecting the view volume or user clip planes.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS},
    {"PAStalledOnRasterizer", "PrimitiveAssembly", "Percentage of GPUTime that primitive assembly waits for rasterization to be ready to accept data. This roughly indicates for what percentage of time the pipeline is bottlenecked by pixel operations.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE},
    {"PAStalledOnRasterizerCycles", "PrimitiveAssembly", "Number of GPU cycles the primitive assembly waits for rasterization to be ready to accept data. Indicates the number of GPU cycles the pipeline is bottlenecked by pixel operations.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES},
    {"PSPixelsOut", "PixelShader", "Pixels exported from shader to colour buffers. Does not include killed or alpha tested pixels; if there are multiple rendertargets, each rendertarget receives one export, so this will be 2 for 1 pixel written to two RTs.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS},
    {"PSExportStalls", "PixelShader", "Pixel shader output stalls. Percentage of GPUBusy. Should be zero for PS or further upstream limited cases; if not zero, indicates a bottleneck in late Z testing or in the colour buffer.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE},
    {"PSExportStallsCycles", "PixelShader", "Number of GPU cycles the pixel shader output stalls. Should be zero for PS or further upstream limited cases; if not zero, indicates a bottleneck in late Z testing or in the colour buffer.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES},
    {"PSVALUInstCount", "PixelShader", "Average number of vector ALU instructions executed in the PS. Affected by flow control.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS},
    {"PSSALUInstCount", "PixelShader", "Average number of scalar ALU instructions executed in the PS. Affected by flow control.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS},
    {"PSVALUBusy", "PixelShader", "The percentage of GPUTime vector ALU instructions are being processed by the PS.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE},
    {"PSVALUBusyCycles", "PixelShader", "Number of GPU cycles where vector ALU instructions are being processed by the PS.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES},
    {"PSSALUBusy", "PixelShader", "The percentage of GPUTime scalar ALU instructions are being processed by the PS.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE},
    {"PSSALUBusyCycles", "PixelShader", "Number of GPU cycles where scalar ALU instructions are being processed by the PS.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES},
    {"CSThreadGroups", "ComputeShader", "Total number of thread groups.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS},
    {"CSWavefronts", "ComputeShader", "The total number of wavefronts used for the CS.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS},
    {"CSThreads", "ComputeShader", "The number of CS threads processed by the hardware.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS},
    {"CSVALUInsts", "ComputeShader", "The average number of vector ALU instructions executed per work-item (affected by flow control).", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS},
    {"CSVALUUtilization", "ComputeShader", "The percentage of active vector ALU threads in a wave. A lower number can mean either more thread divergence in a wave or that the work-group size is not a multiple of 64. Value range: 0% (bad), 100% (ideal - no thread divergence).", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE},
    {"CSSALUInsts", "ComputeShader", "The average number of scalar ALU instructions executed per work-item (affected by flow control).", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS},
    {"CSVFetchInsts", "ComputeShader", "The average number of vector fetch instructions from the video memory executed per work-item (affected by flow control).", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS},
    {"CSSFetchInsts", "ComputeShader", "The average number of scalar fetch instructions from the video memory executed per work-item (affected by flow control).", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS},
    {"CSVWriteInsts", "ComputeShader", "The average number of vector write instructions to the video memory executed per work-item (affected by flow control).", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS},
    {"CSFlatVMemInsts", "ComputeShader", "The average number of FLAT instructions that read from or write to the video memory executed per work item (affected by flow control). Includes FLAT instructions that read from or write to scratch.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS},
    {"CSVALUBusy", "ComputeShader", "The percentage of GPUTime vector ALU instructions are processed. Value range: 0% (bad) to 100% (optimal).", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE},
    {"CSVALUBusyCycles", "ComputeShader", "Number of GPU cycles where vector ALU instructions are processed.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES},
    {"CSSALUBusy", "ComputeShader", "The percentage of GPUTime scalar ALU instructions are processed. Value range: 0% (bad) to 100% (optimal).", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE},
    {"CSSALUBusyCycles", "ComputeShader", "Number of GPU cycles where scalar ALU instructions are processed.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES},
    {"CSMemUnitBusy", "ComputeShader", "The percentage of GPUTime the memory unit is active. The result includes the stall time (MemUnitStalled). This is measured with all extra fetches and writes and any cache or memory effects taken into account. Value range: 0% to 100% (fetch-bound).", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE},
    {"CSMemUnitBusyCycles", "ComputeShader", "Number of GPU cycles the memory unit is active. The result includes the stall time (MemUnitStalled). This is measured with all extra fetches and writes and any cache or memory effects taken into account.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES},
    {"CSMemUnitStalled", "ComputeShader", "The percentage of GPUTime the memory unit is stalled. Try reducing the number or size of fetches and writes if possible. Value range: 0% (optimal) to 100% (bad).", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE},
    {"CSMemUnitStalledCycles", "ComputeShader", "Number of GPU cycles the memory unit is stalled. Try reducing the number or size of fetches and writes if possible.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES},
    {"CSFetchSize", "ComputeShader", "The total kilobytes fetched from the video memory. This is measured with all extra fetches and any cache or memory effects taken into account.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_KILOBYTES},
    {"CSWriteSize", "ComputeShader", "The total kilobytes written to the video memory. This is measured with all extra fetches and any cache or memory effects taken into account.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_KILOBYTES},
    {"CSCacheHit", "ComputeShader", "The percentage of fetch, write, atomic, and other instructions that hit the data cache. Value range: 0% (no hit) to 100% (optimal).", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE},
    {"CSCacheHitCount", "ComputeShader", "Count of fetch, write, atomic, and other instructions that hit the data cache.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS},
    {"CSCacheMissCount", "ComputeShader", "Count of fetch, write, atomic, and other instructions that miss the data cache.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE},
    {"CSWriteUnitStalled", "ComputeShader", "The percentage of GPUTime the Write unit is stalled. Value range: 0% to 100% (bad).", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE},
    {"CSWriteUnitStalledCycles", "ComputeShader", "Number of GPU cycles the write unit is stalled.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES},
    {"CSGDSInsts", "ComputeShader", "The average number of GDS read or GDS write instructions executed per work item (affected by flow control).", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS},
    {"CSLDSInsts", "ComputeShader", "The average number of LDS read/write instructions executed per work-item (affected by flow control).", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS},
    {"CSFlatLDSInsts", "ComputeShader", "The average number of FLAT instructions that read from or write to LDS executed per work item (affected by flow control).", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS},
    {"CSALUStalledByLDS", "ComputeShader", "The percentage of GPUTime ALU units are stalled by the LDS input queue being full or the output queue being not ready. If there are LDS bank conflicts, reduce them. Otherwise, try reducing the number of LDS accesses if possible. Value range: 0% (optimal) to 100% (bad).", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE},
    {"CSALUStalledByLDSCycles", "ComputeShader", "Number of GPU cycles the ALU units are stalled by the LDS input queue being full or the output queue being not ready. If there are LDS bank conflicts, reduce them. Otherwise, try reducing the number of LDS accesses if possible.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES},
    {"CSLDSBankConflict", "ComputeShader", "The percentage of GPUTime LDS is stalled by bank conflicts. Value range: 0% (optimal) to 100% (bad).", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE},
    {"CSLDSBankConflictCycles", "ComputeShader", "Number of GPU cycles the LDS is stalled by bank conflicts. Value range: 0 (optimal) to GPUBusyCycles (bad).", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES},
    {"TexUnitBusy", "Timing", "The percentage of GPUTime the texture unit is active. This is measured with all extra fetches and any cache or memory effects taken into account.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE},
    {"TexUnitBusyCycles", "Timing", "Number of GPU cycles the texture unit is active. This is measured with all extra fetches and any cache or memory effects taken into account.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES},
    {"TexTriFilteringPct", "TextureUnit", "Percentage of pixels that received trilinear filtering. Note that not all pixels for which trilinear filtering is enabled will receive it (e.g. if the texture is magnified).", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE},
    {"TexTriFilteringCount", "TextureUnit", "Count of pixels that received trilinear filtering. Note that not all pixels for which trilinear filtering is enabled will receive it (e.g. if the texture is magnified).", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS},
    {"NoTexTriFilteringCount", "TextureUnit", "Count of pixels that did not receive trilinear filtering.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS},
    {"TexVolFilteringPct", "TextureUnit", "Percentage of pixels that received volume filtering.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE},
    {"TexVolFilteringCount", "TextureUnit", "Count of pixels that received volume filtering.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS},
    {"NoTexVolFilteringCount", "TextureUnit", "Count of pixels that did not receive volume filtering.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS},
    {"TexAveAnisotropy", "TextureUnit", "The average degree of anisotropy applied. A number between 1 and 16. The anisotropic filtering algorithm only applies samples where they are required (e.g. there will be no extra anisotropic samples if the view vector is perpendicular to the surface) so this can be much lower than the requested anisotropy.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS},
    {"DepthStencilTestBusy", "Timing", "Percentage of time GPU spent performing depth and stencil tests relative to GPUBusy.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE},
    {"DepthStencilTestBusyCount", "Timing", "Number of GPU cycles spent performing depth and stencil tests.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES},
    {"HiZTilesAccepted", "DepthAndStencil", "Percentage of tiles accepted by HiZ and will be rendered to the depth or color buffers.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE},
    {"HiZTilesAcceptedCount", "DepthAndStencil", "Count of tiles accepted by HiZ and will be rendered to the depth or color buffers.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS},
    {"HiZTilesRejectedCount", "DepthAndStencil", "Count of tiles not accepted by HiZ.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS},
    {"PreZTilesDetailCulled", "DepthAndStencil", "Percentage of tiles rejected because the associated prim had no contributing area.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE},
    {"PreZTilesDetailCulledCount", "DepthAndStencil", "Count of tiles rejected because the associated primitive had no contributing area.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS},
    {"PreZTilesDetailSurvivingCount", "DepthAndStencil", "Count of tiles surviving because the associated primitive had contributing area.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS},
    {"HiZQuadsCulled", "DepthAndStencil", "Percentage of quads that did not have to continue on in the pipeline after HiZ. They may be written directly to the depth buffer, or culled completely. Consistently low values here may suggest that the Z-range is not being fully utilized.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE},
    {"HiZQuadsCulledCount", "DepthAndStencil", "Count of quads that did not have to continue on in the pipeline after HiZ. They may be written directly to the depth buffer, or culled completely. Consistently low values here may suggest that the Z-range is not being fully utilized.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS},
    {"HiZQuadsAcceptedCount", "DepthAndStencil", "Count of quads that did continue on in the pipeline after HiZ.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS},
    {"PreZQuadsCulled", "DepthAndStencil", "Percentage of quads rejected based on the detailZ and earlyZ tests.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE},
    {"PreZQuadsCulledCount", "DepthAndStencil", "Count of quads rejected based on the detailZ and earlyZ tests.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS},
    {"PreZQuadsSurvivingCount", "DepthAndStencil", "Count of quads surviving detailZ and earlyZ tests.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS},
    {"PostZQuads", "DepthAndStencil", "Percentage of quads for which the pixel shader will run and may be postZ tested.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE},
    {"PostZQuadCount", "DepthAndStencil", "Count of quads for which the pixel shader will run and may be postZ tested.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS},
    {"PreZSamplesPassing", "DepthAndStencil", "Number of samples tested for Z before shading and passed.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS},
    {"PreZSamplesFailingS", "DepthAndStencil", "Number of samples tested for Z before shading and failed stencil test.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS},
    {"PreZSamplesFailingZ", "DepthAndStencil", "Number of samples tested for Z before shading and failed Z test.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS},
    {"PostZSamplesPassing", "DepthAndStencil", "Number of samples tested for Z after shading and passed.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS},
    {"PostZSamplesFailingS", "DepthAndStencil", "Number of samples tested for Z after shading and failed stencil test.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS},
    {"PostZSamplesFailingZ", "DepthAndStencil", "Number of samples tested for Z after shading and failed Z test.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS},
    {"ZUnitStalled", "DepthAndStencil", "The percentage of GPUTime the depth buffer spends waiting for the color buffer to be ready to accept data. High figures here indicate a bottleneck in color buffer operations.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE},
    {"ZUnitStalledCycles", "DepthAndStencil", "Number of GPU cycles the depth buffer spends waiting for the color buffer to be ready to accept data. Larger numbers indicate a bottleneck in color buffer operations.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES},
    {"DBMemRead", "DepthAndStencil", "Number of bytes read from the depth buffer.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_BYTES},
    {"DBMemWritten", "DepthAndStencil", "Number of bytes written to the depth buffer.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_BYTES},
    {"CBMemRead", "ColorBuffer", "Number of bytes read from the color buffer.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_BYTES},
    {"CBMemWritten", "ColorBuffer", "Number of bytes written to the color buffer.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_BYTES},
    {"CBSlowPixelPct", "ColorBuffer", "Percentage of pixels written to the color buffer using a half-rate or quarter-rate format.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE},
    {"CBSlowPixelCount", "ColorBuffer", "Number of pixels written to the color buffer using a half-rate or quarter-rate format.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS},
};

