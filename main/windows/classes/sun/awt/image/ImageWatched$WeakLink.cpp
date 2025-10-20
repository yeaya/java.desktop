#include <sun/awt/image/ImageWatched$WeakLink.h>

#include <java/awt/Image.h>
#include <java/awt/image/ImageObserver.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <sun/awt/image/ImageWatched$AccWeakReference.h>
#include <sun/awt/image/ImageWatched$Link.h>
#include <sun/awt/image/ImageWatched.h>
#include <jcpp.h>

using $Image = ::java::awt::Image;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Reference = ::java::lang::ref::Reference;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ImageWatched = ::sun::awt::image::ImageWatched;
using $ImageWatched$AccWeakReference = ::sun::awt::image::ImageWatched$AccWeakReference;
using $ImageWatched$Link = ::sun::awt::image::ImageWatched$Link;

namespace sun {
	namespace awt {
		namespace image {

class ImageWatched$WeakLink$$Lambda$lambda$update$0 : public $PrivilegedAction {
	$class(ImageWatched$WeakLink$$Lambda$lambda$update$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$($ImageObserver* iw, $Image* img, int32_t info, int32_t x, int32_t y, int32_t w, int32_t h) {
		$set(this, iw, iw);
		$set(this, img, img);
		this->info = info;
		this->x = x;
		this->y = y;
		this->w = w;
		this->h = h;
	}
	virtual $Object* run() override {
		 return $of(ImageWatched$WeakLink::lambda$update$0(iw, img, info, x, y, w, h));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ImageWatched$WeakLink$$Lambda$lambda$update$0>());
	}
	$ImageObserver* iw = nullptr;
	$Image* img = nullptr;
	int32_t info = 0;
	int32_t x = 0;
	int32_t y = 0;
	int32_t w = 0;
	int32_t h = 0;
	static $FieldInfo fieldInfos[8];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ImageWatched$WeakLink$$Lambda$lambda$update$0::fieldInfos[8] = {
	{"iw", "Ljava/awt/image/ImageObserver;", nullptr, $PUBLIC, $field(ImageWatched$WeakLink$$Lambda$lambda$update$0, iw)},
	{"img", "Ljava/awt/Image;", nullptr, $PUBLIC, $field(ImageWatched$WeakLink$$Lambda$lambda$update$0, img)},
	{"info", "I", nullptr, $PUBLIC, $field(ImageWatched$WeakLink$$Lambda$lambda$update$0, info)},
	{"x", "I", nullptr, $PUBLIC, $field(ImageWatched$WeakLink$$Lambda$lambda$update$0, x)},
	{"y", "I", nullptr, $PUBLIC, $field(ImageWatched$WeakLink$$Lambda$lambda$update$0, y)},
	{"w", "I", nullptr, $PUBLIC, $field(ImageWatched$WeakLink$$Lambda$lambda$update$0, w)},
	{"h", "I", nullptr, $PUBLIC, $field(ImageWatched$WeakLink$$Lambda$lambda$update$0, h)},
	{}
};
$MethodInfo ImageWatched$WeakLink$$Lambda$lambda$update$0::methodInfos[3] = {
	{"<init>", "(Ljava/awt/image/ImageObserver;Ljava/awt/Image;IIIII)V", nullptr, $PUBLIC, $method(static_cast<void(ImageWatched$WeakLink$$Lambda$lambda$update$0::*)($ImageObserver*,$Image*,int32_t,int32_t,int32_t,int32_t,int32_t)>(&ImageWatched$WeakLink$$Lambda$lambda$update$0::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ImageWatched$WeakLink$$Lambda$lambda$update$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.awt.image.ImageWatched$WeakLink$$Lambda$lambda$update$0",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	fieldInfos,
	methodInfos
};
$Class* ImageWatched$WeakLink$$Lambda$lambda$update$0::load$($String* name, bool initialize) {
	$loadClass(ImageWatched$WeakLink$$Lambda$lambda$update$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ImageWatched$WeakLink$$Lambda$lambda$update$0::class$ = nullptr;

$FieldInfo _ImageWatched$WeakLink_FieldInfo_[] = {
	{"myref", "Lsun/awt/image/ImageWatched$AccWeakReference;", "Lsun/awt/image/ImageWatched$AccWeakReference<Ljava/awt/image/ImageObserver;>;", $PRIVATE | $FINAL, $field(ImageWatched$WeakLink, myref)},
	{"next", "Lsun/awt/image/ImageWatched$Link;", nullptr, $PRIVATE, $field(ImageWatched$WeakLink, next)},
	{}
};

$MethodInfo _ImageWatched$WeakLink_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/image/ImageObserver;Lsun/awt/image/ImageWatched$Link;)V", nullptr, $PUBLIC, $method(static_cast<void(ImageWatched$WeakLink::*)($ImageObserver*,$ImageWatched$Link*)>(&ImageWatched$WeakLink::init$))},
	{"isWatcher", "(Ljava/awt/image/ImageObserver;)Z", nullptr, $PUBLIC},
	{"lambda$update$0", "(Ljava/awt/image/ImageObserver;Ljava/awt/Image;IIIII)Ljava/lang/Boolean;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Boolean*(*)($ImageObserver*,$Image*,int32_t,int32_t,int32_t,int32_t,int32_t)>(&ImageWatched$WeakLink::lambda$update$0))},
	{"newInfo", "(Ljava/awt/Image;IIIII)Z", nullptr, $PUBLIC},
	{"removeWatcher", "(Ljava/awt/image/ImageObserver;)Lsun/awt/image/ImageWatched$Link;", nullptr, $PUBLIC},
	{"update", "(Ljava/awt/image/ImageObserver;Ljava/security/AccessControlContext;Ljava/awt/Image;IIIII)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($ImageObserver*,$AccessControlContext*,$Image*,int32_t,int32_t,int32_t,int32_t,int32_t)>(&ImageWatched$WeakLink::update))},
	{}
};

$InnerClassInfo _ImageWatched$WeakLink_InnerClassesInfo_[] = {
	{"sun.awt.image.ImageWatched$WeakLink", "sun.awt.image.ImageWatched", "WeakLink", $PUBLIC | $STATIC},
	{"sun.awt.image.ImageWatched$Link", "sun.awt.image.ImageWatched", "Link", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _ImageWatched$WeakLink_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.image.ImageWatched$WeakLink",
	"sun.awt.image.ImageWatched$Link",
	nullptr,
	_ImageWatched$WeakLink_FieldInfo_,
	_ImageWatched$WeakLink_MethodInfo_,
	nullptr,
	nullptr,
	_ImageWatched$WeakLink_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.image.ImageWatched"
};

$Object* allocate$ImageWatched$WeakLink($Class* clazz) {
	return $of($alloc(ImageWatched$WeakLink));
}

void ImageWatched$WeakLink::init$($ImageObserver* obs, $ImageWatched$Link* next) {
	$ImageWatched$Link::init$();
	$set(this, myref, $new($ImageWatched$AccWeakReference, obs));
	$set(this, next, next);
}

bool ImageWatched$WeakLink::isWatcher($ImageObserver* iw) {
	bool var$0 = $equals($nc(this->myref)->get(), iw);
	return (var$0 || $nc(this->next)->isWatcher(iw));
}

$ImageWatched$Link* ImageWatched$WeakLink::removeWatcher($ImageObserver* iw) {
	$var($ImageObserver, myiw, $cast($ImageObserver, $nc(this->myref)->get()));
	if (myiw == nullptr) {
		return $nc(this->next)->removeWatcher(iw);
	}
	if (myiw == iw) {
		return this->next;
	}
	$set(this, next, $nc(this->next)->removeWatcher(iw));
	return this;
}

bool ImageWatched$WeakLink::update($ImageObserver* iw, $AccessControlContext* acc, $Image* img, int32_t info, int32_t x, int32_t y, int32_t w, int32_t h) {
	$init(ImageWatched$WeakLink);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if (acc != nullptr || $System::getSecurityManager() != nullptr) {
		return $nc(($cast($Boolean, $($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(ImageWatched$WeakLink$$Lambda$lambda$update$0, iw, img, info, x, y, w, h)), acc)))))->booleanValue();
	}
	return false;
}

bool ImageWatched$WeakLink::newInfo($Image* img, int32_t info, int32_t x, int32_t y, int32_t w, int32_t h) {
	bool ret = $nc(this->next)->newInfo(img, info, x, y, w, h);
	$var($ImageObserver, myiw, $cast($ImageObserver, $nc(this->myref)->get()));
	if (myiw == nullptr) {
		ret = true;
	} else if (update(myiw, $nc(this->myref)->acc, img, info, x, y, w, h) == false) {
		$nc(this->myref)->clear();
		ret = true;
	}
	return ret;
}

$Boolean* ImageWatched$WeakLink::lambda$update$0($ImageObserver* iw, $Image* img, int32_t info, int32_t x, int32_t y, int32_t w, int32_t h) {
	$init(ImageWatched$WeakLink);
	return $Boolean::valueOf($nc(iw)->imageUpdate(img, info, x, y, w, h));
}

ImageWatched$WeakLink::ImageWatched$WeakLink() {
}

$Class* ImageWatched$WeakLink::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ImageWatched$WeakLink$$Lambda$lambda$update$0::classInfo$.name)) {
			return ImageWatched$WeakLink$$Lambda$lambda$update$0::load$(name, initialize);
		}
	}
	$loadClass(ImageWatched$WeakLink, name, initialize, &_ImageWatched$WeakLink_ClassInfo_, allocate$ImageWatched$WeakLink);
	return class$;
}

$Class* ImageWatched$WeakLink::class$ = nullptr;

		} // image
	} // awt
} // sun