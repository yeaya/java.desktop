#ifndef _javax_swing_ViewportLayout_h_
#define _javax_swing_ViewportLayout_h_
//$ class javax.swing.ViewportLayout
//$ extends java.awt.LayoutManager
//$ implements java.io.Serializable

#include <java/awt/LayoutManager.h>
#include <java/io/Serializable.h>

#pragma push_macro("SHARED_INSTANCE")
#undef SHARED_INSTANCE

namespace java {
	namespace awt {
		class Component;
		class Container;
		class Dimension;
	}
}

namespace javax {
	namespace swing {

class $import ViewportLayout : public ::java::awt::LayoutManager, public ::java::io::Serializable {
	$class(ViewportLayout, 0, ::java::awt::LayoutManager, ::java::io::Serializable)
public:
	ViewportLayout();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void addLayoutComponent($String* name, ::java::awt::Component* c) override;
	virtual void layoutContainer(::java::awt::Container* parent) override;
	virtual ::java::awt::Dimension* minimumLayoutSize(::java::awt::Container* parent) override;
	virtual ::java::awt::Dimension* preferredLayoutSize(::java::awt::Container* parent) override;
	virtual void removeLayoutComponent(::java::awt::Component* c) override;
	virtual $String* toString() override;
	static ::javax::swing::ViewportLayout* SHARED_INSTANCE;
};

	} // swing
} // javax

#pragma pop_macro("SHARED_INSTANCE")

#endif // _javax_swing_ViewportLayout_h_