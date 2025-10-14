#ifndef _javax_swing_JToolBar$DefaultToolBarLayout_h_
#define _javax_swing_JToolBar$DefaultToolBarLayout_h_
//$ class javax.swing.JToolBar$DefaultToolBarLayout
//$ extends java.awt.LayoutManager2
//$ implements java.io.Serializable,java.beans.PropertyChangeListener,javax.swing.plaf.UIResource

#include <java/awt/LayoutManager2.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/io/Serializable.h>
#include <javax/swing/plaf/UIResource.h>

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
		class BoxLayout;
		class JToolBar;
	}
}

namespace javax {
	namespace swing {

class JToolBar$DefaultToolBarLayout : public ::java::awt::LayoutManager2, public ::java::io::Serializable, public ::java::beans::PropertyChangeListener, public ::javax::swing::plaf::UIResource {
	$class(JToolBar$DefaultToolBarLayout, $NO_CLASS_INIT, ::java::awt::LayoutManager2, ::java::io::Serializable, ::java::beans::PropertyChangeListener, ::javax::swing::plaf::UIResource)
public:
	JToolBar$DefaultToolBarLayout();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::JToolBar* this$0, int32_t orientation);
	virtual void addLayoutComponent($String* name, ::java::awt::Component* comp) override;
	virtual void addLayoutComponent(::java::awt::Component* comp, Object$* constraints) override;
	virtual float getLayoutAlignmentX(::java::awt::Container* target) override;
	virtual float getLayoutAlignmentY(::java::awt::Container* target) override;
	virtual void invalidateLayout(::java::awt::Container* target) override;
	virtual void layoutContainer(::java::awt::Container* target) override;
	virtual ::java::awt::Dimension* maximumLayoutSize(::java::awt::Container* target) override;
	virtual ::java::awt::Dimension* minimumLayoutSize(::java::awt::Container* target) override;
	virtual ::java::awt::Dimension* preferredLayoutSize(::java::awt::Container* target) override;
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	virtual void removeLayoutComponent(::java::awt::Component* comp) override;
	virtual $String* toString() override;
	::javax::swing::JToolBar* this$0 = nullptr;
	::javax::swing::BoxLayout* lm = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JToolBar$DefaultToolBarLayout_h_