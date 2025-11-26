#ifndef _javax_swing_Spring$AbstractSpring_h_
#define _javax_swing_Spring$AbstractSpring_h_
//$ class javax.swing.Spring$AbstractSpring
//$ extends javax.swing.Spring

#include <javax/swing/Spring.h>

namespace javax {
	namespace swing {

class $export Spring$AbstractSpring : public ::javax::swing::Spring {
	$class(Spring$AbstractSpring, $NO_CLASS_INIT, ::javax::swing::Spring)
public:
	Spring$AbstractSpring();
	void init$();
	virtual void clear();
	virtual int32_t getValue() override;
	virtual void setNonClearValue(int32_t size);
	virtual void setValue(int32_t size) override;
	int32_t size = 0;
};

	} // swing
} // javax

#endif // _javax_swing_Spring$AbstractSpring_h_