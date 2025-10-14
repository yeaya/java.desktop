#ifndef _javax_swing_plaf_basic_BasicTabbedPaneUI$ScrollableTabButton_h_
#define _javax_swing_plaf_basic_BasicTabbedPaneUI$ScrollableTabButton_h_
//$ class javax.swing.plaf.basic.BasicTabbedPaneUI$ScrollableTabButton
//$ extends javax.swing.plaf.basic.BasicArrowButton
//$ implements javax.swing.plaf.UIResource

#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicArrowButton.h>

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicTabbedPaneUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class BasicTabbedPaneUI$ScrollableTabButton : public ::javax::swing::plaf::basic::BasicArrowButton, public ::javax::swing::plaf::UIResource {
	$class(BasicTabbedPaneUI$ScrollableTabButton, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicArrowButton, ::javax::swing::plaf::UIResource)
public:
	BasicTabbedPaneUI$ScrollableTabButton();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
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
	void init$(::javax::swing::plaf::basic::BasicTabbedPaneUI* this$0, int32_t direction);
	using ::javax::swing::plaf::basic::BasicArrowButton::setUI;
	using ::javax::swing::plaf::basic::BasicArrowButton::requestFocus;
	using ::javax::swing::plaf::basic::BasicArrowButton::requestFocusInWindow;
	using ::javax::swing::plaf::basic::BasicArrowButton::repaint;
	using ::javax::swing::plaf::basic::BasicArrowButton::remove;
	using ::javax::swing::plaf::basic::BasicArrowButton::list;
	virtual $String* toString() override;
	::javax::swing::plaf::basic::BasicTabbedPaneUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicTabbedPaneUI$ScrollableTabButton_h_