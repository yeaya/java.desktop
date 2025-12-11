#include <com/apple/laf/AquaImageFactory$1.h>

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

$MethodInfo _AquaImageFactory$1_MethodInfo_[] = {
	{"<init>", "(II)V", nullptr, 0, $method(static_cast<void(AquaImageFactory$1::*)(int32_t,int32_t)>(&AquaImageFactory$1::init$))},
	{"createImage", "()Ljava/awt/Image;", nullptr, 0},
	{}
};

$EnclosingMethodInfo _AquaImageFactory$1_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaImageFactory",
	"getConfirmImageIcon",
	"()Ljavax/swing/plaf/IconUIResource;"
};

$InnerClassInfo _AquaImageFactory$1_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaImageFactory$1", nullptr, nullptr, 0},
	{"com.apple.laf.AquaIcon$CachingScalingIcon", "com.apple.laf.AquaIcon", "CachingScalingIcon", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _AquaImageFactory$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaImageFactory$1",
	"com.apple.laf.AquaIcon$CachingScalingIcon",
	nullptr,
	nullptr,
	_AquaImageFactory$1_MethodInfo_,
	nullptr,
	&_AquaImageFactory$1_EnclosingMethodInfo_,
	_AquaImageFactory$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaImageFactory"
};

$Object* allocate$AquaImageFactory$1($Class* clazz) {
	return $of($alloc(AquaImageFactory$1));
}

void AquaImageFactory$1::init$(int32_t width, int32_t height) {
	$AquaIcon$CachingScalingIcon::init$(width, height);
}

$Image* AquaImageFactory$1::createImage() {
	return $AquaImageFactory::getGenericJavaIcon();
}

AquaImageFactory$1::AquaImageFactory$1() {
}

$Class* AquaImageFactory$1::load$($String* name, bool initialize) {
	$loadClass(AquaImageFactory$1, name, initialize, &_AquaImageFactory$1_ClassInfo_, allocate$AquaImageFactory$1);
	return class$;
}

$Class* AquaImageFactory$1::class$ = nullptr;

		} // laf
	} // apple
} // com