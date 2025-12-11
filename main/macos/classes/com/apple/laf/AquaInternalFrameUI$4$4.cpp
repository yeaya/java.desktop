#include <com/apple/laf/AquaInternalFrameUI$4$4.h>

#include <com/apple/laf/AquaInternalFrameUI$4.h>
#include <java/awt/Color.h>
#include <java/awt/Graphics.h>
#include <jcpp.h>

using $AquaInternalFrameUI$4 = ::com::apple::laf::AquaInternalFrameUI$4;
using $Color = ::java::awt::Color;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaInternalFrameUI$4$4_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaInternalFrameUI$4;", nullptr, $FINAL | $SYNTHETIC, $field(AquaInternalFrameUI$4$4, this$0)},
	{}
};

$MethodInfo _AquaInternalFrameUI$4$4_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaInternalFrameUI$4;)V", nullptr, 0, $method(static_cast<void(AquaInternalFrameUI$4$4::*)($AquaInternalFrameUI$4*)>(&AquaInternalFrameUI$4$4::init$))},
	{"paint", "(Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AquaInternalFrameUI$4$4_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaInternalFrameUI$4",
	"getBackgroundShadowBorder",
	"()Ljavax/swing/border/Border;"
};

$InnerClassInfo _AquaInternalFrameUI$4$4_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaInternalFrameUI$4", nullptr, nullptr, 0},
	{"com.apple.laf.AquaInternalFrameUI$4$4", nullptr, nullptr, 0},
	{"com.apple.laf.AquaUtils$Painter", "com.apple.laf.AquaUtils", "Painter", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AquaInternalFrameUI$4$4_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaInternalFrameUI$4$4",
	"java.lang.Object",
	"com.apple.laf.AquaUtils$Painter",
	_AquaInternalFrameUI$4$4_FieldInfo_,
	_AquaInternalFrameUI$4$4_MethodInfo_,
	nullptr,
	&_AquaInternalFrameUI$4$4_EnclosingMethodInfo_,
	_AquaInternalFrameUI$4$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaInternalFrameUI"
};

$Object* allocate$AquaInternalFrameUI$4$4($Class* clazz) {
	return $of($alloc(AquaInternalFrameUI$4$4));
}

void AquaInternalFrameUI$4$4::init$($AquaInternalFrameUI$4* this$0) {
	$set(this, this$0, this$0);
}

void AquaInternalFrameUI$4$4::paint($Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc(g)->setColor($$new($Color, 0, 0, 0, 32));
	g->drawLine(x, y - 11, x + w - 1, y - 11);
}

AquaInternalFrameUI$4$4::AquaInternalFrameUI$4$4() {
}

$Class* AquaInternalFrameUI$4$4::load$($String* name, bool initialize) {
	$loadClass(AquaInternalFrameUI$4$4, name, initialize, &_AquaInternalFrameUI$4$4_ClassInfo_, allocate$AquaInternalFrameUI$4$4);
	return class$;
}

$Class* AquaInternalFrameUI$4$4::class$ = nullptr;

		} // laf
	} // apple
} // com