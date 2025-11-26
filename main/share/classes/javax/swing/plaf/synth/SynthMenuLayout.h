#ifndef _javax_swing_plaf_synth_SynthMenuLayout_h_
#define _javax_swing_plaf_synth_SynthMenuLayout_h_
//$ class javax.swing.plaf.synth.SynthMenuLayout
//$ extends javax.swing.plaf.basic.DefaultMenuLayout

#include <javax/swing/plaf/basic/DefaultMenuLayout.h>

namespace java {
	namespace awt {
		class Container;
		class Dimension;
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

class SynthMenuLayout : public ::javax::swing::plaf::basic::DefaultMenuLayout {
	$class(SynthMenuLayout, $NO_CLASS_INIT, ::javax::swing::plaf::basic::DefaultMenuLayout)
public:
	SynthMenuLayout();
	void init$(::java::awt::Container* target, int32_t axis);
	virtual ::java::awt::Dimension* preferredLayoutSize(::java::awt::Container* target) override;
};

			} // synth
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_synth_SynthMenuLayout_h_