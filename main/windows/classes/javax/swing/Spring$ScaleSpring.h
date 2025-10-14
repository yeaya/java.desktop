#ifndef _javax_swing_Spring$ScaleSpring_h_
#define _javax_swing_Spring$ScaleSpring_h_
//$ class javax.swing.Spring$ScaleSpring
//$ extends javax.swing.Spring

#include <javax/swing/Spring.h>

namespace javax {
	namespace swing {
		class SpringLayout;
	}
}

namespace javax {
	namespace swing {

class Spring$ScaleSpring : public ::javax::swing::Spring {
	$class(Spring$ScaleSpring, $NO_CLASS_INIT, ::javax::swing::Spring)
public:
	Spring$ScaleSpring();
	void init$(::javax::swing::Spring* s, float factor);
	virtual int32_t getMaximumValue() override;
	virtual int32_t getMinimumValue() override;
	virtual int32_t getPreferredValue() override;
	virtual int32_t getValue() override;
	virtual bool isCyclic(::javax::swing::SpringLayout* l) override;
	virtual void setValue(int32_t value) override;
	::javax::swing::Spring* s = nullptr;
	float factor = 0.0;
};

	} // swing
} // javax

#endif // _javax_swing_Spring$ScaleSpring_h_