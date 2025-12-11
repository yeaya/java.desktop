#include <com/apple/laf/AquaFileChooserUI$SaveTextFocusListener.h>

#include <com/apple/laf/AquaFileChooserUI.h>
#include <java/awt/event/FocusEvent.h>
#include <javax/swing/JFileChooser.h>
#include <jcpp.h>

using $AquaFileChooserUI = ::com::apple::laf::AquaFileChooserUI;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaFileChooserUI$SaveTextFocusListener_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaFileChooserUI$SaveTextFocusListener, this$0)},
	{}
};

$MethodInfo _AquaFileChooserUI$SaveTextFocusListener_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaFileChooserUI;)V", nullptr, $PROTECTED, $method(static_cast<void(AquaFileChooserUI$SaveTextFocusListener::*)($AquaFileChooserUI*)>(&AquaFileChooserUI$SaveTextFocusListener::init$))},
	{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaFileChooserUI$SaveTextFocusListener_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaFileChooserUI$SaveTextFocusListener", "com.apple.laf.AquaFileChooserUI", "SaveTextFocusListener", $PROTECTED},
	{}
};

$ClassInfo _AquaFileChooserUI$SaveTextFocusListener_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaFileChooserUI$SaveTextFocusListener",
	"java.lang.Object",
	"java.awt.event.FocusListener",
	_AquaFileChooserUI$SaveTextFocusListener_FieldInfo_,
	_AquaFileChooserUI$SaveTextFocusListener_MethodInfo_,
	nullptr,
	nullptr,
	_AquaFileChooserUI$SaveTextFocusListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaFileChooserUI"
};

$Object* allocate$AquaFileChooserUI$SaveTextFocusListener($Class* clazz) {
	return $of($alloc(AquaFileChooserUI$SaveTextFocusListener));
}

void AquaFileChooserUI$SaveTextFocusListener::init$($AquaFileChooserUI* this$0) {
	$set(this, this$0, this$0);
}

void AquaFileChooserUI$SaveTextFocusListener::focusGained($FocusEvent* e) {
	this->this$0->updateButtonState($(this->this$0->getFileChooser()));
}

void AquaFileChooserUI$SaveTextFocusListener::focusLost($FocusEvent* e) {
}

AquaFileChooserUI$SaveTextFocusListener::AquaFileChooserUI$SaveTextFocusListener() {
}

$Class* AquaFileChooserUI$SaveTextFocusListener::load$($String* name, bool initialize) {
	$loadClass(AquaFileChooserUI$SaveTextFocusListener, name, initialize, &_AquaFileChooserUI$SaveTextFocusListener_ClassInfo_, allocate$AquaFileChooserUI$SaveTextFocusListener);
	return class$;
}

$Class* AquaFileChooserUI$SaveTextFocusListener::class$ = nullptr;

		} // laf
	} // apple
} // com