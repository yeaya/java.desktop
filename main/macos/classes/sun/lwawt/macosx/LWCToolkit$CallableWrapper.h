#ifndef _sun_lwawt_macosx_LWCToolkit$CallableWrapper_h_
#define _sun_lwawt_macosx_LWCToolkit$CallableWrapper_h_
//$ class sun.lwawt.macosx.LWCToolkit$CallableWrapper
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace lang {
		class Exception;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class Callable;
		}
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class LWCToolkit$CallableWrapper : public ::java::lang::Runnable {
	$class(LWCToolkit$CallableWrapper, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	LWCToolkit$CallableWrapper();
	void init$(::java::util::concurrent::Callable* callable);
	$Object* getResult();
	virtual void run() override;
	::java::util::concurrent::Callable* callable = nullptr;
	$Object* object = nullptr;
	::java::lang::Exception* e = nullptr;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_LWCToolkit$CallableWrapper_h_