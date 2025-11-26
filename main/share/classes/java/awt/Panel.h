#ifndef _java_awt_Panel_h_
#define _java_awt_Panel_h_
//$ class java.awt.Panel
//$ extends java.awt.Container
//$ implements javax.accessibility.Accessible

#include <java/awt/Container.h>
#include <javax/accessibility/Accessible.h>

namespace java {
	namespace awt {
		class LayoutManager;
	}
}
namespace javax {
	namespace accessibility {
		class AccessibleContext;
	}
}

namespace java {
	namespace awt {

class $export Panel : public ::java::awt::Container, public ::javax::accessibility::Accessible {
	$class(Panel, 0, ::java::awt::Container, ::javax::accessibility::Accessible)
public:
	Panel();
	using ::java::awt::Container::add;
	using ::java::awt::Container::getMousePosition;
	using ::java::awt::Container::list;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(::java::awt::LayoutManager* layout);
	virtual void addNotify() override;
	virtual $String* constructComponentName() override;
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	using ::java::awt::Container::remove;
	virtual $String* toString() override;
	static $String* base;
	static int32_t nameCounter;
	static const int64_t serialVersionUID = (int64_t)0xDA242A3110E613DE;
};

	} // awt
} // java

#endif // _java_awt_Panel_h_