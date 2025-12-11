#ifndef _sun_lwawt_macosx_CAccessible$AXChangeNotifier_h_
#define _sun_lwawt_macosx_CAccessible$AXChangeNotifier_h_
//$ class sun.lwawt.macosx.CAccessible$AXChangeNotifier
//$ extends java.beans.PropertyChangeListener

#include <java/beans/PropertyChangeListener.h>

namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace sun {
	namespace lwawt {
		namespace macosx {
			class CAccessible;
		}
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class CAccessible$AXChangeNotifier : public ::java::beans::PropertyChangeListener {
	$class(CAccessible$AXChangeNotifier, $NO_CLASS_INIT, ::java::beans::PropertyChangeListener)
public:
	CAccessible$AXChangeNotifier();
	void init$(::sun::lwawt::macosx::CAccessible* this$0);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	::sun::lwawt::macosx::CAccessible* this$0 = nullptr;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CAccessible$AXChangeNotifier_h_