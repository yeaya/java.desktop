#ifndef _com_sun_java_swing_plaf_motif_MotifFileChooserUI$9_h_
#define _com_sun_java_swing_plaf_motif_MotifFileChooserUI$9_h_
//$ class com.sun.java.swing.plaf.motif.MotifFileChooserUI$9
//$ extends javax.swing.JButton

#include <javax/swing/JButton.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {
						class MotifFileChooserUI;
					}
				}
			}
		}
	}
}
namespace java {
	namespace awt {
		class Dimension;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

class $export MotifFileChooserUI$9 : public ::javax::swing::JButton {
	$class(MotifFileChooserUI$9, $NO_CLASS_INIT, ::javax::swing::JButton)
public:
	MotifFileChooserUI$9();
	using ::javax::swing::JButton::contains;
	using ::javax::swing::JButton::enable;
	using ::javax::swing::JButton::getBounds;
	using ::javax::swing::JButton::getSize;
	using ::javax::swing::JButton::getLocation;
	using ::javax::swing::JButton::firePropertyChange;
	using ::javax::swing::JButton::add;
	using ::javax::swing::JButton::getMousePosition;
	void init$(::com::sun::java::swing::plaf::motif::MotifFileChooserUI* this$0, $String* text);
	virtual ::java::awt::Dimension* getMaximumSize() override;
	using ::javax::swing::JButton::setUI;
	using ::javax::swing::JButton::requestFocus;
	using ::javax::swing::JButton::requestFocusInWindow;
	using ::javax::swing::JButton::repaint;
	using ::javax::swing::JButton::remove;
	using ::javax::swing::JButton::list;
	::com::sun::java::swing::plaf::motif::MotifFileChooserUI* this$0 = nullptr;
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_motif_MotifFileChooserUI$9_h_