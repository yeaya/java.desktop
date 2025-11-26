#ifndef _javax_swing_JTable$ThreadSafePrintable_h_
#define _javax_swing_JTable$ThreadSafePrintable_h_
//$ class javax.swing.JTable$ThreadSafePrintable
//$ extends java.awt.print.Printable

#include <java/awt/print/Printable.h>

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
	namespace lang {
		class Throwable;
	}
}
namespace javax {
	namespace swing {
		class JTable;
	}
}

namespace javax {
	namespace swing {

class JTable$ThreadSafePrintable : public ::java::awt::print::Printable {
	$class(JTable$ThreadSafePrintable, $NO_CLASS_INIT, ::java::awt::print::Printable)
public:
	JTable$ThreadSafePrintable();
	void init$(::javax::swing::JTable* this$0, ::java::awt::print::Printable* printDelegate);
	virtual int32_t print(::java::awt::Graphics* graphics, ::java::awt::print::PageFormat* pageFormat, int32_t pageIndex) override;
	::javax::swing::JTable* this$0 = nullptr;
	::java::awt::print::Printable* printDelegate = nullptr;
	int32_t retVal = 0;
	$Throwable* retThrowable = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JTable$ThreadSafePrintable_h_