#ifndef _javax_swing_Spring$SumSpring_h_
#define _javax_swing_Spring$SumSpring_h_
//$ class javax.swing.Spring$SumSpring
//$ extends javax.swing.Spring$CompoundSpring

#include <javax/swing/Spring$CompoundSpring.h>

namespace javax {
	namespace swing {
		class Spring;
	}
}

namespace javax {
	namespace swing {

class Spring$SumSpring : public ::javax::swing::Spring$CompoundSpring {
	$class(Spring$SumSpring, $NO_CLASS_INIT, ::javax::swing::Spring$CompoundSpring)
public:
	Spring$SumSpring();
	void init$(::javax::swing::Spring* s1, ::javax::swing::Spring* s2);
	virtual int32_t op(int32_t x, int32_t y) override;
	virtual void setNonClearValue(int32_t size) override;
};

	} // swing
} // javax

#endif // _javax_swing_Spring$SumSpring_h_