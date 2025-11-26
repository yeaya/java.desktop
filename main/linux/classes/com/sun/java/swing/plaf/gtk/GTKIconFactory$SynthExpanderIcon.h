#ifndef _com_sun_java_swing_plaf_gtk_GTKIconFactory$SynthExpanderIcon_h_
#define _com_sun_java_swing_plaf_gtk_GTKIconFactory$SynthExpanderIcon_h_
//$ class com.sun.java.swing.plaf.gtk.GTKIconFactory$SynthExpanderIcon
//$ extends com.sun.java.swing.plaf.gtk.GTKIconFactory$DelegatingIcon

#include <com/sun/java/swing/plaf/gtk/GTKIconFactory$DelegatingIcon.h>

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

class GTKIconFactory$SynthExpanderIcon : public ::com::sun::java::swing::plaf::gtk::GTKIconFactory$DelegatingIcon {
	$class(GTKIconFactory$SynthExpanderIcon, $NO_CLASS_INIT, ::com::sun::java::swing::plaf::gtk::GTKIconFactory$DelegatingIcon)
public:
	GTKIconFactory$SynthExpanderIcon();
	using ::com::sun::java::swing::plaf::gtk::GTKIconFactory$DelegatingIcon::getIconWidth;
	using ::com::sun::java::swing::plaf::gtk::GTKIconFactory$DelegatingIcon::getIconHeight;
	void init$($String* method);
	virtual int32_t getIconDimension(::javax::swing::plaf::synth::SynthContext* context) override;
	using ::com::sun::java::swing::plaf::gtk::GTKIconFactory$DelegatingIcon::paintIcon;
	virtual void paintIcon(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	void updateSizeIfNecessary(::javax::swing::plaf::synth::SynthContext* context);
};

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_gtk_GTKIconFactory$SynthExpanderIcon_h_