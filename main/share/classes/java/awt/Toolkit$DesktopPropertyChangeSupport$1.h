#ifndef _java_awt_Toolkit$DesktopPropertyChangeSupport$1_h_
#define _java_awt_Toolkit$DesktopPropertyChangeSupport$1_h_
//$ class java.awt.Toolkit$DesktopPropertyChangeSupport$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace awt {
		class Toolkit$DesktopPropertyChangeSupport;
	}
}
namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}

namespace java {
	namespace awt {

class Toolkit$DesktopPropertyChangeSupport$1 : public ::java::lang::Runnable {
	$class(Toolkit$DesktopPropertyChangeSupport$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	Toolkit$DesktopPropertyChangeSupport$1();
	void init$(::java::awt::Toolkit$DesktopPropertyChangeSupport* this$0, ::java::beans::PropertyChangeEvent* val$evt);
	virtual void run() override;
	::java::awt::Toolkit$DesktopPropertyChangeSupport* this$0 = nullptr;
	::java::beans::PropertyChangeEvent* val$evt = nullptr;
};

	} // awt
} // java

#endif // _java_awt_Toolkit$DesktopPropertyChangeSupport$1_h_