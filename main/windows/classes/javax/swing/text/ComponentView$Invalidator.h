#ifndef _javax_swing_text_ComponentView$Invalidator_h_
#define _javax_swing_text_ComponentView$Invalidator_h_
//$ class javax.swing.text.ComponentView$Invalidator
//$ extends java.awt.Container
//$ implements java.beans.PropertyChangeListener

#include <java/awt/Container.h>
#include <java/beans/PropertyChangeListener.h>

namespace java {
	namespace awt {
		class Component;
		class Dimension;
	}
}
namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace java {
	namespace util {
		class Set;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class ComponentView;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $export ComponentView$Invalidator : public ::java::awt::Container, public ::java::beans::PropertyChangeListener {
	$class(ComponentView$Invalidator, $NO_CLASS_INIT, ::java::awt::Container, ::java::beans::PropertyChangeListener)
public:
	ComponentView$Invalidator();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::java::awt::Container::add;
	using ::java::awt::Container::getMousePosition;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::text::ComponentView* this$0, ::java::awt::Component* child);
	void cacheChildSizes();
	virtual void doLayout() override;
	virtual float getAlignmentX() override;
	virtual float getAlignmentY() override;
	virtual ::java::util::Set* getFocusTraversalKeys(int32_t id) override;
	virtual ::java::awt::Dimension* getMaximumSize() override;
	virtual ::java::awt::Dimension* getMinimumSize() override;
	virtual ::java::awt::Dimension* getPreferredSize() override;
	virtual void invalidate() override;
	virtual bool isShowing() override;
	using ::java::awt::Container::list;
	virtual void propertyChange(::java::beans::PropertyChangeEvent* ev) override;
	using ::java::awt::Container::remove;
	using ::java::awt::Container::setBounds;
	virtual void setBounds(int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void setVisible(bool b) override;
	virtual $String* toString() override;
	virtual void validateIfNecessary();
	::javax::swing::text::ComponentView* this$0 = nullptr;
	::java::awt::Dimension* min = nullptr;
	::java::awt::Dimension* pref = nullptr;
	::java::awt::Dimension* max = nullptr;
	float yalign = 0.0;
	float xalign = 0.0;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_ComponentView$Invalidator_h_