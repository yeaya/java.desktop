#ifndef _sun_swing_plaf_synth_SynthFileChooserUIImpl$ButtonAreaLayout_h_
#define _sun_swing_plaf_synth_SynthFileChooserUIImpl$ButtonAreaLayout_h_
//$ class sun.swing.plaf.synth.SynthFileChooserUIImpl$ButtonAreaLayout
//$ extends java.awt.LayoutManager

#include <java/awt/LayoutManager.h>

namespace java {
	namespace awt {
		class Component;
		class Container;
		class Dimension;
	}
}

namespace sun {
	namespace swing {
		namespace plaf {
			namespace synth {

class $import SynthFileChooserUIImpl$ButtonAreaLayout : public ::java::awt::LayoutManager {
	$class(SynthFileChooserUIImpl$ButtonAreaLayout, $NO_CLASS_INIT, ::java::awt::LayoutManager)
public:
	SynthFileChooserUIImpl$ButtonAreaLayout();
	void init$();
	virtual void addLayoutComponent($String* string, ::java::awt::Component* comp) override;
	virtual void layoutContainer(::java::awt::Container* container) override;
	virtual ::java::awt::Dimension* minimumLayoutSize(::java::awt::Container* c) override;
	virtual ::java::awt::Dimension* preferredLayoutSize(::java::awt::Container* c) override;
	virtual void removeLayoutComponent(::java::awt::Component* c) override;
	int32_t hGap = 0;
	int32_t topMargin = 0;
};

			} // synth
		} // plaf
	} // swing
} // sun

#endif // _sun_swing_plaf_synth_SynthFileChooserUIImpl$ButtonAreaLayout_h_