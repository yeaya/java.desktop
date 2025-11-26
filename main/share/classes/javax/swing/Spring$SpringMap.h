#ifndef _javax_swing_Spring$SpringMap_h_
#define _javax_swing_Spring$SpringMap_h_
//$ class javax.swing.Spring$SpringMap
//$ extends javax.swing.Spring

#include <javax/swing/Spring.h>

namespace javax {
	namespace swing {
		class SpringLayout;
	}
}

namespace javax {
	namespace swing {

class $export Spring$SpringMap : public ::javax::swing::Spring {
	$class(Spring$SpringMap, $NO_CLASS_INIT, ::javax::swing::Spring)
public:
	Spring$SpringMap();
	void init$(::javax::swing::Spring* s);
	virtual int32_t getMaximumValue() override;
	virtual int32_t getMinimumValue() override;
	virtual int32_t getPreferredValue() override;
	virtual int32_t getValue() override;
	virtual int32_t inv(int32_t i) {return 0;}
	virtual bool isCyclic(::javax::swing::SpringLayout* l) override;
	virtual int32_t map(int32_t i) {return 0;}
	virtual void setValue(int32_t value) override;
	::javax::swing::Spring* s = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_Spring$SpringMap_h_