/* Copyright (c) 2011-2013, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#include <linux/batterydata-lib.h>

static struct single_row_lut fcc_temp = {
	.x		= {-20,0,25,40,60},
	.y		= {2801,2800,2804,2800,2790},
	.cols	= 5
};

static struct single_row_lut fcc_sf = {
	.x		= {0},
	.y		= {100},
	.cols	= 1
};

static struct sf_lut rbatt_sf = {
	.rows		= 30,
	.cols		= 5,
	.row_entries		= {-20,0,25,40,60},
	.percent	= {100,95,90,85,80,75,70,65,60,55,50,45,40,35,30,25,20,16,13,11,10,9,8,7,6,5,4,3,2,1},
	.sf		= {
				{1532,315,100,78,70},
				{1532,315,100,78,70},
				{1419,325,103,79,71},
				{1378,326,105,82,72},
				{1225,364,108,83,74},
				{1212,329,112,86,75},
				{1190,299,116,90,78},
				{1204,303,126,94,81},
				{1243,292,129,101,85},
				{1285,285,104,90,79},
				{1332,282,99,79,71},
				{1396,286,99,79,72},
				{1446,303,100,82,74},
				{1510,330,101,83,78},
				{1571,367,104,83,77},
				{1722,406,108,81,72},
				{1983,449,108,81,72},
				{2276,483,107,81,72},
				{2580,522,106,81,71},
				{2735,547,108,81,73},
				{2617,538,108,82,74},
				{2804,554,109,84,76},
				{3106,581,113,87,77},
				{3461,614,118,88,78},
				{3921,651,123,90,79},
				{4535,690,124,89,76},
				{5385,729,122,87,75},
				{6759,792,129,90,78},
				{11100,886,143,98,85},
				{22200,1772,247,196,169}
	}
};

static struct pc_temp_ocv_lut pc_temp_ocv = {
	.rows		= 31,
	.cols		= 5,
	.temp		= {-20,0,25,40,60},
	.percent	= {100,95,90,85,80,75,70,65,60,55,50,45,40,35,30,25,20,16,13,11,10,9,8,7,6,5,4,3,2,1,0},
	.ocv		= {
				{4306,4305,4302,4298,4290},
				{4190,4225,4234,4232,4227},
				{4117,4170,4178,4176,4172},
				{4077,4117,4126,4124,4120},
				{3960,4080,4078,4073,4070},
				{3915,4004,4024,4024,4023},
				{3868,3940,3974,3983,3982},
				{3841,3910,3947,3947,3944},
				{3824,3874,3909,3912,3910},
				{3810,3842,3860,3866,3864},
				{3800,3816,3830,3830,3829},
				{3788,3798,3808,3809,3808},
				{3776,3788,3792,3792,3791},
				{3763,3780,3778,3778,3778},
				{3748,3771,3771,3766,3764},
				{3734,3760,3762,3754,3742},
				{3713,3738,3746,3736,3722},
				{3694,3715,3718,3710,3696},
				{3674,3701,3692,3685,3673},
				{3658,3695,3688,3681,3670},
				{3649,3692,3686,3680,3669},
				{3637,3688,3686,3679,3668},
				{3623,3685,3684,3678,3667},
				{3605,3680,3683,3677,3666},
				{3582,3672,3679,3673,3660},
				{3552,3656,3664,3656,3640},
				{3513,3624,3626,3615,3596},
				{3452,3570,3563,3552,3532},
				{3356,3490,3474,3462,3442},
				{3241,3349,3326,3316,3297},
				{3000,3000,3000,3000,3000}
	}
};

struct bms_battery_data samsung_2800mAH_vastalte_data = {
	.fcc				= 2800,
	.fcc_temp_lut			= &fcc_temp,
	.fcc_sf_lut				= &fcc_sf,
	.pc_temp_ocv_lut		= &pc_temp_ocv,
	.rbatt_sf_lut			= &rbatt_sf,
	.default_rbatt_mohm	= 156
};
