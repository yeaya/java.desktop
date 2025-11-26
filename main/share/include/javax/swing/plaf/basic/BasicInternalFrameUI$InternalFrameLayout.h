#ifndef _javax_swing_plaf_basic_BasicInternalFrameUI$InternalFrameLayout_h_
#define _javax_swing_plaf_basic_BasicInternalFrameUI$InternalFrameLayout_h_
//$ class javax.swing.plaf.basic.BasicInternalFrameUI$InternalFrameLayout
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
			namespace basic {
				class BasicInternalFrameUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $import BasicInternalFrameUI$InternalFrameLayout : public ::java::awt::LayoutManager {
	$class(BasicInternalFrameUI$InternalFrameLayout, $NO_CLASS_INIT, ::java::awt::LayoutManager)
public:
	BasicInternalFrameUI$InternalFrameLayout();
	void init$(::javax::swing::plaf::basic::BasicInternalFrameUI* this$0);
	virtual void addLayoutComponent($String* name, ::java::awt::Component* c) override;
	virtual void layoutContainer(::java::awt::Container* c) override;
	virtual ::java::awt::Dimension* minimumLayoutSize(::java::awt::Container* c) override;
	virtual ::java::awt::Dimension* preferredLayoutSize(::java::awt::Container* c) override;
	virtual void removeLayoutComponent(::java::awt::Component* c) override;
	::javax::swing::plaf::basic::BasicInternalFrameUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicInternalFrameUI$InternalFrameLayout_h_