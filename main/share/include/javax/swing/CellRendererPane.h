#ifndef _javax_swing_CellRendererPane_h_
#define _javax_swing_CellRendererPane_h_
//$ class javax.swing.CellRendererPane
//$ extends java.awt.Container
//$ implements javax.accessibility.Accessible

#include <java/awt/Container.h>
#include <javax/accessibility/Accessible.h>

namespace java {
	namespace awt {
		class Component;
		class Graphics;
		class Rectangle;
	}
}
namespace java {
	namespace io {
		class ObjectOutputStream;
	}
}
namespace javax {
	namespace accessibility {
		class AccessibleContext;
	}
}

namespace javax {
	namespace swing {

class $import CellRendererPane : public ::java::awt::Container, public ::javax::accessibility::Accessible {
	$class(CellRendererPane, $NO_CLASS_INIT, ::java::awt::Container, ::javax::accessibility::Accessible)
public:
	CellRendererPane();
	using ::java::awt::Container::add;
	using ::java::awt::Container::getMousePosition;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void addImpl(::java::awt::Component* x, Object$* constraints, int32_t index) override;
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	virtual void invalidate() override;
	using ::java::awt::Container::list;
	virtual void paint(::java::awt::Graphics* g) override;
	virtual void paintComponent(::java::awt::Graphics* g, ::java::awt::Component* c, ::java::awt::Container* p, int32_t x, int32_t y, int32_t w, int32_t h, bool shouldValidate);
	virtual void paintComponent(::java::awt::Graphics* g, ::java::awt::Component* c, ::java::awt::Container* p, int32_t x, int32_t y, int32_t w, int32_t h);
	virtual void paintComponent(::java::awt::Graphics* g, ::java::awt::Component* c, ::java::awt::Container* p, ::java::awt::Rectangle* r);
	using ::java::awt::Container::remove;
	virtual $String* toString() override;
	virtual void update(::java::awt::Graphics* g) override;
	void writeObject(::java::io::ObjectOutputStream* s);
	::javax::accessibility::AccessibleContext* accessibleContext = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_CellRendererPane_h_