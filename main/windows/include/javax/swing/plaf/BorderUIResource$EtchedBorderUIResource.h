#ifndef _javax_swing_plaf_BorderUIResource$EtchedBorderUIResource_h_
#define _javax_swing_plaf_BorderUIResource$EtchedBorderUIResource_h_
//$ class javax.swing.plaf.BorderUIResource$EtchedBorderUIResource
//$ extends javax.swing.border.EtchedBorder
//$ implements javax.swing.plaf.UIResource

#include <javax/swing/border/EtchedBorder.h>
#include <javax/swing/plaf/UIResource.h>

namespace java {
	namespace awt {
		class Color;
	}
}

namespace javax {
	namespace swing {
		namespace plaf {

class $import BorderUIResource$EtchedBorderUIResource : public ::javax::swing::border::EtchedBorder, public ::javax::swing::plaf::UIResource {
	$class(BorderUIResource$EtchedBorderUIResource, $NO_CLASS_INIT, ::javax::swing::border::EtchedBorder, ::javax::swing::plaf::UIResource)
public:
	BorderUIResource$EtchedBorderUIResource();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::javax::swing::border::EtchedBorder::getBorderInsets;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(int32_t etchType);
	void init$(::java::awt::Color* highlight, ::java::awt::Color* shadow);
	void init$(int32_t etchType, ::java::awt::Color* highlight, ::java::awt::Color* shadow);
	virtual $String* toString() override;
};

		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_BorderUIResource$EtchedBorderUIResource_h_