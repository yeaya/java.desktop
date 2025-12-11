#include <com/apple/laf/AquaListUI$FocusHandler.h>

#include <com/apple/laf/AquaBorder.h>
#include <com/apple/laf/AquaListUI.h>
#include <java/awt/event/FocusEvent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JList.h>
#include <javax/swing/plaf/basic/BasicListUI$FocusHandler.h>
#include <javax/swing/plaf/basic/BasicListUI.h>
#include <jcpp.h>

using $AquaBorder = ::com::apple::laf::AquaBorder;
using $AquaListUI = ::com::apple::laf::AquaListUI;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $BasicListUI = ::javax::swing::plaf::basic::BasicListUI;
using $BasicListUI$FocusHandler = ::javax::swing::plaf::basic::BasicListUI$FocusHandler;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaListUI$FocusHandler_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaListUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaListUI$FocusHandler, this$0)},
	{}
};

$MethodInfo _AquaListUI$FocusHandler_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaListUI;)V", nullptr, 0, $method(static_cast<void(AquaListUI$FocusHandler::*)($AquaListUI*)>(&AquaListUI$FocusHandler::init$))},
	{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaListUI$FocusHandler_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaListUI$FocusHandler", "com.apple.laf.AquaListUI", "FocusHandler", 0},
	{"javax.swing.plaf.basic.BasicListUI$FocusHandler", "javax.swing.plaf.basic.BasicListUI", "FocusHandler", $PUBLIC},
	{}
};

$ClassInfo _AquaListUI$FocusHandler_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaListUI$FocusHandler",
	"javax.swing.plaf.basic.BasicListUI$FocusHandler",
	nullptr,
	_AquaListUI$FocusHandler_FieldInfo_,
	_AquaListUI$FocusHandler_MethodInfo_,
	nullptr,
	nullptr,
	_AquaListUI$FocusHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaListUI"
};

$Object* allocate$AquaListUI$FocusHandler($Class* clazz) {
	return $of($alloc(AquaListUI$FocusHandler));
}

void AquaListUI$FocusHandler::init$($AquaListUI* this$0) {
	$set(this, this$0, this$0);
	$BasicListUI$FocusHandler::init$(this$0);
}

void AquaListUI$FocusHandler::focusGained($FocusEvent* e) {
	$BasicListUI$FocusHandler::focusGained(e);
	$AquaBorder::repaintBorder($(this->this$0->getComponent()));
}

void AquaListUI$FocusHandler::focusLost($FocusEvent* e) {
	$BasicListUI$FocusHandler::focusLost(e);
	$AquaBorder::repaintBorder($(this->this$0->getComponent()));
}

AquaListUI$FocusHandler::AquaListUI$FocusHandler() {
}

$Class* AquaListUI$FocusHandler::load$($String* name, bool initialize) {
	$loadClass(AquaListUI$FocusHandler, name, initialize, &_AquaListUI$FocusHandler_ClassInfo_, allocate$AquaListUI$FocusHandler);
	return class$;
}

$Class* AquaListUI$FocusHandler::class$ = nullptr;

		} // laf
	} // apple
} // com