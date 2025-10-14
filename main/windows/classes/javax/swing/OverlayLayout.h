#ifndef _javax_swing_OverlayLayout_h_
#define _javax_swing_OverlayLayout_h_
//$ class javax.swing.OverlayLayout
//$ extends java.awt.LayoutManager2
//$ implements java.io.Serializable

#include <java/awt/LayoutManager2.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Component;
		class Container;
		class Dimension;
	}
}
namespace javax {
	namespace swing {
		class SizeRequirements;
	}
}

namespace javax {
	namespace swing {

class $export OverlayLayout : public ::java::awt::LayoutManager2, public ::java::io::Serializable {
	$class(OverlayLayout, $NO_CLASS_INIT, ::java::awt::LayoutManager2, ::java::io::Serializable)
public:
	OverlayLayout();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::Container* target);
	virtual void addLayoutComponent($String* name, ::java::awt::Component* comp) override;
	virtual void addLayoutComponent(::java::awt::Component* comp, Object$* constraints) override;
	virtual void checkContainer(::java::awt::Container* target);
	virtual void checkRequests();
	virtual float getLayoutAlignmentX(::java::awt::Container* target) override;
	virtual float getLayoutAlignmentY(::java::awt::Container* target) override;
	::java::awt::Container* getTarget();
	virtual void invalidateLayout(::java::awt::Container* target) override;
	virtual void layoutContainer(::java::awt::Container* target) override;
	virtual ::java::awt::Dimension* maximumLayoutSize(::java::awt::Container* target) override;
	virtual ::java::awt::Dimension* minimumLayoutSize(::java::awt::Container* target) override;
	virtual ::java::awt::Dimension* preferredLayoutSize(::java::awt::Container* target) override;
	virtual void removeLayoutComponent(::java::awt::Component* comp) override;
	virtual $String* toString() override;
	::java::awt::Container* target = nullptr;
	$Array<::javax::swing::SizeRequirements>* xChildren = nullptr;
	$Array<::javax::swing::SizeRequirements>* yChildren = nullptr;
	::javax::swing::SizeRequirements* xTotal = nullptr;
	::javax::swing::SizeRequirements* yTotal = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_OverlayLayout_h_