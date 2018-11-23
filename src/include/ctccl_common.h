#ifndef _CTCCL_COMMON_H_
#define _CTCCL_COMMON_H_

#include "ctccl_api.h"
#include "ctccl_error.h"

#define IS_SUCCESS(a)  (a == CTC_SUCCESS)
#define IS_FAILED(a)   (a != CTC_SUCCESS && a != CTC_SUCCESS_FRAGMENTED && a != CTC_SUCCESS_NO_DATA)

#define IS_NULL(a)     (a == NULL)
#define IS_NOT_NULL(a) (a != NULL)

typedef enum
{
    false,
    true
} bool;

#endif
