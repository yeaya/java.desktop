#ifndef _javax_swing_plaf_basic_BasicInternalFrameTitlePane$Handler_h_
#define _javax_swing_plaf_basic_BasicInternalFrameTitlePane$Handler_h_
//$ class javax.swing.plaf.basic.BasicInternalFrameTitlePane$Handler
//$ extends java.awt.LayoutManager
//$ implements java.beans.PropertyChangeListener

#include <java/awt/LayoutManager.h>
#include <java/beans/PropertyChangeListener.h>

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
		namespace plaf {
			namespace basic {
				class BasicInternalFrameTitlePane;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class BasicInternalFrameTitlePane$Handler : public ::java::awt::LayoutManager, public ::java::beans::PropertyChangeListener {
	$class(BasicInternalFrameTitlePane$Handler, $NO_CLASS_INIT, ::java::awt::LayoutManager, ::java::beans::PropertyChangeListener)
public:
	BasicInternalFrameTitlePane$Handler();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::plaf::basic::BasicInternalFrameTitlePane* this$0);
	virtual void addLayoutComponent($String* name, ::java::awt::Component* c) override;
	virtual void layoutContainer(::java::awt::Container* c) override;
	virtual ::java::awt::Dimension* minimumLayoutSize(::java::awt::Container* c) override;
	virtual ::java::awt::Dimension* preferredLayoutSize(::java::awt::Container* c) override;
	virtual void propertyChange(::java::beans::PropertyChangeEvent* evt) override;
	virtual void removeLayoutComponent(::java::awt::Component* c) override;
	virtual $String* toString() override;
	::javax::swing::plaf::basic::BasicInternalFrameTitlePane* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicInternalFrameTitlePane$Handler_h_