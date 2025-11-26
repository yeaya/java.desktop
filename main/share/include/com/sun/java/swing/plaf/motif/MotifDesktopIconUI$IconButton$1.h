#ifndef _com_sun_java_swing_plaf_motif_MotifDesktopIconUI$IconButton$1_h_
#define _com_sun_java_swing_plaf_motif_MotifDesktopIconUI$IconButton$1_h_
//$ class com.sun.java.swing.plaf.motif.MotifDesktopIconUI$IconButton$1
//$ extends java.awt.event.MouseMotionListener

#include <java/awt/event/MouseMotionListener.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {
						class MotifDesktopIconUI;
						class MotifDesktopIconUI$IconButton;
					}
				}
			}
		}
	}
}
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

class $import MotifDesktopIconUI$IconButton$1 : public ::java::awt::event::MouseMotionListener {
	$class(MotifDesktopIconUI$IconButton$1, $NO_CLASS_INIT, ::java::awt::event::MouseMotionListener)
public:
	MotifDesktopIconUI$IconButton$1();
	void init$(::com::sun::java::swing::plaf::motif::MotifDesktopIconUI$IconButton* this$1, ::com::sun::java::swing::plaf::motif::MotifDesktopIconUI* val$this$0);
	virtual void mouseDragged(::java::awt::event::MouseEvent* e) override;
	virtual void mouseMoved(::java::awt::event::MouseEvent* e) override;
	::com::sun::java::swing::plaf::motif::MotifDesktopIconUI$IconButton* this$1 = nullptr;
	::com::sun::java::swing::plaf::motif::MotifDesktopIconUI* val$this$0 = nullptr;
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_motif_MotifDesktopIconUI$IconButton$1_h_