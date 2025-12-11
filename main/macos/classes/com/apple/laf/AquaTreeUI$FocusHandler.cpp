#include <com/apple/laf/AquaTreeUI$FocusHandler.h>

#include <com/apple/laf/AquaBorder.h>
#include <com/apple/laf/AquaTreeUI.h>
#include <java/awt/event/FocusEvent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTree.h>
#include <javax/swing/plaf/basic/BasicTreeUI$FocusHandler.h>
#include <javax/swing/plaf/basic/BasicTreeUI.h>
#include <jcpp.h>

using $AquaBorder = ::com::apple::laf::AquaBorder;
using $AquaTreeUI = ::com::apple::laf::AquaTreeUI;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $BasicTreeUI = ::javax::swing::plaf::basic::BasicTreeUI;
using $BasicTreeUI$FocusHandler = ::javax::swing::plaf::basic::BasicTreeUI$FocusHandler;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaTreeUI$FocusHandler_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaTreeUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTreeUI$FocusHandler, this$0)},
	{}
};

$MethodInfo _AquaTreeUI$FocusHandler_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaTreeUI;)V", nullptr, 0, $method(static_cast<void(AquaTreeUI$FocusHandler::*)($AquaTreeUI*)>(&AquaTreeUI$FocusHandler::init$))},
	{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaTreeUI$FocusHandler_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaTreeUI$FocusHandler", "com.apple.laf.AquaTreeUI", "FocusHandler", 0},
	{"javax.swing.plaf.basic.BasicTreeUI$FocusHandler", "javax.swing.plaf.basic.BasicTreeUI", "FocusHandler", $PUBLIC},
	{}
};

$ClassInfo _AquaTreeUI$FocusHandler_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaTreeUI$FocusHandler",
	"javax.swing.plaf.basic.BasicTreeUI$FocusHandler",
	nullptr,
	_AquaTreeUI$FocusHandler_FieldInfo_,
	_AquaTreeUI$FocusHandler_MethodInfo_,
	nullptr,
	nullptr,
	_AquaTreeUI$FocusHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaTreeUI"
};

$Object* allocate$AquaTreeUI$FocusHandler($Class* clazz) {
	return $of($alloc(AquaTreeUI$FocusHandler));
}

void AquaTreeUI$FocusHandler::init$($AquaTreeUI* this$0) {
	$set(this, this$0, this$0);
	$BasicTreeUI$FocusHandler::init$(this$0);
}

void AquaTreeUI$FocusHandler::focusGained($FocusEvent* e) {
	$BasicTreeUI$FocusHandler::focusGained(e);
	$AquaBorder::repaintBorder($($AquaTreeUI::access$000(this->this$0)));
}

void AquaTreeUI$FocusHandler::focusLost($FocusEvent* e) {
	$BasicTreeUI$FocusHandler::focusLost(e);
	$AquaBorder::repaintBorder($($AquaTreeUI::access$100(this->this$0)));
}

AquaTreeUI$FocusHandler::AquaTreeUI$FocusHandler() {
}

$Class* AquaTreeUI$FocusHandler::load$($String* name, bool initialize) {
	$loadClass(AquaTreeUI$FocusHandler, name, initialize, &_AquaTreeUI$FocusHandler_ClassInfo_, allocate$AquaTreeUI$FocusHandler);
	return class$;
}

$Class* AquaTreeUI$FocusHandler::class$ = nullptr;

		} // laf
	} // apple
} // com