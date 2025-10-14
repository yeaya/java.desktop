#ifndef _javax_swing_plaf_synth_SynthIcon_h_
#define _javax_swing_plaf_synth_SynthIcon_h_
//$ interface javax.swing.plaf.synth.SynthIcon
//$ extends javax.swing.Icon

#include <javax/swing/Icon.h>

namespace java {
	namespace awt {
		class Component;
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

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

class $export SynthIcon : public ::javax::swing::Icon {
	$interface(SynthIcon, $NO_CLASS_INIT, ::javax::swing::Icon)
public:
	virtual int32_t getIconHeight(::javax::swing::plaf::synth::SynthContext* context) {return 0;}
	virtual int32_t getIconHeight() override;
	virtual int32_t getIconWidth(::javax::swing::plaf::synth::SynthContext* context) {return 0;}
	virtual int32_t getIconWidth() override;
	virtual void paintIcon(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {}
	virtual void paintIcon(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y) override;
};

			} // synth
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_synth_SynthIcon_h_