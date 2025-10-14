#ifndef _javax_swing_text_DefaultHighlighter_h_
#define _javax_swing_text_DefaultHighlighter_h_
//$ class javax.swing.text.DefaultHighlighter
//$ extends javax.swing.text.LayeredHighlighter

#include <java/lang/Array.h>
#include <javax/swing/text/LayeredHighlighter.h>

namespace java {
	namespace awt {
		class Graphics;
		class Shape;
	}
}
namespace java {
	namespace util {
		class Vector;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class DefaultHighlighter$SafeDamager;
			class Highlighter$Highlight;
			class Highlighter$HighlightPainter;
			class JTextComponent;
			class LayeredHighlighter$LayerPainter;
			class Position;
			class View;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $import DefaultHighlighter : public ::javax::swing::text::LayeredHighlighter {
	$class(DefaultHighlighter, 0, ::javax::swing::text::LayeredHighlighter)
public:
	DefaultHighlighter();
	void init$();
	virtual $Object* addHighlight(int32_t p0, int32_t p1, ::javax::swing::text::Highlighter$HighlightPainter* p) override;
	virtual void changeHighlight(Object$* tag, int32_t p0, int32_t p1) override;
	virtual void deinstall(::javax::swing::text::JTextComponent* c) override;
	virtual bool getDrawsLayeredHighlights();
	virtual $Array<::javax::swing::text::Highlighter$Highlight>* getHighlights() override;
	virtual void install(::javax::swing::text::JTextComponent* c) override;
	virtual void paint(::java::awt::Graphics* g) override;
	virtual void paintLayeredHighlights(::java::awt::Graphics* g, int32_t p0, int32_t p1, ::java::awt::Shape* viewBounds, ::javax::swing::text::JTextComponent* editor, ::javax::swing::text::View* view) override;
	virtual void removeAllHighlights() override;
	virtual void removeHighlight(Object$* tag) override;
	void safeDamageRange(::javax::swing::text::Position* p0, ::javax::swing::text::Position* p1);
	void safeDamageRange(int32_t a0, int32_t a1);
	virtual void setDrawsLayeredHighlights(bool newValue);
	static $Array<::javax::swing::text::Highlighter$Highlight>* noHighlights;
	::java::util::Vector* highlights = nullptr;
	::javax::swing::text::JTextComponent* component = nullptr;
	bool drawsLayeredHighlights = false;
	::javax::swing::text::DefaultHighlighter$SafeDamager* safeDamager = nullptr;
	static ::javax::swing::text::LayeredHighlighter$LayerPainter* DefaultPainter;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_DefaultHighlighter_h_