#ifndef _javax_swing_Spring$CompoundSpring_h_
#define _javax_swing_Spring$CompoundSpring_h_
//$ class javax.swing.Spring$CompoundSpring
//$ extends javax.swing.Spring$StaticSpring

#include <javax/swing/Spring$StaticSpring.h>

namespace javax {
	namespace swing {
		class Spring;
		class SpringLayout;
	}
}

namespace javax {
	namespace swing {

class $import Spring$CompoundSpring : public ::javax::swing::Spring$StaticSpring {
	$class(Spring$CompoundSpring, $NO_CLASS_INIT, ::javax::swing::Spring$StaticSpring)
public:
	Spring$CompoundSpring();
	void init$(::javax::swing::Spring* s1, ::javax::swing::Spring* s2);
	virtual void clear() override;
	virtual int32_t getMaximumValue() override;
	virtual int32_t getMinimumValue() override;
	virtual int32_t getPreferredValue() override;
	virtual int32_t getValue() override;
	virtual bool isCyclic(::javax::swing::SpringLayout* l) override;
	virtual int32_t op(int32_t x, int32_t y) {return 0;}
	virtual $String* toString() override;
	::javax::swing::Spring* s1 = nullptr;
	::javax::swing::Spring* s2 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_Spring$CompoundSpring_h_