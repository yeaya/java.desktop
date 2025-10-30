#include <sun/awt/image/ImageWatched$AccWeakReference.h>

#include <java/lang/ref/WeakReference.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <sun/awt/image/ImageWatched.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WeakReference = ::java::lang::ref::WeakReference;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AccessController = ::java::security::AccessController;
using $ImageWatched = ::sun::awt::image::ImageWatched;

namespace sun {
	namespace awt {
		namespace image {

$FieldInfo _ImageWatched$AccWeakReference_FieldInfo_[] = {
	{"acc", "Ljava/security/AccessControlContext;", nullptr, $PRIVATE | $FINAL, $field(ImageWatched$AccWeakReference, acc)},
	{}
};

$MethodInfo _ImageWatched$AccWeakReference_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;)V", "(TT;)V", 0, $method(static_cast<void(ImageWatched$AccWeakReference::*)(Object$*)>(&ImageWatched$AccWeakReference::init$))},
	{}
};

$InnerClassInfo _ImageWatched$AccWeakReference_InnerClassesInfo_[] = {
	{"sun.awt.image.ImageWatched$AccWeakReference", "sun.awt.image.ImageWatched", "AccWeakReference", $STATIC},
	{}
};

$ClassInfo _ImageWatched$AccWeakReference_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.image.ImageWatched$AccWeakReference",
	"java.lang.ref.WeakReference",
	nullptr,
	_ImageWatched$AccWeakReference_FieldInfo_,
	_ImageWatched$AccWeakReference_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/ref/WeakReference<TT;>;",
	nullptr,
	_ImageWatched$AccWeakReference_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.image.ImageWatched"
};

$Object* allocate$ImageWatched$AccWeakReference($Class* clazz) {
	return $of($alloc(ImageWatched$AccWeakReference));
}

void ImageWatched$AccWeakReference::init$(Object$* ref) {
	$WeakReference::init$(ref);
	$set(this, acc, $AccessController::getContext());
}

ImageWatched$AccWeakReference::ImageWatched$AccWeakReference() {
}

$Class* ImageWatched$AccWeakReference::load$($String* name, bool initialize) {
	$loadClass(ImageWatched$AccWeakReference, name, initialize, &_ImageWatched$AccWeakReference_ClassInfo_, allocate$ImageWatched$AccWeakReference);
	return class$;
}

$Class* ImageWatched$AccWeakReference::class$ = nullptr;

		} // image
	} // awt
} // sun