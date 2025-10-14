#ifndef _javax_swing_Spring$HeightSpring_h_
#define _javax_swing_Spring$HeightSpring_h_
//$ class javax.swing.Spring$HeightSpring
//$ extends javax.swing.Spring$AbstractSpring

#include <javax/swing/Spring$AbstractSpring.h>

namespace java {
	namespace awt {
		class Component;
	}
}

namespace javax {
	namespace swing {

class $import Spring$HeightSpring : public ::javax::swing::Spring$AbstractSpring {
	$class(Spring$HeightSpring, $NO_CLASS_INIT, ::javax::swing::Spring$AbstractSpring)
public:
	Spring$HeightSpring();
	void init$(::java::awt::Component* c);
	virtual int32_t getMaximumValue() override;
	virtual int32_t getMinimumValue() override;
	virtual int32_t getPreferredValue() override;
	::java::awt::Component* c = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_Spring$HeightSpring_h_