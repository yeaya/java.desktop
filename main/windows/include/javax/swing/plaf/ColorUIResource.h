#ifndef _javax_swing_plaf_ColorUIResource_h_
#define _javax_swing_plaf_ColorUIResource_h_
//$ class javax.swing.plaf.ColorUIResource
//$ extends java.awt.Color
//$ implements javax.swing.plaf.UIResource

#include <java/awt/Color.h>
#include <javax/swing/plaf/UIResource.h>

namespace javax {
	namespace swing {
		namespace plaf {

class $import ColorUIResource : public ::java::awt::Color, public ::javax::swing::plaf::UIResource {
	$class(ColorUIResource, $NO_CLASS_INIT, ::java::awt::Color, ::javax::swing::plaf::UIResource)
public:
	ColorUIResource();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int32_t r, int32_t g, int32_t b);
	void init$(int32_t rgb);
	void init$(float r, float g, float b);
	void init$(::java::awt::Color* c);
	virtual $String* toString() override;
};

		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_ColorUIResource_h_