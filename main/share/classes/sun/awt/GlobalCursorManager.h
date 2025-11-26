#ifndef _sun_awt_GlobalCursorManager_h_
#define _sun_awt_GlobalCursorManager_h_
//$ class sun.awt.GlobalCursorManager
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Component;
		class Cursor;
		class Point;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class InputEvent;
		}
	}
}
namespace sun {
	namespace awt {
		class GlobalCursorManager$NativeUpdater;
	}
}

namespace sun {
	namespace awt {

class $export GlobalCursorManager : public ::java::lang::Object {
	$class(GlobalCursorManager, $NO_CLASS_INIT, ::java::lang::Object)
public:
	GlobalCursorManager();
	void init$();
	void _updateCursor(bool useCache);
	virtual ::java::awt::Component* findHeavyweightUnderCursor(bool useCache) {return nullptr;}
	virtual void getCursorPos(::java::awt::Point* p) {}
	virtual ::java::awt::Point* getLocationOnScreen(::java::awt::Component* com) {return nullptr;}
	virtual void setCursor(::java::awt::Component* comp, ::java::awt::Cursor* cursor, bool useCache) {}
	virtual void updateCursorImmediately();
	virtual void updateCursorImmediately(::java::awt::event::InputEvent* e);
	virtual void updateCursorLater(::java::awt::Component* heavy);
	virtual void updateCursorOutOfJava();
	::sun::awt::GlobalCursorManager$NativeUpdater* nativeUpdater = nullptr;
	int64_t lastUpdateMillis = 0;
	$Object* lastUpdateLock = nullptr;
};

	} // awt
} // sun

#endif // _sun_awt_GlobalCursorManager_h_