#include <javax/imageio/ImageIO$ImageTranscoderIterator.h>

#include <java/lang/UnsupportedOperationException.h>
#include <java/util/Iterator.h>
#include <javax/imageio/ImageIO.h>
#include <javax/imageio/ImageTranscoder.h>
#include <javax/imageio/spi/ImageTranscoderSpi.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Iterator = ::java::util::Iterator;
using $ImageIO = ::javax::imageio::ImageIO;
using $ImageTranscoder = ::javax::imageio::ImageTranscoder;
using $ImageTranscoderSpi = ::javax::imageio::spi::ImageTranscoderSpi;

namespace javax {
	namespace imageio {

$FieldInfo _ImageIO$ImageTranscoderIterator_FieldInfo_[] = {
	{"iter", "Ljava/util/Iterator;", "Ljava/util/Iterator<Ljavax/imageio/spi/ImageTranscoderSpi;>;", $PUBLIC, $field(ImageIO$ImageTranscoderIterator, iter)},
	{}
};

$MethodInfo _ImageIO$ImageTranscoderIterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Iterator;)V", "(Ljava/util/Iterator<Ljavax/imageio/spi/ImageTranscoderSpi;>;)V", $PUBLIC, $method(static_cast<void(ImageIO$ImageTranscoderIterator::*)($Iterator*)>(&ImageIO$ImageTranscoderIterator::init$))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljavax/imageio/ImageTranscoder;", nullptr, $PUBLIC},
	{"remove", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ImageIO$ImageTranscoderIterator_InnerClassesInfo_[] = {
	{"javax.imageio.ImageIO$ImageTranscoderIterator", "javax.imageio.ImageIO", "ImageTranscoderIterator", $STATIC},
	{}
};

$ClassInfo _ImageIO$ImageTranscoderIterator_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.ImageIO$ImageTranscoderIterator",
	"java.lang.Object",
	"java.util.Iterator",
	_ImageIO$ImageTranscoderIterator_FieldInfo_,
	_ImageIO$ImageTranscoderIterator_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<Ljavax/imageio/ImageTranscoder;>;",
	nullptr,
	_ImageIO$ImageTranscoderIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.ImageIO"
};

$Object* allocate$ImageIO$ImageTranscoderIterator($Class* clazz) {
	return $of($alloc(ImageIO$ImageTranscoderIterator));
}

void ImageIO$ImageTranscoderIterator::init$($Iterator* iter) {
	$set(this, iter, iter);
}

bool ImageIO$ImageTranscoderIterator::hasNext() {
	return $nc(this->iter)->hasNext();
}

$Object* ImageIO$ImageTranscoderIterator::next() {
	$var($ImageTranscoderSpi, spi, nullptr);
	$assign(spi, $cast($ImageTranscoderSpi, $nc(this->iter)->next()));
	return $of($nc(spi)->createTranscoderInstance());
}

void ImageIO$ImageTranscoderIterator::remove() {
	$throwNew($UnsupportedOperationException);
}

ImageIO$ImageTranscoderIterator::ImageIO$ImageTranscoderIterator() {
}

$Class* ImageIO$ImageTranscoderIterator::load$($String* name, bool initialize) {
	$loadClass(ImageIO$ImageTranscoderIterator, name, initialize, &_ImageIO$ImageTranscoderIterator_ClassInfo_, allocate$ImageIO$ImageTranscoderIterator);
	return class$;
}

$Class* ImageIO$ImageTranscoderIterator::class$ = nullptr;

	} // imageio
} // javax