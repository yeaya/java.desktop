#ifndef _javax_swing_plaf_BorderUIResource$LineBorderUIResource_h_
#define _javax_swing_plaf_BorderUIResource$LineBorderUIResource_h_
//$ class javax.swing.plaf.BorderUIResource$LineBorderUIResource
//$ extends javax.swing.border.LineBorder
//$ implements javax.swing.plaf.UIResource

#include <javax/swing/border/LineBorder.h>
#include <javax/swing/plaf/UIResource.h>

namespace java {
	namespace awt {
		class Color;
	}
}

namespace javax {
	namespace swing {
		namespace plaf {

class $export BorderUIResource$LineBorderUIResource : public ::javax::swing::border::LineBorder, public ::javax::swing::plaf::UIResource {
	$class(BorderUIResource$LineBorderUIResource, $NO_CLASS_INIT, ::javax::swing::border::LineBorder, ::javax::swing::plaf::UIResource)
public:
	BorderUIResource$LineBorderUIResource();
	using ::javax::swing::border::LineBorder::getBorderInsets;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::Color* color);
	void init$(::java::awt::Color* color, int32_t thickness);
	virtual $String* toString() override;
};

		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_BorderUIResource$LineBorderUIResource_h_