#ifndef _javax_swing_plaf_basic_BasicSplitPaneUI$BasicHorizontalLayoutManager_h_
#define _javax_swing_plaf_basic_BasicSplitPaneUI$BasicHorizontalLayoutManager_h_
//$ class javax.swing.plaf.basic.BasicSplitPaneUI$BasicHorizontalLayoutManager
//$ extends java.awt.LayoutManager2

#include <java/awt/LayoutManager2.h>
#include <java/lang/Array.h>

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
			namespace basic {
				class BasicSplitPaneUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $import BasicSplitPaneUI$BasicHorizontalLayoutManager : public ::java::awt::LayoutManager2 {
	$class(BasicSplitPaneUI$BasicHorizontalLayoutManager, $NO_CLASS_INIT, ::java::awt::LayoutManager2)
public:
	BasicSplitPaneUI$BasicHorizontalLayoutManager();
	void init$(::javax::swing::plaf::basic::BasicSplitPaneUI* this$0);
	void init$(::javax::swing::plaf::basic::BasicSplitPaneUI* this$0, int32_t axis);
	virtual void addLayoutComponent($String* place, ::java::awt::Component* component) override;
	virtual void addLayoutComponent(::java::awt::Component* comp, Object$* constraints) override;
	virtual void distributeSpace(int32_t space, bool keepHidden);
	virtual int32_t getAvailableSize(::java::awt::Dimension* containerSize, ::java::awt::Insets* insets);
	virtual int32_t getInitialLocation(::java::awt::Insets* insets);
	virtual float getLayoutAlignmentX(::java::awt::Container* target) override;
	virtual float getLayoutAlignmentY(::java::awt::Container* target) override;
	virtual int32_t getMinimumSizeOfComponent(::java::awt::Component* c);
	virtual $ints* getMinimumSizes();
	virtual int32_t getPreferredSizeOfComponent(::java::awt::Component* c);
	virtual $ints* getPreferredSizes();
	virtual int32_t getSizeForPrimaryAxis(::java::awt::Dimension* size);
	virtual int32_t getSizeForPrimaryAxis(::java::awt::Insets* insets, bool isTop);
	virtual int32_t getSizeForSecondaryAxis(::java::awt::Dimension* size);
	virtual int32_t getSizeForSecondaryAxis(::java::awt::Insets* insets, bool isTop);
	virtual int32_t getSizeOfComponent(::java::awt::Component* c);
	virtual $ints* getSizes();
	virtual void invalidateLayout(::java::awt::Container* c) override;
	virtual void layoutContainer(::java::awt::Container* container) override;
	virtual ::java::awt::Dimension* maximumLayoutSize(::java::awt::Container* target) override;
	virtual ::java::awt::Dimension* minimumLayoutSize(::java::awt::Container* container) override;
	virtual ::java::awt::Dimension* preferredLayoutSize(::java::awt::Container* container) override;
	virtual void removeLayoutComponent(::java::awt::Component* component) override;
	virtual void resetSizeAt(int32_t index);
	virtual void resetToPreferredSizes();
	virtual void resetToPreferredSizes(int32_t availableSize);
	virtual void setComponentToSize(::java::awt::Component* c, int32_t size, int32_t location, ::java::awt::Insets* insets, ::java::awt::Dimension* containerSize);
	virtual void setDividerLocation(int32_t leftSize, int32_t availableSize);
	virtual void setSizes($ints* newSizes);
	virtual void updateComponents();
	::javax::swing::plaf::basic::BasicSplitPaneUI* this$0 = nullptr;
	$ints* sizes = nullptr;
	$Array<::java::awt::Component>* components = nullptr;
	int32_t lastSplitPaneSize = 0;
	bool doReset = false;
	int32_t axis = 0;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicSplitPaneUI$BasicHorizontalLayoutManager_h_