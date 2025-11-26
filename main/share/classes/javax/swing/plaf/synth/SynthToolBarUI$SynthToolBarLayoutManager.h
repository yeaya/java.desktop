#ifndef _javax_swing_plaf_synth_SynthToolBarUI$SynthToolBarLayoutManager_h_
#define _javax_swing_plaf_synth_SynthToolBarUI$SynthToolBarLayoutManager_h_
//$ class javax.swing.plaf.synth.SynthToolBarUI$SynthToolBarLayoutManager
//$ extends java.awt.LayoutManager

#include <java/awt/LayoutManager.h>

namespace java {
	namespace awt {
		class Component;
		class Container;
		class Dimension;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {
				class SynthToolBarUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

class $export SynthToolBarUI$SynthToolBarLayoutManager : public ::java::awt::LayoutManager {
	$class(SynthToolBarUI$SynthToolBarLayoutManager, $NO_CLASS_INIT, ::java::awt::LayoutManager)
public:
	SynthToolBarUI$SynthToolBarLayoutManager();
	void init$(::javax::swing::plaf::synth::SynthToolBarUI* this$0);
	virtual void addLayoutComponent($String* name, ::java::awt::Component* comp) override;
	bool isGlue(::java::awt::Component* c);
	virtual void layoutContainer(::java::awt::Container* parent) override;
	virtual ::java::awt::Dimension* minimumLayoutSize(::java::awt::Container* parent) override;
	virtual ::java::awt::Dimension* preferredLayoutSize(::java::awt::Container* parent) override;
	virtual void removeLayoutComponent(::java::awt::Component* comp) override;
	::javax::swing::plaf::synth::SynthToolBarUI* this$0 = nullptr;
};

			} // synth
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_synth_SynthToolBarUI$SynthToolBarLayoutManager_h_