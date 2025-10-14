#ifndef _javax_swing_text_DefaultHighlighter$HighlightInfo_h_
#define _javax_swing_text_DefaultHighlighter$HighlightInfo_h_
//$ class javax.swing.text.DefaultHighlighter$HighlightInfo
//$ extends javax.swing.text.Highlighter$Highlight

#include <javax/swing/text/Highlighter$Highlight.h>

namespace javax {
	namespace swing {
		namespace text {
			class DefaultHighlighter;
			class Highlighter$HighlightPainter;
			class Position;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $import DefaultHighlighter$HighlightInfo : public ::javax::swing::text::Highlighter$Highlight {
	$class(DefaultHighlighter$HighlightInfo, $NO_CLASS_INIT, ::javax::swing::text::Highlighter$Highlight)
public:
	DefaultHighlighter$HighlightInfo();
	void init$(::javax::swing::text::DefaultHighlighter* this$0);
	virtual int32_t getEndOffset() override;
	virtual ::javax::swing::text::Highlighter$HighlightPainter* getPainter() override;
	virtual int32_t getStartOffset() override;
	::javax::swing::text::DefaultHighlighter* this$0 = nullptr;
	::javax::swing::text::Position* p0 = nullptr;
	::javax::swing::text::Position* p1 = nullptr;
	::javax::swing::text::Highlighter$HighlightPainter* painter = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_DefaultHighlighter$HighlightInfo_h_