#ifndef _sun_awt_X11_InfoWindow$Balloon$2_h_
#define _sun_awt_X11_InfoWindow$Balloon$2_h_
//$ class sun.awt.X11.InfoWindow$Balloon$2
//$ extends java.awt.event.ActionListener

#include <java/awt/event/ActionListener.h>

namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
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

class InfoWindow$Balloon$2 : public ::java::awt::event::ActionListener {
	$class(InfoWindow$Balloon$2, $NO_CLASS_INIT, ::java::awt::event::ActionListener)
public:
	InfoWindow$Balloon$2();
	void init$(::sun::awt::X11::InfoWindow$Balloon* this$0);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	::sun::awt::X11::InfoWindow$Balloon* this$0 = nullptr;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_InfoWindow$Balloon$2_h_