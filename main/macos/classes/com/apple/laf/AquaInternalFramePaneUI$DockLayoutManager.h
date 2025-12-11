#ifndef _com_apple_laf_AquaInternalFramePaneUI$DockLayoutManager_h_
#define _com_apple_laf_AquaInternalFramePaneUI$DockLayoutManager_h_
//$ class com.apple.laf.AquaInternalFramePaneUI$DockLayoutManager
//$ extends java.awt.LayoutManager

#include <java/awt/LayoutManager.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaInternalFramePaneUI;
		}
	}
}
namespace java {
	namespace awt {
		class Component;
		class Container;
		class Dimension;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaInternalFramePaneUI$DockLayoutManager : public ::java::awt::LayoutManager {
	$class(AquaInternalFramePaneUI$DockLayoutManager, $NO_CLASS_INIT, ::java::awt::LayoutManager)
public:
	AquaInternalFramePaneUI$DockLayoutManager();
	void init$(::com::apple::laf::AquaInternalFramePaneUI* this$0);
	virtual void addLayoutComponent($String* name, ::java::awt::Component* comp) override;
	virtual void layoutContainer(::java::awt::Container* parent) override;
	virtual ::java::awt::Dimension* minimumLayoutSize(::java::awt::Container* parent) override;
	virtual ::java::awt::Dimension* preferredLayoutSize(::java::awt::Container* parent) override;
	virtual void removeLayoutComponent(::java::awt::Component* comp) override;
	::com::apple::laf::AquaInternalFramePaneUI* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaInternalFramePaneUI$DockLayoutManager_h_