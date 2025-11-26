#ifndef _sun_awt_util_ThreadGroupUtils_h_
#define _sun_awt_util_ThreadGroupUtils_h_
//$ class sun.awt.util.ThreadGroupUtils
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class ThreadGroup;
	}
}

namespace sun {
	namespace awt {
		namespace util {

class ThreadGroupUtils : public ::java::lang::Object {
	$class(ThreadGroupUtils, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ThreadGroupUtils();
	void init$();
	static ::java::lang::ThreadGroup* getRootThreadGroup();
};

		} // util
	} // awt
} // sun

#endif // _sun_awt_util_ThreadGroupUtils_h_