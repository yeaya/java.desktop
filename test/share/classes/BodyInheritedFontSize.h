#ifndef _BodyInheritedFontSize_h_
#define _BodyInheritedFontSize_h_
//$ class BodyInheritedFontSize
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("HTML_TEXT")
#undef HTML_TEXT

namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace swing {
		class JEditorPane;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class GlyphView;
			class View;
		}
	}
}

class $export BodyInheritedFontSize : public ::java::lang::Object {
	$class(BodyInheritedFontSize, 0, ::java::lang::Object)
public:
	BodyInheritedFontSize();
	void init$();
	static void checkFontSize(::javax::swing::JEditorPane* htmlPane, bool w3cUnits, bool debugPrint);
	static ::javax::swing::JEditorPane* createEditorPane(bool w3cUnits, bool showFrame);
	static ::javax::swing::text::GlyphView* findFirstTextRun(::javax::swing::text::View* view);
	static int32_t getViewFontSize(::javax::swing::text::View* paragraphView, bool debugPrint);
	static void lambda$main$0(bool showFrame, bool debugPrint, ::java::util::List* exceptions);
	static void main($StringArray* args);
	static bool toDebugPrint(::java::util::List* argsList);
	static bool toShowFrame(::java::util::List* argsList);
	static $String* HTML_TEXT;
};

#pragma pop_macro("HTML_TEXT")

#endif // _BodyInheritedFontSize_h_