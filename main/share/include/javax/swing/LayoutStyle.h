#ifndef _javax_swing_LayoutStyle_h_
#define _javax_swing_LayoutStyle_h_
//$ class javax.swing.LayoutStyle
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Container;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
		class LayoutStyle$ComponentPlacement;
	}
}

namespace javax {
	namespace swing {

class $import LayoutStyle : public ::java::lang::Object {
	$class(LayoutStyle, $NO_CLASS_INIT, ::java::lang::Object)
public:
	LayoutStyle();
	void init$();
	virtual int32_t getContainerGap(::javax::swing::JComponent* component, int32_t position, ::java::awt::Container* parent) {return 0;}
	static ::javax::swing::LayoutStyle* getInstance();
	virtual int32_t getPreferredGap(::javax::swing::JComponent* component1, ::javax::swing::JComponent* component2, ::javax::swing::LayoutStyle$ComponentPlacement* type, int32_t position, ::java::awt::Container* parent) {return 0;}
	static void setInstance(::javax::swing::LayoutStyle* style);
};

	} // swing
} // javax

#endif // _javax_swing_LayoutStyle_h_