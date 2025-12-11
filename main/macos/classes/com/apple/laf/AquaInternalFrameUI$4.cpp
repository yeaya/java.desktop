#include <com/apple/laf/AquaInternalFrameUI$4.h>

#include <com/apple/laf/AquaInternalFrameUI$4$1.h>
#include <com/apple/laf/AquaInternalFrameUI$4$2.h>
#include <com/apple/laf/AquaInternalFrameUI$4$3.h>
#include <com/apple/laf/AquaInternalFrameUI$4$4.h>
#include <com/apple/laf/AquaInternalFrameUI$InternalFrameShadow.h>
#include <com/apple/laf/AquaUtils$Painter.h>
#include <com/apple/laf/AquaUtils$ShadowBorder.h>
#include <com/apple/laf/AquaUtils$SlicedShadowBorder.h>
#include <javax/swing/border/Border.h>
#include <jcpp.h>

using $AquaInternalFrameUI$4$1 = ::com::apple::laf::AquaInternalFrameUI$4$1;
using $AquaInternalFrameUI$4$2 = ::com::apple::laf::AquaInternalFrameUI$4$2;
using $AquaInternalFrameUI$4$3 = ::com::apple::laf::AquaInternalFrameUI$4$3;
using $AquaInternalFrameUI$4$4 = ::com::apple::laf::AquaInternalFrameUI$4$4;
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

$MethodInfo _AquaInternalFrameUI$4_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AquaInternalFrameUI$4::*)()>(&AquaInternalFrameUI$4::init$))},
	{"getBackgroundShadowBorder", "()Ljavax/swing/border/Border;", nullptr, 0},
	{"getForegroundShadowBorder", "()Ljavax/swing/border/Border;", nullptr, 0},
	{}
};

$EnclosingMethodInfo _AquaInternalFrameUI$4_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaInternalFrameUI",
	nullptr,
	nullptr
};

$InnerClassInfo _AquaInternalFrameUI$4_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaInternalFrameUI$4", nullptr, nullptr, 0},
	{"com.apple.laf.AquaInternalFrameUI$InternalFrameShadow", "com.apple.laf.AquaInternalFrameUI", "InternalFrameShadow", $STATIC | $ABSTRACT},
	{"com.apple.laf.AquaInternalFrameUI$4$4", nullptr, nullptr, 0},
	{"com.apple.laf.AquaInternalFrameUI$4$3", nullptr, nullptr, 0},
	{"com.apple.laf.AquaInternalFrameUI$4$2", nullptr, nullptr, 0},
	{"com.apple.laf.AquaInternalFrameUI$4$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaInternalFrameUI$4_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaInternalFrameUI$4",
	"com.apple.laf.AquaInternalFrameUI$InternalFrameShadow",
	nullptr,
	nullptr,
	_AquaInternalFrameUI$4_MethodInfo_,
	nullptr,
	&_AquaInternalFrameUI$4_EnclosingMethodInfo_,
	_AquaInternalFrameUI$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaInternalFrameUI"
};

$Object* allocate$AquaInternalFrameUI$4($Class* clazz) {
	return $of($alloc(AquaInternalFrameUI$4));
}

void AquaInternalFrameUI$4::init$() {
	$AquaInternalFrameUI$InternalFrameShadow::init$();
}

$Border* AquaInternalFrameUI$4::getForegroundShadowBorder() {
	$useLocalCurrentObjectStackCache();
	$var($AquaUtils$Painter, var$0, static_cast<$AquaUtils$Painter*>($new($AquaInternalFrameUI$4$1, this)));
	return $new($AquaUtils$SlicedShadowBorder, var$0, $$new($AquaInternalFrameUI$4$2, this), 0, 7, 1.1f, 1.0f, 24, 51, 51, 25, 25, 25, 25);
}

$Border* AquaInternalFrameUI$4::getBackgroundShadowBorder() {
	$useLocalCurrentObjectStackCache();
	$var($AquaUtils$Painter, var$0, static_cast<$AquaUtils$Painter*>($new($AquaInternalFrameUI$4$3, this)));
	return $new($AquaUtils$SlicedShadowBorder, var$0, $$new($AquaInternalFrameUI$4$4, this), 0, 0, 3.0f, 1.0f, 10, 51, 51, 25, 25, 25, 25);
}

AquaInternalFrameUI$4::AquaInternalFrameUI$4() {
}

$Class* AquaInternalFrameUI$4::load$($String* name, bool initialize) {
	$loadClass(AquaInternalFrameUI$4, name, initialize, &_AquaInternalFrameUI$4_ClassInfo_, allocate$AquaInternalFrameUI$4);
	return class$;
}

$Class* AquaInternalFrameUI$4::class$ = nullptr;

		} // laf
	} // apple
} // com