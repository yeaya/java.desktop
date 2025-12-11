#ifndef _com_apple_laf_AquaFileChooserUI$DnDHandler$1_h_
#define _com_apple_laf_AquaFileChooserUI$DnDHandler$1_h_
//$ class com.apple.laf.AquaFileChooserUI$DnDHandler$1
//$ extends java.lang.Runnable

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaFileChooserUI$DnDHandler;
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

class AquaFileChooserUI$DnDHandler$1 : public ::java::lang::Runnable {
	$class(AquaFileChooserUI$DnDHandler$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	AquaFileChooserUI$DnDHandler$1();
	void init$(::com::apple::laf::AquaFileChooserUI$DnDHandler* this$1, $Array<::java::io::File>* val$files);
	virtual void run() override;
	::com::apple::laf::AquaFileChooserUI$DnDHandler* this$1 = nullptr;
	$Array<::java::io::File>* val$files = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaFileChooserUI$DnDHandler$1_h_