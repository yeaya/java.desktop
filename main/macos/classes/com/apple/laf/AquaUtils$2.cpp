#include <com/apple/laf/AquaUtils$2.h>

#include <com/apple/laf/AquaUtils$IconImageFilter.h>
#include <com/apple/laf/AquaUtils.h>
#include <jcpp.h>

using $AquaUtils$IconImageFilter = ::com::apple::laf::AquaUtils$IconImageFilter;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaUtils$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AquaUtils$2::*)()>(&AquaUtils$2::init$))},
	{"getGreyFor", "(I)I", nullptr, 0},
	{}
};

$EnclosingMethodInfo _AquaUtils$2_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaUtils",
	"generateDisabledImage",
	"(Ljava/awt/Image;)Ljava/awt/Image;"
};

$InnerClassInfo _AquaUtils$2_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaUtils$2", nullptr, nullptr, 0},
	{"com.apple.laf.AquaUtils$IconImageFilter", "com.apple.laf.AquaUtils", "IconImageFilter", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _AquaUtils$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaUtils$2",
	"com.apple.laf.AquaUtils$IconImageFilter",
	nullptr,
	nullptr,
	_AquaUtils$2_MethodInfo_,
	nullptr,
	&_AquaUtils$2_EnclosingMethodInfo_,
	_AquaUtils$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaUtils"
};

$Object* allocate$AquaUtils$2($Class* clazz) {
	return $of($alloc(AquaUtils$2));
}

void AquaUtils$2::init$() {
	$AquaUtils$IconImageFilter::init$();
}

int32_t AquaUtils$2::getGreyFor(int32_t gray) {
	return 255 - ((255 - gray) * 65 / 100);
}

AquaUtils$2::AquaUtils$2() {
}

$Class* AquaUtils$2::load$($String* name, bool initialize) {
	$loadClass(AquaUtils$2, name, initialize, &_AquaUtils$2_ClassInfo_, allocate$AquaUtils$2);
	return class$;
}

$Class* AquaUtils$2::class$ = nullptr;

		} // laf
	} // apple
} // com