#ifndef _java_awt_desktop_PrintFilesEvent_h_
#define _java_awt_desktop_PrintFilesEvent_h_
//$ class java.awt.desktop.PrintFilesEvent
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

class $export PrintFilesEvent : public ::java::awt::desktop::FilesEvent {
	$class(PrintFilesEvent, $NO_CLASS_INIT, ::java::awt::desktop::FilesEvent)
public:
	PrintFilesEvent();
	void init$(::java::util::List* files);
	static const int64_t serialVersionUID = (int64_t)0xB02ACC5C8C0DBF46;
};

		} // desktop
	} // awt
} // java

#endif // _java_awt_desktop_PrintFilesEvent_h_