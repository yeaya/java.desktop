#include <javax/imageio/ImageTranscoder.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/imageio/ImageTypeSpecifier.h>
#include <javax/imageio/ImageWriteParam.h>
#include <javax/imageio/metadata/IIOMetadata.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageTypeSpecifier = ::javax::imageio::ImageTypeSpecifier;
using $ImageWriteParam = ::javax::imageio::ImageWriteParam;
using $IIOMetadata = ::javax::imageio::metadata::IIOMetadata;

namespace javax {
	namespace imageio {

$MethodInfo _ImageTranscoder_MethodInfo_[] = {
	{"convertImageMetadata", "(Ljavax/imageio/metadata/IIOMetadata;Ljavax/imageio/ImageTypeSpecifier;Ljavax/imageio/ImageWriteParam;)Ljavax/imageio/metadata/IIOMetadata;", nullptr, $PUBLIC | $ABSTRACT},
	{"convertStreamMetadata", "(Ljavax/imageio/metadata/IIOMetadata;Ljavax/imageio/ImageWriteParam;)Ljavax/imageio/metadata/IIOMetadata;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ImageTranscoder_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.imageio.ImageTranscoder",
	nullptr,
	nullptr,
	nullptr,
	_ImageTranscoder_MethodInfo_
};

$Object* allocate$ImageTranscoder($Class* clazz) {
	return $of($alloc(ImageTranscoder));
}

$Class* ImageTranscoder::load$($String* name, bool initialize) {
	$loadClass(ImageTranscoder, name, initialize, &_ImageTranscoder_ClassInfo_, allocate$ImageTranscoder);
	return class$;
}

$Class* ImageTranscoder::class$ = nullptr;

	} // imageio
} // javax