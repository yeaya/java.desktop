#ifndef _javax_swing_Spring_h_
#define _javax_swing_Spring_h_
//$ class javax.swing.Spring
//$ extends java.lang.Object

#include <java/lang/Integer.h>

#pragma push_macro("MIN_VALUE")
#undef MIN_VALUE
#pragma push_macro("UNSET")
#undef UNSET

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

class $import Spring : public ::java::lang::Object {
	$class(Spring, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Spring();
	void init$();
	static void checkArg(Object$* s);
	static ::javax::swing::Spring* constant(int32_t pref);
	static ::javax::swing::Spring* constant(int32_t min, int32_t pref, int32_t max);
	static ::javax::swing::Spring* difference(::javax::swing::Spring* s1, ::javax::swing::Spring* s2);
	virtual int32_t getMaximumValue() {return 0;}
	virtual int32_t getMinimumValue() {return 0;}
	virtual int32_t getPreferredValue() {return 0;}
	virtual double getStrain();
	virtual int32_t getValue() {return 0;}
	static ::javax::swing::Spring* height(::java::awt::Component* c);
	virtual bool isCyclic(::javax::swing::SpringLayout* l);
	static ::javax::swing::Spring* max(::javax::swing::Spring* s1, ::javax::swing::Spring* s2);
	static ::javax::swing::Spring* minus(::javax::swing::Spring* s);
	double range(bool contract);
	static ::javax::swing::Spring* scale(::javax::swing::Spring* s, float factor);
	virtual void setStrain(double strain);
	virtual void setValue(int32_t value) {}
	static ::javax::swing::Spring* sum(::javax::swing::Spring* s1, ::javax::swing::Spring* s2);
	static ::javax::swing::Spring* width(::java::awt::Component* c);
	static const int32_t UNSET = ::java::lang::Integer::MIN_VALUE;
};

	} // swing
} // javax

#pragma pop_macro("MIN_VALUE")
#pragma pop_macro("UNSET")

#endif // _javax_swing_Spring_h_