#include <com/apple/laf/AquaInternalFrameUI$5$1.h>

#include <com/apple/laf/AquaInternalFrameUI$5.h>
#include <java/awt/Color.h>
#include <java/awt/Graphics.h>
#include <jcpp.h>

using $AquaInternalFrameUI$5 = ::com::apple::laf::AquaInternalFrameUI$5;
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

$FieldInfo _AquaInternalFrameUI$5$1_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaInternalFrameUI$5;", nullptr, $FINAL | $SYNTHETIC, $field(AquaInternalFrameUI$5$1, this$0)},
	{}
};

$MethodInfo _AquaInternalFrameUI$5$1_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaInternalFrameUI$5;)V", nullptr, 0, $method(static_cast<void(AquaInternalFrameUI$5$1::*)($AquaInternalFrameUI$5*)>(&AquaInternalFrameUI$5$1::init$))},
	{"paint", "(Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AquaInternalFrameUI$5$1_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaInternalFrameUI$5",
	"getForegroundShadowBorder",
	"()Ljavax/swing/border/Border;"
};

$InnerClassInfo _AquaInternalFrameUI$5$1_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaInternalFrameUI$5", nullptr, nullptr, 0},
	{"com.apple.laf.AquaInternalFrameUI$5$1", nullptr, nullptr, 0},
	{"com.apple.laf.AquaUtils$Painter", "com.apple.laf.AquaUtils", "Painter", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AquaInternalFrameUI$5$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaInternalFrameUI$5$1",
	"java.lang.Object",
	"com.apple.laf.AquaUtils$Painter",
	_AquaInternalFrameUI$5$1_FieldInfo_,
	_AquaInternalFrameUI$5$1_MethodInfo_,
	nullptr,
	&_AquaInternalFrameUI$5$1_EnclosingMethodInfo_,
	_AquaInternalFrameUI$5$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaInternalFrameUI"
};

$Object* allocate$AquaInternalFrameUI$5$1($Class* clazz) {
	return $of($alloc(AquaInternalFrameUI$5$1));
}

void AquaInternalFrameUI$5$1::init$($AquaInternalFrameUI$5* this$0) {
	$set(this, this$0, this$0);
}

void AquaInternalFrameUI$5$1::paint($Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc(g)->setColor($$new($Color, 0, 0, 0, 128));
	g->fillRect(x, y + 3, w, h - 3);
}

AquaInternalFrameUI$5$1::AquaInternalFrameUI$5$1() {
}

$Class* AquaInternalFrameUI$5$1::load$($String* name, bool initialize) {
	$loadClass(AquaInternalFrameUI$5$1, name, initialize, &_AquaInternalFrameUI$5$1_ClassInfo_, allocate$AquaInternalFrameUI$5$1);
	return class$;
}

$Class* AquaInternalFrameUI$5$1::class$ = nullptr;

		} // laf
	} // apple
} // com