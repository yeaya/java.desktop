#ifndef _javax_swing_Spring$NegativeSpring_h_
#define _javax_swing_Spring$NegativeSpring_h_
//$ class javax.swing.Spring$NegativeSpring
//$ extends javax.swing.Spring

#include <javax/swing/Spring.h>

namespace javax {
	namespace swing {
		class SpringLayout;
	}
}

namespace javax {
	namespace swing {

class Spring$NegativeSpring : public ::javax::swing::Spring {
	$class(Spring$NegativeSpring, $NO_CLASS_INIT, ::javax::swing::Spring)
public:
	Spring$NegativeSpring();
	void init$(::javax::swing::Spring* s);
	virtual int32_t getMaximumValue() override;
	virtual int32_t getMinimumValue() override;
	virtual int32_t getPreferredValue() override;
	virtual int32_t getValue() override;
	virtual bool isCyclic(::javax::swing::SpringLayout* l) override;
	virtual void setValue(int32_t size) override;
	::javax::swing::Spring* s = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_Spring$NegativeSpring_h_