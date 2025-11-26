#ifndef _sun_awt_X11_InfoWindow$1_h_
#define _sun_awt_X11_InfoWindow$1_h_
//$ class sun.awt.X11.InfoWindow$1
//$ extends java.awt.Container

#include <java/awt/Container.h>

namespace java {
	namespace awt {
		class Insets;
	}
}
namespace sun {
	namespace awt {
		namespace X11 {
			class InfoWindow;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class InfoWindow$1 : public ::java::awt::Container {
	$class(InfoWindow$1, $NO_CLASS_INIT, ::java::awt::Container)
public:
	InfoWindow$1();
	using ::java::awt::Container::add;
	using ::java::awt::Container::getMousePosition;
	void init$(::sun::awt::X11::InfoWindow* this$0);
	virtual ::java::awt::Insets* getInsets() override;
	using ::java::awt::Container::remove;
	using ::java::awt::Container::list;
	::sun::awt::X11::InfoWindow* this$0 = nullptr;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_InfoWindow$1_h_