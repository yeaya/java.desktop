#include <com/apple/laf/AquaUtils$1.h>

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

$MethodInfo _AquaUtils$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AquaUtils$1::*)()>(&AquaUtils$1::init$))},
	{"getGreyFor", "(I)I", nullptr, 0},
	{}
};

$EnclosingMethodInfo _AquaUtils$1_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaUtils",
	"generateSelectedDarkImage",
	"(Ljava/awt/Image;)Ljava/awt/Image;"
};

$InnerClassInfo _AquaUtils$1_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaUtils$1", nullptr, nullptr, 0},
	{"com.apple.laf.AquaUtils$IconImageFilter", "com.apple.laf.AquaUtils", "IconImageFilter", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _AquaUtils$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaUtils$1",
	"com.apple.laf.AquaUtils$IconImageFilter",
	nullptr,
	nullptr,
	_AquaUtils$1_MethodInfo_,
	nullptr,
	&_AquaUtils$1_EnclosingMethodInfo_,
	_AquaUtils$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaUtils"
};

$Object* allocate$AquaUtils$1($Class* clazz) {
	return $of($alloc(AquaUtils$1));
}

void AquaUtils$1::init$() {
	$AquaUtils$IconImageFilter::init$();
}

int32_t AquaUtils$1::getGreyFor(int32_t gray) {
	return gray * 75 / 100;
}

AquaUtils$1::AquaUtils$1() {
}

$Class* AquaUtils$1::load$($String* name, bool initialize) {
	$loadClass(AquaUtils$1, name, initialize, &_AquaUtils$1_ClassInfo_, allocate$AquaUtils$1);
	return class$;
}

$Class* AquaUtils$1::class$ = nullptr;

		} // laf
	} // apple
} // com