#include <com/apple/laf/AquaTableUI$FocusHandler.h>

#include <com/apple/laf/AquaBorder.h>
#include <com/apple/laf/AquaTableUI.h>
#include <java/awt/event/FocusEvent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTable.h>
#include <javax/swing/plaf/basic/BasicTableUI$FocusHandler.h>
#include <javax/swing/plaf/basic/BasicTableUI.h>
#include <jcpp.h>

using $AquaBorder = ::com::apple::laf::AquaBorder;
using $AquaTableUI = ::com::apple::laf::AquaTableUI;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $BasicTableUI = ::javax::swing::plaf::basic::BasicTableUI;
using $BasicTableUI$FocusHandler = ::javax::swing::plaf::basic::BasicTableUI$FocusHandler;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaTableUI$FocusHandler_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaTableUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTableUI$FocusHandler, this$0)},
	{}
};

$MethodInfo _AquaTableUI$FocusHandler_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaTableUI;)V", nullptr, $PUBLIC, $method(static_cast<void(AquaTableUI$FocusHandler::*)($AquaTableUI*)>(&AquaTableUI$FocusHandler::init$))},
	{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaTableUI$FocusHandler_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaTableUI$FocusHandler", "com.apple.laf.AquaTableUI", "FocusHandler", $PUBLIC},
	{"javax.swing.plaf.basic.BasicTableUI$FocusHandler", "javax.swing.plaf.basic.BasicTableUI", "FocusHandler", $PUBLIC},
	{}
};

$ClassInfo _AquaTableUI$FocusHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaTableUI$FocusHandler",
	"javax.swing.plaf.basic.BasicTableUI$FocusHandler",
	nullptr,
	_AquaTableUI$FocusHandler_FieldInfo_,
	_AquaTableUI$FocusHandler_MethodInfo_,
	nullptr,
	nullptr,
	_AquaTableUI$FocusHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaTableUI"
};

$Object* allocate$AquaTableUI$FocusHandler($Class* clazz) {
	return $of($alloc(AquaTableUI$FocusHandler));
}

void AquaTableUI$FocusHandler::init$($AquaTableUI* this$0) {
	$set(this, this$0, this$0);
	$BasicTableUI$FocusHandler::init$(this$0);
}

void AquaTableUI$FocusHandler::focusGained($FocusEvent* e) {
	$BasicTableUI$FocusHandler::focusGained(e);
	$AquaBorder::repaintBorder($(this->this$0->getComponent()));
}

void AquaTableUI$FocusHandler::focusLost($FocusEvent* e) {
	$BasicTableUI$FocusHandler::focusLost(e);
	$AquaBorder::repaintBorder($(this->this$0->getComponent()));
}

AquaTableUI$FocusHandler::AquaTableUI$FocusHandler() {
}

$Class* AquaTableUI$FocusHandler::load$($String* name, bool initialize) {
	$loadClass(AquaTableUI$FocusHandler, name, initialize, &_AquaTableUI$FocusHandler_ClassInfo_, allocate$AquaTableUI$FocusHandler);
	return class$;
}

$Class* AquaTableUI$FocusHandler::class$ = nullptr;

		} // laf
	} // apple
} // com