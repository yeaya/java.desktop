#ifndef _sun_awt_X11_XGlobalCursorManager_h_
#define _sun_awt_X11_XGlobalCursorManager_h_
//$ class sun.awt.X11.XGlobalCursorManager
//$ extends sun.awt.GlobalCursorManager

#include <sun/awt/GlobalCursorManager.h>

namespace java {
	namespace awt {
		class Component;
		class Cursor;
		class Point;
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class WeakReference;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XGlobalCursorManager : public ::sun::awt::GlobalCursorManager {
	$class(XGlobalCursorManager, $NO_CLASS_INIT, ::sun::awt::GlobalCursorManager)
public:
	XGlobalCursorManager();
	void init$();
	::java::awt::Component* findHeavyweightUnderCursor();
	virtual ::java::awt::Component* findHeavyweightUnderCursor(bool useCache) override;
	::java::awt::Cursor* getCapableCursor(::java::awt::Component* comp);
	static int64_t getCursor(::java::awt::Cursor* c);
	static ::sun::awt::GlobalCursorManager* getCursorManager();
	virtual void getCursorPos(::java::awt::Point* p) override;
	virtual ::java::awt::Point* getLocationOnScreen(::java::awt::Component* c) override;
	static void nativeUpdateCursor(::java::awt::Component* heavy);
	virtual void setCursor(::java::awt::Component* comp, ::java::awt::Cursor* cursor, bool useCache) override;
	static void setPData(::java::awt::Cursor* c, int64_t pData);
	virtual void updateCursorOutOfJava() override;
	static void updateGrabbedCursor(::java::awt::Cursor* cur);
	::java::lang::ref::WeakReference* nativeContainer = nullptr;
	static ::sun::awt::X11::XGlobalCursorManager* manager;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XGlobalCursorManager_h_