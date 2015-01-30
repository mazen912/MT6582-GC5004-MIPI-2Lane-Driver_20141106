/********************************************************************************************
 *     LEGAL DISCLAIMER
 *
 *     (Header of MediaTek Software/Firmware Release or Documentation)
 *
 *     BY OPENING OR USING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
 *     THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE") RECEIVED
 *     FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON AN "AS-IS" BASIS
 *     ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES, EXPRESS OR IMPLIED,
 *     INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR
 *     A PARTICULAR PURPOSE OR NONINFRINGEMENT. NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY
 *     WHATSOEVER WITH RESPECT TO THE SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY,
 *     INCORPORATED IN, OR SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK
 *     ONLY TO SUCH THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
 *     NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S SPECIFICATION
 *     OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
 *
 *     BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE LIABILITY WITH
 *     RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE, AT MEDIATEK'S OPTION,
 *     TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE, OR REFUND ANY SOFTWARE LICENSE
 *     FEES OR SERVICE CHARGE PAID BY BUYER TO MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
 *
 *     THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE WITH THE LAWS
 *     OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF LAWS PRINCIPLES.
 ************************************************************************************************/

/*******************************************************************************
*   ISP_NVRAM_PCA_STRUCT
********************************************************************************/
Slider:{
    value:{// low middle high
        0, 0, -5
    }
},
Config:{
    set:{
        0, 0
    }
},
PCA_LUTS:{
    lut_lo:{ //low
        //y_gain sat_gain hue_shift reserved
        {0x0, 0x0, 0x0}, //0
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //10
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //20
        {0x0, 0xff, 0x0}, //
        {0x0, 0xfe, 0x0}, //
        {0x0, 0xfd, 0x0}, //
        {0x0, 0xfc, 0x0}, //
        {0x0, 0xfb, 0x0}, //
        {0x0, 0xfa, 0x0}, //
        {0x0, 0xf9, 0x0}, //
        {0x0, 0xf8, 0x0}, //
        {0x0, 0xf7, 0x0}, //
        {0x0, 0xf6, 0x0}, //30
        {0x0, 0xf5, 0x0}, //
        {0x0, 0xf4, 0x0}, //
        {0x0, 0xf3, 0x0}, //
        {0x0, 0xf2, 0x0}, //
        {0x0, 0xf1, 0x0}, //
        {0x0, 0xf0, 0x0}, //
        {0x0, 0xef, 0x1}, //
        {0x0, 0xee, 0x2}, //
        {0x0, 0xed, 0x3}, //
        {0x0, 0xec, 0x4}, //40
        {0x0, 0xeb, 0x5}, //
        {0x0, 0xea, 0x6}, //
        {0x0, 0xe9, 0x7}, //
        {0x0, 0xe8, 0x8}, //
        {0x0, 0xe7, 0x9}, //
        {0x0, 0xe6, 0xa}, //
        {0x0, 0xe5, 0xb}, //
        {0x0, 0xe4, 0xc}, //
        {0x0, 0xe3, 0xd}, //
        {0x0, 0xe2, 0xe}, //50
        {0x0, 0xe1, 0xf}, //
        {0x0, 0xe0, 0x10}, //
        {0x0, 0xdf, 0x11}, //
        {0x0, 0xde, 0x12}, //
        {0x0, 0xdd, 0x13}, //
        {0x0, 0xdc, 0x14}, //
        {0x0, 0xdd, 0x13}, //
        {0x0, 0xde, 0x12}, //
        {0x0, 0xdf, 0x11}, //
        {0x0, 0xe0, 0x10}, //60
        {0x0, 0xe1, 0xf}, //
        {0x0, 0xe2, 0xe}, //
        {0x0, 0xe3, 0xd}, //
        {0x0, 0xe4, 0xc}, //
        {0x0, 0xe5, 0xb}, //
        {0x0, 0xe6, 0xa}, //
        {0x0, 0xe7, 0x9}, //
        {0x0, 0xe8, 0x8}, //
        {0x0, 0xe9, 0x7}, //
        {0x0, 0xea, 0x6}, //70
        {0x0, 0xeb, 0x5}, //
        {0x0, 0xec, 0x4}, //
        {0x0, 0xed, 0x3}, //
        {0x0, 0xee, 0x2}, //
        {0x0, 0xef, 0x1}, //
        {0x0, 0xf0, 0x0}, //
        {0x0, 0xf1, 0x0}, //
        {0x0, 0xf2, 0x0}, //
        {0x0, 0xf3, 0x0}, //
        {0x0, 0xf4, 0x0}, //80
        {0x0, 0xf5, 0x0}, //
        {0x0, 0xf6, 0x0}, //
        {0x0, 0xf7, 0x0}, //
        {0x0, 0xf8, 0x0}, //
        {0x0, 0xf9, 0x0}, //
        {0x0, 0xfa, 0x0}, //
        {0x0, 0xfb, 0x0}, //
        {0x0, 0xfc, 0x0}, //
        {0x0, 0xfd, 0x0}, //
        {0x0, 0xfe, 0x0}, //90
        {0x0, 0xff, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //100
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //110
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //120
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //130
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //140
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //150
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //160
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //170
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0} //
    },
    lut_md:{ //middle
        //y_gain sat_gain hue_shift reserved
        {0x0, 0x0, 0x0}, //0
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //10
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //20
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //30
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0xff, 0x0}, //
        {0x0, 0xfe, 0x0}, //
        {0x0, 0xfd, 0x0}, //
        {0x0, 0xfc, 0x0}, //
        {0x0, 0xfb, 0x0}, //
        {0x0, 0xfa, 0x0}, //40
        {0x0, 0xf9, 0x0}, //
        {0x0, 0xf8, 0x0}, //
        {0x0, 0xf7, 0x0}, //
        {0x0, 0xf6, 0x0}, //
        {0x0, 0xf5, 0x0}, //
        {0x0, 0xf4, 0x0}, //
        {0x0, 0xf3, 0x0}, //
        {0x0, 0xf2, 0x0}, //
        {0x0, 0xf1, 0x0}, //
        {0x0, 0xf0, 0x0}, //50
        {0x0, 0xef, 0x0}, //
        {0x0, 0xee, 0x0}, //
        {0x0, 0xed, 0x0}, //
        {0x0, 0xec, 0x0}, //
        {0x0, 0xeb, 0x0}, //
        {0x0, 0xea, 0x0}, //
        {0x0, 0xe9, 0x0}, //
        {0x0, 0xe8, 0x0}, //
        {0x0, 0xe7, 0x0}, //
        {0x0, 0xe6, 0x0}, //60
        {0x0, 0xe7, 0x0}, //
        {0x0, 0xe8, 0x0}, //
        {0x0, 0xe9, 0x0}, //
        {0x0, 0xea, 0x0}, //
        {0x0, 0xeb, 0x0}, //
        {0x0, 0xec, 0x0}, //
        {0x0, 0xed, 0x0}, //
        {0x0, 0xee, 0x0}, //
        {0x0, 0xef, 0x0}, //
        {0x0, 0xf0, 0x0}, //70
        {0x0, 0xf1, 0x0}, //
        {0x0, 0xf2, 0x0}, //
        {0x0, 0xf3, 0x0}, //
        {0x0, 0xf4, 0x0}, //
        {0x0, 0xf5, 0x0}, //
        {0x0, 0xf6, 0x0}, //
        {0x0, 0xf7, 0x0}, //
        {0x0, 0xf8, 0x0}, //
        {0x0, 0xf9, 0x0}, //
        {0x0, 0xfa, 0x0}, //80
        {0x0, 0xfb, 0x0}, //
        {0x0, 0xfc, 0x0}, //
        {0x0, 0xfd, 0x0}, //
        {0x0, 0xfe, 0x0}, //
        {0x0, 0xff, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //90
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //100
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //110
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //120
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //130
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //140
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //150
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //160
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //170
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0} //
    },
    lut_hi:{ //high
        //y_gain sat_gain hue_shift reserved
                {0x0, 0x0, 0x0}, //0
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //10
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //20
        {0x0, 0xff, 0x0}, //
        {0x0, 0xfe, 0x0}, //
        {0x0, 0xfd, 0x0}, //
        {0x0, 0xfc, 0x0}, //
        {0x0, 0xfb, 0x0}, //
        {0x0, 0xfa, 0x0}, //
        {0x0, 0xf9, 0x0}, //
        {0x0, 0xf8, 0x0}, //
        {0x0, 0xf7, 0x0}, //
        {0x0, 0xf6, 0x0}, //30
        {0x0, 0xf5, 0x0}, //
        {0x0, 0xf4, 0x0}, //
        {0x0, 0xf3, 0x0}, //
        {0x0, 0xf2, 0x0}, //
        {0x0, 0xf1, 0x0}, //
        {0x0, 0xf0, 0x0}, //
        {0x0, 0xef, 0x0}, //
        {0x0, 0xee, 0x0}, //
        {0x0, 0xed, 0x0}, //
        {0x0, 0xec, 0x0}, //40
        {0x0, 0xeb, 0x0}, //
        {0x0, 0xea, 0x1}, //
        {0x0, 0xe9, 0x2}, //
        {0x0, 0xe8, 0x3}, //
        {0x0, 0xe7, 0x4}, //
        {0x0, 0xe6, 0x5}, //
        {0x0, 0xe5, 0x6}, //
        {0x0, 0xe4, 0x7}, //
        {0x0, 0xe3, 0x8}, //
        {0x0, 0xe2, 0x9}, //50
        {0x0, 0xe1, 0xa}, //
        {0x0, 0xe0, 0xb}, //
        {0x0, 0xdf, 0xc}, //
        {0x0, 0xde, 0xd}, //
        {0x0, 0xdd, 0xe}, //
        {0x0, 0xdc, 0xf}, //
        {0x0, 0xdb, 0x10}, //
        {0x0, 0xdc, 0xf}, //
        {0x0, 0xdd, 0xe}, //
        {0x0, 0xde, 0xd}, //60
        {0x0, 0xdf, 0xc}, //
        {0x0, 0xe0, 0xb}, //
        {0x0, 0xe1, 0xa}, //
        {0x0, 0xe2, 0x9}, //
        {0x0, 0xe3, 0x8}, //
        {0x0, 0xe4, 0x7}, //
        {0x0, 0xe5, 0x6}, //
        {0x0, 0xe6, 0x5}, //
        {0x0, 0xe7, 0x4}, //
        {0x0, 0xe8, 0x3}, //70
        {0x0, 0xe9, 0x2}, //
        {0x0, 0xea, 0x1}, //
        {0x0, 0xeb, 0x0}, //
        {0x0, 0xec, 0x0}, //
        {0x0, 0xed, 0x0}, //
        {0x0, 0xee, 0x0}, //
        {0x0, 0xef, 0x0}, //
        {0x0, 0xf0, 0x0}, //
        {0x0, 0xf1, 0x0}, //
        {0x0, 0xf2, 0x0}, //80
        {0x0, 0xf3, 0x0}, //
        {0x0, 0xf4, 0x0}, //
        {0x0, 0xf5, 0x0}, //
        {0x0, 0xf6, 0x0}, //
        {0x0, 0xf7, 0x0}, //
        {0x0, 0xf8, 0x0}, //
        {0x0, 0xf9, 0x0}, //
        {0x0, 0xfa, 0x0}, //
        {0x0, 0xfb, 0x0}, //
        {0x0, 0xfc, 0x0}, //90
        {0x0, 0xfd, 0x0}, //
        {0x0, 0xfe, 0x0}, //
        {0x0, 0xff, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //100
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //110
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //120
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //130
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //140
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //150
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //160
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //170
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0}, //
        {0x0, 0x0, 0x0} //
    }
}