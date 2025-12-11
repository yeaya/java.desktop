#ifndef _sun_lwawt_macosx_CAccessibleText$3_h_
#define _sun_lwawt_macosx_CAccessibleText$3_h_
//$ class sun.lwawt.macosx.CAccessibleText$3
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace javax {
	namespace accessibility {
		class Accessible;
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class CAccessibleText$3 : public ::java::lang::Runnable {
	$class(CAccessibleText$3, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	CAccessibleText$3();
	void init$(::javax::accessibility::Accessible* val$a, $String* val$newText);
	virtual void run() override;
	$String* val$newText = nullptr;
	::javax::accessibility::Accessible* val$a = nullptr;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CAccessibleText$3_h_