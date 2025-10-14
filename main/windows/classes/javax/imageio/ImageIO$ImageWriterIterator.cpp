#include <javax/imageio/ImageIO$ImageWriterIterator.h>

#include <java/io/IOException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Iterator.h>
#include <javax/imageio/ImageIO.h>
#include <javax/imageio/ImageWriter.h>
#include <javax/imageio/spi/IIORegistry.h>
#include <javax/imageio/spi/ImageWriterSpi.h>
#include <javax/imageio/spi/ServiceRegistry.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Iterator = ::java::util::Iterator;
using $ImageIO = ::javax::imageio::ImageIO;
using $ImageWriter = ::javax::imageio::ImageWriter;
using $IIORegistry = ::javax::imageio::spi::IIORegistry;
using $ImageWriterSpi = ::javax::imageio::spi::ImageWriterSpi;
using $ServiceRegistry = ::javax::imageio::spi::ServiceRegistry;

namespace javax {
	namespace imageio {

$FieldInfo _ImageIO$ImageWriterIterator_FieldInfo_[] = {
	{"iter", "Ljava/util/Iterator;", "Ljava/util/Iterator<Ljavax/imageio/spi/ImageWriterSpi;>;", $PRIVATE, $field(ImageIO$ImageWriterIterator, iter)},
	{}
};

$MethodInfo _ImageIO$ImageWriterIterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Iterator;)V", "(Ljava/util/Iterator<Ljavax/imageio/spi/ImageWriterSpi;>;)V", $PUBLIC, $method(static_cast<void(ImageIO$ImageWriterIterator::*)($Iterator*)>(&ImageIO$ImageWriterIterator::init$))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljavax/imageio/ImageWriter;", nullptr, $PUBLIC},
	{"remove", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ImageIO$ImageWriterIterator_InnerClassesInfo_[] = {
	{"javax.imageio.ImageIO$ImageWriterIterator", "javax.imageio.ImageIO", "ImageWriterIterator", $STATIC},
	{}
};

$ClassInfo _ImageIO$ImageWriterIterator_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.ImageIO$ImageWriterIterator",
	"java.lang.Object",
	"java.util.Iterator",
	_ImageIO$ImageWriterIterator_FieldInfo_,
	_ImageIO$ImageWriterIterator_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<Ljavax/imageio/ImageWriter;>;",
	nullptr,
	_ImageIO$ImageWriterIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.ImageIO"
};

$Object* allocate$ImageIO$ImageWriterIterator($Class* clazz) {
	return $of($alloc(ImageIO$ImageWriterIterator));
}

void ImageIO$ImageWriterIterator::init$($Iterator* iter) {
	$set(this, iter, iter);
}

bool ImageIO$ImageWriterIterator::hasNext() {
	return $nc(this->iter)->hasNext();
}

$Object* ImageIO$ImageWriterIterator::next() {
	$var($ImageWriterSpi, spi, nullptr);
	try {
		$assign(spi, $cast($ImageWriterSpi, $nc(this->iter)->next()));
		return $of($nc(spi)->createWriterInstance());
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		$init($ImageIO);
		$load($ImageWriterSpi);
		$nc($ImageIO::theRegistry)->deregisterServiceProvider(spi, $ImageWriterSpi::class$);
	}
	return $of(nullptr);
}

void ImageIO$ImageWriterIterator::remove() {
	$throwNew($UnsupportedOperationException);
}

ImageIO$ImageWriterIterator::ImageIO$ImageWriterIterator() {
}

$Class* ImageIO$ImageWriterIterator::load$($String* name, bool initialize) {
	$loadClass(ImageIO$ImageWriterIterator, name, initialize, &_ImageIO$ImageWriterIterator_ClassInfo_, allocate$ImageIO$ImageWriterIterator);
	return class$;
}

$Class* ImageIO$ImageWriterIterator::class$ = nullptr;

	} // imageio
} // javax