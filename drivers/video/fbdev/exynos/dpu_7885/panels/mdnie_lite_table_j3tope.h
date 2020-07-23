#ifndef __MDNIE_TABLE_H__
#define __MDNIE_TABLE_H__

/* 2017.05.17 */

static inline int get_hbm_index(int idx)
{
	int i = 0;
	int idx_list[] = {
		20000	/* idx < 20000: HBM_OFF */
				/* idx >= 20000: HBM_ON */
	};

	while (i < ARRAY_SIZE(idx_list)) {
		if (idx < idx_list[i])
			break;
		i++;
	}

	return i;
}

static unsigned char AUTO_UI_1[] = {
	0xCA,
	0x1D, 0xFC, 0xFC, 0xFC, 0xF3, 0x06, 0xFE, 0x00, 0x20, 0xCD,
	0x00, 0x0A, 0x00, 0xE5, 0x00, 0xEA, 0x45, 0x2B, 0x00, 0x00,
	0xEA, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00,
};

static unsigned char AUTO_UI_2[] = {
	0xC7,
	0x08, 0x25, 0x35, 0x48, 0x57, 0x62, 0x7A, 0x8A, 0x96, 0xA2,
	0x57, 0x65, 0x73, 0x7E, 0x86, 0x91, 0x9F, 0xAA, 0xBF, 0x08,
	0x25, 0x35, 0x48, 0x57, 0x62, 0x7A, 0x8A, 0x96, 0xA1, 0x4E,
	0x58, 0x63, 0x7E, 0x86, 0x91, 0x9F, 0xAA, 0xBF, 0x00, 0x97,
	0x00, 0x97, 0x00, 0x97, 0x00, 0x97,
};

static unsigned char AUTO_UI_3[] = {
	0xC8,
	0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00,
	0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC,
	0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00,
	0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xFC, 0x00,
};

static unsigned char AUTO_UI_4[] = {
	0xCE,
	0x7D, 0x40, 0x48, 0x56, 0x67, 0x78, 0x88, 0x98, 0xA7, 0xB5,
	0xC3, 0xD1, 0xDE, 0xE9, 0xF2, 0xFA, 0xFF, 0x3C, 0x00, 0x01,
	0x03, 0x45, 0x00, 0x00,
};

static unsigned char AUTO_UI_5[] = {
	0x55,
	0x00,
};

static unsigned char AUTO_VIDEO_1[] = {
	0xCA,
	0x1D, 0xFC, 0xFC, 0xFC, 0xF3, 0x06, 0xFE, 0x00, 0x20, 0xCD,
	0x00, 0x0A, 0x00, 0xE5, 0x00, 0xEA, 0x45, 0x2B, 0x00, 0x00,
	0xEA, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00,
};

static unsigned char AUTO_VIDEO_2[] = {
	0xC7,
	0x08, 0x13, 0x1E, 0x30, 0x42, 0x50, 0x6F, 0x81, 0x92, 0xA0,
	0x54, 0x61, 0x71, 0x83, 0x8D, 0x99, 0xA6, 0xB0, 0xBF, 0x08,
	0x13, 0x1E, 0x30, 0x42, 0x50, 0x6F, 0x81, 0x92, 0xA0, 0x54,
	0x61, 0x71, 0x83, 0x8D, 0x99, 0xA6, 0xB0, 0xBF, 0x00, 0x97,
	0x00, 0x97, 0x00, 0x97, 0x00, 0x97,
};

static unsigned char AUTO_VIDEO_3[] = {
	0xC8,
	0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00,
	0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC,
	0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00,
	0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xFC, 0x00,
};

static unsigned char AUTO_VIDEO_4[] = {
	0xCE,
	0x7D, 0x40, 0x48, 0x56, 0x67, 0x78, 0x88, 0x98, 0xA7, 0xB5,
	0xC3, 0xD1, 0xDE, 0xE9, 0xF2, 0xFA, 0xFF, 0x3C, 0x00, 0x04,
	0x04, 0x45, 0x00, 0x00,
};

static unsigned char AUTO_VIDEO_5[] = {
	0x55,
	0x03,
};

static unsigned char AUTO_CAMERA_1[] = {
	0xCA,
	0x1D, 0xFC, 0xFC, 0xFC, 0xF3, 0x06, 0xFE, 0x00, 0x20, 0xCD,
	0x00, 0x0A, 0x00, 0xE5, 0x00, 0xEA, 0x45, 0x2B, 0x00, 0x00,
	0xEA, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00,
};

static unsigned char AUTO_CAMERA_2[] = {
	0xC7,
	0x08, 0x25, 0x35, 0x48, 0x57, 0x62, 0x7A, 0x8A, 0x96, 0xA2,
	0x57, 0x65, 0x73, 0x7E, 0x86, 0x91, 0x9F, 0xAA, 0xBF, 0x08,
	0x25, 0x35, 0x48, 0x57, 0x62, 0x7A, 0x8A, 0x96, 0xA1, 0x4E,
	0x58, 0x63, 0x7E, 0x86, 0x91, 0x9F, 0xAA, 0xBF, 0x00, 0x97,
	0x00, 0x97, 0x00, 0x97, 0x00, 0x97,
};

static unsigned char AUTO_CAMERA_3[] = {
	0xC8,
	0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00,
	0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC,
	0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00,
	0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xFC, 0x00,
};

static unsigned char AUTO_CAMERA_4[] = {
	0xCE,
	0x7D, 0x40, 0x48, 0x56, 0x67, 0x78, 0x88, 0x98, 0xA7, 0xB5,
	0xC3, 0xD1, 0xDE, 0xE9, 0xF2, 0xFA, 0xFF, 0x3C, 0x00, 0x04,
	0x04, 0x45, 0x00, 0x00,
};

static unsigned char AUTO_CAMERA_5[] = {
	0x55,
	0x03,
};

static unsigned char AUTO_EBOOK_1[] = {
	0xCA,
	0x1D, 0xFC, 0xFC, 0xFC, 0xF3, 0x06, 0xFE, 0x00, 0x20, 0xCD,
	0x00, 0x0A, 0x00, 0xE5, 0x00, 0xEA, 0x45, 0x2B, 0x00, 0x00,
	0xEA, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00,
};

static unsigned char AUTO_EBOOK_2[] = {
	0xC7,
	0x08, 0x25, 0x35, 0x48, 0x57, 0x62, 0x7A, 0x8A, 0x96, 0xA2,
	0x57, 0x65, 0x73, 0x7E, 0x86, 0x91, 0x9F, 0xAA, 0xBF, 0x08,
	0x25, 0x35, 0x48, 0x57, 0x62, 0x7A, 0x8A, 0x96, 0xA1, 0x4E,
	0x58, 0x63, 0x7E, 0x86, 0x91, 0x9F, 0xAA, 0xBF, 0x00, 0x97,
	0x00, 0x97, 0x00, 0x97, 0x00, 0x97,
};

static unsigned char AUTO_EBOOK_3[] = {
	0xC8,
	0x01, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00,
	0x00, 0xE7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x48, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE7,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0x00,
	0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE7, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x48,
};

static unsigned char AUTO_EBOOK_4[] = {
	0xCE,
	0x7D, 0x40, 0x48, 0x56, 0x67, 0x78, 0x88, 0x98, 0xA7, 0xB5,
	0xC3, 0xD1, 0xDE, 0xE9, 0xF2, 0xFA, 0xFF, 0x3C, 0x00, 0x01,
	0x03, 0x45, 0x00, 0x00,
};

static unsigned char AUTO_EBOOK_5[] = {
	0x55,
	0x00,
};

static unsigned char LOCAL_CE_1[] = {
	0xCA,
	0x1D, 0xFC, 0xFC, 0xFC, 0xF3, 0x06, 0xFE, 0x00, 0x20, 0xCD,
	0x00, 0x0A, 0x00, 0xE5, 0x00, 0xEA, 0x45, 0x2B, 0x00, 0x00,
	0xEA, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00,
};

static unsigned char LOCAL_CE_2[] = {
	0xC7,
	0x08, 0x1D, 0x2A, 0x3C, 0x49, 0x55, 0x6C, 0x7D, 0x89, 0x94,
	0x45, 0x50, 0x5C, 0x6B, 0x72, 0x7C, 0x89, 0x95, 0xBF, 0x08,
	0x1D, 0x2A, 0x3C, 0x49, 0x55, 0x6C, 0x7D, 0x89, 0x94, 0x45,
	0x50, 0x5C, 0x6B, 0x72, 0x7C, 0x89, 0x95, 0xBF, 0x00, 0x97,
	0x00, 0x97, 0x00, 0x97, 0x00, 0x97,
};

static unsigned char LOCAL_CE_3[] = {
	0xC8,
	0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00,
	0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC,
	0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00,
	0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xFC, 0x00,
};

static unsigned char LOCAL_CE_4[] = {
	0xCE,
	0x7D, 0x40, 0x48, 0x56, 0x67, 0x78, 0x88, 0x98, 0xA7, 0xB5,
	0xC3, 0xD1, 0xDE, 0xE9, 0xF2, 0xFA, 0xFF, 0x3C, 0x00, 0x01,
	0x03, 0x45, 0x00, 0x00,
};

static unsigned char LOCAL_CE_5[] = {
	0x55,
	0x00,
};

static unsigned char DYNAMIC_UI_1[] = {
	0xCA,
	0x1D, 0xFC, 0xA5, 0x56, 0x17, 0x07, 0x05, 0xFF, 0x00, 0xFF, 0x08,
	0x2E, 0x00, 0x37, 0x00, 0xED, 0x27, 0x35, 0x00, 0x00, 0xFC, 0x18,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

static unsigned char DYNAMIC_UI_2[] = {
	0xC7,
	0x08, 0x25, 0x35, 0x48, 0x57, 0x62, 0x7A, 0x8A, 0x96, 0xA2,
	0x57, 0x65, 0x73, 0x7E, 0x86, 0x91, 0x9F, 0xAA, 0xBF, 0x08,
	0x25, 0x35, 0x48, 0x57, 0x62, 0x7A, 0x8A, 0x96, 0xA1, 0x4E,
	0x58, 0x63, 0x7E, 0x86, 0x91, 0x9F, 0xAA, 0xBF, 0x00, 0x97,
	0x00, 0x97, 0x00, 0x97, 0x00, 0x97,
};

static unsigned char DYNAMIC_UI_3[] = {
	0xC8,
	0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00,
	0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC,
	0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00,
	0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xFC, 0x00,
};

static unsigned char DYNAMIC_UI_4[] = {
	0xCE,
	0x7D, 0x40, 0x48, 0x56, 0x67, 0x78, 0x88, 0x98, 0xA7, 0xB5,
	0xC3, 0xD1, 0xDE, 0xE9, 0xF2, 0xFA, 0xFF, 0x3C, 0x00, 0x01,
	0x03, 0x45, 0x00, 0x00,
};

static unsigned char DYNAMIC_UI_5[] = {
	0x55,
	0x00,
};

static unsigned char STANDARD_UI_1[] = {
	0xCA,
	0x1D, 0xFC, 0xA5, 0x56, 0x5E, 0x29, 0x23, 0x00, 0x00, 0x02,
	0x32, 0x2E, 0x10, 0xDD, 0x00, 0xE7, 0x17, 0x33, 0xD7, 0x00,
	0xED, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00,
};

static unsigned char STANDARD_UI_2[] = {
	0xC7,
	0x08, 0x25, 0x35, 0x48, 0x57, 0x62, 0x7A, 0x8A, 0x96, 0xA2,
	0x57, 0x65, 0x73, 0x7E, 0x86, 0x91, 0x9F, 0xAA, 0xBF, 0x08,
	0x25, 0x35, 0x48, 0x57, 0x62, 0x7A, 0x8A, 0x96, 0xA1, 0x4E,
	0x58, 0x63, 0x7E, 0x86, 0x91, 0x9F, 0xAA, 0xBF, 0x00, 0x97,
	0x00, 0x97, 0x00, 0x97, 0x00, 0x97,
};

static unsigned char STANDARD_UI_3[] = {
	0xC8,
	0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00,
	0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC,
	0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00,
	0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xFC, 0x00,
};

static unsigned char STANDARD_UI_4[] = {
	0xCE,
	0x7D, 0x40, 0x48, 0x56, 0x67, 0x78, 0x88, 0x98, 0xA7, 0xB5,
	0xC3, 0xD1, 0xDE, 0xE9, 0xF2, 0xFA, 0xFF, 0x3C, 0x00, 0x01,
	0x03, 0x45, 0x00, 0x00,
};

static unsigned char STANDARD_UI_5[] = {
	0x55,
	0x00,
};

static unsigned char NATURAL_UI_1[] = {
	0xCA,
	0x0D, 0xFC, 0xA5, 0x56, 0x34, 0x37, 0x25, 0x7F, 0x32, 0x4A,
	0x1C, 0x2D, 0x00, 0x7F, 0x00, 0xE7, 0x0C, 0x42, 0xFF, 0x00,
	0xF8, 0x35, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00,
};

static unsigned char NATURAL_UI_2[] = {
	0xC7,
	0x08, 0x25, 0x35, 0x48, 0x57, 0x62, 0x7A, 0x8A, 0x96, 0xA2,
	0x57, 0x65, 0x73, 0x7E, 0x86, 0x91, 0x9F, 0xAA, 0xBF, 0x08,
	0x25, 0x35, 0x48, 0x57, 0x62, 0x7A, 0x8A, 0x96, 0xA1, 0x4E,
	0x58, 0x63, 0x7E, 0x86, 0x91, 0x9F, 0xAA, 0xBF, 0x00, 0x97,
	0x00, 0x97, 0x00, 0x97, 0x00, 0x97,
};

static unsigned char NATURAL_UI_3[] = {
	0xC8,
	0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00,
	0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC,
	0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00,
	0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xFC, 0x00,
};

static unsigned char NATURAL_UI_4[] = {
	0xCE,
	0x7D, 0x40, 0x48, 0x56, 0x67, 0x78, 0x88, 0x98, 0xA7, 0xB5,
	0xC3, 0xD1, 0xDE, 0xE9, 0xF2, 0xFA, 0xFF, 0x3C, 0x00, 0x01,
	0x03, 0x45, 0x00, 0x00,
};

static unsigned char NATURAL_UI_5[] = {
	0x55,
	0x00,
};

#define MDNIE_SET(id)	\
{							\
	.name		= #id,				\
	.update_flag	= {1, 2, 3, 4, 5},			\
	.seq		= {				\
		{	.cmd = id##_1,		.len = ARRAY_SIZE(id##_1),		.sleep = 0,},	\
		{	.cmd = id##_2,		.len = ARRAY_SIZE(id##_2),		.sleep = 0,},	\
		{	.cmd = id##_3,		.len = ARRAY_SIZE(id##_3),		.sleep = 0,},	\
		{	.cmd = id##_4,		.len = ARRAY_SIZE(id##_4),		.sleep = 0,},	\
		{	.cmd = id##_5,		.len = ARRAY_SIZE(id##_5),		.sleep = 0,},	\
	}	\
}

static struct mdnie_table bypass_table[BYPASS_MAX] = {
	[BYPASS_ON] = MDNIE_SET(AUTO_UI)
};

static struct mdnie_table accessibility_table[ACCESSIBILITY_MAX] = {
	[NEGATIVE] = MDNIE_SET(AUTO_UI),
	MDNIE_SET(AUTO_UI),
	MDNIE_SET(AUTO_UI),
	MDNIE_SET(AUTO_UI),
	MDNIE_SET(AUTO_UI)
};

static struct mdnie_table hbm_table[HBM_MAX] = {
	[HBM_ON] = MDNIE_SET(LOCAL_CE)
};

static struct mdnie_table dmb_table[MODE_MAX] = {
	MDNIE_SET(AUTO_UI),
	MDNIE_SET(AUTO_UI),
	MDNIE_SET(AUTO_UI),
	MDNIE_SET(AUTO_UI),
	MDNIE_SET(AUTO_UI),
	MDNIE_SET(AUTO_UI)
};

static struct mdnie_table main_table[SCENARIO_MAX][MODE_MAX] = {
	{
		MDNIE_SET(DYNAMIC_UI),    // DCI (DYNAMIC)
		MDNIE_SET(STANDARD_UI),    // adobe (STANDARD)
		MDNIE_SET(NATURAL_UI),    // Natural (NATURAL)
		MDNIE_SET(AUTO_UI),    // Movie
		MDNIE_SET(AUTO_UI),    // AUTO
		MDNIE_SET(AUTO_EBOOK), // EBOOK
	}, {
		MDNIE_SET(DYNAMIC_UI),
		MDNIE_SET(STANDARD_UI),
		MDNIE_SET(NATURAL_UI),
		MDNIE_SET(AUTO_VIDEO),
		MDNIE_SET(AUTO_VIDEO),
		MDNIE_SET(AUTO_EBOOK),
	},
	[CAMERA_MODE] = {
		MDNIE_SET(DYNAMIC_UI),
		MDNIE_SET(STANDARD_UI),
		MDNIE_SET(NATURAL_UI),
		MDNIE_SET(AUTO_CAMERA),
		MDNIE_SET(AUTO_CAMERA),
		MDNIE_SET(AUTO_EBOOK),
	},
	[CAMER_SWA_MODE] = {
		MDNIE_SET(DYNAMIC_UI),
		MDNIE_SET(STANDARD_UI),
		MDNIE_SET(NATURAL_UI),
		MDNIE_SET(AUTO_UI),
		MDNIE_SET(AUTO_UI),
		MDNIE_SET(AUTO_EBOOK),
	}, 
	[GALLERY_MODE] = {
		MDNIE_SET(DYNAMIC_UI),
		MDNIE_SET(STANDARD_UI),
		MDNIE_SET(NATURAL_UI),
		MDNIE_SET(AUTO_UI),
		MDNIE_SET(AUTO_UI),
		MDNIE_SET(AUTO_EBOOK),
	},
	[GALLERY_SWA_MODE] = {
		MDNIE_SET(DYNAMIC_UI),
		MDNIE_SET(STANDARD_UI),
		MDNIE_SET(NATURAL_UI),
		MDNIE_SET(AUTO_UI),
		MDNIE_SET(AUTO_UI),
		MDNIE_SET(AUTO_EBOOK),
	}, {
		MDNIE_SET(DYNAMIC_UI),
		MDNIE_SET(STANDARD_UI),
		MDNIE_SET(NATURAL_UI),
		MDNIE_SET(AUTO_UI),
		MDNIE_SET(AUTO_UI),
		MDNIE_SET(AUTO_EBOOK),
	}, {
		MDNIE_SET(DYNAMIC_UI),
		MDNIE_SET(STANDARD_UI),
		MDNIE_SET(NATURAL_UI),
		MDNIE_SET(AUTO_UI),
		MDNIE_SET(AUTO_UI),
		MDNIE_SET(AUTO_EBOOK),
	}, {
		MDNIE_SET(DYNAMIC_UI),
		MDNIE_SET(STANDARD_UI),
		MDNIE_SET(NATURAL_UI),
		MDNIE_SET(AUTO_EBOOK),
		MDNIE_SET(AUTO_EBOOK),
		MDNIE_SET(AUTO_EBOOK),
	}, {
		MDNIE_SET(DYNAMIC_UI),
		MDNIE_SET(STANDARD_UI),
		MDNIE_SET(NATURAL_UI),
		MDNIE_SET(AUTO_UI),
		MDNIE_SET(AUTO_UI),
		MDNIE_SET(AUTO_EBOOK),
	}
};

#undef MDNIE_SET

static struct mdnie_tune tune_info = {
	.bypass_table = bypass_table,
	.accessibility_table = accessibility_table,
	.hbm_table = hbm_table,
	.dmb_table = dmb_table,
	.main_table = main_table,

	.get_hbm_index = get_hbm_index,
};

#endif
