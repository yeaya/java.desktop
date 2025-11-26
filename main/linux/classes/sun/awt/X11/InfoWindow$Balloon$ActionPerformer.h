#ifndef _sun_awt_X11_InfoWindow$Balloon$ActionPerformer_h_
#define _sun_awt_X11_InfoWindow$Balloon$ActionPerformer_h_
//$ class sun.awt.X11.InfoWindow$Balloon$ActionPerformer
//$ extends java.awt.event.MouseAdapter

#include <java/awt/event/MouseAdapter.h>

namespace java {
	namespace awt {
		namespace event {
			class MouseEvent;
		}
	}
}
namespace sun {
	namespace awt {
		namespace X11 {
			class InfoWindow$Balloon;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class InfoWindow$Balloon$ActionPerformer : public ::java::awt::event::MouseAdapter {
	$class(InfoWindow$Balloon$ActionPerformer, $NO_CLASS_INIT, ::java::awt::event::MouseAdapter)
public:
	InfoWindow$Balloon$ActionPerformer();
	void init$(::sun::awt::X11::InfoWindow$Balloon* this$0);
	virtual void mouseClicked(::java::awt::event::MouseEvent* e) override;
	::sun::awt::X11::InfoWindow$Balloon* this$0 = nullptr;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_InfoWindow$Balloon$ActionPerformer_h_