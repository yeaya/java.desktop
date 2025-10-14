#ifndef _java_awt_Taskbar_h_
#define _java_awt_Taskbar_h_
//$ class java.awt.Taskbar
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Image;
		class PopupMenu;
		class Taskbar$Feature;
		class Taskbar$State;
		class Window;
	}
}
namespace java {
	namespace awt {
		namespace peer {
			class TaskbarPeer;
		}
	}
}

namespace java {
	namespace awt {

class $import Taskbar : public ::java::lang::Object {
	$class(Taskbar, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Taskbar();
	void init$();
	void checkEventsProcessingPermission();
	void checkFeatureSupport(::java::awt::Taskbar$Feature* featureType);
	virtual ::java::awt::Image* getIconImage();
	virtual ::java::awt::PopupMenu* getMenu();
	static ::java::awt::Taskbar* getTaskbar();
	virtual bool isSupported(::java::awt::Taskbar$Feature* feature);
	static bool isTaskbarSupported();
	virtual void requestUserAttention(bool enabled, bool critical);
	virtual void requestWindowUserAttention(::java::awt::Window* w);
	virtual void setIconBadge($String* badge);
	virtual void setIconImage(::java::awt::Image* image);
	virtual void setMenu(::java::awt::PopupMenu* menu);
	virtual void setProgressValue(int32_t value);
	virtual void setWindowIconBadge(::java::awt::Window* w, ::java::awt::Image* badge);
	virtual void setWindowProgressState(::java::awt::Window* w, ::java::awt::Taskbar$State* state);
	virtual void setWindowProgressValue(::java::awt::Window* w, int32_t value);
	::java::awt::peer::TaskbarPeer* peer = nullptr;
};

	} // awt
} // java

#endif // _java_awt_Taskbar_h_