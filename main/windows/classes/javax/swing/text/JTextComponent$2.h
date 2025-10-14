#ifndef _javax_swing_text_JTextComponent$2_h_
#define _javax_swing_text_JTextComponent$2_h_
//$ class javax.swing.text.JTextComponent$2
//$ extends java.util.concurrent.Callable

#include <java/util/concurrent/Callable.h>

namespace java {
	namespace awt {
		namespace print {
			class PrinterJob;
		}
	}
}
namespace javax {
	namespace print {
		namespace attribute {
			class PrintRequestAttributeSet;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class JTextComponent;
		}
	}
}
namespace sun {
	namespace swing {
		class PrintingStatus;
	}
}

namespace javax {
	namespace swing {
		namespace text {

class JTextComponent$2 : public ::java::util::concurrent::Callable {
	$class(JTextComponent$2, $NO_CLASS_INIT, ::java::util::concurrent::Callable)
public:
	JTextComponent$2();
	void init$(::javax::swing::text::JTextComponent* this$0, ::java::awt::print::PrinterJob* val$job, ::javax::print::attribute::PrintRequestAttributeSet* val$attr, ::sun::swing::PrintingStatus* val$printingStatus);
	virtual $Object* call() override;
	::javax::swing::text::JTextComponent* this$0 = nullptr;
	::sun::swing::PrintingStatus* val$printingStatus = nullptr;
	::javax::print::attribute::PrintRequestAttributeSet* val$attr = nullptr;
	::java::awt::print::PrinterJob* val$job = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_JTextComponent$2_h_