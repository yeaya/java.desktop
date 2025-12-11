#include <com/apple/laf/AquaSliderUI$4.h>

#include <com/apple/laf/AquaSliderUI.h>
#include <java/awt/Component.h>
#include <javax/swing/JSlider.h>
#include <javax/swing/event/ChangeEvent.h>
#include <jcpp.h>

using $AquaSliderUI = ::com::apple::laf::AquaSliderUI;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JSlider = ::javax::swing::JSlider;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaSliderUI$4_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaSliderUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaSliderUI$4, this$0)},
	{}
};

$MethodInfo _AquaSliderUI$4_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaSliderUI;)V", nullptr, 0, $method(static_cast<void(AquaSliderUI$4::*)($AquaSliderUI*)>(&AquaSliderUI$4::init$))},
	{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AquaSliderUI$4_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaSliderUI",
	"createChangeListener",
	"(Ljavax/swing/JSlider;)Ljavax/swing/event/ChangeListener;"
};

$InnerClassInfo _AquaSliderUI$4_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaSliderUI$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaSliderUI$4_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaSliderUI$4",
	"java.lang.Object",
	"javax.swing.event.ChangeListener",
	_AquaSliderUI$4_FieldInfo_,
	_AquaSliderUI$4_MethodInfo_,
	nullptr,
	&_AquaSliderUI$4_EnclosingMethodInfo_,
	_AquaSliderUI$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaSliderUI"
};

$Object* allocate$AquaSliderUI$4($Class* clazz) {
	return $of($alloc(AquaSliderUI$4));
}

void AquaSliderUI$4::init$($AquaSliderUI* this$0) {
	$set(this, this$0, this$0);
}

void AquaSliderUI$4::stateChanged($ChangeEvent* e) {
	if (this->this$0->fIsDragging) {
		return;
	}
	this->this$0->calculateThumbLocation();
	$nc($($AquaSliderUI::access$000(this->this$0)))->repaint();
}

AquaSliderUI$4::AquaSliderUI$4() {
}

$Class* AquaSliderUI$4::load$($String* name, bool initialize) {
	$loadClass(AquaSliderUI$4, name, initialize, &_AquaSliderUI$4_ClassInfo_, allocate$AquaSliderUI$4);
	return class$;
}

$Class* AquaSliderUI$4::class$ = nullptr;

		} // laf
	} // apple
} // com