#ifndef _com_sun_java_swing_plaf_motif_MotifFileChooserUI$4_h_
#define _com_sun_java_swing_plaf_motif_MotifFileChooserUI$4_h_
//$ class com.sun.java.swing.plaf.motif.MotifFileChooserUI$4
//$ extends javax.swing.JComboBox

#include <javax/swing/JComboBox.h>

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

class $export MotifFileChooserUI$4 : public ::javax::swing::JComboBox {
	$class(MotifFileChooserUI$4, $NO_CLASS_INIT, ::javax::swing::JComboBox)
public:
	MotifFileChooserUI$4();
	using ::javax::swing::JComboBox::contains;
	using ::javax::swing::JComboBox::enable;
	using ::javax::swing::JComboBox::getBounds;
	using ::javax::swing::JComboBox::getSize;
	using ::javax::swing::JComboBox::getLocation;
	using ::javax::swing::JComboBox::firePropertyChange;
	using ::javax::swing::JComboBox::add;
	using ::javax::swing::JComboBox::getMousePosition;
	void init$(::com::sun::java::swing::plaf::motif::MotifFileChooserUI* this$0);
	virtual ::java::awt::Dimension* getMaximumSize() override;
	using ::javax::swing::JComboBox::setUI;
	using ::javax::swing::JComboBox::requestFocus;
	using ::javax::swing::JComboBox::requestFocusInWindow;
	using ::javax::swing::JComboBox::repaint;
	using ::javax::swing::JComboBox::remove;
	using ::javax::swing::JComboBox::list;
	::com::sun::java::swing::plaf::motif::MotifFileChooserUI* this$0 = nullptr;
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_motif_MotifFileChooserUI$4_h_