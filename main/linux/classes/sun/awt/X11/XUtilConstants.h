#ifndef _sun_awt_X11_XUtilConstants_h_
#define _sun_awt_X11_XUtilConstants_h_
//$ class sun.awt.X11.XUtilConstants
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("XCNOENT")
#undef XCNOENT
#pragma push_macro("XCNOMEM")
#undef XCNOMEM
#pragma push_macro("XCSUCCESS")
#undef XCSUCCESS

namespace sun {
	namespace awt {
		namespace X11 {

class XUtilConstants : public ::java::lang::Object {
	$class(XUtilConstants, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XUtilConstants();
	void init$();
	static const int32_t NoValue = 0;
	static const int32_t XValue = 1;
	static const int32_t YValue = 2;
	static const int32_t WidthValue = 4;
	static const int32_t HeightValue = 8;
	static const int32_t AllValues = 15;
	static const int32_t XNegative = 16;
	static const int32_t YNegative = 32;
	static const int64_t USPosition = 1; // (int64_t)1 << 0
	static const int64_t USSize = 2; // (int64_t)1 << 1
	static const int64_t PPosition = 4; // (int64_t)1 << 2
	static const int64_t PSize = 8; // (int64_t)1 << 3
	static const int64_t PMinSize = 16; // (int64_t)1 << 4
	static const int64_t PMaxSize = 32; // (int64_t)1 << 5
	static const int64_t PResizeInc = 64; // (int64_t)1 << 6
	static const int64_t PAspect = 128; // (int64_t)1 << 7
	static const int64_t PBaseSize = 256; // (int64_t)1 << 8
	static const int64_t PWinGravity = 512; // (int64_t)1 << 9
	static const int64_t PAllHints = 252; // (PPosition | PSize | PMinSize | PMaxSize | PResizeInc | PAspect)
	static const int64_t InputHint = 1; // (int64_t)1 << 0
	static const int64_t StateHint = 2; // (int64_t)1 << 1
	static const int64_t IconPixmapHint = 4; // (int64_t)1 << 2
	static const int64_t IconWindowHint = 8; // (int64_t)1 << 3
	static const int64_t IconPositionHint = 16; // (int64_t)1 << 4
	static const int64_t IconMaskHint = 32; // (int64_t)1 << 5
	static const int64_t WindowGroupHint = 64; // (int64_t)1 << 6
	static const int64_t AllHints = 127; // (InputHint | StateHint | IconPixmapHint | IconWindowHint | IconPositionHint | IconMaskHint | WindowGroupHint)
	static const int64_t XUrgencyHint = 256; // (int64_t)1 << 8
	static const int32_t WithdrawnState = 0;
	static const int32_t NormalState = 1;
	static const int32_t IconicState = 3;
	static const int32_t DontCareState = 0;
	static const int32_t ZoomState = 2;
	static const int32_t InactiveState = 4;
	static const int32_t XNoMemory = (-1);
	static const int32_t XLocaleNotSupported = (-2);
	static const int32_t XConverterNotFound = (-3);
	static const int32_t RectangleOut = 0;
	static const int32_t RectangleIn = 1;
	static const int32_t RectanglePart = 2;
	static const int32_t VisualNoMask = 0;
	static const int32_t VisualIDMask = 1;
	static const int32_t VisualScreenMask = 2;
	static const int32_t VisualDepthMask = 4;
	static const int32_t VisualClassMask = 8;
	static const int32_t VisualRedMaskMask = 16;
	static const int32_t VisualGreenMaskMask = 32;
	static const int32_t VisualBlueMaskMask = 64;
	static const int32_t VisualColormapSizeMask = 128;
	static const int32_t VisualBitsPerRGBMask = 256;
	static const int32_t VisualAllMask = 511;
	static const int32_t BitmapSuccess = 0;
	static const int32_t BitmapOpenFailed = 1;
	static const int32_t BitmapFileInvalid = 2;
	static const int32_t BitmapNoMemory = 3;
	static const int32_t XCSUCCESS = 0;
	static const int32_t XCNOMEM = 1;
	static const int32_t XCNOENT = 2;
};

		} // X11
	} // awt
} // sun

#pragma pop_macro("XCNOENT")
#pragma pop_macro("XCNOMEM")
#pragma pop_macro("XCSUCCESS")

#endif // _sun_awt_X11_XUtilConstants_h_