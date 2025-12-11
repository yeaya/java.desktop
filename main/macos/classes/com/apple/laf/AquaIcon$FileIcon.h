#ifndef _com_apple_laf_AquaIcon$FileIcon_h_
#define _com_apple_laf_AquaIcon$FileIcon_h_
//$ class com.apple.laf.AquaIcon$FileIcon
//$ extends com.apple.laf.AquaIcon$CachingScalingIcon

#include <com/apple/laf/AquaIcon$CachingScalingIcon.h>

namespace java {
	namespace awt {
		class Image;
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

class AquaIcon$FileIcon : public ::com::apple::laf::AquaIcon$CachingScalingIcon {
	$class(AquaIcon$FileIcon, $NO_CLASS_INIT, ::com::apple::laf::AquaIcon$CachingScalingIcon)
public:
	AquaIcon$FileIcon();
	void init$(::java::io::File* file, int32_t width, int32_t height);
	void init$(::java::io::File* file);
	virtual ::java::awt::Image* createImage() override;
	::java::io::File* file = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaIcon$FileIcon_h_