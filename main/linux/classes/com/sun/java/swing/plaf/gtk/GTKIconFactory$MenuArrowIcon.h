#ifndef _com_sun_java_swing_plaf_gtk_GTKIconFactory$MenuArrowIcon_h_
#define _com_sun_java_swing_plaf_gtk_GTKIconFactory$MenuArrowIcon_h_
//$ class com.sun.java.swing.plaf.gtk.GTKIconFactory$MenuArrowIcon
//$ extends com.sun.java.swing.plaf.gtk.GTKIconFactory$DelegatingIcon

#include <com/sun/java/swing/plaf/gtk/GTKIconFactory$DelegatingIcon.h>
#include <java/lang/Array.h>

#pragma push_macro("PARAM_TYPES")
#undef PARAM_TYPES

namespace java {
	namespace awt {
		class Graphics;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {
				class SynthContext;
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

class GTKIconFactory$MenuArrowIcon : public ::com::sun::java::swing::plaf::gtk::GTKIconFactory$DelegatingIcon {
	$class(GTKIconFactory$MenuArrowIcon, 0, ::com::sun::java::swing::plaf::gtk::GTKIconFactory$DelegatingIcon)
public:
	GTKIconFactory$MenuArrowIcon();
	using ::com::sun::java::swing::plaf::gtk::GTKIconFactory$DelegatingIcon::getIconWidth;
	using ::com::sun::java::swing::plaf::gtk::GTKIconFactory$DelegatingIcon::getIconHeight;
	void init$();
	virtual $ClassArray* getMethodParamTypes() override;
	using ::com::sun::java::swing::plaf::gtk::GTKIconFactory$DelegatingIcon::paintIcon;
	virtual void paintIcon(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	static $ClassArray* PARAM_TYPES;
};

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#pragma pop_macro("PARAM_TYPES")

#endif // _com_sun_java_swing_plaf_gtk_GTKIconFactory$MenuArrowIcon_h_