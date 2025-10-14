#ifndef _sun_awt_AppContext$4_h_
#define _sun_awt_AppContext$4_h_
//$ class sun.awt.AppContext$4
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace beans {
		class PropertyChangeSupport;
	}
}
namespace sun {
	namespace awt {
		class AppContext;
	}
}

namespace sun {
	namespace awt {

class AppContext$4 : public ::java::lang::Runnable {
	$class(AppContext$4, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	AppContext$4();
	void init$(::sun::awt::AppContext* this$0, ::java::beans::PropertyChangeSupport* val$changeSupport, Object$* val$notificationLock);
	virtual void run() override;
	::sun::awt::AppContext* this$0 = nullptr;
	$Object* val$notificationLock = nullptr;
	::java::beans::PropertyChangeSupport* val$changeSupport = nullptr;
};

	} // awt
} // sun

#endif // _sun_awt_AppContext$4_h_