#include <com/apple/laf/AquaSpinnerUI$TransparentButton.h>

#include <com/apple/laf/AquaSpinnerUI$SpinPainter.h>
#include <com/apple/laf/AquaSpinnerUI.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <javax/swing/JButton.h>
#include <jcpp.h>

using $AquaSpinnerUI = ::com::apple::laf::AquaSpinnerUI;
using $AquaSpinnerUI$SpinPainter = ::com::apple::laf::AquaSpinnerUI$SpinPainter;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JButton = ::javax::swing::JButton;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaSpinnerUI$TransparentButton_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaSpinnerUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaSpinnerUI$TransparentButton, this$0)},
	{"interceptRepaints", "Z", nullptr, 0, $field(AquaSpinnerUI$TransparentButton, interceptRepaints)},
	{}
};

$MethodInfo _AquaSpinnerUI$TransparentButton_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaSpinnerUI;)V", nullptr, $PUBLIC, $method(static_cast<void(AquaSpinnerUI$TransparentButton::*)($AquaSpinnerUI*)>(&AquaSpinnerUI$TransparentButton::init$))},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"repaint", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaSpinnerUI$TransparentButton_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaSpinnerUI$TransparentButton", "com.apple.laf.AquaSpinnerUI", "TransparentButton", 0},
	{}
};

$ClassInfo _AquaSpinnerUI$TransparentButton_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaSpinnerUI$TransparentButton",
	"javax.swing.JButton",
	nullptr,
	_AquaSpinnerUI$TransparentButton_FieldInfo_,
	_AquaSpinnerUI$TransparentButton_MethodInfo_,
	nullptr,
	nullptr,
	_AquaSpinnerUI$TransparentButton_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaSpinnerUI"
};

$Object* allocate$AquaSpinnerUI$TransparentButton($Class* clazz) {
	return $of($alloc(AquaSpinnerUI$TransparentButton));
}

void AquaSpinnerUI$TransparentButton::init$($AquaSpinnerUI* this$0) {
	$set(this, this$0, this$0);
	$JButton::init$();
	this->interceptRepaints = false;
	setFocusable(false);
	this->interceptRepaints = true;
}

void AquaSpinnerUI$TransparentButton::paint($Graphics* g) {
}

void AquaSpinnerUI$TransparentButton::repaint() {
	if (this->interceptRepaints) {
		if (this->this$0->spinPainter == nullptr) {
			return;
		}
		$nc(this->this$0->spinPainter)->repaint();
	}
	$JButton::repaint();
}

AquaSpinnerUI$TransparentButton::AquaSpinnerUI$TransparentButton() {
}

$Class* AquaSpinnerUI$TransparentButton::load$($String* name, bool initialize) {
	$loadClass(AquaSpinnerUI$TransparentButton, name, initialize, &_AquaSpinnerUI$TransparentButton_ClassInfo_, allocate$AquaSpinnerUI$TransparentButton);
	return class$;
}

$Class* AquaSpinnerUI$TransparentButton::class$ = nullptr;

		} // laf
	} // apple
} // com