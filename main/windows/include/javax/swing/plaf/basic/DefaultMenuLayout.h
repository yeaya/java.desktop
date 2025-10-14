#ifndef _javax_swing_plaf_basic_DefaultMenuLayout_h_
#define _javax_swing_plaf_basic_DefaultMenuLayout_h_
//$ class javax.swing.plaf.basic.DefaultMenuLayout
//$ extends javax.swing.BoxLayout
//$ implements javax.swing.plaf.UIResource

#include <javax/swing/BoxLayout.h>
#include <javax/swing/plaf/UIResource.h>

namespace java {
	namespace awt {
		class Container;
		class Dimension;
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $import DefaultMenuLayout : public ::javax::swing::BoxLayout, public ::javax::swing::plaf::UIResource {
	$class(DefaultMenuLayout, $NO_CLASS_INIT, ::javax::swing::BoxLayout, ::javax::swing::plaf::UIResource)
public:
	DefaultMenuLayout();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::Container* target, int32_t axis);
	virtual ::java::awt::Dimension* preferredLayoutSize(::java::awt::Container* target) override;
	virtual $String* toString() override;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_DefaultMenuLayout_h_