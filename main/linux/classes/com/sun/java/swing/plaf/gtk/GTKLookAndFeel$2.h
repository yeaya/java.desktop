#ifndef _com_sun_java_swing_plaf_gtk_GTKLookAndFeel$2_h_
#define _com_sun_java_swing_plaf_gtk_GTKLookAndFeel$2_h_
//$ class com.sun.java.swing.plaf.gtk.GTKLookAndFeel$2
//$ extends javax.swing.UIDefaults$LazyValue

#include <javax/swing/UIDefaults$LazyValue.h>

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

class GTKLookAndFeel$2 : public ::javax::swing::UIDefaults$LazyValue {
	$class(GTKLookAndFeel$2, $NO_CLASS_INIT, ::javax::swing::UIDefaults$LazyValue)
public:
	GTKLookAndFeel$2();
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

#endif // _com_sun_java_swing_plaf_gtk_GTKLookAndFeel$2_h_