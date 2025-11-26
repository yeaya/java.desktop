#ifndef _javax_swing_plaf_basic_BasicOptionPaneUI$ButtonAreaLayout_h_
#define _javax_swing_plaf_basic_BasicOptionPaneUI$ButtonAreaLayout_h_
//$ class javax.swing.plaf.basic.BasicOptionPaneUI$ButtonAreaLayout
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

class $import BasicOptionPaneUI$ButtonAreaLayout : public ::java::awt::LayoutManager {
	$class(BasicOptionPaneUI$ButtonAreaLayout, $NO_CLASS_INIT, ::java::awt::LayoutManager)
public:
	BasicOptionPaneUI$ButtonAreaLayout();
	void init$(bool syncAllWidths, int32_t padding);
	void init$(bool syncAllSizes, int32_t padding, int32_t orientation, bool reverseButtons);
	virtual void addLayoutComponent($String* string, ::java::awt::Component* comp) override;
	virtual bool getCentersChildren();
	int32_t getOrientation(::java::awt::Container* container);
	virtual int32_t getPadding();
	virtual bool getSyncAllWidths();
	virtual void layoutContainer(::java::awt::Container* container) override;
	virtual ::java::awt::Dimension* minimumLayoutSize(::java::awt::Container* c) override;
	virtual ::java::awt::Dimension* preferredLayoutSize(::java::awt::Container* c) override;
	virtual void removeLayoutComponent(::java::awt::Component* c) override;
	virtual void setCentersChildren(bool newValue);
	virtual void setPadding(int32_t newPadding);
	virtual void setSyncAllWidths(bool newValue);
	bool syncAllWidths = false;
	int32_t padding = 0;
	bool centersChildren = false;
	int32_t orientation = 0;
	bool reverseButtons = false;
	bool useOrientation = false;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicOptionPaneUI$ButtonAreaLayout_h_