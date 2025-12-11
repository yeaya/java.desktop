#ifndef _com_apple_laf_AquaFileView$FileInfo_h_
#define _com_apple_laf_AquaFileView$FileInfo_h_
//$ class com.apple.laf.AquaFileView$FileInfo
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class File;
	}
}
namespace javax {
	namespace swing {
		class Icon;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaFileView$FileInfo : public ::java::lang::Object {
	$class(AquaFileView$FileInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AquaFileView$FileInfo();
	void init$(::java::io::File* file);
	bool isDirectory = false;
	$String* absolutePath = nullptr;
	$bytes* pathBytes = nullptr;
	$String* displayName = nullptr;
	::javax::swing::Icon* icon = nullptr;
	int32_t launchServicesInfo = 0;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaFileView$FileInfo_h_