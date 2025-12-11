#ifndef _sun_lwawt_macosx_CCheckboxMenuItem$1_h_
#define _sun_lwawt_macosx_CCheckboxMenuItem$1_h_
//$ class sun.lwawt.macosx.CCheckboxMenuItem$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace awt {
		class CheckboxMenuItem;
	}
}
namespace sun {
	namespace lwawt {
		namespace macosx {
			class CCheckboxMenuItem;
		}
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class CCheckboxMenuItem$1 : public ::java::lang::Runnable {
	$class(CCheckboxMenuItem$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	CCheckboxMenuItem$1();
	void init$(::sun::lwawt::macosx::CCheckboxMenuItem* this$0, ::java::awt::CheckboxMenuItem* val$target, bool val$state);
	virtual void run() override;
	::sun::lwawt::macosx::CCheckboxMenuItem* this$0 = nullptr;
	bool val$state = false;
	::java::awt::CheckboxMenuItem* val$target = nullptr;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CCheckboxMenuItem$1_h_