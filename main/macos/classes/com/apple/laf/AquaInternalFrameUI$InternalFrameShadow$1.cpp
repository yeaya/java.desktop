#include <com/apple/laf/AquaInternalFrameUI$InternalFrameShadow$1.h>

#include <com/apple/laf/AquaInternalFrameUI$InternalFrameShadow.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/border/Border.h>
#include <jcpp.h>

using $AquaInternalFrameUI$InternalFrameShadow = ::com::apple::laf::AquaInternalFrameUI$InternalFrameShadow;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $Border = ::javax::swing::border::Border;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaInternalFrameUI$InternalFrameShadow$1_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaInternalFrameUI$InternalFrameShadow;", nullptr, $FINAL | $SYNTHETIC, $field(AquaInternalFrameUI$InternalFrameShadow$1, this$0)},
	{"val$bgShadow", "Ljavax/swing/border/Border;", nullptr, $FINAL | $SYNTHETIC, $field(AquaInternalFrameUI$InternalFrameShadow$1, val$bgShadow)},
	{"val$fgShadow", "Ljavax/swing/border/Border;", nullptr, $FINAL | $SYNTHETIC, $field(AquaInternalFrameUI$InternalFrameShadow$1, val$fgShadow)},
	{}
};

$MethodInfo _AquaInternalFrameUI$InternalFrameShadow$1_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaInternalFrameUI$InternalFrameShadow;Ljavax/swing/border/Border;Ljavax/swing/border/Border;)V", "()V", 0, $method(static_cast<void(AquaInternalFrameUI$InternalFrameShadow$1::*)($AquaInternalFrameUI$InternalFrameShadow*,$Border*,$Border*)>(&AquaInternalFrameUI$InternalFrameShadow$1::init$))},
	{"getBorderInsets", "(Ljava/awt/Component;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"isBorderOpaque", "()Z", nullptr, $PUBLIC},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AquaInternalFrameUI$InternalFrameShadow$1_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaInternalFrameUI$InternalFrameShadow",
	"getInstance",
	"()Ljavax/swing/border/Border;"
};

$InnerClassInfo _AquaInternalFrameUI$InternalFrameShadow$1_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaInternalFrameUI$InternalFrameShadow", "com.apple.laf.AquaInternalFrameUI", "InternalFrameShadow", $STATIC | $ABSTRACT},
	{"com.apple.laf.AquaInternalFrameUI$InternalFrameShadow$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaInternalFrameUI$InternalFrameShadow$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaInternalFrameUI$InternalFrameShadow$1",
	"java.lang.Object",
	"javax.swing.border.Border",
	_AquaInternalFrameUI$InternalFrameShadow$1_FieldInfo_,
	_AquaInternalFrameUI$InternalFrameShadow$1_MethodInfo_,
	nullptr,
	&_AquaInternalFrameUI$InternalFrameShadow$1_EnclosingMethodInfo_,
	_AquaInternalFrameUI$InternalFrameShadow$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaInternalFrameUI"
};

$Object* allocate$AquaInternalFrameUI$InternalFrameShadow$1($Class* clazz) {
	return $of($alloc(AquaInternalFrameUI$InternalFrameShadow$1));
}

void AquaInternalFrameUI$InternalFrameShadow$1::init$($AquaInternalFrameUI$InternalFrameShadow* this$0, $Border* val$fgShadow, $Border* val$bgShadow) {
	$set(this, this$0, this$0);
	$set(this, val$fgShadow, val$fgShadow);
	$set(this, val$bgShadow, val$bgShadow);
}

$Insets* AquaInternalFrameUI$InternalFrameShadow$1::getBorderInsets($Component* c) {
	return $nc(this->val$fgShadow)->getBorderInsets(c);
}

bool AquaInternalFrameUI$InternalFrameShadow$1::isBorderOpaque() {
	return false;
}

void AquaInternalFrameUI$InternalFrameShadow$1::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	if ($nc(($cast($JInternalFrame, c)))->isSelected()) {
		$nc(this->val$fgShadow)->paintBorder(c, g, x, y, w, h);
	} else {
		$nc(this->val$bgShadow)->paintBorder(c, g, x, y, w, h);
	}
}

AquaInternalFrameUI$InternalFrameShadow$1::AquaInternalFrameUI$InternalFrameShadow$1() {
}

$Class* AquaInternalFrameUI$InternalFrameShadow$1::load$($String* name, bool initialize) {
	$loadClass(AquaInternalFrameUI$InternalFrameShadow$1, name, initialize, &_AquaInternalFrameUI$InternalFrameShadow$1_ClassInfo_, allocate$AquaInternalFrameUI$InternalFrameShadow$1);
	return class$;
}

$Class* AquaInternalFrameUI$InternalFrameShadow$1::class$ = nullptr;

		} // laf
	} // apple
} // com