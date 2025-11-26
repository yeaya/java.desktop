#ifndef _javax_swing_plaf_basic_BasicComboBoxUI$ComboBoxLayoutManager_h_
#define _javax_swing_plaf_basic_BasicComboBoxUI$ComboBoxLayoutManager_h_
//$ class javax.swing.plaf.basic.BasicComboBoxUI$ComboBoxLayoutManager
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
				class BasicComboBoxUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $import BasicComboBoxUI$ComboBoxLayoutManager : public ::java::awt::LayoutManager {
	$class(BasicComboBoxUI$ComboBoxLayoutManager, $NO_CLASS_INIT, ::java::awt::LayoutManager)
public:
	BasicComboBoxUI$ComboBoxLayoutManager();
	void init$(::javax::swing::plaf::basic::BasicComboBoxUI* this$0);
	virtual void addLayoutComponent($String* name, ::java::awt::Component* comp) override;
	virtual void layoutContainer(::java::awt::Container* parent) override;
	virtual ::java::awt::Dimension* minimumLayoutSize(::java::awt::Container* parent) override;
	virtual ::java::awt::Dimension* preferredLayoutSize(::java::awt::Container* parent) override;
	virtual void removeLayoutComponent(::java::awt::Component* comp) override;
	::javax::swing::plaf::basic::BasicComboBoxUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicComboBoxUI$ComboBoxLayoutManager_h_