#ifndef _javax_swing_plaf_BorderUIResource$EmptyBorderUIResource_h_
#define _javax_swing_plaf_BorderUIResource$EmptyBorderUIResource_h_
//$ class javax.swing.plaf.BorderUIResource$EmptyBorderUIResource
//$ extends javax.swing.border.EmptyBorder
//$ implements javax.swing.plaf.UIResource

#include <javax/swing/border/EmptyBorder.h>
#include <javax/swing/plaf/UIResource.h>

namespace java {
	namespace awt {
		class Insets;
	}
}

namespace javax {
	namespace swing {
		namespace plaf {

class $import BorderUIResource$EmptyBorderUIResource : public ::javax::swing::border::EmptyBorder, public ::javax::swing::plaf::UIResource {
	$class(BorderUIResource$EmptyBorderUIResource, $NO_CLASS_INIT, ::javax::swing::border::EmptyBorder, ::javax::swing::plaf::UIResource)
public:
	BorderUIResource$EmptyBorderUIResource();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::javax::swing::border::EmptyBorder::getBorderInsets;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int32_t top, int32_t left, int32_t bottom, int32_t right);
	void init$(::java::awt::Insets* insets);
	virtual $String* toString() override;
};

		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_BorderUIResource$EmptyBorderUIResource_h_