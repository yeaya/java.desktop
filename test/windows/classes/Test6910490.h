#ifndef _Test6910490_h_
#define _Test6910490_h_
//$ class Test6910490
//$ extends javax.swing.JApplet
//$ implements javax.swing.Icon

#include <javax/swing/Icon.h>
#include <javax/swing/JApplet.h>

namespace java {
	namespace awt {
		class Component;
		class Dimension;
		class Graphics;
	}
}
namespace javax {
	namespace swing {
		class JScrollPane;
	}
}
namespace javax {
	namespace swing {
		namespace border {
			class MatteBorder;
		}
	}
}

class $export Test6910490 : public ::javax::swing::JApplet, public ::javax::swing::Icon {
	$class(Test6910490, $NO_CLASS_INIT, ::javax::swing::JApplet, ::javax::swing::Icon)
public:
	Test6910490();
	using ::javax::swing::JApplet::add;
	using ::javax::swing::JApplet::getMousePosition;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	::javax::swing::JScrollPane* create($String* name, ::java::awt::Dimension* size, ::javax::swing::border::MatteBorder* border);
	virtual int32_t getIconHeight() override;
	virtual int32_t getIconWidth() override;
	virtual void init() override;
	using ::javax::swing::JApplet::list;
	virtual void paintIcon(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y) override;
	using ::javax::swing::JApplet::remove;
	using ::javax::swing::JApplet::repaint;
	virtual $String* toString() override;
};

#endif // _Test6910490_h_