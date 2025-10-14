#ifndef _com_sun_java_swing_plaf_motif_MotifDesktopIconUI$IconButton_h_
#define _com_sun_java_swing_plaf_motif_MotifDesktopIconUI$IconButton_h_
//$ class com.sun.java.swing.plaf.motif.MotifDesktopIconUI$IconButton
//$ extends javax.swing.JButton

#include <javax/swing/JButton.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {
						class MotifDesktopIconUI;
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
namespace javax {
	namespace swing {
		class Icon;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

class $import MotifDesktopIconUI$IconButton : public ::javax::swing::JButton {
	$class(MotifDesktopIconUI$IconButton, $NO_CLASS_INIT, ::javax::swing::JButton)
public:
	MotifDesktopIconUI$IconButton();
	using ::javax::swing::JButton::contains;
	using ::javax::swing::JButton::enable;
	using ::javax::swing::JButton::getBounds;
	using ::javax::swing::JButton::getSize;
	using ::javax::swing::JButton::getLocation;
	using ::javax::swing::JButton::firePropertyChange;
	using ::javax::swing::JButton::add;
	using ::javax::swing::JButton::getMousePosition;
	void init$(::com::sun::java::swing::plaf::motif::MotifDesktopIconUI* this$0, ::javax::swing::Icon* icon);
	virtual void forwardEventToParent(::java::awt::event::MouseEvent* e);
	virtual bool isFocusTraversable() override;
	using ::javax::swing::JButton::setUI;
	using ::javax::swing::JButton::requestFocus;
	using ::javax::swing::JButton::requestFocusInWindow;
	using ::javax::swing::JButton::repaint;
	using ::javax::swing::JButton::remove;
	using ::javax::swing::JButton::list;
	::com::sun::java::swing::plaf::motif::MotifDesktopIconUI* this$0 = nullptr;
	::javax::swing::Icon* icon = nullptr;
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_motif_MotifDesktopIconUI$IconButton_h_