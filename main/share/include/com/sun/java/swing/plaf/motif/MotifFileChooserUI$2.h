#ifndef _com_sun_java_swing_plaf_motif_MotifFileChooserUI$2_h_
#define _com_sun_java_swing_plaf_motif_MotifFileChooserUI$2_h_
//$ class com.sun.java.swing.plaf.motif.MotifFileChooserUI$2
//$ extends javax.swing.JPanel

#include <javax/swing/JPanel.h>

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
		class Insets;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

class $import MotifFileChooserUI$2 : public ::javax::swing::JPanel {
	$class(MotifFileChooserUI$2, $NO_CLASS_INIT, ::javax::swing::JPanel)
public:
	MotifFileChooserUI$2();
	using ::javax::swing::JPanel::contains;
	using ::javax::swing::JPanel::getInsets;
	using ::javax::swing::JPanel::enable;
	using ::javax::swing::JPanel::getBounds;
	using ::javax::swing::JPanel::getSize;
	using ::javax::swing::JPanel::getLocation;
	using ::javax::swing::JPanel::firePropertyChange;
	using ::javax::swing::JPanel::add;
	using ::javax::swing::JPanel::getMousePosition;
	void init$(::com::sun::java::swing::plaf::motif::MotifFileChooserUI* this$0);
	virtual ::java::awt::Insets* getInsets() override;
	using ::javax::swing::JPanel::setUI;
	using ::javax::swing::JPanel::requestFocus;
	using ::javax::swing::JPanel::requestFocusInWindow;
	using ::javax::swing::JPanel::repaint;
	using ::javax::swing::JPanel::remove;
	using ::javax::swing::JPanel::list;
	::com::sun::java::swing::plaf::motif::MotifFileChooserUI* this$0 = nullptr;
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_motif_MotifFileChooserUI$2_h_