#ifndef _com_sun_java_swing_plaf_gtk_GTKLookAndFeel$GnomeLayoutStyle_h_
#define _com_sun_java_swing_plaf_gtk_GTKLookAndFeel$GnomeLayoutStyle_h_
//$ class com.sun.java.swing.plaf.gtk.GTKLookAndFeel$GnomeLayoutStyle
//$ extends sun.swing.DefaultLayoutStyle

#include <sun/swing/DefaultLayoutStyle.h>

#pragma push_macro("INSTANCE")
#undef INSTANCE

namespace java {
	namespace awt {
		class Container;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
		class LayoutStyle$ComponentPlacement;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

class GTKLookAndFeel$GnomeLayoutStyle : public ::sun::swing::DefaultLayoutStyle {
	$class(GTKLookAndFeel$GnomeLayoutStyle, 0, ::sun::swing::DefaultLayoutStyle)
public:
	GTKLookAndFeel$GnomeLayoutStyle();
	void init$();
	virtual int32_t getContainerGap(::javax::swing::JComponent* component, int32_t position, ::java::awt::Container* parent) override;
	virtual int32_t getPreferredGap(::javax::swing::JComponent* component1, ::javax::swing::JComponent* component2, ::javax::swing::LayoutStyle$ComponentPlacement* type, int32_t position, ::java::awt::Container* parent) override;
	static ::com::sun::java::swing::plaf::gtk::GTKLookAndFeel$GnomeLayoutStyle* INSTANCE;
};

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#pragma pop_macro("INSTANCE")

#endif // _com_sun_java_swing_plaf_gtk_GTKLookAndFeel$GnomeLayoutStyle_h_