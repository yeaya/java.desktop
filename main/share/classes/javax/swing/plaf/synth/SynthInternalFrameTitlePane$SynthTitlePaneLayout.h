#ifndef _javax_swing_plaf_synth_SynthInternalFrameTitlePane$SynthTitlePaneLayout_h_
#define _javax_swing_plaf_synth_SynthInternalFrameTitlePane$SynthTitlePaneLayout_h_
//$ class javax.swing.plaf.synth.SynthInternalFrameTitlePane$SynthTitlePaneLayout
//$ extends java.awt.LayoutManager

#include <java/awt/LayoutManager.h>

namespace java {
	namespace awt {
		class Component;
		class Container;
		class Dimension;
		class Insets;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {
				class SynthInternalFrameTitlePane;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

class SynthInternalFrameTitlePane$SynthTitlePaneLayout : public ::java::awt::LayoutManager {
	$class(SynthInternalFrameTitlePane$SynthTitlePaneLayout, $NO_CLASS_INIT, ::java::awt::LayoutManager)
public:
	SynthInternalFrameTitlePane$SynthTitlePaneLayout();
	void init$(::javax::swing::plaf::synth::SynthInternalFrameTitlePane* this$0);
	virtual void addLayoutComponent($String* name, ::java::awt::Component* c) override;
	int32_t center(::java::awt::Component* c, ::java::awt::Insets* insets, int32_t x, bool trailing);
	virtual void layoutContainer(::java::awt::Container* c) override;
	virtual ::java::awt::Dimension* minimumLayoutSize(::java::awt::Container* c) override;
	virtual ::java::awt::Dimension* preferredLayoutSize(::java::awt::Container* c) override;
	virtual void removeLayoutComponent(::java::awt::Component* c) override;
	::javax::swing::plaf::synth::SynthInternalFrameTitlePane* this$0 = nullptr;
};

			} // synth
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_synth_SynthInternalFrameTitlePane$SynthTitlePaneLayout_h_