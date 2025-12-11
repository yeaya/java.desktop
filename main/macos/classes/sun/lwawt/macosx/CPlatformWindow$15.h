#ifndef _sun_lwawt_macosx_CPlatformWindow$15_h_
#define _sun_lwawt_macosx_CPlatformWindow$15_h_
//$ class sun.lwawt.macosx.CPlatformWindow$15
//$ extends java.beans.PropertyChangeListener

#include <java/beans/PropertyChangeListener.h>

namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace javax {
	namespace swing {
		class JRootPane;
	}
}
namespace sun {
	namespace lwawt {
		namespace macosx {
			class CPlatformWindow;
		}
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class CPlatformWindow$15 : public ::java::beans::PropertyChangeListener {
	$class(CPlatformWindow$15, $NO_CLASS_INIT, ::java::beans::PropertyChangeListener)
public:
	CPlatformWindow$15();
	void init$(::sun::lwawt::macosx::CPlatformWindow* this$0, ::javax::swing::JRootPane* val$rootpane);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* evt) override;
	::sun::lwawt::macosx::CPlatformWindow* this$0 = nullptr;
	::javax::swing::JRootPane* val$rootpane = nullptr;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CPlatformWindow$15_h_