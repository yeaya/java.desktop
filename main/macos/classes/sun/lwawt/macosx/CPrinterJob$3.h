#ifndef _sun_lwawt_macosx_CPrinterJob$3_h_
#define _sun_lwawt_macosx_CPrinterJob$3_h_
//$ class sun.lwawt.macosx.CPrinterJob$3
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace sun {
	namespace lwawt {
		namespace macosx {
			class CPrinterJob;
		}
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class CPrinterJob$3 : public ::java::lang::Runnable {
	$class(CPrinterJob$3, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	CPrinterJob$3();
	void init$(::sun::lwawt::macosx::CPrinterJob* this$0);
	virtual void run() override;
	::sun::lwawt::macosx::CPrinterJob* this$0 = nullptr;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CPrinterJob$3_h_