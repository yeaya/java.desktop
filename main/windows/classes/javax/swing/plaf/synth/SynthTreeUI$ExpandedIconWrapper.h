#ifndef _javax_swing_plaf_synth_SynthTreeUI$ExpandedIconWrapper_h_
#define _javax_swing_plaf_synth_SynthTreeUI$ExpandedIconWrapper_h_
//$ class javax.swing.plaf.synth.SynthTreeUI$ExpandedIconWrapper
//$ extends javax.swing.plaf.synth.SynthIcon

#include <javax/swing/plaf/synth/SynthIcon.h>

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
				class SynthTreeUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

class SynthTreeUI$ExpandedIconWrapper : public ::javax::swing::plaf::synth::SynthIcon {
	$class(SynthTreeUI$ExpandedIconWrapper, $NO_CLASS_INIT, ::javax::swing::plaf::synth::SynthIcon)
public:
	SynthTreeUI$ExpandedIconWrapper();
	using ::javax::swing::plaf::synth::SynthIcon::getIconWidth;
	using ::javax::swing::plaf::synth::SynthIcon::getIconHeight;
	void init$(::javax::swing::plaf::synth::SynthTreeUI* this$0);
	virtual int32_t getIconHeight(::javax::swing::plaf::synth::SynthContext* context) override;
	virtual int32_t getIconWidth(::javax::swing::plaf::synth::SynthContext* context) override;
	using ::javax::swing::plaf::synth::SynthIcon::paintIcon;
	virtual void paintIcon(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	::javax::swing::plaf::synth::SynthTreeUI* this$0 = nullptr;
};

			} // synth
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_synth_SynthTreeUI$ExpandedIconWrapper_h_