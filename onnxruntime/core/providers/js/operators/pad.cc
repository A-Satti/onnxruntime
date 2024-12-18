// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#include "core/providers/js/js_kernel.h"

#include "pad.h"

namespace onnxruntime {
namespace js {

ONNX_OPERATOR_VERSIONED_KERNEL_EX(
    Pad,
    kOnnxDomain,
    2,
    10,
    kJsExecutionProvider,
    (*KernelDefBuilder::Create()).TypeConstraint("T", JsepSupportedFloatTypes()),
    Pad);

ONNX_OPERATOR_VERSIONED_KERNEL_EX(
    Pad,
    kOnnxDomain,
    11,
    12,
    kJsExecutionProvider,
    (*KernelDefBuilder::Create())
        .TypeConstraint("T", JsepSupportedFloatTypes())
        .InputMemoryType(OrtMemTypeCPU, 1)
        .InputMemoryType(OrtMemTypeCPU, 2)
        .InputMemoryType(OrtMemTypeCPU, 3),
    Pad);

ONNX_OPERATOR_VERSIONED_KERNEL_EX(
    Pad,
    kOnnxDomain,
    13,
    17,
    kJsExecutionProvider,
    (*KernelDefBuilder::Create())
        .TypeConstraint("T", JsepSupportedFloatTypes())
        .InputMemoryType(OrtMemTypeCPU, 1)
        .InputMemoryType(OrtMemTypeCPU, 2)
        .InputMemoryType(OrtMemTypeCPU, 3),
    Pad);

ONNX_OPERATOR_VERSIONED_KERNEL_EX(
    Pad,
    kOnnxDomain,
    18,
    18,
    kJsExecutionProvider,
    (*KernelDefBuilder::Create())
        .TypeConstraint("T", JsepSupportedFloatTypes())
        .InputMemoryType(OrtMemTypeCPU, 1)
        .InputMemoryType(OrtMemTypeCPU, 2)
        .InputMemoryType(OrtMemTypeCPU, 3),
    Pad);

ONNX_OPERATOR_VERSIONED_KERNEL_EX(
    Pad,
    kOnnxDomain,
    19,
    20,
    kJsExecutionProvider,
    (*KernelDefBuilder::Create())
        .TypeConstraint("T", JsepSupportedFloatTypes())
        .InputMemoryType(OrtMemTypeCPU, 1)
        .InputMemoryType(OrtMemTypeCPU, 2)
        .InputMemoryType(OrtMemTypeCPU, 3),
    Pad);

ONNX_OPERATOR_KERNEL_EX(
    Pad,
    kOnnxDomain,
    21,
    kJsExecutionProvider,
    (*KernelDefBuilder::Create())
        .TypeConstraint("T", JsepSupportedFloatTypes())
        .InputMemoryType(OrtMemTypeCPU, 1)
        .InputMemoryType(OrtMemTypeCPU, 2)
        .InputMemoryType(OrtMemTypeCPU, 3),
    Pad);

}  // namespace js
}  // namespace onnxruntime
