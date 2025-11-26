#ifndef _com_sun_java_swing_plaf_gtk_GTKLookAndFeel$1_h_
#define _com_sun_java_swing_plaf_gtk_GTKLookAndFeel$1_h_
//$ class com.sun.java.swing.plaf.gtk.GTKLookAndFeel$1
//$ extends javax.swing.UIDefaults$ActiveValue

#include <javax/swing/UIDefaults$ActiveValue.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {
						class GTKLookAndFeel;
					}
				}
			}
		}
	}
}
namespace javax {
	namespace swing {
		class UIDefaults;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

class GTKLookAndFeel$1 : public ::javax::swing::UIDefaults$ActiveValue {
	$class(GTKLookAndFeel$1, $NO_CLASS_INIT, ::javax::swing::UIDefaults$ActiveValue)
public:
	GTKLookAndFeel$1();
	void init$(::com::sun::java::swing::plaf::gtk::GTKLookAndFeel* this$0);
	virtual $Object* createValue(::javax::swing::UIDefaults* table) override;
	::com::sun::java::swing::plaf::gtk::GTKLookAndFeel* this$0 = nullptr;
};

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_gtk_GTKLookAndFeel$1_h_