#ifndef _javax_swing_BoxLayout_h_
#define _javax_swing_BoxLayout_h_
//$ class javax.swing.BoxLayout
//$ extends java.awt.LayoutManager2
//$ implements java.io.Serializable

#include <java/awt/LayoutManager2.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>

#pragma push_macro("LINE_AXIS")
#undef LINE_AXIS
#pragma push_macro("PAGE_AXIS")
#undef PAGE_AXIS
#pragma push_macro("X_AXIS")
#undef X_AXIS
#pragma push_macro("Y_AXIS")
#undef Y_AXIS

namespace java {
	namespace awt {
		class Component;
		class ComponentOrientation;
		class Container;
		class Dimension;
	}
}
namespace java {
	namespace io {
		class PrintStream;
	}
}
namespace javax {
	namespace swing {
		class SizeRequirements;
	}
}

namespace javax {
	namespace swing {

class $import BoxLayout : public ::java::awt::LayoutManager2, public ::java::io::Serializable {
	$class(BoxLayout, $NO_CLASS_INIT, ::java::awt::LayoutManager2, ::java::io::Serializable)
public:
	BoxLayout();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::Container* target, int32_t axis);
	void init$(::java::awt::Container* target, int32_t axis, ::java::io::PrintStream* dbg);
	virtual void addLayoutComponent($String* name, ::java::awt::Component* comp) override;
	virtual void addLayoutComponent(::java::awt::Component* comp, Object$* constraints) override;
	virtual void checkContainer(::java::awt::Container* target);
	virtual void checkRequests();
	int32_t getAxis();
	virtual float getLayoutAlignmentX(::java::awt::Container* target) override;
	virtual float getLayoutAlignmentY(::java::awt::Container* target) override;
	::java::awt::Container* getTarget();
	virtual void invalidateLayout(::java::awt::Container* target) override;
	virtual void layoutContainer(::java::awt::Container* target) override;
	virtual ::java::awt::Dimension* maximumLayoutSize(::java::awt::Container* target) override;
	virtual ::java::awt::Dimension* minimumLayoutSize(::java::awt::Container* target) override;
	virtual ::java::awt::Dimension* preferredLayoutSize(::java::awt::Container* target) override;
	virtual void removeLayoutComponent(::java::awt::Component* comp) override;
	int32_t resolveAxis(int32_t axis, ::java::awt::ComponentOrientation* o);
	virtual $String* toString() override;
	static const int32_t X_AXIS = 0;
	static const int32_t Y_AXIS = 1;
	static const int32_t LINE_AXIS = 2;
	static const int32_t PAGE_AXIS = 3;
	int32_t axis = 0;
	::java::awt::Container* target = nullptr;
	$Array<::javax::swing::SizeRequirements>* xChildren = nullptr;
	$Array<::javax::swing::SizeRequirements>* yChildren = nullptr;
	::javax::swing::SizeRequirements* xTotal = nullptr;
	::javax::swing::SizeRequirements* yTotal = nullptr;
	::java::io::PrintStream* dbg = nullptr;
};

	} // swing
} // javax

#pragma pop_macro("LINE_AXIS")
#pragma pop_macro("PAGE_AXIS")
#pragma pop_macro("X_AXIS")
#pragma pop_macro("Y_AXIS")

#endif // _javax_swing_BoxLayout_h_