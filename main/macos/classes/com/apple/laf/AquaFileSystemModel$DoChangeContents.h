#ifndef _com_apple_laf_AquaFileSystemModel$DoChangeContents_h_
#define _com_apple_laf_AquaFileSystemModel$DoChangeContents_h_
//$ class com.apple.laf.AquaFileSystemModel$DoChangeContents
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaFileSystemModel;
		}
	}
}
namespace java {
	namespace util {
		class Vector;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaFileSystemModel$DoChangeContents : public ::java::lang::Runnable {
	$class(AquaFileSystemModel$DoChangeContents, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	AquaFileSystemModel$DoChangeContents();
	void init$(::com::apple::laf::AquaFileSystemModel* this$0, ::java::util::Vector* files, int32_t fid);
	virtual void cancel();
	virtual void run() override;
	::com::apple::laf::AquaFileSystemModel* this$0 = nullptr;
	::java::util::Vector* contentFiles = nullptr;
	bool doFire = false;
	$Object* lock = nullptr;
	int32_t fid = 0;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaFileSystemModel$DoChangeContents_h_