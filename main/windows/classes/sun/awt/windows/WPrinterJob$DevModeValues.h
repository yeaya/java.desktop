#ifndef _sun_awt_windows_WPrinterJob$DevModeValues_h_
#define _sun_awt_windows_WPrinterJob$DevModeValues_h_
//$ class sun.awt.windows.WPrinterJob$DevModeValues
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace awt {
		namespace windows {

class WPrinterJob$DevModeValues : public ::java::lang::Object {
	$class(WPrinterJob$DevModeValues, $NO_CLASS_INIT, ::java::lang::Object)
public:
	WPrinterJob$DevModeValues();
	void init$();
	int32_t dmFields = 0;
	int16_t copies = 0;
	int16_t collate = 0;
	int16_t color = 0;
	int16_t duplex = 0;
	int16_t orient = 0;
	int16_t paper = 0;
	int16_t bin = 0;
	int16_t xres_quality = 0;
	int16_t yres = 0;
};

		} // windows
	} // awt
} // sun

#endif // _sun_awt_windows_WPrinterJob$DevModeValues_h_