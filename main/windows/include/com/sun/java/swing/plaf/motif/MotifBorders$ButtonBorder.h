#ifndef _com_sun_java_swing_plaf_motif_MotifBorders$ButtonBorder_h_
#define _com_sun_java_swing_plaf_motif_MotifBorders$ButtonBorder_h_
//$ class com.sun.java.swing.plaf.motif.MotifBorders$ButtonBorder
//$ extends javax.swing.border.AbstractBorder
//$ implements javax.swing.plaf.UIResource

#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/plaf/UIResource.h>

namespace java {
	namespace awt {
		class Color;
		class Component;
		class Graphics;
		class Insets;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

class $import MotifBorders$ButtonBorder : public ::javax::swing::border::AbstractBorder, public ::javax::swing::plaf::UIResource {
	$class(MotifBorders$ButtonBorder, $NO_CLASS_INIT, ::javax::swing::border::AbstractBorder, ::javax::swing::plaf::UIResource)
public:
	MotifBorders$ButtonBorder();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::javax::swing::border::AbstractBorder::getBorderInsets;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::Color* shadow, ::java::awt::Color* highlight, ::java::awt::Color* darkShadow, ::java::awt::Color* focus);
	virtual ::java::awt::Insets* getBorderInsets(::java::awt::Component* c, ::java::awt::Insets* insets) override;
	virtual void paintBorder(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual $String* toString() override;
	::java::awt::Color* focus = nullptr;
	::java::awt::Color* shadow = nullptr;
	::java::awt::Color* highlight = nullptr;
	::java::awt::Color* darkShadow = nullptr;
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_motif_MotifBorders$ButtonBorder_h_