#include <com/apple/laf/AquaIcon$1.h>

#include <com/apple/laf/AquaIcon$JRSUIControlSpec.h>
#include <com/apple/laf/AquaIcon$ScalingJRSUIIcon.h>
#include <com/apple/laf/AquaIcon.h>
#include <com/apple/laf/AquaPainter.h>
#include <jcpp.h>

using $AquaIcon$JRSUIControlSpec = ::com::apple::laf::AquaIcon$JRSUIControlSpec;
using $AquaIcon$ScalingJRSUIIcon = ::com::apple::laf::AquaIcon$ScalingJRSUIIcon;
using $AquaPainter = ::com::apple::laf::AquaPainter;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaIcon$1_FieldInfo_[] = {
	{"val$spec", "Lcom/apple/laf/AquaIcon$JRSUIControlSpec;", nullptr, $FINAL | $SYNTHETIC, $field(AquaIcon$1, val$spec)},
	{}
};

$MethodInfo _AquaIcon$1_MethodInfo_[] = {
	{"<init>", "(IILcom/apple/laf/AquaIcon$JRSUIControlSpec;)V", nullptr, 0, $method(static_cast<void(AquaIcon$1::*)(int32_t,int32_t,$AquaIcon$JRSUIControlSpec*)>(&AquaIcon$1::init$))},
	{"initIconPainter", "(Lcom/apple/laf/AquaPainter;)V", "(Lcom/apple/laf/AquaPainter<Lapple/laf/JRSUIState;>;)V", $PUBLIC},
	{}
};

$EnclosingMethodInfo _AquaIcon$1_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaIcon",
	"getIconFor",
	"(Lcom/apple/laf/AquaIcon$JRSUIControlSpec;II)Ljavax/swing/plaf/UIResource;"
};

$InnerClassInfo _AquaIcon$1_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaIcon$1", nullptr, nullptr, 0},
	{"com.apple.laf.AquaIcon$ScalingJRSUIIcon", "com.apple.laf.AquaIcon", "ScalingJRSUIIcon", $STATIC | $ABSTRACT},
	{"com.apple.laf.AquaIcon$JRSUIControlSpec", "com.apple.laf.AquaIcon", "JRSUIControlSpec", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AquaIcon$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaIcon$1",
	"com.apple.laf.AquaIcon$ScalingJRSUIIcon",
	nullptr,
	_AquaIcon$1_FieldInfo_,
	_AquaIcon$1_MethodInfo_,
	nullptr,
	&_AquaIcon$1_EnclosingMethodInfo_,
	_AquaIcon$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaIcon"
};

$Object* allocate$AquaIcon$1($Class* clazz) {
	return $of($alloc(AquaIcon$1));
}

void AquaIcon$1::init$(int32_t width, int32_t height, $AquaIcon$JRSUIControlSpec* val$spec) {
	$set(this, val$spec, val$spec);
	$AquaIcon$ScalingJRSUIIcon::init$(width, height);
}

void AquaIcon$1::initIconPainter($AquaPainter* painter) {
	$nc(this->val$spec)->initIconPainter(painter);
}

AquaIcon$1::AquaIcon$1() {
}

$Class* AquaIcon$1::load$($String* name, bool initialize) {
	$loadClass(AquaIcon$1, name, initialize, &_AquaIcon$1_ClassInfo_, allocate$AquaIcon$1);
	return class$;
}

$Class* AquaIcon$1::class$ = nullptr;

		} // laf
	} // apple
} // com