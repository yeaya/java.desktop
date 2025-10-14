#ifndef _javax_swing_text_PasswordView_h_
#define _javax_swing_text_PasswordView_h_
//$ class javax.swing.text.PasswordView
//$ extends javax.swing.text.FieldView

#include <java/lang/Array.h>
#include <javax/swing/text/FieldView.h>

#pragma push_macro("ONE")
#undef ONE

namespace java {
	namespace awt {
		class Graphics;
		class Graphics2D;
		class Shape;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class Element;
			class Position$Bias;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $import PasswordView : public ::javax::swing::text::FieldView {
	$class(PasswordView, 0, ::javax::swing::text::FieldView)
public:
	PasswordView();
	void init$(::javax::swing::text::Element* elem);
	virtual int32_t drawEchoCharacter(::java::awt::Graphics* g, int32_t x, int32_t y, char16_t c);
	virtual float drawEchoCharacter(::java::awt::Graphics2D* g, float x, float y, char16_t c);
	float drawEchoCharacterImpl(::java::awt::Graphics* g, float x, float y, char16_t c, bool useFPAPI);
	virtual int32_t drawSelectedText(::java::awt::Graphics* g, int32_t x, int32_t y, int32_t p0, int32_t p1) override;
	virtual float drawSelectedText(::java::awt::Graphics2D* g, float x, float y, int32_t p0, int32_t p1) override;
	float drawSelectedTextImpl(::java::awt::Graphics* g, float x, float y, int32_t p0, int32_t p1, bool useFPAPI);
	virtual int32_t drawUnselectedText(::java::awt::Graphics* g, int32_t x, int32_t y, int32_t p0, int32_t p1) override;
	virtual float drawUnselectedText(::java::awt::Graphics2D* g, float x, float y, int32_t p0, int32_t p1) override;
	float drawUnselectedTextImpl(::java::awt::Graphics* g, float x, float y, int32_t p0, int32_t p1, bool useFPAPI);
	virtual float getPreferredSpan(int32_t axis) override;
	using ::javax::swing::text::FieldView::modelToView;
	virtual ::java::awt::Shape* modelToView(int32_t pos, ::java::awt::Shape* a, ::javax::swing::text::Position$Bias* b) override;
	using ::javax::swing::text::FieldView::viewToModel;
	virtual int32_t viewToModel(float fx, float fy, ::java::awt::Shape* a, $Array<::javax::swing::text::Position$Bias>* bias) override;
	static $chars* ONE;
	bool drawEchoCharacterOverridden = false;
};

		} // text
	} // swing
} // javax

#pragma pop_macro("ONE")

#endif // _javax_swing_text_PasswordView_h_