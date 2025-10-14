#ifndef _javax_swing_plaf_BorderUIResource$CompoundBorderUIResource_h_
#define _javax_swing_plaf_BorderUIResource$CompoundBorderUIResource_h_
//$ class javax.swing.plaf.BorderUIResource$CompoundBorderUIResource
//$ extends javax.swing.border.CompoundBorder
//$ implements javax.swing.plaf.UIResource

#include <javax/swing/border/CompoundBorder.h>
#include <javax/swing/plaf/UIResource.h>

namespace javax {
	namespace swing {
		namespace border {
			class Border;
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {

class $import BorderUIResource$CompoundBorderUIResource : public ::javax::swing::border::CompoundBorder, public ::javax::swing::plaf::UIResource {
	$class(BorderUIResource$CompoundBorderUIResource, $NO_CLASS_INIT, ::javax::swing::border::CompoundBorder, ::javax::swing::plaf::UIResource)
public:
	BorderUIResource$CompoundBorderUIResource();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::javax::swing::border::CompoundBorder::getBorderInsets;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::border::Border* outsideBorder, ::javax::swing::border::Border* insideBorder);
	virtual $String* toString() override;
};

		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_BorderUIResource$CompoundBorderUIResource_h_