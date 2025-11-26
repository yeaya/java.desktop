#ifndef _javax_swing_Spring$StaticSpring_h_
#define _javax_swing_Spring$StaticSpring_h_
//$ class javax.swing.Spring$StaticSpring
//$ extends javax.swing.Spring$AbstractSpring

#include <javax/swing/Spring$AbstractSpring.h>

namespace javax {
	namespace swing {

class $export Spring$StaticSpring : public ::javax::swing::Spring$AbstractSpring {
	$class(Spring$StaticSpring, $NO_CLASS_INIT, ::javax::swing::Spring$AbstractSpring)
public:
	Spring$StaticSpring();
	void init$(int32_t pref);
	void init$(int32_t min, int32_t pref, int32_t max);
	virtual int32_t getMaximumValue() override;
	virtual int32_t getMinimumValue() override;
	virtual int32_t getPreferredValue() override;
	virtual $String* toString() override;
	int32_t min = 0;
	int32_t pref = 0;
	int32_t max = 0;
};

	} // swing
} // javax

#endif // _javax_swing_Spring$StaticSpring_h_