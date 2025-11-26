#ifndef _javax_swing_Renderer_h_
#define _javax_swing_Renderer_h_
//$ interface javax.swing.Renderer
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Component;
	}
}

namespace javax {
	namespace swing {

class $import Renderer : public ::java::lang::Object {
	$interface(Renderer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::awt::Component* getComponent() {return nullptr;}
	virtual void setValue(Object$* aValue, bool isSelected) {}
};

	} // swing
} // javax

#endif // _javax_swing_Renderer_h_