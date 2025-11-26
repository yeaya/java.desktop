#ifndef _javax_swing_text_DefaultHighlighter$LayeredHighlightInfo_h_
#define _javax_swing_text_DefaultHighlighter$LayeredHighlightInfo_h_
//$ class javax.swing.text.DefaultHighlighter$LayeredHighlightInfo
//$ extends javax.swing.text.DefaultHighlighter$HighlightInfo

#include <javax/swing/text/DefaultHighlighter$HighlightInfo.h>

namespace java {
	namespace awt {
		class Graphics;
		class Shape;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class DefaultHighlighter;
			class JTextComponent;
			class View;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $export DefaultHighlighter$LayeredHighlightInfo : public ::javax::swing::text::DefaultHighlighter$HighlightInfo {
	$class(DefaultHighlighter$LayeredHighlightInfo, $NO_CLASS_INIT, ::javax::swing::text::DefaultHighlighter$HighlightInfo)
public:
	DefaultHighlighter$LayeredHighlightInfo();
	void init$(::javax::swing::text::DefaultHighlighter* this$0);
	virtual void paintLayeredHighlights(::java::awt::Graphics* g, int32_t p0, int32_t p1, ::java::awt::Shape* viewBounds, ::javax::swing::text::JTextComponent* editor, ::javax::swing::text::View* view);
	virtual void union$(::java::awt::Shape* bounds);
	::javax::swing::text::DefaultHighlighter* this$0 = nullptr;
	int32_t x = 0;
	int32_t y = 0;
	int32_t width = 0;
	int32_t height = 0;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_DefaultHighlighter$LayeredHighlightInfo_h_