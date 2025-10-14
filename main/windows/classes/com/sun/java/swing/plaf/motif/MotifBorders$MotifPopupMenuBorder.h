#ifndef _com_sun_java_swing_plaf_motif_MotifBorders$MotifPopupMenuBorder_h_
#define _com_sun_java_swing_plaf_motif_MotifBorders$MotifPopupMenuBorder_h_
//$ class com.sun.java.swing.plaf.motif.MotifBorders$MotifPopupMenuBorder
//$ extends javax.swing.border.AbstractBorder
//$ implements javax.swing.plaf.UIResource

#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/plaf/UIResource.h>

#pragma push_macro("GROOVE_HEIGHT")
#undef GROOVE_HEIGHT
#pragma push_macro("TEXT_SPACING")
#undef TEXT_SPACING

namespace java {
	namespace awt {
		class Color;
		class Component;
		class Font;
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

class $export MotifBorders$MotifPopupMenuBorder : public ::javax::swing::border::AbstractBorder, public ::javax::swing::plaf::UIResource {
	$class(MotifBorders$MotifPopupMenuBorder, $NO_CLASS_INIT, ::javax::swing::border::AbstractBorder, ::javax::swing::plaf::UIResource)
public:
	MotifBorders$MotifPopupMenuBorder();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::javax::swing::border::AbstractBorder::getBorderInsets;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::Font* titleFont, ::java::awt::Color* bgColor, ::java::awt::Color* fgColor, ::java::awt::Color* shadow, ::java::awt::Color* highlight);
	virtual ::java::awt::Insets* getBorderInsets(::java::awt::Component* c, ::java::awt::Insets* insets) override;
	virtual void paintBorder(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual $String* toString() override;
	::java::awt::Font* font = nullptr;
	::java::awt::Color* background = nullptr;
	::java::awt::Color* foreground = nullptr;
	::java::awt::Color* shadowColor = nullptr;
	::java::awt::Color* highlightColor = nullptr;
	static const int32_t TEXT_SPACING = 2;
	static const int32_t GROOVE_HEIGHT = 2;
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#pragma pop_macro("GROOVE_HEIGHT")
#pragma pop_macro("TEXT_SPACING")

#endif // _com_sun_java_swing_plaf_motif_MotifBorders$MotifPopupMenuBorder_h_