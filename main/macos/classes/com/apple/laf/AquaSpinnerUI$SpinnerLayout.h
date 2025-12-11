#ifndef _com_apple_laf_AquaSpinnerUI$SpinnerLayout_h_
#define _com_apple_laf_AquaSpinnerUI$SpinnerLayout_h_
//$ class com.apple.laf.AquaSpinnerUI$SpinnerLayout
//$ extends java.awt.LayoutManager

#include <java/awt/LayoutManager.h>

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

class AquaSpinnerUI$SpinnerLayout : public ::java::awt::LayoutManager {
	$class(AquaSpinnerUI$SpinnerLayout, $NO_CLASS_INIT, ::java::awt::LayoutManager)
public:
	AquaSpinnerUI$SpinnerLayout();
	void init$();
	virtual void addLayoutComponent($String* name, ::java::awt::Component* c) override;
	virtual void layoutContainer(::java::awt::Container* parent) override;
	virtual ::java::awt::Dimension* minimumLayoutSize(::java::awt::Container* parent) override;
	virtual ::java::awt::Dimension* preferredLayoutSize(::java::awt::Container* parent) override;
	::java::awt::Dimension* preferredSize(::java::awt::Component* c);
	virtual void removeLayoutComponent(::java::awt::Component* c) override;
	void setBounds(::java::awt::Component* c, int32_t x, int32_t y, int32_t width, int32_t height);
	::java::awt::Component* nextButton = nullptr;
	::java::awt::Component* previousButton = nullptr;
	::java::awt::Component* editor = nullptr;
	::java::awt::Component* painter = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaSpinnerUI$SpinnerLayout_h_