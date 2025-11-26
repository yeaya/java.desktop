#ifndef _javax_swing_plaf_TextUI_h_
#define _javax_swing_plaf_TextUI_h_
//$ class javax.swing.plaf.TextUI
//$ extends javax.swing.plaf.ComponentUI

#include <java/lang/Array.h>
#include <javax/swing/plaf/ComponentUI.h>

namespace java {
	namespace awt {
		class Point;
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class Point2D;
			class Rectangle2D;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class EditorKit;
			class JTextComponent;
			class Position$Bias;
			class View;
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {

class $import TextUI : public ::javax::swing::plaf::ComponentUI {
	$class(TextUI, $NO_CLASS_INIT, ::javax::swing::plaf::ComponentUI)
public:
	TextUI();
	void init$();
	virtual void damageRange(::javax::swing::text::JTextComponent* t, int32_t p0, int32_t p1) {}
	virtual void damageRange(::javax::swing::text::JTextComponent* t, int32_t p0, int32_t p1, ::javax::swing::text::Position$Bias* firstBias, ::javax::swing::text::Position$Bias* secondBias) {}
	virtual ::javax::swing::text::EditorKit* getEditorKit(::javax::swing::text::JTextComponent* t) {return nullptr;}
	virtual int32_t getNextVisualPositionFrom(::javax::swing::text::JTextComponent* t, int32_t pos, ::javax::swing::text::Position$Bias* b, int32_t direction, $Array<::javax::swing::text::Position$Bias>* biasRet) {return 0;}
	virtual ::javax::swing::text::View* getRootView(::javax::swing::text::JTextComponent* t) {return nullptr;}
	virtual $String* getToolTipText(::javax::swing::text::JTextComponent* t, ::java::awt::Point* pt);
	virtual $String* getToolTipText2D(::javax::swing::text::JTextComponent* t, ::java::awt::geom::Point2D* pt);
	virtual ::java::awt::Rectangle* modelToView(::javax::swing::text::JTextComponent* t, int32_t pos) {return nullptr;}
	virtual ::java::awt::Rectangle* modelToView(::javax::swing::text::JTextComponent* t, int32_t pos, ::javax::swing::text::Position$Bias* bias) {return nullptr;}
	virtual ::java::awt::geom::Rectangle2D* modelToView2D(::javax::swing::text::JTextComponent* t, int32_t pos, ::javax::swing::text::Position$Bias* bias);
	virtual int32_t viewToModel(::javax::swing::text::JTextComponent* t, ::java::awt::Point* pt) {return 0;}
	virtual int32_t viewToModel(::javax::swing::text::JTextComponent* t, ::java::awt::Point* pt, $Array<::javax::swing::text::Position$Bias>* biasReturn) {return 0;}
	virtual int32_t viewToModel2D(::javax::swing::text::JTextComponent* t, ::java::awt::geom::Point2D* pt, $Array<::javax::swing::text::Position$Bias>* biasReturn);
};

		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_TextUI_h_