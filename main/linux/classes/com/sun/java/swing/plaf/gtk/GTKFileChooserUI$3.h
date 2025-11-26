#ifndef _com_sun_java_swing_plaf_gtk_GTKFileChooserUI$3_h_
#define _com_sun_java_swing_plaf_gtk_GTKFileChooserUI$3_h_
//$ class com.sun.java.swing.plaf.gtk.GTKFileChooserUI$3
//$ extends javax.swing.JTextField

#include <javax/swing/JTextField.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {
						class GTKFileChooserUI;
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
					namespace gtk {

class GTKFileChooserUI$3 : public ::javax::swing::JTextField {
	$class(GTKFileChooserUI$3, $NO_CLASS_INIT, ::javax::swing::JTextField)
public:
	GTKFileChooserUI$3();
	using ::javax::swing::JTextField::getToolTipText;
	using ::javax::swing::JTextField::contains;
	using ::javax::swing::JTextField::enable;
	using ::javax::swing::JTextField::getBounds;
	using ::javax::swing::JTextField::getSize;
	using ::javax::swing::JTextField::getLocation;
	using ::javax::swing::JTextField::firePropertyChange;
	using ::javax::swing::JTextField::add;
	using ::javax::swing::JTextField::getMousePosition;
	void init$(::com::sun::java::swing::plaf::gtk::GTKFileChooserUI* this$0);
	virtual ::java::awt::Dimension* getMaximumSize() override;
	using ::javax::swing::JTextField::setUI;
	using ::javax::swing::JTextField::print;
	using ::javax::swing::JTextField::requestFocus;
	using ::javax::swing::JTextField::requestFocusInWindow;
	using ::javax::swing::JTextField::repaint;
	using ::javax::swing::JTextField::remove;
	using ::javax::swing::JTextField::list;
	::com::sun::java::swing::plaf::gtk::GTKFileChooserUI* this$0 = nullptr;
};

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_gtk_GTKFileChooserUI$3_h_