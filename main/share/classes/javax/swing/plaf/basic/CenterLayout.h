#ifndef _javax_swing_plaf_basic_CenterLayout_h_
#define _javax_swing_plaf_basic_CenterLayout_h_
//$ class javax.swing.plaf.basic.CenterLayout
//$ extends java.awt.LayoutManager
//$ implements java.io.Serializable

#include <java/awt/LayoutManager.h>
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
		namespace plaf {
			namespace basic {

class CenterLayout : public ::java::awt::LayoutManager, public ::java::io::Serializable {
	$class(CenterLayout, $NO_CLASS_INIT, ::java::awt::LayoutManager, ::java::io::Serializable)
public:
	CenterLayout();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void addLayoutComponent($String* name, ::java::awt::Component* comp) override;
	virtual void layoutContainer(::java::awt::Container* container) override;
	virtual ::java::awt::Dimension* minimumLayoutSize(::java::awt::Container* cont) override;
	virtual ::java::awt::Dimension* preferredLayoutSize(::java::awt::Container* container) override;
	virtual void removeLayoutComponent(::java::awt::Component* comp) override;
	virtual $String* toString() override;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_CenterLayout_h_