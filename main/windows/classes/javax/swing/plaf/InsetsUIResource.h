#ifndef _javax_swing_plaf_InsetsUIResource_h_
#define _javax_swing_plaf_InsetsUIResource_h_
//$ class javax.swing.plaf.InsetsUIResource
//$ extends java.awt.Insets
//$ implements javax.swing.plaf.UIResource

#include <java/awt/Insets.h>
#include <javax/swing/plaf/UIResource.h>

namespace javax {
	namespace swing {
		namespace plaf {

class $export InsetsUIResource : public ::java::awt::Insets, public ::javax::swing::plaf::UIResource {
	$class(InsetsUIResource, $NO_CLASS_INIT, ::java::awt::Insets, ::javax::swing::plaf::UIResource)
public:
	InsetsUIResource();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int32_t top, int32_t left, int32_t bottom, int32_t right);
	virtual $String* toString() override;
};

		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_InsetsUIResource_h_