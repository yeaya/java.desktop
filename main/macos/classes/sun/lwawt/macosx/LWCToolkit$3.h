#ifndef _sun_lwawt_macosx_LWCToolkit$3_h_
#define _sun_lwawt_macosx_LWCToolkit$3_h_
//$ class sun.lwawt.macosx.LWCToolkit$3
//$ extends java.lang.Runnable

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>

namespace sun {
	namespace lwawt {
		namespace macosx {

class LWCToolkit$3 : public ::java::lang::Runnable {
	$class(LWCToolkit$3, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	LWCToolkit$3();
	void init$($booleans* val$ret, Object$* val$a, Object$* val$b);
	virtual void run() override;
	$Object* val$b = nullptr;
	$Object* val$a = nullptr;
	$booleans* val$ret = nullptr;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_LWCToolkit$3_h_