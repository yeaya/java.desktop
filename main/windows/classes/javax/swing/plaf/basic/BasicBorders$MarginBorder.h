#ifndef _javax_swing_plaf_basic_BasicBorders$MarginBorder_h_
#define _javax_swing_plaf_basic_BasicBorders$MarginBorder_h_
//$ class javax.swing.plaf.basic.BasicBorders$MarginBorder
//$ extends javax.swing.border.AbstractBorder
//$ implements javax.swing.plaf.UIResource

#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/plaf/UIResource.h>

namespace java {
	namespace awt {
		class Component;
		class Insets;
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicBorders$MarginBorder : public ::javax::swing::border::AbstractBorder, public ::javax::swing::plaf::UIResource {
	$class(BasicBorders$MarginBorder, $NO_CLASS_INIT, ::javax::swing::border::AbstractBorder, ::javax::swing::plaf::UIResource)
public:
	BasicBorders$MarginBorder();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::javax::swing::border::AbstractBorder::getBorderInsets;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual ::java::awt::Insets* getBorderInsets(::java::awt::Component* c, ::java::awt::Insets* insets) override;
	virtual $String* toString() override;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicBorders$MarginBorder_h_