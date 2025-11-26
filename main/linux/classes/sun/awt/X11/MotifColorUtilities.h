#ifndef _sun_awt_X11_MotifColorUtilities_h_
#define _sun_awt_X11_MotifColorUtilities_h_
//$ class sun.awt.X11.MotifColorUtilities
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("BLACK")
#undef BLACK
#pragma push_macro("DEFAULT_COLOR")
#undef DEFAULT_COLOR
#pragma push_macro("MOTIF_WINDOW_COLOR")
#undef MOTIF_WINDOW_COLOR
#pragma push_macro("WHITE")
#undef WHITE

namespace sun {
	namespace awt {
		namespace X11 {

class MotifColorUtilities : public ::java::lang::Object {
	$class(MotifColorUtilities, 0, ::java::lang::Object)
public:
	MotifColorUtilities();
	void init$();
	static int32_t brightness(int32_t red, int32_t green, int32_t blue);
	static int32_t calculateBottomShadowFromBackground(int32_t r, int32_t g, int32_t b);
	static int32_t calculateForegroundFromBackground(int32_t r, int32_t g, int32_t b);
	static int32_t calculateSelectFromBackground(int32_t r, int32_t g, int32_t b);
	static int32_t calculateTopShadowFromBackground(int32_t r, int32_t g, int32_t b);
	static void loadMotifDefaultColors($ints* systemColors);
	static void loadSystemColors($ints* systemColors);
	static void loadSystemColorsForCDE($ints* systemColors);
	static void loadSystemColorsForCDE4($ints* systemColors, $ints* colors);
	static void loadSystemColorsForCDE8($ints* systemColors, $ints* colors);
	static float XmRED_LUMINOSITY;
	static float XmGREEN_LUMINOSITY;
	static float XmBLUE_LUMINOSITY;
	static const int32_t XmINTENSITY_FACTOR = 75;
	static const int32_t XmLIGHT_FACTOR = 0;
	static const int32_t XmLUMINOSITY_FACTOR = 25;
	static const int32_t XmMAX_SHORT = 0x0000FFFF;
	static const int32_t XmCOLOR_PERCENTILE = (XmMAX_SHORT / 100);
	static const int32_t XmDEFAULT_DARK_THRESHOLD = 20;
	static const int32_t XmDEFAULT_LIGHT_THRESHOLD = 93;
	static const int32_t XmDEFAULT_FOREGROUND_THRESHOLD = 70;
	static const int32_t BLACK = 0xFF000000;
	static const int32_t WHITE = (-1);
	static const int32_t MOTIF_WINDOW_COLOR = 0xFFDFDFDF;
	static const int32_t DEFAULT_COLOR = 0xFFC4C4C4;
	static const int32_t XmCOLOR_LITE_THRESHOLD = 60915; // XmDEFAULT_LIGHT_THRESHOLD * XmCOLOR_PERCENTILE
	static const int32_t XmCOLOR_DARK_THRESHOLD = 13100; // XmDEFAULT_DARK_THRESHOLD * XmCOLOR_PERCENTILE
	static const int32_t XmFOREGROUND_THRESHOLD = 45850; // XmDEFAULT_FOREGROUND_THRESHOLD * XmCOLOR_PERCENTILE
	static const int32_t XmCOLOR_LITE_SEL_FACTOR = 15;
	static const int32_t XmCOLOR_LITE_BS_FACTOR = 40;
	static const int32_t XmCOLOR_LITE_TS_FACTOR = 20;
	static const int32_t XmCOLOR_DARK_SEL_FACTOR = 15;
	static const int32_t XmCOLOR_DARK_BS_FACTOR = 30;
	static const int32_t XmCOLOR_DARK_TS_FACTOR = 50;
	static const int32_t XmCOLOR_HI_SEL_FACTOR = 15;
	static const int32_t XmCOLOR_HI_BS_FACTOR = 40;
	static const int32_t XmCOLOR_HI_TS_FACTOR = 60;
	static const int32_t XmCOLOR_LO_SEL_FACTOR = 15;
	static const int32_t XmCOLOR_LO_BS_FACTOR = 60;
	static const int32_t XmCOLOR_LO_TS_FACTOR = 50;
};

		} // X11
	} // awt
} // sun

#pragma pop_macro("BLACK")
#pragma pop_macro("DEFAULT_COLOR")
#pragma pop_macro("MOTIF_WINDOW_COLOR")
#pragma pop_macro("WHITE")

#endif // _sun_awt_X11_MotifColorUtilities_h_