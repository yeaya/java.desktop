#ifndef _sun_awt_GlobalCursorManager$NativeUpdater_h_
#define _sun_awt_GlobalCursorManager$NativeUpdater_h_
//$ class sun.awt.GlobalCursorManager$NativeUpdater
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace awt {
		class Component;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class InvocationEvent;
		}
	}
}
namespace sun {
	namespace awt {
		class GlobalCursorManager;
	}
}

namespace sun {
	namespace awt {

class $export GlobalCursorManager$NativeUpdater : public ::java::lang::Runnable {
	$class(GlobalCursorManager$NativeUpdater, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	GlobalCursorManager$NativeUpdater();
	void init$(::sun::awt::GlobalCursorManager* this$0);
	virtual void postIfNotPending(::java::awt::Component* heavy, ::java::awt::event::InvocationEvent* in);
	virtual void run() override;
	::sun::awt::GlobalCursorManager* this$0 = nullptr;
	bool pending = false;
};

	} // awt
} // sun

#endif // _sun_awt_GlobalCursorManager$NativeUpdater_h_