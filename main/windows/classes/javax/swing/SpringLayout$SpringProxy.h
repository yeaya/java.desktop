#ifndef _javax_swing_SpringLayout$SpringProxy_h_
#define _javax_swing_SpringLayout$SpringProxy_h_
//$ class javax.swing.SpringLayout$SpringProxy
//$ extends javax.swing.Spring

#include <javax/swing/Spring.h>

namespace java {
	namespace awt {
		class Component;
	}
}
namespace javax {
	namespace swing {
		class SpringLayout;
	}
}

namespace javax {
	namespace swing {

class SpringLayout$SpringProxy : public ::javax::swing::Spring {
	$class(SpringLayout$SpringProxy, $NO_CLASS_INIT, ::javax::swing::Spring)
public:
	SpringLayout$SpringProxy();
	void init$($String* edgeName, ::java::awt::Component* c, ::javax::swing::SpringLayout* l);
	::javax::swing::Spring* getConstraint();
	virtual int32_t getMaximumValue() override;
	virtual int32_t getMinimumValue() override;
	virtual int32_t getPreferredValue() override;
	virtual int32_t getValue() override;
	virtual bool isCyclic(::javax::swing::SpringLayout* l) override;
	virtual void setValue(int32_t size) override;
	virtual $String* toString() override;
	$String* edgeName = nullptr;
	::java::awt::Component* c = nullptr;
	::javax::swing::SpringLayout* l = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_SpringLayout$SpringProxy_h_