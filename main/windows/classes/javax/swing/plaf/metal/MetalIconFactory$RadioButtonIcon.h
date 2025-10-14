#ifndef _javax_swing_plaf_metal_MetalIconFactory$RadioButtonIcon_h_
#define _javax_swing_plaf_metal_MetalIconFactory$RadioButtonIcon_h_
//$ class javax.swing.plaf.metal.MetalIconFactory$RadioButtonIcon
//$ extends javax.swing.Icon
//$ implements javax.swing.plaf.UIResource,java.io.Serializable

#include <java/io/Serializable.h>
#include <javax/swing/Icon.h>
#include <javax/swing/plaf/UIResource.h>

namespace java {
	namespace awt {
		class Component;
		class Graphics;
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class MetalIconFactory$RadioButtonIcon : public ::javax::swing::Icon, public ::javax::swing::plaf::UIResource, public ::java::io::Serializable {
	$class(MetalIconFactory$RadioButtonIcon, $NO_CLASS_INIT, ::javax::swing::Icon, ::javax::swing::plaf::UIResource, ::java::io::Serializable)
public:
	MetalIconFactory$RadioButtonIcon();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual int32_t getIconHeight() override;
	virtual int32_t getIconWidth() override;
	virtual void paintIcon(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y) override;
	virtual void paintOceanIcon(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y);
	virtual $String* toString() override;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalIconFactory$RadioButtonIcon_h_