#ifndef _com_apple_laf_AquaFileChooserUI$3_h_
#define _com_apple_laf_AquaFileChooserUI$3_h_
//$ class com.apple.laf.AquaFileChooserUI$3
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaFileChooserUI;
		}
	}
}
namespace java {
	namespace io {
		class File;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaFileChooserUI$3 : public ::java::lang::Runnable {
	$class(AquaFileChooserUI$3, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	AquaFileChooserUI$3();
	void init$(::com::apple::laf::AquaFileChooserUI* this$0, ::java::io::File* val$f);
	virtual void run() override;
	::com::apple::laf::AquaFileChooserUI* this$0 = nullptr;
	::java::io::File* val$f = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaFileChooserUI$3_h_