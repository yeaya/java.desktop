#ifndef _com_sun_java_swing_plaf_motif_MotifMenuMouseMotionListener_h_
#define _com_sun_java_swing_plaf_motif_MotifMenuMouseMotionListener_h_
//$ class com.sun.java.swing.plaf.motif.MotifMenuMouseMotionListener
//$ extends java.awt.event.MouseMotionListener

#include <java/awt/event/MouseMotionListener.h>

namespace java {
	namespace awt {
		namespace event {
			class MouseEvent;
		}
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

class $export MotifMenuMouseMotionListener : public ::java::awt::event::MouseMotionListener {
	$class(MotifMenuMouseMotionListener, $NO_CLASS_INIT, ::java::awt::event::MouseMotionListener)
public:
	MotifMenuMouseMotionListener();
	void init$();
	virtual void mouseDragged(::java::awt::event::MouseEvent* e) override;
	virtual void mouseMoved(::java::awt::event::MouseEvent* e) override;
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_motif_MotifMenuMouseMotionListener_h_