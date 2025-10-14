#ifndef _javax_swing_plaf_basic_BasicTabbedPaneUI$ScrollableTabPanel_h_
#define _javax_swing_plaf_basic_BasicTabbedPaneUI$ScrollableTabPanel_h_
//$ class javax.swing.plaf.basic.BasicTabbedPaneUI$ScrollableTabPanel
//$ extends javax.swing.JPanel
//$ implements javax.swing.plaf.UIResource

#include <javax/swing/JPanel.h>
#include <javax/swing/plaf/UIResource.h>

namespace java {
	namespace awt {
		class Graphics;
	}
}
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

class BasicTabbedPaneUI$ScrollableTabPanel : public ::javax::swing::JPanel, public ::javax::swing::plaf::UIResource {
	$class(BasicTabbedPaneUI$ScrollableTabPanel, $NO_CLASS_INIT, ::javax::swing::JPanel, ::javax::swing::plaf::UIResource)
public:
	BasicTabbedPaneUI$ScrollableTabPanel();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::javax::swing::JPanel::contains;
	using ::javax::swing::JPanel::enable;
	using ::javax::swing::JPanel::getBounds;
	using ::javax::swing::JPanel::getSize;
	using ::javax::swing::JPanel::getLocation;
	using ::javax::swing::JPanel::firePropertyChange;
	using ::javax::swing::JPanel::add;
	using ::javax::swing::JPanel::getMousePosition;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::plaf::basic::BasicTabbedPaneUI* this$0);
	virtual void doLayout() override;
	using ::javax::swing::JPanel::list;
	virtual void paintComponent(::java::awt::Graphics* g) override;
	using ::javax::swing::JPanel::setUI;
	using ::javax::swing::JPanel::requestFocus;
	using ::javax::swing::JPanel::requestFocusInWindow;
	using ::javax::swing::JPanel::repaint;
	using ::javax::swing::JPanel::remove;
	virtual $String* toString() override;
	::javax::swing::plaf::basic::BasicTabbedPaneUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicTabbedPaneUI$ScrollableTabPanel_h_