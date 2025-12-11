#include <javax/swing/plaf/nimbus/ImageCache$PixelCountSoftReference.h>

#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Image.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/ref/SoftReference.h>
#include <java/util/Arrays.h>
#include <javax/swing/plaf/nimbus/ImageCache.h>
#include <jcpp.h>

using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Image = ::java::awt::Image;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $SoftReference = ::java::lang::ref::SoftReference;
using $Arrays = ::java::util::Arrays;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

$FieldInfo _ImageCache$PixelCountSoftReference_FieldInfo_[] = {
	{"pixelCount", "I", nullptr, $PRIVATE | $FINAL, $field(ImageCache$PixelCountSoftReference, pixelCount)},
	{"hash", "I", nullptr, $PRIVATE | $FINAL, $field(ImageCache$PixelCountSoftReference, hash)},
	{"config", "Ljava/awt/GraphicsConfiguration;", nullptr, $PRIVATE | $FINAL, $field(ImageCache$PixelCountSoftReference, config)},
	{"w", "I", nullptr, $PRIVATE | $FINAL, $field(ImageCache$PixelCountSoftReference, w)},
	{"h", "I", nullptr, $PRIVATE | $FINAL, $field(ImageCache$PixelCountSoftReference, h)},
	{"args", "[Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(ImageCache$PixelCountSoftReference, args)},
	{}
};

$MethodInfo _ImageCache$PixelCountSoftReference_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Image;Ljava/lang/ref/ReferenceQueue;IILjava/awt/GraphicsConfiguration;II[Ljava/lang/Object;)V", "(Ljava/awt/Image;Ljava/lang/ref/ReferenceQueue<-Ljava/awt/Image;>;IILjava/awt/GraphicsConfiguration;II[Ljava/lang/Object;)V", $PUBLIC, $method(static_cast<void(ImageCache$PixelCountSoftReference::*)($Image*,$ReferenceQueue*,int32_t,int32_t,$GraphicsConfiguration*,int32_t,int32_t,$ObjectArray*)>(&ImageCache$PixelCountSoftReference::init$))},
	{"equals", "(Ljava/awt/GraphicsConfiguration;II[Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ImageCache$PixelCountSoftReference_InnerClassesInfo_[] = {
	{"javax.swing.plaf.nimbus.ImageCache$PixelCountSoftReference", "javax.swing.plaf.nimbus.ImageCache", "PixelCountSoftReference", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ImageCache$PixelCountSoftReference_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.nimbus.ImageCache$PixelCountSoftReference",
	"java.lang.ref.SoftReference",
	nullptr,
	_ImageCache$PixelCountSoftReference_FieldInfo_,
	_ImageCache$PixelCountSoftReference_MethodInfo_,
	"Ljava/lang/ref/SoftReference<Ljava/awt/Image;>;",
	nullptr,
	_ImageCache$PixelCountSoftReference_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.nimbus.ImageCache"
};

$Object* allocate$ImageCache$PixelCountSoftReference($Class* clazz) {
	return $of($alloc(ImageCache$PixelCountSoftReference));
}

void ImageCache$PixelCountSoftReference::init$($Image* referent, $ReferenceQueue* q, int32_t pixelCount, int32_t hash, $GraphicsConfiguration* config, int32_t w, int32_t h, $ObjectArray* args) {
	$SoftReference::init$(referent, q);
	this->pixelCount = pixelCount;
	this->hash = hash;
	$set(this, config, config);
	this->w = w;
	this->h = h;
	$set(this, args, args);
}

bool ImageCache$PixelCountSoftReference::equals($GraphicsConfiguration* config, int32_t w, int32_t h, $ObjectArray* args) {
	return config == this->config && w == this->w && h == this->h && $Arrays::equals(args, this->args);
}

ImageCache$PixelCountSoftReference::ImageCache$PixelCountSoftReference() {
}

$Class* ImageCache$PixelCountSoftReference::load$($String* name, bool initialize) {
	$loadClass(ImageCache$PixelCountSoftReference, name, initialize, &_ImageCache$PixelCountSoftReference_ClassInfo_, allocate$ImageCache$PixelCountSoftReference);
	return class$;
}

$Class* ImageCache$PixelCountSoftReference::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax