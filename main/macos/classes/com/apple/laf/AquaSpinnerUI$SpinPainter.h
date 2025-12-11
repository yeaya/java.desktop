#ifndef _com_apple_laf_AquaSpinnerUI$SpinPainter_h_
#define _com_apple_laf_AquaSpinnerUI$SpinPainter_h_
//$ class com.apple.laf.AquaSpinnerUI$SpinPainter
//$ extends javax.swing.JComponent

#include <javax/swing/JComponent.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaPainter;
			class AquaSpinnerUI;
		}
	}
}
namespace java {
	namespace awt {
		class Dimension;
		class Graphics;
	}
}
namespace javax {
	namespace swing {
		class AbstractButton;
		class ButtonModel;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaSpinnerUI$SpinPainter : public ::javax::swing::JComponent {
	$class(AquaSpinnerUI$SpinPainter, $NO_CLASS_INIT, ::javax::swing::JComponent)
public:
	AquaSpinnerUI$SpinPainter();
	using ::javax::swing::JComponent::contains;
	using ::javax::swing::JComponent::enable;
	using ::javax::swing::JComponent::getBounds;
	using ::javax::swing::JComponent::getSize;
	using ::javax::swing::JComponent::getLocation;
	using ::javax::swing::JComponent::firePropertyChange;
	using ::javax::swing::JComponent::add;
	using ::javax::swing::JComponent::getMousePosition;
	void init$(::com::apple::laf::AquaSpinnerUI* this$0, ::javax::swing::AbstractButton* top, ::javax::swing::AbstractButton* bottom);
	virtual ::java::awt::Dimension* getPreferredSize() override;
	using ::javax::swing::JComponent::list;
	virtual void paint(::java::awt::Graphics* g) override;
	using ::javax::swing::JComponent::requestFocus;
	using ::javax::swing::JComponent::requestFocusInWindow;
	using ::javax::swing::JComponent::repaint;
	using ::javax::swing::JComponent::remove;
	::com::apple::laf::AquaSpinnerUI* this$0 = nullptr;
	::com::apple::laf::AquaPainter* painter = nullptr;
	::javax::swing::ButtonModel* fTopModel = nullptr;
	::javax::swing::ButtonModel* fBottomModel = nullptr;
	bool fPressed = false;
	bool fTopPressed = false;
	::java::awt::Dimension* kPreferredSize = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaSpinnerUI$SpinPainter_h_