#ifndef _sun_swing_text_TextComponentPrintable_h_
#define _sun_swing_text_TextComponentPrintable_h_
//$ class sun.swing.text.TextComponentPrintable
//$ extends sun.swing.text.CountingPrintable

#include <sun/swing/text/CountingPrintable.h>

#pragma push_macro("FOOTER_FONT_SIZE")
#undef FOOTER_FONT_SIZE
#pragma push_macro("HEADER_FONT_SIZE")
#undef HEADER_FONT_SIZE
#pragma push_macro("LIST_SIZE")
#undef LIST_SIZE

namespace java {
	namespace awt {
		class Container;
		class Font;
		class Graphics;
	}
}
namespace java {
	namespace awt {
		namespace print {
			class PageFormat;
			class Printable;
		}
	}
}
namespace java {
	namespace text {
		class MessageFormat;
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicReference;
			}
		}
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
			class Document;
			class JTextComponent;
		}
	}
}

namespace sun {
	namespace swing {
		namespace text {

class TextComponentPrintable : public ::sun::swing::text::CountingPrintable {
	$class(TextComponentPrintable, 0, ::sun::swing::text::CountingPrintable)
public:
	TextComponentPrintable();
	void init$(::javax::swing::text::JTextComponent* textComponent, ::java::text::MessageFormat* headerFormat, ::java::text::MessageFormat* footerFormat);
	void acquireReadLock();
	void calculateRowsMetrics();
	static void createFrames(::javax::swing::JEditorPane* editor);
	::javax::swing::text::JTextComponent* createPrintShell(::javax::swing::text::JTextComponent* textComponent);
	::javax::swing::text::JTextComponent* createPrintShellOnEDT(::javax::swing::text::JTextComponent* textComponent);
	static ::java::util::List* getFrames(::javax::swing::JEditorPane* editor);
	static void getFrames(::java::awt::Container* container, ::java::util::List* list);
	virtual int32_t getNumberOfPages() override;
	static ::java::awt::print::Printable* getPrintable(::javax::swing::text::JTextComponent* textComponent, ::java::text::MessageFormat* headerFormat, ::java::text::MessageFormat* footerFormat);
	static bool isFrameSetDocument(::javax::swing::text::Document* document);
	void layout(int32_t width);
	void layoutOnEDT(int32_t width);
	virtual int32_t print(::java::awt::Graphics* graphics, ::java::awt::print::PageFormat* pf, int32_t pageIndex) override;
	int32_t printOnEDT(::java::awt::Graphics* graphics, ::java::awt::print::PageFormat* pf, int32_t pageIndex);
	void releaseReadLock();
	void updatePagesMetrics(int32_t pageIndex, int32_t pageHeight);
	static bool $assertionsDisabled;
	static const int32_t LIST_SIZE = 1000;
	bool isLayouted = false;
	::javax::swing::text::JTextComponent* textComponentToPrint = nullptr;
	::java::util::concurrent::atomic::AtomicReference* frc = nullptr;
	::javax::swing::text::JTextComponent* printShell = nullptr;
	::java::text::MessageFormat* headerFormat = nullptr;
	::java::text::MessageFormat* footerFormat = nullptr;
	static float HEADER_FONT_SIZE;
	static float FOOTER_FONT_SIZE;
	::java::awt::Font* headerFont = nullptr;
	::java::awt::Font* footerFont = nullptr;
	::java::util::List* rowsMetrics = nullptr;
	::java::util::List* pagesMetrics = nullptr;
	bool needReadLock = false;
};

		} // text
	} // swing
} // sun

#pragma pop_macro("FOOTER_FONT_SIZE")
#pragma pop_macro("HEADER_FONT_SIZE")
#pragma pop_macro("LIST_SIZE")

#endif // _sun_swing_text_TextComponentPrintable_h_