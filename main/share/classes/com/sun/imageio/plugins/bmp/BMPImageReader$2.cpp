#include <com/sun/imageio/plugins/bmp/BMPImageReader$2.h>

#include <com/sun/imageio/plugins/bmp/BMPImageReader.h>
#include <java/awt/image/BufferedImage.h>
#include <javax/imageio/ImageReader.h>
#include <jcpp.h>

using $BMPImageReader = ::com::sun::imageio::plugins::bmp::BMPImageReader;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageReader = ::javax::imageio::ImageReader;
using $IIOReadUpdateListener = ::javax::imageio::event::IIOReadUpdateListener;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace bmp {

$FieldInfo _BMPImageReader$2_FieldInfo_[] = {
	{"this$0", "Lcom/sun/imageio/plugins/bmp/BMPImageReader;", nullptr, $FINAL | $SYNTHETIC, $field(BMPImageReader$2, this$0)},
	{}
};

$MethodInfo _BMPImageReader$2_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/imageio/plugins/bmp/BMPImageReader;)V", nullptr, 0, $method(static_cast<void(BMPImageReader$2::*)($BMPImageReader*)>(&BMPImageReader$2::init$))},
	{"imageUpdate", "(Ljavax/imageio/ImageReader;Ljava/awt/image/BufferedImage;IIIIII[I)V", nullptr, $PUBLIC},
	{"passComplete", "(Ljavax/imageio/ImageReader;Ljava/awt/image/BufferedImage;)V", nullptr, $PUBLIC},
	{"passStarted", "(Ljavax/imageio/ImageReader;Ljava/awt/image/BufferedImage;IIIIIII[I)V", nullptr, $PUBLIC},
	{"thumbnailPassComplete", "(Ljavax/imageio/ImageReader;Ljava/awt/image/BufferedImage;)V", nullptr, $PUBLIC},
	{"thumbnailPassStarted", "(Ljavax/imageio/ImageReader;Ljava/awt/image/BufferedImage;IIIIIII[I)V", nullptr, $PUBLIC},
	{"thumbnailUpdate", "(Ljavax/imageio/ImageReader;Ljava/awt/image/BufferedImage;IIIIII[I)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _BMPImageReader$2_EnclosingMethodInfo_ = {
	"com.sun.imageio.plugins.bmp.BMPImageReader",
	"readEmbedded",
	"(ILjava/awt/image/BufferedImage;Ljavax/imageio/ImageReadParam;)Ljava/awt/image/BufferedImage;"
};

$InnerClassInfo _BMPImageReader$2_InnerClassesInfo_[] = {
	{"com.sun.imageio.plugins.bmp.BMPImageReader$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _BMPImageReader$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.imageio.plugins.bmp.BMPImageReader$2",
	"java.lang.Object",
	"javax.imageio.event.IIOReadUpdateListener",
	_BMPImageReader$2_FieldInfo_,
	_BMPImageReader$2_MethodInfo_,
	nullptr,
	&_BMPImageReader$2_EnclosingMethodInfo_,
	_BMPImageReader$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.imageio.plugins.bmp.BMPImageReader"
};

$Object* allocate$BMPImageReader$2($Class* clazz) {
	return $of($alloc(BMPImageReader$2));
}

void BMPImageReader$2::init$($BMPImageReader* this$0) {
	$set(this, this$0, this$0);
}

void BMPImageReader$2::imageUpdate($ImageReader* source, $BufferedImage* theImage, int32_t minX, int32_t minY, int32_t width, int32_t height, int32_t periodX, int32_t periodY, $ints* bands) {
	$BMPImageReader::access$100(this->this$0, theImage, minX, minY, width, height, periodX, periodY, bands);
}

void BMPImageReader$2::passComplete($ImageReader* source, $BufferedImage* theImage) {
	$BMPImageReader::access$200(this->this$0, theImage);
}

void BMPImageReader$2::passStarted($ImageReader* source, $BufferedImage* theImage, int32_t pass, int32_t minPass, int32_t maxPass, int32_t minX, int32_t minY, int32_t periodX, int32_t periodY, $ints* bands) {
	$BMPImageReader::access$300(this->this$0, theImage, pass, minPass, maxPass, minX, minY, periodX, periodY, bands);
}

void BMPImageReader$2::thumbnailPassComplete($ImageReader* source, $BufferedImage* thumb) {
}

void BMPImageReader$2::thumbnailPassStarted($ImageReader* source, $BufferedImage* thumb, int32_t pass, int32_t minPass, int32_t maxPass, int32_t minX, int32_t minY, int32_t periodX, int32_t periodY, $ints* bands) {
}

void BMPImageReader$2::thumbnailUpdate($ImageReader* source, $BufferedImage* theThumbnail, int32_t minX, int32_t minY, int32_t width, int32_t height, int32_t periodX, int32_t periodY, $ints* bands) {
}

BMPImageReader$2::BMPImageReader$2() {
}

$Class* BMPImageReader$2::load$($String* name, bool initialize) {
	$loadClass(BMPImageReader$2, name, initialize, &_BMPImageReader$2_ClassInfo_, allocate$BMPImageReader$2);
	return class$;
}

$Class* BMPImageReader$2::class$ = nullptr;

				} // bmp
			} // plugins
		} // imageio
	} // sun
} // com