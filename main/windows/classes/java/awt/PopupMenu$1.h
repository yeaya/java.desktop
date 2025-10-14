#ifndef _java_awt_PopupMenu$1_h_
#define _java_awt_PopupMenu$1_h_
//$ class java.awt.PopupMenu$1
//$ extends sun.awt.AWTAccessor$PopupMenuAccessor

#include <sun/awt/AWTAccessor$PopupMenuAccessor.h>

namespace java {
	namespace awt {
		class PopupMenu;
	}
}

namespace java {
	namespace awt {

class PopupMenu$1 : public ::sun::awt::AWTAccessor$PopupMenuAccessor {
	$class(PopupMenu$1, $NO_CLASS_INIT, ::sun::awt::AWTAccessor$PopupMenuAccessor)
public:
	PopupMenu$1();
	void init$();
	virtual bool isTrayIconPopup(::java::awt::PopupMenu* popupMenu) override;
};

	} // awt
} // java

#endif // _java_awt_PopupMenu$1_h_