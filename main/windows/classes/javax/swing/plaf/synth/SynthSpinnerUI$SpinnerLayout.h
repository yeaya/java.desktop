#ifndef _javax_swing_plaf_synth_SynthSpinnerUI$SpinnerLayout_h_
#define _javax_swing_plaf_synth_SynthSpinnerUI$SpinnerLayout_h_
//$ class javax.swing.plaf.synth.SynthSpinnerUI$SpinnerLayout
//$ extends java.awt.LayoutManager
//$ implements javax.swing.plaf.UIResource

#include <java/awt/LayoutManager.h>
#include <javax/swing/plaf/UIResource.h>

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

class SynthSpinnerUI$SpinnerLayout : public ::java::awt::LayoutManager, public ::javax::swing::plaf::UIResource {
	$class(SynthSpinnerUI$SpinnerLayout, $NO_CLASS_INIT, ::java::awt::LayoutManager, ::javax::swing::plaf::UIResource)
public:
	SynthSpinnerUI$SpinnerLayout();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void addLayoutComponent($String* name, ::java::awt::Component* c) override;
	virtual void layoutContainer(::java::awt::Container* parent) override;
	virtual ::java::awt::Dimension* minimumLayoutSize(::java::awt::Container* parent) override;
	virtual ::java::awt::Dimension* preferredLayoutSize(::java::awt::Container* parent) override;
	::java::awt::Dimension* preferredSize(::java::awt::Component* c);
	virtual void removeLayoutComponent(::java::awt::Component* c) override;
	void setBounds(::java::awt::Component* c, int32_t x, int32_t y, int32_t width, int32_t height);
	virtual $String* toString() override;
	::java::awt::Component* nextButton = nullptr;
	::java::awt::Component* previousButton = nullptr;
	::java::awt::Component* editor = nullptr;
};

			} // synth
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_synth_SynthSpinnerUI$SpinnerLayout_h_