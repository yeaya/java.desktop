#include <bug4337267$TestBufferedImage.h>

#include <bug4337267.h>
#include <java/awt/image/BufferedImage.h>
#include <jcpp.h>

#undef MAX_GLITCHES

using $BufferedImage = ::java::awt::image::BufferedImage;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _bug4337267$TestBufferedImage_FieldInfo_[] = {
	{"MAX_GLITCHES", "I", nullptr, 0, $field(bug4337267$TestBufferedImage, MAX_GLITCHES)},
	{}
};

$MethodInfo _bug4337267$TestBufferedImage_MethodInfo_[] = {
	{"<init>", "(III)V", nullptr, 0, $method(static_cast<void(bug4337267$TestBufferedImage::*)(int32_t,int32_t,int32_t)>(&bug4337267$TestBufferedImage::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _bug4337267$TestBufferedImage_InnerClassesInfo_[] = {
	{"bug4337267$TestBufferedImage", "bug4337267", "TestBufferedImage", $STATIC},
	{}
};

$ClassInfo _bug4337267$TestBufferedImage_ClassInfo_ = {
	$ACC_SUPER,
	"bug4337267$TestBufferedImage",
	"java.awt.image.BufferedImage",
	nullptr,
	_bug4337267$TestBufferedImage_FieldInfo_,
	_bug4337267$TestBufferedImage_MethodInfo_,
	nullptr,
	nullptr,
	_bug4337267$TestBufferedImage_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4337267"
};

$Object* allocate$bug4337267$TestBufferedImage($Class* clazz) {
	return $of($alloc(bug4337267$TestBufferedImage));
}

void bug4337267$TestBufferedImage::init$(int32_t width, int32_t height, int32_t imageType) {
	$BufferedImage::init$(width, height, imageType);
	this->MAX_GLITCHES = 0;
}

bool bug4337267$TestBufferedImage::equals(Object$* other) {
	if (!($instanceOf(bug4337267$TestBufferedImage, other))) {
		return false;
	}
	$var(bug4337267$TestBufferedImage, image2, $cast(bug4337267$TestBufferedImage, other));
	int32_t width = getWidth();
	int32_t height = getHeight();
	bool var$0 = ($nc(image2)->getWidth() != width);
	if (var$0 || ($nc(image2)->getHeight() != height)) {
		return false;
	}
	int32_t glitches = 0;
	for (int32_t x = 0; x < width; ++x) {
		for (int32_t y = 0; y < height; ++y) {
			int32_t rgb1 = getRGB(x, y);
			int32_t rgb2 = $nc(image2)->getRGB(x, y);
			if (rgb1 != rgb2) {
				++glitches;
			}
		}
	}
	return glitches <= this->MAX_GLITCHES;
}

bug4337267$TestBufferedImage::bug4337267$TestBufferedImage() {
}

$Class* bug4337267$TestBufferedImage::load$($String* name, bool initialize) {
	$loadClass(bug4337267$TestBufferedImage, name, initialize, &_bug4337267$TestBufferedImage_ClassInfo_, allocate$bug4337267$TestBufferedImage);
	return class$;
}

$Class* bug4337267$TestBufferedImage::class$ = nullptr;