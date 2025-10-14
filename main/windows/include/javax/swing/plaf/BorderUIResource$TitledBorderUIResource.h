#ifndef _javax_swing_plaf_BorderUIResource$TitledBorderUIResource_h_
#define _javax_swing_plaf_BorderUIResource$TitledBorderUIResource_h_
//$ class javax.swing.plaf.BorderUIResource$TitledBorderUIResource
//$ extends javax.swing.border.TitledBorder
//$ implements javax.swing.plaf.UIResource

#include <javax/swing/border/TitledBorder.h>
#include <javax/swing/plaf/UIResource.h>

namespace java {
	namespace awt {
		class Color;
		class Font;
	}
}
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

class $import BorderUIResource$TitledBorderUIResource : public ::javax::swing::border::TitledBorder, public ::javax::swing::plaf::UIResource {
	$class(BorderUIResource$TitledBorderUIResource, $NO_CLASS_INIT, ::javax::swing::border::TitledBorder, ::javax::swing::plaf::UIResource)
public:
	BorderUIResource$TitledBorderUIResource();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::javax::swing::border::TitledBorder::getBorderInsets;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* title);
	void init$(::javax::swing::border::Border* border);
	void init$(::javax::swing::border::Border* border, $String* title);
	void init$(::javax::swing::border::Border* border, $String* title, int32_t titleJustification, int32_t titlePosition);
	void init$(::javax::swing::border::Border* border, $String* title, int32_t titleJustification, int32_t titlePosition, ::java::awt::Font* titleFont);
	void init$(::javax::swing::border::Border* border, $String* title, int32_t titleJustification, int32_t titlePosition, ::java::awt::Font* titleFont, ::java::awt::Color* titleColor);
	virtual $String* toString() override;
};

		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_BorderUIResource$TitledBorderUIResource_h_