#ifndef _sun_awt_AppContext$5_h_
#define _sun_awt_AppContext$5_h_
//$ class sun.awt.AppContext$5
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace sun {
	namespace awt {
		class AppContext;
	}
}

namespace sun {
	namespace awt {

class AppContext$5 : public ::java::lang::Runnable {
	$class(AppContext$5, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	AppContext$5();
	void init$(::sun::awt::AppContext* this$0, Object$* val$notificationLock);
	virtual void run() override;
	::sun::awt::AppContext* this$0 = nullptr;
	$Object* val$notificationLock = nullptr;
};

	} // awt
} // sun

#endif // _sun_awt_AppContext$5_h_