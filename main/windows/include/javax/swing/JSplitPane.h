#ifndef _javax_swing_JSplitPane_h_
#define _javax_swing_JSplitPane_h_
//$ class javax.swing.JSplitPane
//$ extends javax.swing.JComponent
//$ implements javax.accessibility.Accessible

#include <javax/accessibility/Accessible.h>
#include <javax/swing/JComponent.h>

#pragma push_macro("BOTTOM")
#undef BOTTOM
#pragma push_macro("CONTINUOUS_LAYOUT_PROPERTY")
#undef CONTINUOUS_LAYOUT_PROPERTY
#pragma push_macro("DIVIDER")
#undef DIVIDER
#pragma push_macro("DIVIDER_LOCATION_PROPERTY")
#undef DIVIDER_LOCATION_PROPERTY
#pragma push_macro("DIVIDER_SIZE_PROPERTY")
#undef DIVIDER_SIZE_PROPERTY
#pragma push_macro("HORIZONTAL_SPLIT")
#undef HORIZONTAL_SPLIT
#pragma push_macro("LAST_DIVIDER_LOCATION_PROPERTY")
#undef LAST_DIVIDER_LOCATION_PROPERTY
#pragma push_macro("LEFT")
#undef LEFT
#pragma push_macro("ONE_TOUCH_EXPANDABLE_PROPERTY")
#undef ONE_TOUCH_EXPANDABLE_PROPERTY
#pragma push_macro("ORIENTATION_PROPERTY")
#undef ORIENTATION_PROPERTY
#pragma push_macro("RESIZE_WEIGHT_PROPERTY")
#undef RESIZE_WEIGHT_PROPERTY
#pragma push_macro("RIGHT")
#undef RIGHT
#pragma push_macro("TOP")
#undef TOP
#pragma push_macro("VERTICAL_SPLIT")
#undef VERTICAL_SPLIT

namespace java {
	namespace awt {
		class Component;
		class Graphics;
	}
}
namespace java {
	namespace io {
		class ObjectOutputStream;
	}
}
namespace javax {
	namespace accessibility {
		class AccessibleContext;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			class ComponentUI;
			class SplitPaneUI;
		}
	}
}

namespace javax {
	namespace swing {

class $import JSplitPane : public ::javax::swing::JComponent, public ::javax::accessibility::Accessible {
	$class(JSplitPane, 0, ::javax::swing::JComponent, ::javax::accessibility::Accessible)
public:
	JSplitPane();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::javax::swing::JComponent::contains;
	using ::javax::swing::JComponent::enable;
	using ::javax::swing::JComponent::getBounds;
	using ::javax::swing::JComponent::getSize;
	using ::javax::swing::JComponent::getLocation;
	using ::javax::swing::JComponent::firePropertyChange;
	using ::javax::swing::JComponent::add;
	using ::javax::swing::JComponent::getMousePosition;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(int32_t newOrientation);
	void init$(int32_t newOrientation, bool newContinuousLayout);
	void init$(int32_t newOrientation, ::java::awt::Component* newLeftComponent, ::java::awt::Component* newRightComponent);
	void init$(int32_t newOrientation, bool newContinuousLayout, ::java::awt::Component* newLeftComponent, ::java::awt::Component* newRightComponent);
	virtual void addImpl(::java::awt::Component* comp, Object$* constraints, int32_t index) override;
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	virtual ::java::awt::Component* getBottomComponent();
	virtual int32_t getDividerLocation();
	virtual int32_t getDividerSize();
	virtual int32_t getLastDividerLocation();
	virtual ::java::awt::Component* getLeftComponent();
	virtual int32_t getMaximumDividerLocation();
	virtual int32_t getMinimumDividerLocation();
	virtual int32_t getOrientation();
	virtual double getResizeWeight();
	virtual ::java::awt::Component* getRightComponent();
	virtual ::java::awt::Component* getTopComponent();
	virtual ::javax::swing::plaf::ComponentUI* getUI() override;
	virtual $String* getUIClassID() override;
	virtual bool isContinuousLayout();
	virtual bool isOneTouchExpandable();
	virtual bool isValidateRoot() override;
	using ::javax::swing::JComponent::list;
	virtual void paintChildren(::java::awt::Graphics* g) override;
	virtual $String* paramString() override;
	using ::javax::swing::JComponent::remove;
	virtual void remove(::java::awt::Component* component) override;
	virtual void remove(int32_t index) override;
	virtual void removeAll() override;
	using ::javax::swing::JComponent::requestFocus;
	using ::javax::swing::JComponent::requestFocusInWindow;
	using ::javax::swing::JComponent::repaint;
	virtual void resetToPreferredSizes();
	virtual void setBottomComponent(::java::awt::Component* comp);
	virtual void setContinuousLayout(bool newContinuousLayout);
	virtual void setDividerLocation(double proportionalLocation);
	virtual void setDividerLocation(int32_t location);
	virtual void setDividerSize(int32_t newSize);
	virtual void setLastDividerLocation(int32_t newLastLocation);
	virtual void setLeftComponent(::java::awt::Component* comp);
	virtual void setOneTouchExpandable(bool newValue);
	virtual void setOrientation(int32_t orientation);
	virtual void setResizeWeight(double value);
	virtual void setRightComponent(::java::awt::Component* comp);
	virtual void setTopComponent(::java::awt::Component* comp);
	using ::javax::swing::JComponent::setUI;
	virtual void setUI(::javax::swing::plaf::SplitPaneUI* ui);
	virtual void setUIProperty($String* propertyName, Object$* value) override;
	virtual $String* toString() override;
	virtual void updateUI() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	static $String* uiClassID;
	static const int32_t VERTICAL_SPLIT = 0;
	static const int32_t HORIZONTAL_SPLIT = 1;
	static $String* LEFT;
	static $String* RIGHT;
	static $String* TOP;
	static $String* BOTTOM;
	static $String* DIVIDER;
	static $String* ORIENTATION_PROPERTY;
	static $String* CONTINUOUS_LAYOUT_PROPERTY;
	static $String* DIVIDER_SIZE_PROPERTY;
	static $String* ONE_TOUCH_EXPANDABLE_PROPERTY;
	static $String* LAST_DIVIDER_LOCATION_PROPERTY;
	static $String* DIVIDER_LOCATION_PROPERTY;
	static $String* RESIZE_WEIGHT_PROPERTY;
	int32_t orientation = 0;
	bool continuousLayout = false;
	::java::awt::Component* leftComponent = nullptr;
	::java::awt::Component* rightComponent = nullptr;
	int32_t dividerSize = 0;
	bool dividerSizeSet = false;
	bool oneTouchExpandable = false;
	bool oneTouchExpandableSet = false;
	int32_t lastDividerLocation = 0;
	double resizeWeight = 0.0;
	int32_t dividerLocation = 0;
};

	} // swing
} // javax

#pragma pop_macro("BOTTOM")
#pragma pop_macro("CONTINUOUS_LAYOUT_PROPERTY")
#pragma pop_macro("DIVIDER")
#pragma pop_macro("DIVIDER_LOCATION_PROPERTY")
#pragma pop_macro("DIVIDER_SIZE_PROPERTY")
#pragma pop_macro("HORIZONTAL_SPLIT")
#pragma pop_macro("LAST_DIVIDER_LOCATION_PROPERTY")
#pragma pop_macro("LEFT")
#pragma pop_macro("ONE_TOUCH_EXPANDABLE_PROPERTY")
#pragma pop_macro("ORIENTATION_PROPERTY")
#pragma pop_macro("RESIZE_WEIGHT_PROPERTY")
#pragma pop_macro("RIGHT")
#pragma pop_macro("TOP")
#pragma pop_macro("VERTICAL_SPLIT")

#endif // _javax_swing_JSplitPane_h_