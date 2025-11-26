#ifndef _com_sun_java_swing_plaf_gtk_GTKStyle$GTKLazyValue_h_
#define _com_sun_java_swing_plaf_gtk_GTKStyle$GTKLazyValue_h_
//$ class com.sun.java.swing.plaf.gtk.GTKStyle$GTKLazyValue
//$ extends javax.swing.UIDefaults$LazyValue

#include <javax/swing/UIDefaults$LazyValue.h>

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

class GTKStyle$GTKLazyValue : public ::javax::swing::UIDefaults$LazyValue {
	$class(GTKStyle$GTKLazyValue, $NO_CLASS_INIT, ::javax::swing::UIDefaults$LazyValue)
public:
	GTKStyle$GTKLazyValue();
	void init$($String* name);
	void init$($String* name, $String* methodName);
	virtual $Object* createValue(::javax::swing::UIDefaults* table) override;
	$String* className = nullptr;
	$String* methodName = nullptr;
};

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_gtk_GTKStyle$GTKLazyValue_h_