#ifndef _javax_swing_text_DefaultHighlighter$SafeDamager_h_
#define _javax_swing_text_DefaultHighlighter$SafeDamager_h_
//$ class javax.swing.text.DefaultHighlighter$SafeDamager
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace util {
		class Vector;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class DefaultHighlighter;
			class Document;
			class Position;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $import DefaultHighlighter$SafeDamager : public ::java::lang::Runnable {
	$class(DefaultHighlighter$SafeDamager, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	DefaultHighlighter$SafeDamager();
	void init$(::javax::swing::text::DefaultHighlighter* this$0);
	virtual void damageRange(::javax::swing::text::Position* pos0, ::javax::swing::text::Position* pos1);
	virtual void run() override;
	::javax::swing::text::DefaultHighlighter* this$0 = nullptr;
	::java::util::Vector* p0 = nullptr;
	::java::util::Vector* p1 = nullptr;
	::javax::swing::text::Document* lastDoc = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_DefaultHighlighter$SafeDamager_h_