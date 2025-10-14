#ifndef _com_sun_java_swing_plaf_motif_MotifInternalFrameTitlePane$Title_h_
#define _com_sun_java_swing_plaf_motif_MotifInternalFrameTitlePane$Title_h_
//$ class com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane$Title
//$ extends com.sun.java.swing.plaf.motif.MotifInternalFrameTitlePane$FrameButton

#include <com/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane$FrameButton.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {
						class MotifInternalFrameTitlePane;
					}
				}
			}
		}
	}
}
namespace java {
	namespace awt {
		class Graphics;
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

class $import MotifInternalFrameTitlePane$Title : public ::com::sun::java::swing::plaf::motif::MotifInternalFrameTitlePane$FrameButton {
	$class(MotifInternalFrameTitlePane$Title, $NO_CLASS_INIT, ::com::sun::java::swing::plaf::motif::MotifInternalFrameTitlePane$FrameButton)
public:
	MotifInternalFrameTitlePane$Title();
	using ::com::sun::java::swing::plaf::motif::MotifInternalFrameTitlePane$FrameButton::contains;
	using ::com::sun::java::swing::plaf::motif::MotifInternalFrameTitlePane$FrameButton::enable;
	using ::com::sun::java::swing::plaf::motif::MotifInternalFrameTitlePane$FrameButton::getBounds;
	using ::com::sun::java::swing::plaf::motif::MotifInternalFrameTitlePane$FrameButton::getSize;
	using ::com::sun::java::swing::plaf::motif::MotifInternalFrameTitlePane$FrameButton::getLocation;
	using ::com::sun::java::swing::plaf::motif::MotifInternalFrameTitlePane$FrameButton::firePropertyChange;
	using ::com::sun::java::swing::plaf::motif::MotifInternalFrameTitlePane$FrameButton::add;
	using ::com::sun::java::swing::plaf::motif::MotifInternalFrameTitlePane$FrameButton::getMousePosition;
	void init$(::com::sun::java::swing::plaf::motif::MotifInternalFrameTitlePane* this$0, $String* title);
	virtual void forwardEventToParent(::java::awt::event::MouseEvent* e);
	using ::com::sun::java::swing::plaf::motif::MotifInternalFrameTitlePane$FrameButton::list;
	virtual void paintComponent(::java::awt::Graphics* g) override;
	using ::com::sun::java::swing::plaf::motif::MotifInternalFrameTitlePane$FrameButton::requestFocus;
	using ::com::sun::java::swing::plaf::motif::MotifInternalFrameTitlePane$FrameButton::setUI;
	using ::com::sun::java::swing::plaf::motif::MotifInternalFrameTitlePane$FrameButton::requestFocusInWindow;
	using ::com::sun::java::swing::plaf::motif::MotifInternalFrameTitlePane$FrameButton::repaint;
	using ::com::sun::java::swing::plaf::motif::MotifInternalFrameTitlePane$FrameButton::remove;
	::com::sun::java::swing::plaf::motif::MotifInternalFrameTitlePane* this$0 = nullptr;
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_motif_MotifInternalFrameTitlePane$Title_h_