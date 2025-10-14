#ifndef _sun_swing_text_CompoundPrintable_h_
#define _sun_swing_text_CompoundPrintable_h_
//$ class sun.swing.text.CompoundPrintable
//$ extends sun.swing.text.CountingPrintable

#include <sun/swing/text/CountingPrintable.h>

namespace java {
	namespace awt {
		class Graphics;
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
	namespace util {
		class List;
		class Queue;
	}
}

namespace sun {
	namespace swing {
		namespace text {

class CompoundPrintable : public ::sun::swing::text::CountingPrintable {
	$class(CompoundPrintable, $NO_CLASS_INIT, ::sun::swing::text::CountingPrintable)
public:
	CompoundPrintable();
	void init$(::java::util::List* printables);
	virtual int32_t getNumberOfPages() override;
	virtual int32_t print(::java::awt::Graphics* graphics, ::java::awt::print::PageFormat* pf, int32_t pageIndex) override;
	::java::util::Queue* printables = nullptr;
	int32_t offset = 0;
};

		} // text
	} // swing
} // sun

#endif // _sun_swing_text_CompoundPrintable_h_