#ifndef _javax_swing_plaf_basic_BasicSpinnerUI$Handler_h_
#define _javax_swing_plaf_basic_BasicSpinnerUI$Handler_h_
//$ class javax.swing.plaf.basic.BasicSpinnerUI$Handler
//$ extends java.awt.LayoutManager
//$ implements java.beans.PropertyChangeListener,javax.swing.event.ChangeListener

#include <java/awt/LayoutManager.h>
#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/event/ChangeListener.h>

namespace java {
	namespace awt {
		class Component;
		class Container;
		class Dimension;
	}
}
namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class ChangeEvent;
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class BasicSpinnerUI$Handler : public ::java::awt::LayoutManager, public ::java::beans::PropertyChangeListener, public ::javax::swing::event::ChangeListener {
	$class(BasicSpinnerUI$Handler, $NO_CLASS_INIT, ::java::awt::LayoutManager, ::java::beans::PropertyChangeListener, ::javax::swing::event::ChangeListener)
public:
	BasicSpinnerUI$Handler();
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
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	virtual void removeLayoutComponent(::java::awt::Component* c) override;
	void setBounds(::java::awt::Component* c, int32_t x, int32_t y, int32_t width, int32_t height);
	virtual void stateChanged(::javax::swing::event::ChangeEvent* e) override;
	virtual $String* toString() override;
	void updateToolTipTextForChildren(::javax::swing::JComponent* spinner);
	::java::awt::Component* nextButton = nullptr;
	::java::awt::Component* previousButton = nullptr;
	::java::awt::Component* editor = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicSpinnerUI$Handler_h_