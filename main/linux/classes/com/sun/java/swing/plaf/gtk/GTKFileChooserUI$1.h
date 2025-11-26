#ifndef _com_sun_java_swing_plaf_gtk_GTKFileChooserUI$1_h_
#define _com_sun_java_swing_plaf_gtk_GTKFileChooserUI$1_h_
//$ class com.sun.java.swing.plaf.gtk.GTKFileChooserUI$1
//$ extends java.awt.FlowLayout

#include <java/awt/FlowLayout.h>

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
		class Container;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

class GTKFileChooserUI$1 : public ::java::awt::FlowLayout {
	$class(GTKFileChooserUI$1, $NO_CLASS_INIT, ::java::awt::FlowLayout)
public:
	GTKFileChooserUI$1();
	void init$(::com::sun::java::swing::plaf::gtk::GTKFileChooserUI* this$0, int32_t align, int32_t hgap, int32_t vgap);
	virtual void layoutContainer(::java::awt::Container* target) override;
	::com::sun::java::swing::plaf::gtk::GTKFileChooserUI* this$0 = nullptr;
};

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_gtk_GTKFileChooserUI$1_h_