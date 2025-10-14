#include <com/sun/imageio/plugins/jpeg/ImageTypeIterator.h>

#include <com/sun/imageio/plugins/jpeg/ImageTypeProducer.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Iterator.h>
#include <java/util/NoSuchElementException.h>
#include <javax/imageio/ImageTypeSpecifier.h>
#include <jcpp.h>

using $ImageTypeProducer = ::com::sun::imageio::plugins::jpeg::ImageTypeProducer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $ImageTypeSpecifier = ::javax::imageio::ImageTypeSpecifier;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {

$FieldInfo _ImageTypeIterator_FieldInfo_[] = {
	{"producers", "Ljava/util/Iterator;", "Ljava/util/Iterator<Lcom/sun/imageio/plugins/jpeg/ImageTypeProducer;>;", $PRIVATE, $field(ImageTypeIterator, producers)},
	{"theNext", "Ljavax/imageio/ImageTypeSpecifier;", nullptr, $PRIVATE, $field(ImageTypeIterator, theNext)},
	{}
};

$MethodInfo _ImageTypeIterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Iterator;)V", "(Ljava/util/Iterator<Lcom/sun/imageio/plugins/jpeg/ImageTypeProducer;>;)V", $PUBLIC, $method(static_cast<void(ImageTypeIterator::*)($Iterator*)>(&ImageTypeIterator::init$))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljavax/imageio/ImageTypeSpecifier;", nullptr, $PUBLIC},
	{"remove", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ImageTypeIterator_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.imageio.plugins.jpeg.ImageTypeIterator",
	"java.lang.Object",
	"java.util.Iterator",
	_ImageTypeIterator_FieldInfo_,
	_ImageTypeIterator_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<Ljavax/imageio/ImageTypeSpecifier;>;"
};

$Object* allocate$ImageTypeIterator($Class* clazz) {
	return $of($alloc(ImageTypeIterator));
}

void ImageTypeIterator::init$($Iterator* producers) {
	$set(this, theNext, nullptr);
	$set(this, producers, producers);
}

bool ImageTypeIterator::hasNext() {
	if (this->theNext != nullptr) {
		return true;
	}
	if (!$nc(this->producers)->hasNext()) {
		return false;
	}
	do {
		$set(this, theNext, $nc(($cast($ImageTypeProducer, $($nc(this->producers)->next()))))->getType());
	} while (this->theNext == nullptr && $nc(this->producers)->hasNext());
	return (this->theNext != nullptr);
}

$Object* ImageTypeIterator::next() {
	if (this->theNext != nullptr || hasNext()) {
		$var($ImageTypeSpecifier, t, this->theNext);
		$set(this, theNext, nullptr);
		return $of(t);
	} else {
		$throwNew($NoSuchElementException);
	}
}

void ImageTypeIterator::remove() {
	$nc(this->producers)->remove();
}

ImageTypeIterator::ImageTypeIterator() {
}

$Class* ImageTypeIterator::load$($String* name, bool initialize) {
	$loadClass(ImageTypeIterator, name, initialize, &_ImageTypeIterator_ClassInfo_, allocate$ImageTypeIterator);
	return class$;
}

$Class* ImageTypeIterator::class$ = nullptr;

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com