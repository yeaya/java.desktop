#ifndef _sun_lwawt_macosx_CPrinterJob$2_h_
#define _sun_lwawt_macosx_CPrinterJob$2_h_
//$ class sun.lwawt.macosx.CPrinterJob$2
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

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

class CPrinterJob$2 : public ::java::security::PrivilegedAction {
	$class(CPrinterJob$2, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	CPrinterJob$2();
	void init$(::sun::lwawt::macosx::CPrinterJob* this$0);
	virtual $Object* run() override;
	::sun::lwawt::macosx::CPrinterJob* this$0 = nullptr;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CPrinterJob$2_h_