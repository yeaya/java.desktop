#include <javax/imageio/ImageIO$ImageReaderIterator.h>

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
#include <javax/imageio/ImageReader.h>
#include <javax/imageio/spi/IIORegistry.h>
#include <javax/imageio/spi/ImageReaderSpi.h>
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
using $ImageReader = ::javax::imageio::ImageReader;
using $IIORegistry = ::javax::imageio::spi::IIORegistry;
using $ImageReaderSpi = ::javax::imageio::spi::ImageReaderSpi;
using $ServiceRegistry = ::javax::imageio::spi::ServiceRegistry;

namespace javax {
	namespace imageio {

$FieldInfo _ImageIO$ImageReaderIterator_FieldInfo_[] = {
	{"iter", "Ljava/util/Iterator;", "Ljava/util/Iterator<Ljavax/imageio/spi/ImageReaderSpi;>;", $PRIVATE, $field(ImageIO$ImageReaderIterator, iter)},
	{}
};

$MethodInfo _ImageIO$ImageReaderIterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Iterator;)V", "(Ljava/util/Iterator<Ljavax/imageio/spi/ImageReaderSpi;>;)V", $PUBLIC, $method(static_cast<void(ImageIO$ImageReaderIterator::*)($Iterator*)>(&ImageIO$ImageReaderIterator::init$))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljavax/imageio/ImageReader;", nullptr, $PUBLIC},
	{"remove", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ImageIO$ImageReaderIterator_InnerClassesInfo_[] = {
	{"javax.imageio.ImageIO$ImageReaderIterator", "javax.imageio.ImageIO", "ImageReaderIterator", $STATIC},
	{}
};

$ClassInfo _ImageIO$ImageReaderIterator_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.ImageIO$ImageReaderIterator",
	"java.lang.Object",
	"java.util.Iterator",
	_ImageIO$ImageReaderIterator_FieldInfo_,
	_ImageIO$ImageReaderIterator_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<Ljavax/imageio/ImageReader;>;",
	nullptr,
	_ImageIO$ImageReaderIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.ImageIO"
};

$Object* allocate$ImageIO$ImageReaderIterator($Class* clazz) {
	return $of($alloc(ImageIO$ImageReaderIterator));
}

void ImageIO$ImageReaderIterator::init$($Iterator* iter) {
	$set(this, iter, iter);
}

bool ImageIO$ImageReaderIterator::hasNext() {
	return $nc(this->iter)->hasNext();
}

$Object* ImageIO$ImageReaderIterator::next() {
	$useLocalCurrentObjectStackCache();
	$var($ImageReaderSpi, spi, nullptr);
	try {
		$assign(spi, $cast($ImageReaderSpi, $nc(this->iter)->next()));
		return $of($nc(spi)->createReaderInstance());
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		$init($ImageIO);
		$load($ImageReaderSpi);
		$nc($ImageIO::theRegistry)->deregisterServiceProvider(spi, $ImageReaderSpi::class$);
	}
	return $of(nullptr);
}

void ImageIO$ImageReaderIterator::remove() {
	$throwNew($UnsupportedOperationException);
}

ImageIO$ImageReaderIterator::ImageIO$ImageReaderIterator() {
}

$Class* ImageIO$ImageReaderIterator::load$($String* name, bool initialize) {
	$loadClass(ImageIO$ImageReaderIterator, name, initialize, &_ImageIO$ImageReaderIterator_ClassInfo_, allocate$ImageIO$ImageReaderIterator);
	return class$;
}

$Class* ImageIO$ImageReaderIterator::class$ = nullptr;

	} // imageio
} // javax