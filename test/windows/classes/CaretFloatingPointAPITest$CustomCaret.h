#ifndef _CaretFloatingPointAPITest$CustomCaret_h_
#define _CaretFloatingPointAPITest$CustomCaret_h_
//$ class CaretFloatingPointAPITest$CustomCaret
//$ extends javax.swing.text.Caret

#include <javax/swing/text/Caret.h>

namespace java {
	namespace awt {
		class Graphics;
		class Point;
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class MouseListener;
		}
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
		namespace event {
			class ChangeListener;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class Highlighter$HighlightPainter;
			class JTextComponent;
			class Position$Bias;
		}
	}
}

class $export CaretFloatingPointAPITest$CustomCaret : public ::javax::swing::text::Caret {
	$class(CaretFloatingPointAPITest$CustomCaret, $NO_CLASS_INIT, ::javax::swing::text::Caret)
public:
	CaretFloatingPointAPITest$CustomCaret();
	void init$();
	virtual void addChangeListener(::javax::swing::event::ChangeListener* l) override;
	virtual void adjustVisibility(::java::awt::Rectangle* nloc);
	virtual void changeCaretPosition(int32_t dot, ::javax::swing::text::Position$Bias* dotBias);
	virtual void damage(::java::awt::Rectangle* r);
	virtual void deinstall(::javax::swing::text::JTextComponent* c) override;
	virtual int32_t getBlinkRate() override;
	virtual ::java::awt::geom::Rectangle2D* getCaretRectangle(::java::awt::geom::Rectangle2D* r);
	virtual int32_t getDot() override;
	virtual ::java::awt::Point* getMagicCaretPosition() override;
	virtual int32_t getMark() override;
	virtual ::javax::swing::text::Highlighter$HighlightPainter* getSelectionPainter();
	virtual void handleSetDot(int32_t dot, ::javax::swing::text::Position$Bias* dotBias);
	virtual void install(::javax::swing::text::JTextComponent* c) override;
	virtual bool isSelectionVisible() override;
	virtual bool isVisible() override;
	void lambda$adjustVisibility$0(::java::awt::Rectangle* nloc);
	virtual void moveDot(int32_t dot) override;
	void moveDot(int32_t dot, ::javax::swing::text::Position$Bias* bias);
	virtual void paint(::java::awt::Graphics* g) override;
	virtual void removeChangeListener(::javax::swing::event::ChangeListener* l) override;
	virtual void repaint(::java::awt::Rectangle* r);
	virtual void repaintNewCaret();
	virtual void setBlinkRate(int32_t rate) override;
	virtual void setDot(int32_t dot) override;
	void setDot(int32_t dot, ::javax::swing::text::Position$Bias* bias);
	virtual void setMagicCaretPosition(::java::awt::Point* p) override;
	virtual void setSelectionVisible(bool v) override;
	virtual void setVisible(bool v) override;
	void updateSelection();
	::javax::swing::text::JTextComponent* component = nullptr;
	bool visible = false;
	bool selectionVisible = false;
	int32_t blinkRate = 0;
	int32_t dot = 0;
	int32_t mark = 0;
	::javax::swing::text::Position$Bias* dotBias = nullptr;
	::javax::swing::text::Position$Bias* markBias = nullptr;
	$Object* selectionTag = nullptr;
	::java::awt::geom::Point2D* magicCaretPosition = nullptr;
	::java::awt::event::MouseListener* mouseListener = nullptr;
};

#endif // _CaretFloatingPointAPITest$CustomCaret_h_