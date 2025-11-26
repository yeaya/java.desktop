#ifndef _javax_swing_TablePrintable_h_
#define _javax_swing_TablePrintable_h_
//$ class javax.swing.TablePrintable
//$ extends java.awt.print.Printable

#include <java/awt/print/Printable.h>

#pragma push_macro("FOOTER_FONT_SIZE")
#undef FOOTER_FONT_SIZE
#pragma push_macro("HEADER_FONT_SIZE")
#undef HEADER_FONT_SIZE
#pragma push_macro("H_F_SPACE")
#undef H_F_SPACE

namespace java {
	namespace awt {
		class Font;
		class Graphics;
		class Graphics2D;
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class Rectangle2D;
		}
	}
}
namespace java {
	namespace awt {
		namespace print {
			class PageFormat;
		}
	}
}
namespace java {
	namespace text {
		class MessageFormat;
	}
}
namespace javax {
	namespace swing {
		class JTable;
		class JTable$PrintMode;
	}
}
namespace javax {
	namespace swing {
		namespace table {
			class JTableHeader;
			class TableColumnModel;
		}
	}
}

namespace javax {
	namespace swing {

class TablePrintable : public ::java::awt::print::Printable {
	$class(TablePrintable, 0, ::java::awt::print::Printable)
public:
	TablePrintable();
	void init$(::javax::swing::JTable* table, ::javax::swing::JTable$PrintMode* printMode, ::java::text::MessageFormat* headerFormat, ::java::text::MessageFormat* footerFormat);
	void findNextClip(int32_t pw, int32_t ph);
	virtual int32_t print(::java::awt::Graphics* graphics, ::java::awt::print::PageFormat* pageFormat, int32_t pageIndex) override;
	void printText(::java::awt::Graphics2D* g2d, $String* text, ::java::awt::geom::Rectangle2D* rect, ::java::awt::Font* font, int32_t imgWidth);
	static bool $assertionsDisabled;
	::javax::swing::JTable* table = nullptr;
	::javax::swing::table::JTableHeader* header = nullptr;
	::javax::swing::table::TableColumnModel* colModel = nullptr;
	int32_t totalColWidth = 0;
	::javax::swing::JTable$PrintMode* printMode = nullptr;
	::java::text::MessageFormat* headerFormat = nullptr;
	::java::text::MessageFormat* footerFormat = nullptr;
	int32_t last = 0;
	int32_t row = 0;
	int32_t col = 0;
	::java::awt::Rectangle* clip = nullptr;
	::java::awt::Rectangle* hclip = nullptr;
	::java::awt::Rectangle* tempRect = nullptr;
	static const int32_t H_F_SPACE = 8;
	static float HEADER_FONT_SIZE;
	static float FOOTER_FONT_SIZE;
	::java::awt::Font* headerFont = nullptr;
	::java::awt::Font* footerFont = nullptr;
};

	} // swing
} // javax

#pragma pop_macro("FOOTER_FONT_SIZE")
#pragma pop_macro("HEADER_FONT_SIZE")
#pragma pop_macro("H_F_SPACE")

#endif // _javax_swing_TablePrintable_h_