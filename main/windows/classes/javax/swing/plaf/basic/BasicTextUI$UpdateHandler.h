#ifndef _javax_swing_plaf_basic_BasicTextUI$UpdateHandler_h_
#define _javax_swing_plaf_basic_BasicTextUI$UpdateHandler_h_
//$ class javax.swing.plaf.basic.BasicTextUI$UpdateHandler
//$ extends java.beans.PropertyChangeListener
//$ implements javax.swing.event.DocumentListener,java.awt.LayoutManager2,javax.swing.plaf.UIResource

#include <java/awt/LayoutManager2.h>
#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/event/DocumentListener.h>
#include <javax/swing/plaf/UIResource.h>

namespace java {
	namespace awt {
		class Component;
		class Container;
		class Dimension;
		class Shape;
	}
}
namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace java {
	namespace util {
		class Hashtable;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class DocumentEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicTextUI;
			}
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class View;
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicTextUI$UpdateHandler : public ::java::beans::PropertyChangeListener, public ::javax::swing::event::DocumentListener, public ::java::awt::LayoutManager2, public ::javax::swing::plaf::UIResource {
	$class(BasicTextUI$UpdateHandler, $NO_CLASS_INIT, ::java::beans::PropertyChangeListener, ::javax::swing::event::DocumentListener, ::java::awt::LayoutManager2, ::javax::swing::plaf::UIResource)
public:
	BasicTextUI$UpdateHandler();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::plaf::basic::BasicTextUI* this$0);
	virtual void addLayoutComponent($String* name, ::java::awt::Component* comp) override;
	virtual void addLayoutComponent(::java::awt::Component* comp, Object$* constraint) override;
	virtual ::java::awt::Shape* calculateViewPosition(::java::awt::Shape* alloc, ::javax::swing::text::View* v);
	virtual void changedUpdate(::javax::swing::event::DocumentEvent* e) override;
	void dropIndexChanged();
	virtual float getLayoutAlignmentX(::java::awt::Container* target) override;
	virtual float getLayoutAlignmentY(::java::awt::Container* target) override;
	virtual void insertUpdate(::javax::swing::event::DocumentEvent* e) override;
	virtual void invalidateLayout(::java::awt::Container* target) override;
	virtual void layoutContainer(::java::awt::Container* parent) override;
	virtual ::java::awt::Dimension* maximumLayoutSize(::java::awt::Container* target) override;
	virtual ::java::awt::Dimension* minimumLayoutSize(::java::awt::Container* parent) override;
	virtual ::java::awt::Dimension* preferredLayoutSize(::java::awt::Container* parent) override;
	virtual void propertyChange(::java::beans::PropertyChangeEvent* evt) override;
	virtual void removeLayoutComponent(::java::awt::Component* comp) override;
	virtual void removeUpdate(::javax::swing::event::DocumentEvent* e) override;
	virtual $String* toString() override;
	::javax::swing::plaf::basic::BasicTextUI* this$0 = nullptr;
	::java::util::Hashtable* constraints = nullptr;
	bool i18nView = false;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicTextUI$UpdateHandler_h_