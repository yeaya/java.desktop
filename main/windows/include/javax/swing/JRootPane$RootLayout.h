#ifndef _javax_swing_JRootPane$RootLayout_h_
#define _javax_swing_JRootPane$RootLayout_h_
//$ class javax.swing.JRootPane$RootLayout
//$ extends java.awt.LayoutManager2
//$ implements java.io.Serializable

#include <java/awt/LayoutManager2.h>
#include <java/io/Serializable.h>

namespace java {
	namespace awt {
		class Component;
		class Container;
		class Dimension;
	}
}
namespace javax {
	namespace swing {
		class JRootPane;
	}
}

namespace javax {
	namespace swing {

class $import JRootPane$RootLayout : public ::java::awt::LayoutManager2, public ::java::io::Serializable {
	$class(JRootPane$RootLayout, $NO_CLASS_INIT, ::java::awt::LayoutManager2, ::java::io::Serializable)
public:
	JRootPane$RootLayout();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::JRootPane* this$0);
	virtual void addLayoutComponent($String* name, ::java::awt::Component* comp) override;
	virtual void addLayoutComponent(::java::awt::Component* comp, Object$* constraints) override;
	virtual float getLayoutAlignmentX(::java::awt::Container* target) override;
	virtual float getLayoutAlignmentY(::java::awt::Container* target) override;
	virtual void invalidateLayout(::java::awt::Container* target) override;
	virtual void layoutContainer(::java::awt::Container* parent) override;
	virtual ::java::awt::Dimension* maximumLayoutSize(::java::awt::Container* target) override;
	virtual ::java::awt::Dimension* minimumLayoutSize(::java::awt::Container* parent) override;
	virtual ::java::awt::Dimension* preferredLayoutSize(::java::awt::Container* parent) override;
	virtual void removeLayoutComponent(::java::awt::Component* comp) override;
	virtual $String* toString() override;
	::javax::swing::JRootPane* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JRootPane$RootLayout_h_