#ifndef _sun_swing_JLightweightFrame$4_h_
#define _sun_swing_JLightweightFrame$4_h_
//$ class sun.swing.JLightweightFrame$4
//$ extends java.awt.event.ContainerListener

#include <java/awt/event/ContainerListener.h>

namespace java {
	namespace awt {
		namespace event {
			class ContainerEvent;
		}
	}
}
namespace sun {
	namespace swing {
		class JLightweightFrame;
	}
}

namespace sun {
	namespace swing {

class JLightweightFrame$4 : public ::java::awt::event::ContainerListener {
	$class(JLightweightFrame$4, $NO_CLASS_INIT, ::java::awt::event::ContainerListener)
public:
	JLightweightFrame$4();
	void init$(::sun::swing::JLightweightFrame* this$0);
	virtual void componentAdded(::java::awt::event::ContainerEvent* e) override;
	virtual void componentRemoved(::java::awt::event::ContainerEvent* e) override;
	::sun::swing::JLightweightFrame* this$0 = nullptr;
};

	} // swing
} // sun

#endif // _sun_swing_JLightweightFrame$4_h_