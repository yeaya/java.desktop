#ifndef _com_apple_laf_AquaTabbedPaneCopyFromBasicUI$ScrollableTabButton_h_
#define _com_apple_laf_AquaTabbedPaneCopyFromBasicUI$ScrollableTabButton_h_
//$ class com.apple.laf.AquaTabbedPaneCopyFromBasicUI$ScrollableTabButton
//$ extends javax.swing.plaf.basic.BasicArrowButton
//$ implements javax.swing.plaf.UIResource

#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicArrowButton.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaTabbedPaneCopyFromBasicUI;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaTabbedPaneCopyFromBasicUI$ScrollableTabButton : public ::javax::swing::plaf::basic::BasicArrowButton, public ::javax::swing::plaf::UIResource {
	$class(AquaTabbedPaneCopyFromBasicUI$ScrollableTabButton, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicArrowButton, ::javax::swing::plaf::UIResource)
public:
	AquaTabbedPaneCopyFromBasicUI$ScrollableTabButton();
	using ::javax::swing::plaf::basic::BasicArrowButton::contains;
	using ::javax::swing::plaf::basic::BasicArrowButton::enable;
	using ::javax::swing::plaf::basic::BasicArrowButton::getBounds;
	using ::javax::swing::plaf::basic::BasicArrowButton::getSize;
	using ::javax::swing::plaf::basic::BasicArrowButton::getLocation;
	using ::javax::swing::plaf::basic::BasicArrowButton::firePropertyChange;
	using ::javax::swing::plaf::basic::BasicArrowButton::add;
	using ::javax::swing::plaf::basic::BasicArrowButton::getMousePosition;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::apple::laf::AquaTabbedPaneCopyFromBasicUI* this$0, int32_t direction);
	using ::javax::swing::plaf::basic::BasicArrowButton::setUI;
	using ::javax::swing::plaf::basic::BasicArrowButton::requestFocus;
	using ::javax::swing::plaf::basic::BasicArrowButton::requestFocusInWindow;
	using ::javax::swing::plaf::basic::BasicArrowButton::repaint;
	using ::javax::swing::plaf::basic::BasicArrowButton::remove;
	using ::javax::swing::plaf::basic::BasicArrowButton::list;
	virtual $String* toString() override;
	::com::apple::laf::AquaTabbedPaneCopyFromBasicUI* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaTabbedPaneCopyFromBasicUI$ScrollableTabButton_h_