#ifndef _java_awt_desktop_OpenFilesEvent_h_
#define _java_awt_desktop_OpenFilesEvent_h_
//$ class java.awt.desktop.OpenFilesEvent
//$ extends java.awt.desktop.FilesEvent

#include <java/awt/desktop/FilesEvent.h>

namespace java {
	namespace util {
		class List;
	}
}

namespace java {
	namespace awt {
		namespace desktop {

class $export OpenFilesEvent : public ::java::awt::desktop::FilesEvent {
	$class(OpenFilesEvent, $NO_CLASS_INIT, ::java::awt::desktop::FilesEvent)
public:
	OpenFilesEvent();
	void init$(::java::util::List* files, $String* searchTerm);
	$String* getSearchTerm();
	static const int64_t serialVersionUID = (int64_t)0xC8B9FFEC1D0D46D4;
	$String* searchTerm = nullptr;
};

		} // desktop
	} // awt
} // java

#endif // _java_awt_desktop_OpenFilesEvent_h_