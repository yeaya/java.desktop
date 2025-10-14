#ifndef _javax_swing_LayoutComparator_h_
#define _javax_swing_LayoutComparator_h_
//$ class javax.swing.LayoutComparator
//$ extends java.util.Comparator
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/util/Comparator.h>

#pragma push_macro("ROW_TOLERANCE")
#undef ROW_TOLERANCE

namespace java {
	namespace awt {
		class Component;
		class ComponentOrientation;
	}
}

namespace javax {
	namespace swing {

class LayoutComparator : public ::java::util::Comparator, public ::java::io::Serializable {
	$class(LayoutComparator, $NO_CLASS_INIT, ::java::util::Comparator, ::java::io::Serializable)
public:
	LayoutComparator();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	int32_t compare(::java::awt::Component* a, ::java::awt::Component* b);
	virtual int32_t compare(Object$* a, Object$* b) override;
	void setComponentOrientation(::java::awt::ComponentOrientation* orientation);
	virtual $String* toString() override;
	static const int32_t ROW_TOLERANCE = 10;
	bool horizontal = false;
	bool leftToRight = false;
};

	} // swing
} // javax

#pragma pop_macro("ROW_TOLERANCE")

#endif // _javax_swing_LayoutComparator_h_