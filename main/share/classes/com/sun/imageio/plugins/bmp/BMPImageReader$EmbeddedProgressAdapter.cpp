#include <com/sun/imageio/plugins/bmp/BMPImageReader$EmbeddedProgressAdapter.h>

#include <com/sun/imageio/plugins/bmp/BMPImageReader.h>
#include <javax/imageio/ImageReader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageReader = ::javax::imageio::ImageReader;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace bmp {

$MethodInfo _BMPImageReader$EmbeddedProgressAdapter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(BMPImageReader$EmbeddedProgressAdapter::*)()>(&BMPImageReader$EmbeddedProgressAdapter::init$))},
	{"imageComplete", "(Ljavax/imageio/ImageReader;)V", nullptr, $PUBLIC},
	{"imageProgress", "(Ljavax/imageio/ImageReader;F)V", nullptr, $PUBLIC},
	{"imageStarted", "(Ljavax/imageio/ImageReader;I)V", nullptr, $PUBLIC},
	{"readAborted", "(Ljavax/imageio/ImageReader;)V", nullptr, $PUBLIC},
	{"sequenceComplete", "(Ljavax/imageio/ImageReader;)V", nullptr, $PUBLIC},
	{"sequenceStarted", "(Ljavax/imageio/ImageReader;I)V", nullptr, $PUBLIC},
	{"thumbnailComplete", "(Ljavax/imageio/ImageReader;)V", nullptr, $PUBLIC},
	{"thumbnailProgress", "(Ljavax/imageio/ImageReader;F)V", nullptr, $PUBLIC},
	{"thumbnailStarted", "(Ljavax/imageio/ImageReader;II)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BMPImageReader$EmbeddedProgressAdapter_InnerClassesInfo_[] = {
	{"com.sun.imageio.plugins.bmp.BMPImageReader$EmbeddedProgressAdapter", "com.sun.imageio.plugins.bmp.BMPImageReader", "EmbeddedProgressAdapter", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _BMPImageReader$EmbeddedProgressAdapter_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.imageio.plugins.bmp.BMPImageReader$EmbeddedProgressAdapter",
	"java.lang.Object",
	"javax.imageio.event.IIOReadProgressListener",
	nullptr,
	_BMPImageReader$EmbeddedProgressAdapter_MethodInfo_,
	nullptr,
	nullptr,
	_BMPImageReader$EmbeddedProgressAdapter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.imageio.plugins.bmp.BMPImageReader"
};

$Object* allocate$BMPImageReader$EmbeddedProgressAdapter($Class* clazz) {
	return $of($alloc(BMPImageReader$EmbeddedProgressAdapter));
}

void BMPImageReader$EmbeddedProgressAdapter::init$() {
}

void BMPImageReader$EmbeddedProgressAdapter::imageComplete($ImageReader* src) {
}

void BMPImageReader$EmbeddedProgressAdapter::imageProgress($ImageReader* src, float percentageDone) {
}

void BMPImageReader$EmbeddedProgressAdapter::imageStarted($ImageReader* src, int32_t imageIndex) {
}

void BMPImageReader$EmbeddedProgressAdapter::thumbnailComplete($ImageReader* src) {
}

void BMPImageReader$EmbeddedProgressAdapter::thumbnailProgress($ImageReader* src, float percentageDone) {
}

void BMPImageReader$EmbeddedProgressAdapter::thumbnailStarted($ImageReader* src, int32_t iIdx, int32_t tIdx) {
}

void BMPImageReader$EmbeddedProgressAdapter::sequenceComplete($ImageReader* src) {
}

void BMPImageReader$EmbeddedProgressAdapter::sequenceStarted($ImageReader* src, int32_t minIndex) {
}

void BMPImageReader$EmbeddedProgressAdapter::readAborted($ImageReader* src) {
}

BMPImageReader$EmbeddedProgressAdapter::BMPImageReader$EmbeddedProgressAdapter() {
}

$Class* BMPImageReader$EmbeddedProgressAdapter::load$($String* name, bool initialize) {
	$loadClass(BMPImageReader$EmbeddedProgressAdapter, name, initialize, &_BMPImageReader$EmbeddedProgressAdapter_ClassInfo_, allocate$BMPImageReader$EmbeddedProgressAdapter);
	return class$;
}

$Class* BMPImageReader$EmbeddedProgressAdapter::class$ = nullptr;

				} // bmp
			} // plugins
		} // imageio
	} // sun
} // com