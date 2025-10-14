#ifndef _javax_swing_plaf_basic_BasicTabbedPaneUI$CroppedEdge_h_
#define _javax_swing_plaf_basic_BasicTabbedPaneUI$CroppedEdge_h_
//$ class javax.swing.plaf.basic.BasicTabbedPaneUI$CroppedEdge
//$ extends javax.swing.JPanel
//$ implements javax.swing.plaf.UIResource

#include <javax/swing/JPanel.h>
#include <javax/swing/plaf/UIResource.h>

namespace java {
	namespace awt {
		class Color;
		class Graphics;
		class Shape;
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

class BasicTabbedPaneUI$CroppedEdge : public ::javax::swing::JPanel, public ::javax::swing::plaf::UIResource {
	$class(BasicTabbedPaneUI$CroppedEdge, $NO_CLASS_INIT, ::javax::swing::JPanel, ::javax::swing::plaf::UIResource)
public:
	BasicTabbedPaneUI$CroppedEdge();
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
	::java::awt::Color* getBgColor();
	virtual int32_t getCropline();
	virtual int32_t getCroppedSideWidth();
	virtual int32_t getTabIndex();
	virtual bool isParamsSet();
	using ::javax::swing::JPanel::list;
	virtual void paintComponent(::java::awt::Graphics* g) override;
	using ::javax::swing::JPanel::requestFocus;
	using ::javax::swing::JPanel::requestFocusInWindow;
	using ::javax::swing::JPanel::repaint;
	using ::javax::swing::JPanel::remove;
	virtual void resetParams();
	virtual void setParams(int32_t tabIndex, int32_t cropline, int32_t cropx, int32_t cropy);
	using ::javax::swing::JPanel::setUI;
	virtual $String* toString() override;
	::javax::swing::plaf::basic::BasicTabbedPaneUI* this$0 = nullptr;
	::java::awt::Shape* shape = nullptr;
	int32_t tabIndex = 0;
	int32_t cropline = 0;
	int32_t cropx = 0;
	int32_t cropy = 0;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicTabbedPaneUI$CroppedEdge_h_