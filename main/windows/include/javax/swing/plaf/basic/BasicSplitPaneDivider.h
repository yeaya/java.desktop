#ifndef _javax_swing_plaf_basic_BasicSplitPaneDivider_h_
#define _javax_swing_plaf_basic_BasicSplitPaneDivider_h_
//$ class javax.swing.plaf.basic.BasicSplitPaneDivider
//$ extends java.awt.Container
//$ implements java.beans.PropertyChangeListener

#include <java/awt/Container.h>
#include <java/beans/PropertyChangeListener.h>

#pragma push_macro("ONE_TOUCH_OFFSET")
#undef ONE_TOUCH_OFFSET
#pragma push_macro("ONE_TOUCH_SIZE")
#undef ONE_TOUCH_SIZE

namespace java {
	namespace awt {
		class Component;
		class Dimension;
		class Graphics;
		class Insets;
	}
}
namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace javax {
	namespace swing {
		class JButton;
		class JSplitPane;
	}
}
namespace javax {
	namespace swing {
		namespace border {
			class Border;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicSplitPaneDivider$DragController;
				class BasicSplitPaneDivider$MouseHandler;
				class BasicSplitPaneUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $import BasicSplitPaneDivider : public ::java::awt::Container, public ::java::beans::PropertyChangeListener {
	$class(BasicSplitPaneDivider, $NO_CLASS_INIT, ::java::awt::Container, ::java::beans::PropertyChangeListener)
public:
	BasicSplitPaneDivider();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::java::awt::Container::add;
	using ::java::awt::Container::getMousePosition;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::plaf::basic::BasicSplitPaneUI* ui);
	virtual ::javax::swing::JButton* createLeftOneTouchButton();
	virtual ::javax::swing::JButton* createRightOneTouchButton();
	virtual void dragDividerTo(int32_t location);
	virtual void finishDraggingTo(int32_t location);
	virtual ::javax::swing::plaf::basic::BasicSplitPaneUI* getBasicSplitPaneUI();
	virtual ::javax::swing::border::Border* getBorder();
	virtual int32_t getDividerSize();
	virtual ::java::awt::Insets* getInsets() override;
	virtual ::java::awt::Dimension* getMinimumSize() override;
	virtual ::java::awt::Dimension* getPreferredSize() override;
	virtual bool isMouseOver();
	using ::java::awt::Container::list;
	virtual void oneTouchExpandableChanged();
	virtual void paint(::java::awt::Graphics* g) override;
	virtual void prepareForDragging();
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	using ::java::awt::Container::remove;
	void revalidateSplitPane();
	virtual void setBasicSplitPaneUI(::javax::swing::plaf::basic::BasicSplitPaneUI* newUI);
	virtual void setBorder(::javax::swing::border::Border* border);
	virtual void setDividerSize(int32_t newSize);
	virtual void setMouseOver(bool mouseOver);
	virtual $String* toString() override;
	static const int32_t ONE_TOUCH_SIZE = 6;
	static const int32_t ONE_TOUCH_OFFSET = 2;
	::javax::swing::plaf::basic::BasicSplitPaneDivider$DragController* dragger = nullptr;
	::javax::swing::plaf::basic::BasicSplitPaneUI* splitPaneUI = nullptr;
	int32_t dividerSize = 0;
	::java::awt::Component* hiddenDivider = nullptr;
	::javax::swing::JSplitPane* splitPane = nullptr;
	::javax::swing::plaf::basic::BasicSplitPaneDivider$MouseHandler* mouseHandler = nullptr;
	int32_t orientation = 0;
	::javax::swing::JButton* leftButton = nullptr;
	::javax::swing::JButton* rightButton = nullptr;
	::javax::swing::border::Border* border = nullptr;
	bool mouseOver = false;
	int32_t oneTouchSize = 0;
	int32_t oneTouchOffset = 0;
	bool centerOneTouchButtons = false;
};

			} // basic
		} // plaf
	} // swing
} // javax

#pragma pop_macro("ONE_TOUCH_OFFSET")
#pragma pop_macro("ONE_TOUCH_SIZE")

#endif // _javax_swing_plaf_basic_BasicSplitPaneDivider_h_