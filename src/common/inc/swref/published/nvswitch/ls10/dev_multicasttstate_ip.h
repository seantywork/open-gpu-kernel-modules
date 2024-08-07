/*
 * SPDX-FileCopyrightText: Copyright (c) 2003-2022 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
 * SPDX-License-Identifier: MIT
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the Software),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED AS IS, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

#ifndef __ls10_dev_multicasttstate_ip_h__
#define __ls10_dev_multicasttstate_ip_h__
/* This file is autogenerated.  Do not edit */
#define NV_MULTICASTTSTATE          0x000027ff:0x00002000 /* RW--D */
#define NV_MULTICASTTSTATE_ERR_STATUS_0                    0x00002400      /* RW-4R */
#define NV_MULTICASTTSTATE_ERR_STATUS_0_TAGPOOL_ECC_LIMIT_ERR 2:2          /* RWDVF */
#define NV_MULTICASTTSTATE_ERR_STATUS_0_TAGPOOL_ECC_LIMIT_ERR_NONE 0x00000000 /* RWD-V */
#define NV_MULTICASTTSTATE_ERR_STATUS_0_TAGPOOL_ECC_LIMIT_ERR_CLEAR 0x00000001 /* RW--V */
#define NV_MULTICASTTSTATE_ERR_STATUS_0_TAGPOOL_ECC_DBE_ERR 3:3            /* RWDVF */
#define NV_MULTICASTTSTATE_ERR_STATUS_0_TAGPOOL_ECC_DBE_ERR_NONE 0x00000000 /* RWD-V */
#define NV_MULTICASTTSTATE_ERR_STATUS_0_TAGPOOL_ECC_DBE_ERR_CLEAR 0x00000001 /* RW--V */
#define NV_MULTICASTTSTATE_ERR_STATUS_0_CRUMBSTORE_BUF_OVERWRITE_ERR 16:16 /* RWDVF */
#define NV_MULTICASTTSTATE_ERR_STATUS_0_CRUMBSTORE_BUF_OVERWRITE_ERR_NONE 0x00000000 /* RWD-V */
#define NV_MULTICASTTSTATE_ERR_STATUS_0_CRUMBSTORE_BUF_OVERWRITE_ERR_CLEAR 0x00000001 /* RW--V */
#define NV_MULTICASTTSTATE_ERR_STATUS_0_CRUMBSTORE_ECC_LIMIT_ERR 18:18     /* RWDVF */
#define NV_MULTICASTTSTATE_ERR_STATUS_0_CRUMBSTORE_ECC_LIMIT_ERR_NONE 0x00000000 /* RWD-V */
#define NV_MULTICASTTSTATE_ERR_STATUS_0_CRUMBSTORE_ECC_LIMIT_ERR_CLEAR 0x00000001 /* RW--V */
#define NV_MULTICASTTSTATE_ERR_STATUS_0_CRUMBSTORE_ECC_DBE_ERR 19:19       /* RWDVF */
#define NV_MULTICASTTSTATE_ERR_STATUS_0_CRUMBSTORE_ECC_DBE_ERR_NONE 0x00000000 /* RWD-V */
#define NV_MULTICASTTSTATE_ERR_STATUS_0_CRUMBSTORE_ECC_DBE_ERR_CLEAR 0x00000001 /* RW--V */
#define NV_MULTICASTTSTATE_ERR_STATUS_0_CRUMBSTORE_MCTO_ERR 20:20          /* RWDVF */
#define NV_MULTICASTTSTATE_ERR_STATUS_0_CRUMBSTORE_MCTO_ERR_NONE 0x00000000 /* RWD-V */
#define NV_MULTICASTTSTATE_ERR_STATUS_0_CRUMBSTORE_MCTO_ERR_CLEAR 0x00000001 /* RW--V */
#define NV_MULTICASTTSTATE_ERR_LOG_EN_0                    0x00002404      /* RW-4R */
#define NV_MULTICASTTSTATE_ERR_LOG_EN_0_TAGPOOL_ECC_LIMIT_ERR 2:2          /* RWEVF */
#define NV_MULTICASTTSTATE_ERR_LOG_EN_0_TAGPOOL_ECC_LIMIT_ERR__PROD 0x00000001 /* RW--V */
#define NV_MULTICASTTSTATE_ERR_LOG_EN_0_TAGPOOL_ECC_LIMIT_ERR_DISABLE 0x00000000 /* RWE-V */
#define NV_MULTICASTTSTATE_ERR_LOG_EN_0_TAGPOOL_ECC_LIMIT_ERR_ENABLE 0x00000001 /* RW--V */
#define NV_MULTICASTTSTATE_ERR_LOG_EN_0_TAGPOOL_ECC_DBE_ERR 3:3            /* RWEVF */
#define NV_MULTICASTTSTATE_ERR_LOG_EN_0_TAGPOOL_ECC_DBE_ERR__PROD 0x00000001 /* RW--V */
#define NV_MULTICASTTSTATE_ERR_LOG_EN_0_TAGPOOL_ECC_DBE_ERR_DISABLE 0x00000000 /* RWE-V */
#define NV_MULTICASTTSTATE_ERR_LOG_EN_0_TAGPOOL_ECC_DBE_ERR_ENABLE 0x00000001 /* RW--V */
#define NV_MULTICASTTSTATE_ERR_LOG_EN_0_CRUMBSTORE_BUF_OVERWRITE_ERR 16:16 /* RWEVF */
#define NV_MULTICASTTSTATE_ERR_LOG_EN_0_CRUMBSTORE_BUF_OVERWRITE_ERR__PROD 0x00000001 /* RW--V */
#define NV_MULTICASTTSTATE_ERR_LOG_EN_0_CRUMBSTORE_BUF_OVERWRITE_ERR_DISABLE 0x00000000 /* RWE-V */
#define NV_MULTICASTTSTATE_ERR_LOG_EN_0_CRUMBSTORE_BUF_OVERWRITE_ERR_ENABLE 0x00000001 /* RW--V */
#define NV_MULTICASTTSTATE_ERR_LOG_EN_0_CRUMBSTORE_ECC_LIMIT_ERR 18:18     /* RWEVF */
#define NV_MULTICASTTSTATE_ERR_LOG_EN_0_CRUMBSTORE_ECC_LIMIT_ERR__PROD 0x00000001 /* RW--V */
#define NV_MULTICASTTSTATE_ERR_LOG_EN_0_CRUMBSTORE_ECC_LIMIT_ERR_DISABLE 0x00000000 /* RWE-V */
#define NV_MULTICASTTSTATE_ERR_LOG_EN_0_CRUMBSTORE_ECC_LIMIT_ERR_ENABLE 0x00000001 /* RW--V */
#define NV_MULTICASTTSTATE_ERR_LOG_EN_0_CRUMBSTORE_ECC_DBE_ERR 19:19       /* RWEVF */
#define NV_MULTICASTTSTATE_ERR_LOG_EN_0_CRUMBSTORE_ECC_DBE_ERR__PROD 0x00000001 /* RW--V */
#define NV_MULTICASTTSTATE_ERR_LOG_EN_0_CRUMBSTORE_ECC_DBE_ERR_DISABLE 0x00000000 /* RWE-V */
#define NV_MULTICASTTSTATE_ERR_LOG_EN_0_CRUMBSTORE_ECC_DBE_ERR_ENABLE 0x00000001 /* RW--V */
#define NV_MULTICASTTSTATE_ERR_LOG_EN_0_CRUMBSTORE_MCTO_ERR 20:20          /* RWEVF */
#define NV_MULTICASTTSTATE_ERR_LOG_EN_0_CRUMBSTORE_MCTO_ERR__PROD 0x00000001 /* RW--V */
#define NV_MULTICASTTSTATE_ERR_LOG_EN_0_CRUMBSTORE_MCTO_ERR_DISABLE 0x00000000 /* RWE-V */
#define NV_MULTICASTTSTATE_ERR_LOG_EN_0_CRUMBSTORE_MCTO_ERR_ENABLE 0x00000001 /* RW--V */
#define NV_MULTICASTTSTATE_ERR_FATAL_REPORT_EN_0           0x00002408      /* RW-4R */
#define NV_MULTICASTTSTATE_ERR_FATAL_REPORT_EN_0_TAGPOOL_ECC_LIMIT_ERR 2:2 /* RWEVF */
#define NV_MULTICASTTSTATE_ERR_FATAL_REPORT_EN_0_TAGPOOL_ECC_LIMIT_ERR_DISABLE 0x00000000 /* RWE-V */
#define NV_MULTICASTTSTATE_ERR_FATAL_REPORT_EN_0_TAGPOOL_ECC_LIMIT_ERR_ENABLE 0x00000001 /* RW--V */
#define NV_MULTICASTTSTATE_ERR_FATAL_REPORT_EN_0_TAGPOOL_ECC_DBE_ERR 3:3   /* RWEVF */
#define NV_MULTICASTTSTATE_ERR_FATAL_REPORT_EN_0_TAGPOOL_ECC_DBE_ERR__PROD 0x00000001 /* RW--V */
#define NV_MULTICASTTSTATE_ERR_FATAL_REPORT_EN_0_TAGPOOL_ECC_DBE_ERR_DISABLE 0x00000000 /* RWE-V */
#define NV_MULTICASTTSTATE_ERR_FATAL_REPORT_EN_0_TAGPOOL_ECC_DBE_ERR_ENABLE 0x00000001 /* RW--V */
#define NV_MULTICASTTSTATE_ERR_FATAL_REPORT_EN_0_CRUMBSTORE_BUF_OVERWRITE_ERR 16:16 /* RWEVF */
#define NV_MULTICASTTSTATE_ERR_FATAL_REPORT_EN_0_CRUMBSTORE_BUF_OVERWRITE_ERR__PROD 0x00000001 /* RW--V */
#define NV_MULTICASTTSTATE_ERR_FATAL_REPORT_EN_0_CRUMBSTORE_BUF_OVERWRITE_ERR_DISABLE 0x00000000 /* RWE-V */
#define NV_MULTICASTTSTATE_ERR_FATAL_REPORT_EN_0_CRUMBSTORE_BUF_OVERWRITE_ERR_ENABLE 0x00000001 /* RW--V */
#define NV_MULTICASTTSTATE_ERR_FATAL_REPORT_EN_0_CRUMBSTORE_ECC_LIMIT_ERR 18:18 /* RWEVF */
#define NV_MULTICASTTSTATE_ERR_FATAL_REPORT_EN_0_CRUMBSTORE_ECC_LIMIT_ERR_DISABLE 0x00000000 /* RWE-V */
#define NV_MULTICASTTSTATE_ERR_FATAL_REPORT_EN_0_CRUMBSTORE_ECC_LIMIT_ERR_ENABLE 0x00000001 /* RW--V */
#define NV_MULTICASTTSTATE_ERR_FATAL_REPORT_EN_0_CRUMBSTORE_ECC_DBE_ERR 19:19 /* RWEVF */
#define NV_MULTICASTTSTATE_ERR_FATAL_REPORT_EN_0_CRUMBSTORE_ECC_DBE_ERR__PROD 0x00000001 /* RW--V */
#define NV_MULTICASTTSTATE_ERR_FATAL_REPORT_EN_0_CRUMBSTORE_ECC_DBE_ERR_DISABLE 0x00000000 /* RWE-V */
#define NV_MULTICASTTSTATE_ERR_FATAL_REPORT_EN_0_CRUMBSTORE_ECC_DBE_ERR_ENABLE 0x00000001 /* RW--V */
#define NV_MULTICASTTSTATE_ERR_FATAL_REPORT_EN_0_CRUMBSTORE_MCTO_ERR 20:20 /* RWEVF */
#define NV_MULTICASTTSTATE_ERR_FATAL_REPORT_EN_0_CRUMBSTORE_MCTO_ERR_DISABLE 0x00000000 /* RWE-V */
#define NV_MULTICASTTSTATE_ERR_FATAL_REPORT_EN_0_CRUMBSTORE_MCTO_ERR_ENABLE 0x00000001 /* RW--V */
#define NV_MULTICASTTSTATE_ERR_NON_FATAL_REPORT_EN_0       0x0000240c      /* RW-4R */
#define NV_MULTICASTTSTATE_ERR_NON_FATAL_REPORT_EN_0_TAGPOOL_ECC_LIMIT_ERR 2:2 /* RWEVF */
#define NV_MULTICASTTSTATE_ERR_NON_FATAL_REPORT_EN_0_TAGPOOL_ECC_LIMIT_ERR__PROD 0x00000001 /* RW--V */
#define NV_MULTICASTTSTATE_ERR_NON_FATAL_REPORT_EN_0_TAGPOOL_ECC_LIMIT_ERR_DISABLE 0x00000000 /* RWE-V */
#define NV_MULTICASTTSTATE_ERR_NON_FATAL_REPORT_EN_0_TAGPOOL_ECC_LIMIT_ERR_ENABLE 0x00000001 /* RW--V */
#define NV_MULTICASTTSTATE_ERR_NON_FATAL_REPORT_EN_0_TAGPOOL_ECC_DBE_ERR 3:3 /* RWEVF */
#define NV_MULTICASTTSTATE_ERR_NON_FATAL_REPORT_EN_0_TAGPOOL_ECC_DBE_ERR_DISABLE 0x00000000 /* RWE-V */
#define NV_MULTICASTTSTATE_ERR_NON_FATAL_REPORT_EN_0_TAGPOOL_ECC_DBE_ERR_ENABLE 0x00000001 /* RW--V */
#define NV_MULTICASTTSTATE_ERR_NON_FATAL_REPORT_EN_0_CRUMBSTORE_BUF_OVERWRITE_ERR 16:16 /* RWEVF */
#define NV_MULTICASTTSTATE_ERR_NON_FATAL_REPORT_EN_0_CRUMBSTORE_BUF_OVERWRITE_ERR_DISABLE 0x00000000 /* RWE-V */
#define NV_MULTICASTTSTATE_ERR_NON_FATAL_REPORT_EN_0_CRUMBSTORE_BUF_OVERWRITE_ERR_ENABLE 0x00000001 /* RW--V */
#define NV_MULTICASTTSTATE_ERR_NON_FATAL_REPORT_EN_0_CRUMBSTORE_ECC_LIMIT_ERR 18:18 /* RWEVF */
#define NV_MULTICASTTSTATE_ERR_NON_FATAL_REPORT_EN_0_CRUMBSTORE_ECC_LIMIT_ERR__PROD 0x00000001 /* RW--V */
#define NV_MULTICASTTSTATE_ERR_NON_FATAL_REPORT_EN_0_CRUMBSTORE_ECC_LIMIT_ERR_DISABLE 0x00000000 /* RWE-V */
#define NV_MULTICASTTSTATE_ERR_NON_FATAL_REPORT_EN_0_CRUMBSTORE_ECC_LIMIT_ERR_ENABLE 0x00000001 /* RW--V */
#define NV_MULTICASTTSTATE_ERR_NON_FATAL_REPORT_EN_0_CRUMBSTORE_ECC_DBE_ERR 19:19 /* RWEVF */
#define NV_MULTICASTTSTATE_ERR_NON_FATAL_REPORT_EN_0_CRUMBSTORE_ECC_DBE_ERR_DISABLE 0x00000000 /* RWE-V */
#define NV_MULTICASTTSTATE_ERR_NON_FATAL_REPORT_EN_0_CRUMBSTORE_ECC_DBE_ERR_ENABLE 0x00000001 /* RW--V */
#define NV_MULTICASTTSTATE_ERR_NON_FATAL_REPORT_EN_0_CRUMBSTORE_MCTO_ERR 20:20 /* RWEVF */
#define NV_MULTICASTTSTATE_ERR_NON_FATAL_REPORT_EN_0_CRUMBSTORE_MCTO_ERR__PROD 0x00000001 /* RW--V */
#define NV_MULTICASTTSTATE_ERR_NON_FATAL_REPORT_EN_0_CRUMBSTORE_MCTO_ERR_DISABLE 0x00000000 /* RWE-V */
#define NV_MULTICASTTSTATE_ERR_NON_FATAL_REPORT_EN_0_CRUMBSTORE_MCTO_ERR_ENABLE 0x00000001 /* RW--V */
#define NV_MULTICASTTSTATE_ERR_CORRECTABLE_REPORT_EN_0     0x00002410      /* RW-4R */
#define NV_MULTICASTTSTATE_ERR_CONTAIN_EN_0                0x00002414      /* RW-4R */
#define NV_MULTICASTTSTATE_ERR_CONTAIN_EN_0_TAGPOOL_ECC_LIMIT_ERR 2:2      /* RWEVF */
#define NV_MULTICASTTSTATE_ERR_CONTAIN_EN_0_TAGPOOL_ECC_LIMIT_ERR_DISABLE 0x00000000 /* RWE-V */
#define NV_MULTICASTTSTATE_ERR_CONTAIN_EN_0_TAGPOOL_ECC_LIMIT_ERR_ENABLE 0x00000001 /* RW--V */
#define NV_MULTICASTTSTATE_ERR_CONTAIN_EN_0_TAGPOOL_ECC_DBE_ERR 3:3        /* RWEVF */
#define NV_MULTICASTTSTATE_ERR_CONTAIN_EN_0_TAGPOOL_ECC_DBE_ERR__PROD 0x00000001 /* RW--V */
#define NV_MULTICASTTSTATE_ERR_CONTAIN_EN_0_TAGPOOL_ECC_DBE_ERR_DISABLE 0x00000000 /* RWE-V */
#define NV_MULTICASTTSTATE_ERR_CONTAIN_EN_0_TAGPOOL_ECC_DBE_ERR_ENABLE 0x00000001 /* RW--V */
#define NV_MULTICASTTSTATE_ERR_CONTAIN_EN_0_CRUMBSTORE_BUF_OVERWRITE_ERR 16:16 /* RWEVF */
#define NV_MULTICASTTSTATE_ERR_CONTAIN_EN_0_CRUMBSTORE_BUF_OVERWRITE_ERR__PROD 0x00000001 /* RW--V */
#define NV_MULTICASTTSTATE_ERR_CONTAIN_EN_0_CRUMBSTORE_BUF_OVERWRITE_ERR_DISABLE 0x00000000 /* RWE-V */
#define NV_MULTICASTTSTATE_ERR_CONTAIN_EN_0_CRUMBSTORE_BUF_OVERWRITE_ERR_ENABLE 0x00000001 /* RW--V */
#define NV_MULTICASTTSTATE_ERR_CONTAIN_EN_0_CRUMBSTORE_ECC_LIMIT_ERR 18:18 /* RWEVF */
#define NV_MULTICASTTSTATE_ERR_CONTAIN_EN_0_CRUMBSTORE_ECC_LIMIT_ERR_DISABLE 0x00000000 /* RWE-V */
#define NV_MULTICASTTSTATE_ERR_CONTAIN_EN_0_CRUMBSTORE_ECC_LIMIT_ERR_ENABLE 0x00000001 /* RW--V */
#define NV_MULTICASTTSTATE_ERR_CONTAIN_EN_0_CRUMBSTORE_ECC_DBE_ERR 19:19   /* RWEVF */
#define NV_MULTICASTTSTATE_ERR_CONTAIN_EN_0_CRUMBSTORE_ECC_DBE_ERR__PROD 0x00000001 /* RW--V */
#define NV_MULTICASTTSTATE_ERR_CONTAIN_EN_0_CRUMBSTORE_ECC_DBE_ERR_DISABLE 0x00000000 /* RWE-V */
#define NV_MULTICASTTSTATE_ERR_CONTAIN_EN_0_CRUMBSTORE_ECC_DBE_ERR_ENABLE 0x00000001 /* RW--V */
#define NV_MULTICASTTSTATE_ERR_CONTAIN_EN_0_CRUMBSTORE_MCTO_ERR 20:20      /* RWEVF */
#define NV_MULTICASTTSTATE_ERR_CONTAIN_EN_0_CRUMBSTORE_MCTO_ERR_DISABLE 0x00000000 /* RWE-V */
#define NV_MULTICASTTSTATE_ERR_CONTAIN_EN_0_CRUMBSTORE_MCTO_ERR_ENABLE 0x00000001 /* RW--V */
#define NV_MULTICASTTSTATE_ERR_FIRST_0                     0x0000241c      /* RW-4R */
#define NV_MULTICASTTSTATE_ERR_FIRST_0_TAGPOOL_ECC_LIMIT_ERR 2:2           /* RWDVF */
#define NV_MULTICASTTSTATE_ERR_FIRST_0_TAGPOOL_ECC_LIMIT_ERR_NONE 0x00000000 /* RWD-V */
#define NV_MULTICASTTSTATE_ERR_FIRST_0_TAGPOOL_ECC_LIMIT_ERR_CLEAR 0x00000001 /* RW--V */
#define NV_MULTICASTTSTATE_ERR_FIRST_0_TAGPOOL_ECC_DBE_ERR 3:3             /* RWDVF */
#define NV_MULTICASTTSTATE_ERR_FIRST_0_TAGPOOL_ECC_DBE_ERR_NONE 0x00000000 /* RWD-V */
#define NV_MULTICASTTSTATE_ERR_FIRST_0_TAGPOOL_ECC_DBE_ERR_CLEAR 0x00000001 /* RW--V */
#define NV_MULTICASTTSTATE_ERR_FIRST_0_CRUMBSTORE_BUF_OVERWRITE_ERR 16:16  /* RWDVF */
#define NV_MULTICASTTSTATE_ERR_FIRST_0_CRUMBSTORE_BUF_OVERWRITE_ERR_NONE 0x00000000 /* RWD-V */
#define NV_MULTICASTTSTATE_ERR_FIRST_0_CRUMBSTORE_BUF_OVERWRITE_ERR_CLEAR 0x00000001 /* RW--V */
#define NV_MULTICASTTSTATE_ERR_FIRST_0_CRUMBSTORE_ECC_LIMIT_ERR 18:18      /* RWDVF */
#define NV_MULTICASTTSTATE_ERR_FIRST_0_CRUMBSTORE_ECC_LIMIT_ERR_NONE 0x00000000 /* RWD-V */
#define NV_MULTICASTTSTATE_ERR_FIRST_0_CRUMBSTORE_ECC_LIMIT_ERR_CLEAR 0x00000001 /* RW--V */
#define NV_MULTICASTTSTATE_ERR_FIRST_0_CRUMBSTORE_ECC_DBE_ERR 19:19        /* RWDVF */
#define NV_MULTICASTTSTATE_ERR_FIRST_0_CRUMBSTORE_ECC_DBE_ERR_NONE 0x00000000 /* RWD-V */
#define NV_MULTICASTTSTATE_ERR_FIRST_0_CRUMBSTORE_ECC_DBE_ERR_CLEAR 0x00000001 /* RW--V */
#define NV_MULTICASTTSTATE_ERR_FIRST_0_CRUMBSTORE_MCTO_ERR 20:20           /* RWDVF */
#define NV_MULTICASTTSTATE_ERR_FIRST_0_CRUMBSTORE_MCTO_ERR_NONE 0x00000000 /* RWD-V */
#define NV_MULTICASTTSTATE_ERR_FIRST_0_CRUMBSTORE_MCTO_ERR_CLEAR 0x00000001 /* RW--V */
#define NV_MULTICASTTSTATE_ERR_TIMESTAMP_LOG               0x00002450      /* R--4R */
#define NV_MULTICASTTSTATE_ERR_TIMESTAMP_LOG_TIMESTAMP     23:0            /* R-DVF */
#define NV_MULTICASTTSTATE_ERR_TIMESTAMP_LOG_TIMESTAMP_INIT 0x00000000     /* R-D-V */
#define NV_MULTICASTTSTATE_ERR_ECC_CTRL                    0x00002500      /* RW-4R */
#define NV_MULTICASTTSTATE_ERR_ECC_CTRL_TAGPOOL_ECC_ENABLE 0:0             /* RWEVF */
#define NV_MULTICASTTSTATE_ERR_ECC_CTRL_TAGPOOL_ECC_ENABLE_ENABLE 0x00000001 /* RW--V */
#define NV_MULTICASTTSTATE_ERR_ECC_CTRL_TAGPOOL_ECC_ENABLE_DISABLE 0x00000000 /* RWE-V */
#define NV_MULTICASTTSTATE_ERR_ECC_CTRL_TAGPOOL_ECC_ENABLE__PROD 0x00000001 /* RW--V */
#define NV_MULTICASTTSTATE_ERR_ECC_CTRL_CRUMBSTORE_ECC_ENABLE 1:1          /* RWEVF */
#define NV_MULTICASTTSTATE_ERR_ECC_CTRL_CRUMBSTORE_ECC_ENABLE_ENABLE 0x00000001 /* RW--V */
#define NV_MULTICASTTSTATE_ERR_ECC_CTRL_CRUMBSTORE_ECC_ENABLE_DISABLE 0x00000000 /* RWE-V */
#define NV_MULTICASTTSTATE_ERR_ECC_CTRL_CRUMBSTORE_ECC_ENABLE__PROD 0x00000001 /* RW--V */
#define NV_MULTICASTTSTATE_ERR_TAGPOOL_ECC_ERROR_COUNTER   0x00002520      /* RW-4R */
#define NV_MULTICASTTSTATE_ERR_TAGPOOL_ECC_ERROR_COUNTER_ERROR_COUNT 23:0  /* RWDVF */
#define NV_MULTICASTTSTATE_ERR_TAGPOOL_ECC_ERROR_COUNTER_ERROR_COUNT_INIT 0x00000000 /* RWD-V */
#define NV_MULTICASTTSTATE_ERR_TAGPOOL_ECC_ERROR_COUNTER_LIMIT 0x00002540  /* RW-4R */
#define NV_MULTICASTTSTATE_ERR_TAGPOOL_ECC_ERROR_COUNTER_LIMIT_ERROR_LIMIT 23:0 /* RWDVF */
#define NV_MULTICASTTSTATE_ERR_TAGPOOL_ECC_ERROR_COUNTER_LIMIT_ERROR_LIMIT_INIT 0x00ffffff /* RWD-V */
#define NV_MULTICASTTSTATE_ERR_TAGPOOL_ECC_ERROR_ADDRESS   0x00002560      /* R--4R */
#define NV_MULTICASTTSTATE_ERR_TAGPOOL_ECC_ERROR_ADDRESS_ERROR_ADDRESS 7:0 /* R-DVF */
#define NV_MULTICASTTSTATE_ERR_TAGPOOL_ECC_ERROR_ADDRESS_ERROR_ADDRESS_INIT 0x00000000 /* R-D-V */
#define NV_MULTICASTTSTATE_ERR_TAGPOOL_ECC_ERROR_ADDRESS_VALID 0x00002580  /* R--4R */
#define NV_MULTICASTTSTATE_ERR_TAGPOOL_ECC_ERROR_ADDRESS_VALID_VALID 0:0   /* R-DVF */
#define NV_MULTICASTTSTATE_ERR_TAGPOOL_ECC_ERROR_ADDRESS_VALID_VALID_INVALID 0x00000000 /* R-D-V */
#define NV_MULTICASTTSTATE_ERR_TAGPOOL_ECC_ERROR_ADDRESS_VALID_VALID_VALID 0x00000001 /* R---V */
#define NV_MULTICASTTSTATE_ERR_CRUMBSTORE_ECC_ERROR_COUNTER 0x00002600     /* RW-4R */
#define NV_MULTICASTTSTATE_ERR_CRUMBSTORE_ECC_ERROR_COUNTER_ERROR_COUNT 23:0 /* RWDVF */
#define NV_MULTICASTTSTATE_ERR_CRUMBSTORE_ECC_ERROR_COUNTER_ERROR_COUNT_INIT 0x00000000 /* RWD-V */
#define NV_MULTICASTTSTATE_ERR_CRUMBSTORE_ECC_ERROR_COUNTER_LIMIT 0x00002620 /* RW-4R */
#define NV_MULTICASTTSTATE_ERR_CRUMBSTORE_ECC_ERROR_COUNTER_LIMIT_ERROR_LIMIT 23:0 /* RWDVF */
#define NV_MULTICASTTSTATE_ERR_CRUMBSTORE_ECC_ERROR_COUNTER_LIMIT_ERROR_LIMIT_INIT 0x00ffffff /* RWD-V */
#define NV_MULTICASTTSTATE_ERR_CRUMBSTORE_ECC_ERROR_ADDRESS 0x00002640     /* R--4R */
#define NV_MULTICASTTSTATE_ERR_CRUMBSTORE_ECC_ERROR_ADDRESS_ERROR_ADDRESS 7:0 /* R-DVF */
#define NV_MULTICASTTSTATE_ERR_CRUMBSTORE_ECC_ERROR_ADDRESS_ERROR_ADDRESS_INIT 0x00000000 /* R-D-V */
#define NV_MULTICASTTSTATE_ERR_CRUMBSTORE_ECC_ERROR_ADDRESS_VALID 0x00002660 /* R--4R */
#define NV_MULTICASTTSTATE_ERR_CRUMBSTORE_ECC_ERROR_ADDRESS_VALID_VALID 0:0 /* R-DVF */
#define NV_MULTICASTTSTATE_ERR_CRUMBSTORE_ECC_ERROR_ADDRESS_VALID_VALID_INVALID 0x00000000 /* R-D-V */
#define NV_MULTICASTTSTATE_ERR_CRUMBSTORE_ECC_ERROR_ADDRESS_VALID_VALID_VALID 0x00000001 /* R---V */
#define NV_MULTICASTTSTATE_STAT_STALL_BUSY_CONTROL         0x00002700      /* RW-4R */
#define NV_MULTICASTTSTATE_STAT_STALL_BUSY_CONTROL_ENABLE_TIMER 0:0        /* RWEVF */
#define NV_MULTICASTTSTATE_STAT_STALL_BUSY_CONTROL_ENABLE_TIMER_DISABLE 0x00000000 /* RWE-V */
#define NV_MULTICASTTSTATE_STAT_STALL_BUSY_CONTROL_ENABLE_TIMER_ENABLE 0x00000001 /* RW--V */
#define NV_MULTICASTTSTATE_STAT_STALL_BUSY_CONTROL_SNAP_ON_DEMAND 1:1      /* RWEVF */
#define NV_MULTICASTTSTATE_STAT_STALL_BUSY_CONTROL_SNAP_ON_DEMAND_DISABLE 0x00000000 /* RWE-V */
#define NV_MULTICASTTSTATE_STAT_STALL_BUSY_CONTROL_SNAP_ON_DEMAND_ENABLE 0x00000001 /* RW--V */
#define NV_MULTICASTTSTATE_STAT_WINDOW_0_HIGH              0x00002704      /* RW-4R */
#define NV_MULTICASTTSTATE_STAT_WINDOW_0_HIGH_VALUE        15:0            /* RWEVF */
#define NV_MULTICASTTSTATE_STAT_WINDOW_0_HIGH_VALUE_INIT   0x00000000      /* RWE-V */
#define NV_MULTICASTTSTATE_STAT_WINDOW_0_LOW               0x00002708      /* RW-4R */
#define NV_MULTICASTTSTATE_STAT_WINDOW_0_LOW_VALUE         31:0            /* RWEVF */
#define NV_MULTICASTTSTATE_STAT_WINDOW_0_LOW_VALUE_INIT    0x00000000      /* RWE-V */
#define NV_MULTICASTTSTATE_STAT_BUSY_TIMER_0_HIGH          0x0000270c      /* RW-4R */
#define NV_MULTICASTTSTATE_STAT_BUSY_TIMER_0_HIGH_VALUE    15:0            /* RWEVF */
#define NV_MULTICASTTSTATE_STAT_BUSY_TIMER_0_HIGH_VALUE_INIT 0x00000000    /* RWE-V */
#define NV_MULTICASTTSTATE_STAT_BUSY_TIMER_0_LOW           0x00002710      /* RW-4R */
#define NV_MULTICASTTSTATE_STAT_BUSY_TIMER_0_LOW_VALUE     31:0            /* RWEVF */
#define NV_MULTICASTTSTATE_STAT_BUSY_TIMER_0_LOW_VALUE_INIT 0x00000000     /* RWE-V */
#define NV_MULTICASTTSTATE_STAT_STALL_TIMER_0_HIGH         0x00002714      /* RW-4R */
#define NV_MULTICASTTSTATE_STAT_STALL_TIMER_0_HIGH_VALUE   15:0            /* RWEVF */
#define NV_MULTICASTTSTATE_STAT_STALL_TIMER_0_HIGH_VALUE_INIT 0x00000000   /* RWE-V */
#define NV_MULTICASTTSTATE_STAT_STALL_TIMER_0_LOW          0x00002718      /* RW-4R */
#define NV_MULTICASTTSTATE_STAT_STALL_TIMER_0_LOW_VALUE    31:0            /* RWEVF */
#define NV_MULTICASTTSTATE_STAT_STALL_TIMER_0_LOW_VALUE_INIT 0x00000000    /* RWE-V */
#define NV_MULTICASTTSTATE_STAT_WINDOW_1_HIGH              0x0000271c      /* RW-4R */
#define NV_MULTICASTTSTATE_STAT_WINDOW_1_HIGH_VALUE        15:0            /* RWEVF */
#define NV_MULTICASTTSTATE_STAT_WINDOW_1_HIGH_VALUE_INIT   0x00000000      /* RWE-V */
#define NV_MULTICASTTSTATE_STAT_WINDOW_1_LOW               0x00002720      /* RW-4R */
#define NV_MULTICASTTSTATE_STAT_WINDOW_1_LOW_VALUE         31:0            /* RWEVF */
#define NV_MULTICASTTSTATE_STAT_WINDOW_1_LOW_VALUE_INIT    0x00000000      /* RWE-V */
#define NV_MULTICASTTSTATE_STAT_BUSY_TIMER_1_HIGH          0x00002724      /* RW-4R */
#define NV_MULTICASTTSTATE_STAT_BUSY_TIMER_1_HIGH_VALUE    15:0            /* RWEVF */
#define NV_MULTICASTTSTATE_STAT_BUSY_TIMER_1_HIGH_VALUE_INIT 0x00000000    /* RWE-V */
#define NV_MULTICASTTSTATE_STAT_BUSY_TIMER_1_LOW           0x00002728      /* RW-4R */
#define NV_MULTICASTTSTATE_STAT_BUSY_TIMER_1_LOW_VALUE     31:0            /* RWEVF */
#define NV_MULTICASTTSTATE_STAT_BUSY_TIMER_1_LOW_VALUE_INIT 0x00000000     /* RWE-V */
#define NV_MULTICASTTSTATE_STAT_STALL_TIMER_1_HIGH         0x0000272c      /* RW-4R */
#define NV_MULTICASTTSTATE_STAT_STALL_TIMER_1_HIGH_VALUE   15:0            /* RWEVF */
#define NV_MULTICASTTSTATE_STAT_STALL_TIMER_1_HIGH_VALUE_INIT 0x00000000   /* RWE-V */
#define NV_MULTICASTTSTATE_STAT_STALL_TIMER_1_LOW          0x00002730      /* RW-4R */
#define NV_MULTICASTTSTATE_STAT_STALL_TIMER_1_LOW_VALUE    31:0            /* RWEVF */
#define NV_MULTICASTTSTATE_STAT_STALL_TIMER_1_LOW_VALUE_INIT 0x00000000    /* RWE-V */
#define NV_MULTICASTTSTATE_STAT_RESIDENCY_CONTROL          0x00002734      /* RW-4R */
#define NV_MULTICASTTSTATE_STAT_RESIDENCY_CONTROL_ENABLE_TIMER 0:0         /* RWEVF */
#define NV_MULTICASTTSTATE_STAT_RESIDENCY_CONTROL_ENABLE_TIMER_DISABLE 0x00000000 /* RWE-V */
#define NV_MULTICASTTSTATE_STAT_RESIDENCY_CONTROL_ENABLE_TIMER_ENABLE 0x00000001 /* RW--V */
#define NV_MULTICASTTSTATE_STAT_RESIDENCY_CONTROL_SNAP_ON_DEMAND 1:1       /* RWEVF */
#define NV_MULTICASTTSTATE_STAT_RESIDENCY_CONTROL_SNAP_ON_DEMAND_DISABLE 0x00000000 /* RWE-V */
#define NV_MULTICASTTSTATE_STAT_RESIDENCY_CONTROL_SNAP_ON_DEMAND_ENABLE 0x00000001 /* RW--V */
#define NV_MULTICASTTSTATE_STAT_RESIDENCY_BIN_CTRL_LOW     0x00002738      /* RW-4R */
#define NV_MULTICASTTSTATE_STAT_RESIDENCY_BIN_CTRL_LOW_LIMIT 23:0          /* RWEVF */
#define NV_MULTICASTTSTATE_STAT_RESIDENCY_BIN_CTRL_LOW_LIMIT_INIT 0x0028b0ab /* RWE-V */
#define NV_MULTICASTTSTATE_STAT_RESIDENCY_BIN_CTRL_HIGH    0x0000273c      /* RW-4R */
#define NV_MULTICASTTSTATE_STAT_RESIDENCY_BIN_CTRL_HIGH_LIMIT 23:0         /* RWEVF */
#define NV_MULTICASTTSTATE_STAT_RESIDENCY_BIN_CTRL_HIGH_LIMIT_INIT 0x00cb7355 /* RWE-V */
#define NV_MULTICASTTSTATE_STAT_RESIDENCY_COUNT_CTRL       0x00002740      /* RW-4R */
#define NV_MULTICASTTSTATE_STAT_RESIDENCY_COUNT_CTRL_INDEX 9:0             /* RWEVF */
#define NV_MULTICASTTSTATE_STAT_RESIDENCY_COUNT_CTRL_INDEX_MIN 0x00000000  /* RWE-V */
#define NV_MULTICASTTSTATE_STAT_RESIDENCY_COUNT_CTRL_INDEX_MAX 0x000002ff  /* RW--V */
#define NV_MULTICASTTSTATE_STAT_RESIDENCY_COUNT_CTRL_INDEX_MCID_STRIDE 0x00000006 /*       */
#define NV_MULTICASTTSTATE_STAT_RESIDENCY_COUNT_CTRL_INDEX_BIN_LOW_31_0 0x00000000 /*       */
#define NV_MULTICASTTSTATE_STAT_RESIDENCY_COUNT_CTRL_INDEX_BIN_LOW_47_31 0x00000001 /*       */
#define NV_MULTICASTTSTATE_STAT_RESIDENCY_COUNT_CTRL_INDEX_BIN_MED_31_0 0x00000002 /*       */
#define NV_MULTICASTTSTATE_STAT_RESIDENCY_COUNT_CTRL_INDEX_BIN_MED_47_31 0x00000003 /*       */
#define NV_MULTICASTTSTATE_STAT_RESIDENCY_COUNT_CTRL_INDEX_BIN_HIGH_31_0 0x00000004 /*       */
#define NV_MULTICASTTSTATE_STAT_RESIDENCY_COUNT_CTRL_INDEX_BIN_HIGH_47_31 0x00000005 /*       */
#define NV_MULTICASTTSTATE_STAT_RESIDENCY_COUNT_CTRL_AUTOINCR 31:31        /* RWEVF */
#define NV_MULTICASTTSTATE_STAT_RESIDENCY_COUNT_CTRL_AUTOINCR_OFF 0x00000000 /* RW--V */
#define NV_MULTICASTTSTATE_STAT_RESIDENCY_COUNT_CTRL_AUTOINCR_ON 0x00000001 /* RWE-V */
#define NV_MULTICASTTSTATE_STAT_RESIDENCY_COUNT_DATA       0x00002744      /* R--4R */
#define NV_MULTICASTTSTATE_STAT_RESIDENCY_COUNT_DATA_COUNT 31:0            /* R-XVF */
#define NV_MULTICASTTSTATE_STAT_RESIDENCY_COUNT_DATA__APERTURE_INDEX_OFFSET -0x00000004 /*       */
#endif // __ls10_dev_multicasttstate_ip_h__
