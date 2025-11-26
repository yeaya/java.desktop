#include <sun/swing/ImageCache$Entry.h>

#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Image.h>
#include <sun/swing/ImageCache.h>
#include <jcpp.h>

using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Image = ::java::awt::Image;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageCache = ::sun::swing::ImageCache;

namespace sun {
	namespace swing {

$FieldInfo _ImageCache$Entry_FieldInfo_[] = {
	{"config", "Ljava/awt/GraphicsConfiguration;", nullptr, $PRIVATE | $FINAL, $field(ImageCache$Entry, config)},
	{"w", "I", nullptr, $PRIVATE | $FINAL, $field(ImageCache$Entry, w)},
	{"h", "I", nullptr, $PRIVATE | $FINAL, $field(ImageCache$Entry, h)},
	{"args", "[Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(ImageCache$Entry, args)},
	{"image", "Ljava/awt/Image;", nullptr, $PRIVATE, $field(ImageCache$Entry, image)},
	{}
};

$MethodInfo _ImageCache$Entry_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/GraphicsConfiguration;II[Ljava/lang/Object;)V", nullptr, 0, $method(static_cast<void(ImageCache$Entry::*)($GraphicsConfiguration*,int32_t,int32_t,$ObjectArray*)>(&ImageCache$Entry::init$))},
	{"equals", "(Ljava/awt/GraphicsConfiguration;II[Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getImage", "()Ljava/awt/Image;", nullptr, $PUBLIC},
	{"setImage", "(Ljava/awt/Image;)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ImageCache$Entry_InnerClassesInfo_[] = {
	{"sun.swing.ImageCache$Entry", "sun.swing.ImageCache", "Entry", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ImageCache$Entry_ClassInfo_ = {
	$ACC_SUPER,
	"sun.swing.ImageCache$Entry",
	"java.lang.Object",
	nullptr,
	_ImageCache$Entry_FieldInfo_,
	_ImageCache$Entry_MethodInfo_,
	nullptr,
	nullptr,
	_ImageCache$Entry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.ImageCache"
};

$Object* allocate$ImageCache$Entry($Class* clazz) {
	return $of($alloc(ImageCache$Entry));
}

void ImageCache$Entry::init$($GraphicsConfiguration* config, int32_t w, int32_t h, $ObjectArray* args) {
	$set(this, config, config);
	$set(this, args, args);
	this->w = w;
	this->h = h;
}

void ImageCache$Entry::setImage($Image* image) {
	$set(this, image, image);
}

$Image* ImageCache$Entry::getImage() {
	return this->image;
}

$String* ImageCache$Entry::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, value, $str({$($Object::toString()), "[ graphicsConfig="_s, this->config, ", image="_s, this->image, ", w="_s, $$str(this->w), ", h="_s, $$str(this->h)}));
	if (this->args != nullptr) {
		for (int32_t counter = 0; counter < $nc(this->args)->length; ++counter) {
			$plusAssign(value, $$str({", "_s, $nc(this->args)->get(counter)}));
		}
	}
	$plusAssign(value, "]"_s);
	return value;
}

bool ImageCache$Entry::equals($GraphicsConfiguration* config, int32_t w, int32_t h, $ObjectArray* args) {
	$useLocalCurrentObjectStackCache();
	if (this->w == w && this->h == h && ((this->config != nullptr && $nc($of(this->config))->equals(config)) || (this->config == nullptr && config == nullptr))) {
		if (this->args == nullptr && args == nullptr) {
			return true;
		}
		if (this->args != nullptr && args != nullptr && $nc(this->args)->length == args->length) {
			for (int32_t counter = args->length - 1; counter >= 0; --counter) {
				$var($Object0, a1, $nc(this->args)->get(counter));
				$var($Object0, a2, args->get(counter));
				if ((a1 == nullptr && a2 != nullptr) || (a1 != nullptr && !$of(a1)->equals(a2))) {
					return false;
				}
			}
			return true;
		}
	}
	return false;
}

ImageCache$Entry::ImageCache$Entry() {
}

$Class* ImageCache$Entry::load$($String* name, bool initialize) {
	$loadClass(ImageCache$Entry, name, initialize, &_ImageCache$Entry_ClassInfo_, allocate$ImageCache$Entry);
	return class$;
}

$Class* ImageCache$Entry::class$ = nullptr;

	} // swing
} // sun