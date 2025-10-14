#ifndef _java_awt_desktop_FilesEvent_h_
#define _java_awt_desktop_FilesEvent_h_
//$ class java.awt.desktop.FilesEvent
//$ extends java.awt.desktop.AppEvent

#include <java/awt/desktop/AppEvent.h>

namespace java {
	namespace util {
		class List;
	}
}

namespace java {
	namespace awt {
		namespace desktop {

class $import FilesEvent : public ::java::awt::desktop::AppEvent {
	$class(FilesEvent, $NO_CLASS_INIT, ::java::awt::desktop::AppEvent)
public:
	FilesEvent();
	void init$(::java::util::List* files);
	virtual ::java::util::List* getFiles();
	static const int64_t serialVersionUID = (int64_t)0x4929112B0FECB3A7;
	::java::util::List* files = nullptr;
};

		} // desktop
	} // awt
} // java

#endif // _java_awt_desktop_FilesEvent_h_