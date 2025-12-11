#include <com/apple/laf/AquaInternalFrameUI$5.h>

#include <com/apple/laf/AquaInternalFrameUI$5$1.h>
#include <com/apple/laf/AquaInternalFrameUI$InternalFrameShadow.h>
#include <com/apple/laf/AquaUtils$Painter.h>
#include <com/apple/laf/AquaUtils$ShadowBorder.h>
#include <com/apple/laf/AquaUtils$SlicedShadowBorder.h>
#include <javax/swing/border/Border.h>
#include <jcpp.h>

using $AquaInternalFrameUI$5$1 = ::com::apple::laf::AquaInternalFrameUI$5$1;
using $AquaInternalFrameUI$InternalFrameShadow = ::com::apple::laf::AquaInternalFrameUI$InternalFrameShadow;
using $AquaUtils$Painter = ::com::apple::laf::AquaUtils$Painter;
using $AquaUtils$ShadowBorder = ::com::apple::laf::AquaUtils$ShadowBorder;
using $AquaUtils$SlicedShadowBorder = ::com::apple::laf::AquaUtils$SlicedShadowBorder;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Border = ::javax::swing::border::Border;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaInternalFrameUI$5_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AquaInternalFrameUI$5::*)()>(&AquaInternalFrameUI$5::init$))},
	{"getBackgroundShadowBorder", "()Ljavax/swing/border/Border;", nullptr, 0},
	{"getForegroundShadowBorder", "()Ljavax/swing/border/Border;", nullptr, 0},
	{}
};

$EnclosingMethodInfo _AquaInternalFrameUI$5_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaInternalFrameUI",
	nullptr,
	nullptr
};

$InnerClassInfo _AquaInternalFrameUI$5_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaInternalFrameUI$5", nullptr, nullptr, 0},
	{"com.apple.laf.AquaInternalFrameUI$InternalFrameShadow", "com.apple.laf.AquaInternalFrameUI", "InternalFrameShadow", $STATIC | $ABSTRACT},
	{"com.apple.laf.AquaInternalFrameUI$5$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaInternalFrameUI$5_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaInternalFrameUI$5",
	"com.apple.laf.AquaInternalFrameUI$InternalFrameShadow",
	nullptr,
	nullptr,
	_AquaInternalFrameUI$5_MethodInfo_,
	nullptr,
	&_AquaInternalFrameUI$5_EnclosingMethodInfo_,
	_AquaInternalFrameUI$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaInternalFrameUI"
};

$Object* allocate$AquaInternalFrameUI$5($Class* clazz) {
	return $of($alloc(AquaInternalFrameUI$5));
}

void AquaInternalFrameUI$5::init$() {
	$AquaInternalFrameUI$InternalFrameShadow::init$();
}

$Border* AquaInternalFrameUI$5::getForegroundShadowBorder() {
	return $new($AquaUtils$SlicedShadowBorder, $$new($AquaInternalFrameUI$5$1, this), nullptr, 0, 3, 1.0f, 1.0f, 10, 25, 25, 12, 12, 12, 12);
}

$Border* AquaInternalFrameUI$5::getBackgroundShadowBorder() {
	return getForegroundShadowBorder();
}

AquaInternalFrameUI$5::AquaInternalFrameUI$5() {
}

$Class* AquaInternalFrameUI$5::load$($String* name, bool initialize) {
	$loadClass(AquaInternalFrameUI$5, name, initialize, &_AquaInternalFrameUI$5_ClassInfo_, allocate$AquaInternalFrameUI$5);
	return class$;
}

$Class* AquaInternalFrameUI$5::class$ = nullptr;

		} // laf
	} // apple
} // com