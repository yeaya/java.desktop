#ifndef _com_sun_java_swing_plaf_motif_MotifBorders$FrameBorder_h_
#define _com_sun_java_swing_plaf_motif_MotifBorders$FrameBorder_h_
//$ class com.sun.java.swing.plaf.motif.MotifBorders$FrameBorder
//$ extends javax.swing.border.AbstractBorder
//$ implements javax.swing.plaf.UIResource

#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/plaf/UIResource.h>

#pragma push_macro("BORDER_SIZE")
#undef BORDER_SIZE

namespace java {
	namespace awt {
		class Color;
		class Component;
		class Graphics;
		class Insets;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

class $import MotifBorders$FrameBorder : public ::javax::swing::border::AbstractBorder, public ::javax::swing::plaf::UIResource {
	$class(MotifBorders$FrameBorder, $NO_CLASS_INIT, ::javax::swing::border::AbstractBorder, ::javax::swing::plaf::UIResource)
public:
	MotifBorders$FrameBorder();
	using ::javax::swing::border::AbstractBorder::getBorderInsets;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::JComponent* comp);
	virtual ::javax::swing::JComponent* component();
	virtual bool drawBottomBorder(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height);
	virtual bool drawLeftBorder(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height);
	virtual bool drawRightBorder(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height);
	virtual bool drawTopBorder(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height);
	virtual ::java::awt::Insets* getBorderInsets(::java::awt::Component* c, ::java::awt::Insets* newInsets) override;
	virtual ::java::awt::Color* getFrameColor();
	virtual ::java::awt::Color* getFrameHighlight();
	virtual ::java::awt::Color* getFrameShadow();
	virtual bool isActiveFrame();
	virtual void paintBorder(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void setComponent(::javax::swing::JComponent* comp);
	virtual $String* toString() override;
	::javax::swing::JComponent* jcomp = nullptr;
	::java::awt::Color* frameHighlight = nullptr;
	::java::awt::Color* frameColor = nullptr;
	::java::awt::Color* frameShadow = nullptr;
	static const int32_t BORDER_SIZE = 5;
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#pragma pop_macro("BORDER_SIZE")

#endif // _com_sun_java_swing_plaf_motif_MotifBorders$FrameBorder_h_