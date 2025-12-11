#ifndef _sun_lwawt_macosx_CPrinterJob$1_h_
#define _sun_lwawt_macosx_CPrinterJob$1_h_
//$ class sun.lwawt.macosx.CPrinterJob$1
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

class CPrinterJob$1 : public ::java::lang::Runnable {
	$class(CPrinterJob$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	CPrinterJob$1();
	void init$(::sun::lwawt::macosx::CPrinterJob* this$0);
	virtual void run() override;
	::sun::lwawt::macosx::CPrinterJob* this$0 = nullptr;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CPrinterJob$1_h_