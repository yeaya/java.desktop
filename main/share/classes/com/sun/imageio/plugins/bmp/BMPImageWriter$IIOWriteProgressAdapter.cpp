#include <com/sun/imageio/plugins/bmp/BMPImageWriter$IIOWriteProgressAdapter.h>

#include <com/sun/imageio/plugins/bmp/BMPImageWriter.h>
#include <javax/imageio/ImageWriter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageWriter = ::javax::imageio::ImageWriter;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace bmp {

$MethodInfo _BMPImageWriter$IIOWriteProgressAdapter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(BMPImageWriter$IIOWriteProgressAdapter::*)()>(&BMPImageWriter$IIOWriteProgressAdapter::init$))},
	{"imageComplete", "(Ljavax/imageio/ImageWriter;)V", nullptr, $PUBLIC},
	{"imageProgress", "(Ljavax/imageio/ImageWriter;F)V", nullptr, $PUBLIC},
	{"imageStarted", "(Ljavax/imageio/ImageWriter;I)V", nullptr, $PUBLIC},
	{"thumbnailComplete", "(Ljavax/imageio/ImageWriter;)V", nullptr, $PUBLIC},
	{"thumbnailProgress", "(Ljavax/imageio/ImageWriter;F)V", nullptr, $PUBLIC},
	{"thumbnailStarted", "(Ljavax/imageio/ImageWriter;II)V", nullptr, $PUBLIC},
	{"writeAborted", "(Ljavax/imageio/ImageWriter;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BMPImageWriter$IIOWriteProgressAdapter_InnerClassesInfo_[] = {
	{"com.sun.imageio.plugins.bmp.BMPImageWriter$IIOWriteProgressAdapter", "com.sun.imageio.plugins.bmp.BMPImageWriter", "IIOWriteProgressAdapter", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _BMPImageWriter$IIOWriteProgressAdapter_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.imageio.plugins.bmp.BMPImageWriter$IIOWriteProgressAdapter",
	"java.lang.Object",
	"javax.imageio.event.IIOWriteProgressListener",
	nullptr,
	_BMPImageWriter$IIOWriteProgressAdapter_MethodInfo_,
	nullptr,
	nullptr,
	_BMPImageWriter$IIOWriteProgressAdapter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.imageio.plugins.bmp.BMPImageWriter"
};

$Object* allocate$BMPImageWriter$IIOWriteProgressAdapter($Class* clazz) {
	return $of($alloc(BMPImageWriter$IIOWriteProgressAdapter));
}

void BMPImageWriter$IIOWriteProgressAdapter::init$() {
}

void BMPImageWriter$IIOWriteProgressAdapter::imageComplete($ImageWriter* source) {
}

void BMPImageWriter$IIOWriteProgressAdapter::imageProgress($ImageWriter* source, float percentageDone) {
}

void BMPImageWriter$IIOWriteProgressAdapter::imageStarted($ImageWriter* source, int32_t imageIndex) {
}

void BMPImageWriter$IIOWriteProgressAdapter::thumbnailComplete($ImageWriter* source) {
}

void BMPImageWriter$IIOWriteProgressAdapter::thumbnailProgress($ImageWriter* source, float percentageDone) {
}

void BMPImageWriter$IIOWriteProgressAdapter::thumbnailStarted($ImageWriter* source, int32_t imageIndex, int32_t thumbnailIndex) {
}

void BMPImageWriter$IIOWriteProgressAdapter::writeAborted($ImageWriter* source) {
}

BMPImageWriter$IIOWriteProgressAdapter::BMPImageWriter$IIOWriteProgressAdapter() {
}

$Class* BMPImageWriter$IIOWriteProgressAdapter::load$($String* name, bool initialize) {
	$loadClass(BMPImageWriter$IIOWriteProgressAdapter, name, initialize, &_BMPImageWriter$IIOWriteProgressAdapter_ClassInfo_, allocate$BMPImageWriter$IIOWriteProgressAdapter);
	return class$;
}

$Class* BMPImageWriter$IIOWriteProgressAdapter::class$ = nullptr;

				} // bmp
			} // plugins
		} // imageio
	} // sun
} // com