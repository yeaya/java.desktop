#ifndef _javax_swing_Icon_h_
#define _javax_swing_Icon_h_
//$ interface javax.swing.Icon
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Component;
		class Graphics;
	}
}

namespace javax {
	namespace swing {

class $import Icon : public ::java::lang::Object {
	$interface(Icon, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t getIconHeight() {return 0;}
	virtual int32_t getIconWidth() {return 0;}
	virtual void paintIcon(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y) {}
};

	} // swing
} // javax

#endif // _javax_swing_Icon_h_