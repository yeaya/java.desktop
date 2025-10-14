#ifndef _sun_awt_windows_WGlobalCursorManager_h_
#define _sun_awt_windows_WGlobalCursorManager_h_
//$ class sun.awt.windows.WGlobalCursorManager
//$ extends sun.awt.GlobalCursorManager

#include <sun/awt/GlobalCursorManager.h>

namespace java {
	namespace awt {
		class Component;
		class Cursor;
		class Point;
	}
}

namespace sun {
	namespace awt {
		namespace windows {

class WGlobalCursorManager : public ::sun::awt::GlobalCursorManager {
	$class(WGlobalCursorManager, $NO_CLASS_INIT, ::sun::awt::GlobalCursorManager)
public:
	WGlobalCursorManager();
	void init$();
	virtual ::java::awt::Component* findHeavyweightUnderCursor(bool useCache) override;
	static ::sun::awt::GlobalCursorManager* getCursorManager();
	virtual void getCursorPos(::java::awt::Point* p) override;
	virtual ::java::awt::Point* getLocationOnScreen(::java::awt::Component* com) override;
	static void nativeUpdateCursor(::java::awt::Component* heavy);
	virtual void setCursor(::java::awt::Component* comp, ::java::awt::Cursor* cursor, bool u) override;
	static ::sun::awt::windows::WGlobalCursorManager* manager;
};

		} // windows
	} // awt
} // sun

#endif // _sun_awt_windows_WGlobalCursorManager_h_