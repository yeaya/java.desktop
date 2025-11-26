#ifndef _com_sun_java_swing_plaf_gtk_GTKLookAndFeel$1FontLazyValue_h_
#define _com_sun_java_swing_plaf_gtk_GTKLookAndFeel$1FontLazyValue_h_
//$ class com.sun.java.swing.plaf.gtk.GTKLookAndFeel$1FontLazyValue
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
namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {
				class Region;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

class GTKLookAndFeel$1FontLazyValue : public ::javax::swing::UIDefaults$LazyValue {
	$class(GTKLookAndFeel$1FontLazyValue, $NO_CLASS_INIT, ::javax::swing::UIDefaults$LazyValue)
public:
	GTKLookAndFeel$1FontLazyValue();
	void init$(::com::sun::java::swing::plaf::gtk::GTKLookAndFeel* this$0, ::javax::swing::plaf::synth::Region* region);
	virtual $Object* createValue(::javax::swing::UIDefaults* table) override;
	::com::sun::java::swing::plaf::gtk::GTKLookAndFeel* this$0 = nullptr;
	::javax::swing::plaf::synth::Region* region = nullptr;
};

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_gtk_GTKLookAndFeel$1FontLazyValue_h_