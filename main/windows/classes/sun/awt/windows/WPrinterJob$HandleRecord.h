#ifndef _sun_awt_windows_WPrinterJob$HandleRecord_h_
#define _sun_awt_windows_WPrinterJob$HandleRecord_h_
//$ class sun.awt.windows.WPrinterJob$HandleRecord
//$ extends sun.java2d.DisposerRecord

#include <sun/java2d/DisposerRecord.h>

namespace sun {
	namespace awt {
		namespace windows {

class WPrinterJob$HandleRecord : public ::sun::java2d::DisposerRecord {
	$class(WPrinterJob$HandleRecord, $NO_CLASS_INIT, ::sun::java2d::DisposerRecord)
public:
	WPrinterJob$HandleRecord();
	void init$();
	virtual void dispose() override;
	int64_t mPrintDC = 0;
	int64_t mPrintHDevMode = 0;
	int64_t mPrintHDevNames = 0;
};

		} // windows
	} // awt
} // sun

#endif // _sun_awt_windows_WPrinterJob$HandleRecord_h_