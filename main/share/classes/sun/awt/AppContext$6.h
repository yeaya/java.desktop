#ifndef _sun_awt_AppContext$6_h_
#define _sun_awt_AppContext$6_h_
//$ class sun.awt.AppContext$6
//$ extends jdk.internal.access.JavaAWTAccess

#include <jdk/internal/access/JavaAWTAccess.h>

namespace sun {
	namespace awt {
		class AppContext;
	}
}

namespace sun {
	namespace awt {

class AppContext$6 : public ::jdk::internal::access::JavaAWTAccess {
	$class(AppContext$6, $NO_CLASS_INIT, ::jdk::internal::access::JavaAWTAccess)
public:
	AppContext$6();
	void init$();
	virtual $Object* getAppletContext() override;
	bool hasRootThreadGroup(::sun::awt::AppContext* ecx);
};

	} // awt
} // sun

#endif // _sun_awt_AppContext$6_h_