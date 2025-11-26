#ifndef _com_sun_java_swing_plaf_gtk_GTKGraphicsUtils_h_
#define _com_sun_java_swing_plaf_gtk_GTKGraphicsUtils_h_
//$ class com.sun.java.swing.plaf.gtk.GTKGraphicsUtils
//$ extends javax.swing.plaf.synth.SynthGraphicsUtils

#include <javax/swing/plaf/synth/SynthGraphicsUtils.h>

namespace java {
	namespace awt {
		class Graphics;
		class Rectangle;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {
				class Region;
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

class GTKGraphicsUtils : public ::javax::swing::plaf::synth::SynthGraphicsUtils {
	$class(GTKGraphicsUtils, $NO_CLASS_INIT, ::javax::swing::plaf::synth::SynthGraphicsUtils)
public:
	GTKGraphicsUtils();
	void init$();
	using ::javax::swing::plaf::synth::SynthGraphicsUtils::paintText;
	virtual void paintText(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, $String* text, int32_t x, int32_t y, int32_t mnemonicIndex) override;
	virtual void paintText(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, $String* text, ::java::awt::Rectangle* bounds, int32_t mnemonicIndex) override;
	static bool shouldShadowText(::javax::swing::plaf::synth::Region* id, int32_t state);
};

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_gtk_GTKGraphicsUtils_h_