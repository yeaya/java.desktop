#ifndef _com_sun_java_swing_plaf_motif_MotifBorders$BevelBorder_h_
#define _com_sun_java_swing_plaf_motif_MotifBorders$BevelBorder_h_
//$ class com.sun.java.swing.plaf.motif.MotifBorders$BevelBorder
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

class $export MotifBorders$BevelBorder : public ::javax::swing::border::AbstractBorder, public ::javax::swing::plaf::UIResource {
	$class(MotifBorders$BevelBorder, $NO_CLASS_INIT, ::javax::swing::border::AbstractBorder, ::javax::swing::plaf::UIResource)
public:
	MotifBorders$BevelBorder();
	using ::javax::swing::border::AbstractBorder::getBorderInsets;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(bool isRaised, ::java::awt::Color* darkShadow, ::java::awt::Color* lightShadow);
	virtual ::java::awt::Insets* getBorderInsets(::java::awt::Component* c, ::java::awt::Insets* insets) override;
	virtual bool isOpaque(::java::awt::Component* c);
	virtual void paintBorder(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual $String* toString() override;
	::java::awt::Color* darkShadow = nullptr;
	::java::awt::Color* lightShadow = nullptr;
	bool isRaised = false;
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_motif_MotifBorders$BevelBorder_h_