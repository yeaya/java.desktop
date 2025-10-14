#include <sun/awt/image/ImageDecoder.h>

#include <java/awt/image/ColorModel.h>
#include <java/awt/image/ImageConsumer.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Hashtable.h>
#include <sun/awt/image/ImageConsumerQueue.h>
#include <sun/awt/image/ImageDecoder$1.h>
#include <sun/awt/image/ImageFetcher.h>
#include <sun/awt/image/InputStreamImageSource.h>
#include <jcpp.h>

#undef LOW_PRIORITY

using $ColorModel = ::java::awt::image::ColorModel;
using $ImageConsumer = ::java::awt::image::ImageConsumer;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Hashtable = ::java::util::Hashtable;
using $ImageConsumerQueue = ::sun::awt::image::ImageConsumerQueue;
using $ImageDecoder$1 = ::sun::awt::image::ImageDecoder$1;
using $ImageFetcher = ::sun::awt::image::ImageFetcher;
using $InputStreamImageSource = ::sun::awt::image::InputStreamImageSource;

namespace sun {
	namespace awt {
		namespace image {

$FieldInfo _ImageDecoder_FieldInfo_[] = {
	{"source", "Lsun/awt/image/InputStreamImageSource;", nullptr, 0, $field(ImageDecoder, source)},
	{"input", "Ljava/io/InputStream;", nullptr, 0, $field(ImageDecoder, input)},
	{"feeder", "Ljava/lang/Thread;", nullptr, 0, $field(ImageDecoder, feeder)},
	{"aborted", "Z", nullptr, $PROTECTED, $field(ImageDecoder, aborted)},
	{"finished", "Z", nullptr, $PROTECTED, $field(ImageDecoder, finished)},
	{"queue", "Lsun/awt/image/ImageConsumerQueue;", nullptr, 0, $field(ImageDecoder, queue)},
	{"next", "Lsun/awt/image/ImageDecoder;", nullptr, 0, $field(ImageDecoder, next)},
	{}
};

$MethodInfo _ImageDecoder_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/image/InputStreamImageSource;Ljava/io/InputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(ImageDecoder::*)($InputStreamImageSource*,$InputStream*)>(&ImageDecoder::init$))},
	{"abort", "()V", nullptr, $PUBLIC},
	{"close", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"headerComplete", "()V", nullptr, $PROTECTED},
	{"imageComplete", "(IZ)I", nullptr, $PROTECTED},
	{"isConsumer", "(Ljava/awt/image/ImageConsumer;)Z", nullptr, $PUBLIC},
	{"nextConsumer", "(Lsun/awt/image/ImageConsumerQueue;)Lsun/awt/image/ImageConsumerQueue;", nullptr, $PROTECTED},
	{"produceImage", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException,sun.awt.image.ImageFormatException"},
	{"removeConsumer", "(Ljava/awt/image/ImageConsumer;)V", nullptr, $PUBLIC},
	{"setColorModel", "(Ljava/awt/image/ColorModel;)I", nullptr, $PROTECTED},
	{"setDimensions", "(II)I", nullptr, $PROTECTED},
	{"setHints", "(I)I", nullptr, $PROTECTED},
	{"setPixels", "(IIIILjava/awt/image/ColorModel;[BII)I", nullptr, $PROTECTED},
	{"setPixels", "(IIIILjava/awt/image/ColorModel;[III)I", nullptr, $PROTECTED},
	{"setProperties", "(Ljava/util/Hashtable;)I", "(Ljava/util/Hashtable<**>;)I", $PROTECTED},
	{}
};

$InnerClassInfo _ImageDecoder_InnerClassesInfo_[] = {
	{"sun.awt.image.ImageDecoder$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ImageDecoder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.awt.image.ImageDecoder",
	"java.lang.Object",
	nullptr,
	_ImageDecoder_FieldInfo_,
	_ImageDecoder_MethodInfo_,
	nullptr,
	nullptr,
	_ImageDecoder_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.image.ImageDecoder$1"
};

$Object* allocate$ImageDecoder($Class* clazz) {
	return $of($alloc(ImageDecoder));
}

void ImageDecoder::init$($InputStreamImageSource* src, $InputStream* is) {
	$set(this, source, src);
	$set(this, input, is);
	$set(this, feeder, $Thread::currentThread());
}

bool ImageDecoder::isConsumer($ImageConsumer* ic) {
	return $ImageConsumerQueue::isConsumer(this->queue, ic);
}

void ImageDecoder::removeConsumer($ImageConsumer* ic) {
	$set(this, queue, $ImageConsumerQueue::removeConsumer(this->queue, ic, false));
	if (!this->finished && this->queue == nullptr) {
		abort();
	}
}

$ImageConsumerQueue* ImageDecoder::nextConsumer($ImageConsumerQueue* cq$renamed) {
	$var($ImageConsumerQueue, cq, cq$renamed);
	$synchronized(this->source) {
		if (this->aborted) {
			return nullptr;
		}
		$assign(cq, (cq == nullptr) ? this->queue : $nc(cq)->next);
		while (cq != nullptr) {
			if (cq->interested) {
				return cq;
			}
			$assign(cq, cq->next);
		}
	}
	return nullptr;
}

int32_t ImageDecoder::setDimensions(int32_t w, int32_t h) {
	$var($ImageConsumerQueue, cq, nullptr);
	int32_t count = 0;
	while (($assign(cq, nextConsumer(cq))) != nullptr) {
		$nc($nc(cq)->consumer)->setDimensions(w, h);
		++count;
	}
	return count;
}

int32_t ImageDecoder::setProperties($Hashtable* props) {
	$var($ImageConsumerQueue, cq, nullptr);
	int32_t count = 0;
	while (($assign(cq, nextConsumer(cq))) != nullptr) {
		$nc($nc(cq)->consumer)->setProperties(props);
		++count;
	}
	return count;
}

int32_t ImageDecoder::setColorModel($ColorModel* model) {
	$var($ImageConsumerQueue, cq, nullptr);
	int32_t count = 0;
	while (($assign(cq, nextConsumer(cq))) != nullptr) {
		$nc($nc(cq)->consumer)->setColorModel(model);
		++count;
	}
	return count;
}

int32_t ImageDecoder::setHints(int32_t hints) {
	$var($ImageConsumerQueue, cq, nullptr);
	int32_t count = 0;
	while (($assign(cq, nextConsumer(cq))) != nullptr) {
		$nc($nc(cq)->consumer)->setHints(hints);
		++count;
	}
	return count;
}

void ImageDecoder::headerComplete() {
	$nc(this->feeder)->setPriority($ImageFetcher::LOW_PRIORITY);
}

int32_t ImageDecoder::setPixels(int32_t x, int32_t y, int32_t w, int32_t h, $ColorModel* model, $bytes* pix, int32_t off, int32_t scansize) {
	$nc(this->source)->latchConsumers(this);
	$var($ImageConsumerQueue, cq, nullptr);
	int32_t count = 0;
	while (($assign(cq, nextConsumer(cq))) != nullptr) {
		$nc($nc(cq)->consumer)->setPixels(x, y, w, h, model, pix, off, scansize);
		++count;
	}
	return count;
}

int32_t ImageDecoder::setPixels(int32_t x, int32_t y, int32_t w, int32_t h, $ColorModel* model, $ints* pix, int32_t off, int32_t scansize) {
	$nc(this->source)->latchConsumers(this);
	$var($ImageConsumerQueue, cq, nullptr);
	int32_t count = 0;
	while (($assign(cq, nextConsumer(cq))) != nullptr) {
		$nc($nc(cq)->consumer)->setPixels(x, y, w, h, model, pix, off, scansize);
		++count;
	}
	return count;
}

int32_t ImageDecoder::imageComplete(int32_t status, bool done) {
	$nc(this->source)->latchConsumers(this);
	if (done) {
		this->finished = true;
		$nc(this->source)->doneDecoding(this);
	}
	$var($ImageConsumerQueue, cq, nullptr);
	int32_t count = 0;
	while (($assign(cq, nextConsumer(cq))) != nullptr) {
		$nc($nc(cq)->consumer)->imageComplete(status);
		++count;
	}
	return count;
}

void ImageDecoder::abort() {
	$beforeCallerSensitive();
	this->aborted = true;
	$nc(this->source)->doneDecoding(this);
	close();
	$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($ImageDecoder$1, this)));
}

void ImageDecoder::close() {
	$synchronized(this) {
		if (this->input != nullptr) {
			try {
				$nc(this->input)->close();
			} catch ($IOException&) {
				$catch();
			}
		}
	}
}

ImageDecoder::ImageDecoder() {
}

$Class* ImageDecoder::load$($String* name, bool initialize) {
	$loadClass(ImageDecoder, name, initialize, &_ImageDecoder_ClassInfo_, allocate$ImageDecoder);
	return class$;
}

$Class* ImageDecoder::class$ = nullptr;

		} // image
	} // awt
} // sun