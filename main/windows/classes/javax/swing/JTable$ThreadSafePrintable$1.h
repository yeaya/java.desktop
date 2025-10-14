#ifndef _javax_swing_JTable$ThreadSafePrintable$1_h_
#define _javax_swing_JTable$ThreadSafePrintable$1_h_
//$ class javax.swing.JTable$ThreadSafePrintable$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

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
namespace javax {
	namespace swing {
		class JTable$ThreadSafePrintable;
	}
}

namespace javax {
	namespace swing {

class JTable$ThreadSafePrintable$1 : public ::java::lang::Runnable {
	$class(JTable$ThreadSafePrintable$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	JTable$ThreadSafePrintable$1();
	void init$(::javax::swing::JTable$ThreadSafePrintable* this$1, ::java::awt::Graphics* val$graphics, ::java::awt::print::PageFormat* val$pageFormat, int32_t val$pageIndex);
	virtual void run() override;
	::javax::swing::JTable$ThreadSafePrintable* this$1 = nullptr;
	int32_t val$pageIndex = 0;
	::java::awt::print::PageFormat* val$pageFormat = nullptr;
	::java::awt::Graphics* val$graphics = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JTable$ThreadSafePrintable$1_h_