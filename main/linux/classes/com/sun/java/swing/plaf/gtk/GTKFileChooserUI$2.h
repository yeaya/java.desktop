#ifndef _com_sun_java_swing_plaf_gtk_GTKFileChooserUI$2_h_
#define _com_sun_java_swing_plaf_gtk_GTKFileChooserUI$2_h_
//$ class com.sun.java.swing.plaf.gtk.GTKFileChooserUI$2
//$ extends javax.swing.JLabel

#include <javax/swing/JLabel.h>

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

class GTKFileChooserUI$2 : public ::javax::swing::JLabel {
	$class(GTKFileChooserUI$2, $NO_CLASS_INIT, ::javax::swing::JLabel)
public:
	GTKFileChooserUI$2();
	using ::javax::swing::JLabel::contains;
	using ::javax::swing::JLabel::enable;
	using ::javax::swing::JLabel::getBounds;
	using ::javax::swing::JLabel::getSize;
	using ::javax::swing::JLabel::getLocation;
	using ::javax::swing::JLabel::firePropertyChange;
	using ::javax::swing::JLabel::add;
	using ::javax::swing::JLabel::getMousePosition;
	void init$(::com::sun::java::swing::plaf::gtk::GTKFileChooserUI* this$0, $String* text);
	virtual ::java::awt::Dimension* getMaximumSize() override;
	using ::javax::swing::JLabel::setUI;
	using ::javax::swing::JLabel::requestFocus;
	using ::javax::swing::JLabel::requestFocusInWindow;
	using ::javax::swing::JLabel::repaint;
	using ::javax::swing::JLabel::remove;
	using ::javax::swing::JLabel::list;
	::com::sun::java::swing::plaf::gtk::GTKFileChooserUI* this$0 = nullptr;
};

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_gtk_GTKFileChooserUI$2_h_