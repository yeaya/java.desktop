#ifndef _sun_swing_plaf_synth_SynthFileChooserUIImpl$IndentIcon_h_
#define _sun_swing_plaf_synth_SynthFileChooserUIImpl$IndentIcon_h_
//$ class sun.swing.plaf.synth.SynthFileChooserUIImpl$IndentIcon
//$ extends javax.swing.Icon

#include <javax/swing/Icon.h>

namespace java {
	namespace awt {
		class Component;
		class Graphics;
	}
}
namespace sun {
	namespace swing {
		namespace plaf {
			namespace synth {
				class SynthFileChooserUIImpl;
			}
		}
	}
}

namespace sun {
	namespace swing {
		namespace plaf {
			namespace synth {

class $import SynthFileChooserUIImpl$IndentIcon : public ::javax::swing::Icon {
	$class(SynthFileChooserUIImpl$IndentIcon, $NO_CLASS_INIT, ::javax::swing::Icon)
public:
	SynthFileChooserUIImpl$IndentIcon();
	void init$(::sun::swing::plaf::synth::SynthFileChooserUIImpl* this$0);
	virtual int32_t getIconHeight() override;
	virtual int32_t getIconWidth() override;
	virtual void paintIcon(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y) override;
	::sun::swing::plaf::synth::SynthFileChooserUIImpl* this$0 = nullptr;
	::javax::swing::Icon* icon = nullptr;
	int32_t depth = 0;
};

			} // synth
		} // plaf
	} // swing
} // sun

#endif // _sun_swing_plaf_synth_SynthFileChooserUIImpl$IndentIcon_h_