#ifndef _com_sun_java_swing_plaf_gtk_GTKStyle$GTKStockIcon_h_
#define _com_sun_java_swing_plaf_gtk_GTKStyle$GTKStockIcon_h_
//$ class com.sun.java.swing.plaf.gtk.GTKStyle$GTKStockIcon
//$ extends javax.swing.plaf.synth.SynthIcon

#include <javax/swing/plaf/synth/SynthIcon.h>

namespace java {
	namespace awt {
		class Graphics;
	}
}
namespace javax {
	namespace swing {
		class Icon;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {
				class SynthContext;
				class SynthStyle;
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

class GTKStyle$GTKStockIcon : public ::javax::swing::plaf::synth::SynthIcon {
	$class(GTKStyle$GTKStockIcon, $NO_CLASS_INIT, ::javax::swing::plaf::synth::SynthIcon)
public:
	GTKStyle$GTKStockIcon();
	using ::javax::swing::plaf::synth::SynthIcon::getIconWidth;
	using ::javax::swing::plaf::synth::SynthIcon::getIconHeight;
	void init$($String* key, int32_t size);
	::javax::swing::Icon* getIcon(::javax::swing::plaf::synth::SynthContext* context);
	virtual int32_t getIconHeight(::javax::swing::plaf::synth::SynthContext* context) override;
	virtual int32_t getIconWidth(::javax::swing::plaf::synth::SynthContext* context) override;
	using ::javax::swing::plaf::synth::SynthIcon::paintIcon;
	virtual void paintIcon(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	$String* key = nullptr;
	int32_t size = 0;
	bool loadedLTR = false;
	bool loadedRTL = false;
	::javax::swing::Icon* ltrIcon = nullptr;
	::javax::swing::Icon* rtlIcon = nullptr;
	::javax::swing::plaf::synth::SynthStyle* style = nullptr;
};

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_gtk_GTKStyle$GTKStockIcon_h_