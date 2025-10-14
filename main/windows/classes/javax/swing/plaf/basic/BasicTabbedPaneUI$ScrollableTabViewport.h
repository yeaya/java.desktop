#ifndef _javax_swing_plaf_basic_BasicTabbedPaneUI$ScrollableTabViewport_h_
#define _javax_swing_plaf_basic_BasicTabbedPaneUI$ScrollableTabViewport_h_
//$ class javax.swing.plaf.basic.BasicTabbedPaneUI$ScrollableTabViewport
//$ extends javax.swing.JViewport
//$ implements javax.swing.plaf.UIResource

#include <javax/swing/JViewport.h>
#include <javax/swing/plaf/UIResource.h>

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

class BasicTabbedPaneUI$ScrollableTabViewport : public ::javax::swing::JViewport, public ::javax::swing::plaf::UIResource {
	$class(BasicTabbedPaneUI$ScrollableTabViewport, $NO_CLASS_INIT, ::javax::swing::JViewport, ::javax::swing::plaf::UIResource)
public:
	BasicTabbedPaneUI$ScrollableTabViewport();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::javax::swing::JViewport::firePropertyChange;
	using ::javax::swing::JViewport::contains;
	using ::javax::swing::JViewport::enable;
	using ::javax::swing::JViewport::getBounds;
	using ::javax::swing::JViewport::getSize;
	using ::javax::swing::JViewport::getLocation;
	using ::javax::swing::JViewport::add;
	using ::javax::swing::JViewport::getMousePosition;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::plaf::basic::BasicTabbedPaneUI* this$0);
	using ::javax::swing::JViewport::setUI;
	using ::javax::swing::JViewport::remove;
	using ::javax::swing::JViewport::repaint;
	using ::javax::swing::JViewport::requestFocus;
	using ::javax::swing::JViewport::requestFocusInWindow;
	using ::javax::swing::JViewport::list;
	virtual $String* toString() override;
	::javax::swing::plaf::basic::BasicTabbedPaneUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicTabbedPaneUI$ScrollableTabViewport_h_