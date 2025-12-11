#include <com/apple/laf/AquaImageFactory$4.h>

#include <com/apple/laf/AquaIcon$CachingScalingIcon.h>
#include <com/apple/laf/AquaImageFactory.h>
#include <java/awt/Image.h>
#include <jcpp.h>

using $AquaIcon$CachingScalingIcon = ::com::apple::laf::AquaIcon$CachingScalingIcon;
using $AquaImageFactory = ::com::apple::laf::AquaImageFactory;
using $Image = ::java::awt::Image;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaImageFactory$4_MethodInfo_[] = {
	{"<init>", "(II)V", nullptr, 0, $method(static_cast<void(AquaImageFactory$4::*)(int32_t,int32_t)>(&AquaImageFactory$4::init$))},
	{"createImage", "()Ljava/awt/Image;", nullptr, 0},
	{}
};

$EnclosingMethodInfo _AquaImageFactory$4_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaImageFactory",
	"getAppIconImageCompositedOn",
	"(Ljava/awt/Image;I)Ljava/awt/image/BufferedImage;"
};

$InnerClassInfo _AquaImageFactory$4_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaImageFactory$4", nullptr, nullptr, 0},
	{"com.apple.laf.AquaIcon$CachingScalingIcon", "com.apple.laf.AquaIcon", "CachingScalingIcon", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _AquaImageFactory$4_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaImageFactory$4",
	"com.apple.laf.AquaIcon$CachingScalingIcon",
	nullptr,
	nullptr,
	_AquaImageFactory$4_MethodInfo_,
	nullptr,
	&_AquaImageFactory$4_EnclosingMethodInfo_,
	_AquaImageFactory$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaImageFactory"
};

$Object* allocate$AquaImageFactory$4($Class* clazz) {
	return $of($alloc(AquaImageFactory$4));
}

void AquaImageFactory$4::init$(int32_t width, int32_t height) {
	$AquaIcon$CachingScalingIcon::init$(width, height);
}

$Image* AquaImageFactory$4::createImage() {
	return $AquaImageFactory::getGenericJavaIcon();
}

AquaImageFactory$4::AquaImageFactory$4() {
}

$Class* AquaImageFactory$4::load$($String* name, bool initialize) {
	$loadClass(AquaImageFactory$4, name, initialize, &_AquaImageFactory$4_ClassInfo_, allocate$AquaImageFactory$4);
	return class$;
}

$Class* AquaImageFactory$4::class$ = nullptr;

		} // laf
	} // apple
} // com