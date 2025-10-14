#ifndef _com_sun_java_swing_plaf_motif_MotifComboBoxUI$MotifComboPopup_h_
#define _com_sun_java_swing_plaf_motif_MotifComboBoxUI$MotifComboPopup_h_
//$ class com.sun.java.swing.plaf.motif.MotifComboBoxUI$MotifComboPopup
//$ extends javax.swing.plaf.basic.BasicComboPopup

#include <javax/swing/plaf/basic/BasicComboPopup.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {
						class MotifComboBoxUI;
					}
				}
			}
		}
	}
}
namespace java {
	namespace awt {
		namespace event {
			class KeyListener;
			class MouseMotionListener;
		}
	}
}
namespace javax {
	namespace swing {
		class JComboBox;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

class $import MotifComboBoxUI$MotifComboPopup : public ::javax::swing::plaf::basic::BasicComboPopup {
	$class(MotifComboBoxUI$MotifComboPopup, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicComboPopup)
public:
	MotifComboBoxUI$MotifComboPopup();
	using ::javax::swing::plaf::basic::BasicComboPopup::add;
	using ::javax::swing::plaf::basic::BasicComboPopup::getComponent;
	using ::javax::swing::plaf::basic::BasicComboPopup::contains;
	using ::javax::swing::plaf::basic::BasicComboPopup::enable;
	using ::javax::swing::plaf::basic::BasicComboPopup::getBounds;
	using ::javax::swing::plaf::basic::BasicComboPopup::getSize;
	using ::javax::swing::plaf::basic::BasicComboPopup::getLocation;
	using ::javax::swing::plaf::basic::BasicComboPopup::firePropertyChange;
	using ::javax::swing::plaf::basic::BasicComboPopup::getMousePosition;
	void init$(::com::sun::java::swing::plaf::motif::MotifComboBoxUI* this$0, ::javax::swing::JComboBox* comboBox);
	virtual ::java::awt::event::KeyListener* createKeyListener() override;
	virtual ::java::awt::event::MouseMotionListener* createListMouseMotionListener() override;
	using ::javax::swing::plaf::basic::BasicComboPopup::show;
	using ::javax::swing::plaf::basic::BasicComboPopup::setUI;
	using ::javax::swing::plaf::basic::BasicComboPopup::remove;
	using ::javax::swing::plaf::basic::BasicComboPopup::setLocation;
	using ::javax::swing::plaf::basic::BasicComboPopup::processMouseEvent;
	using ::javax::swing::plaf::basic::BasicComboPopup::requestFocus;
	using ::javax::swing::plaf::basic::BasicComboPopup::requestFocusInWindow;
	using ::javax::swing::plaf::basic::BasicComboPopup::repaint;
	using ::javax::swing::plaf::basic::BasicComboPopup::list;
	::com::sun::java::swing::plaf::motif::MotifComboBoxUI* this$0 = nullptr;
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_motif_MotifComboBoxUI$MotifComboPopup_h_