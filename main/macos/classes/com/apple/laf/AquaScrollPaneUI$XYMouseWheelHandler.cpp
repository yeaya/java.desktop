#include <com/apple/laf/AquaScrollPaneUI$XYMouseWheelHandler.h>

#include <com/apple/laf/AquaScrollPaneUI.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/MouseWheelEvent.h>
#include <javax/swing/plaf/basic/BasicScrollPaneUI$MouseWheelHandler.h>
#include <javax/swing/plaf/basic/BasicScrollPaneUI.h>
#include <jcpp.h>

using $AquaScrollPaneUI = ::com::apple::laf::AquaScrollPaneUI;
using $MouseWheelEvent = ::java::awt::event::MouseWheelEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicScrollPaneUI = ::javax::swing::plaf::basic::BasicScrollPaneUI;
using $BasicScrollPaneUI$MouseWheelHandler = ::javax::swing::plaf::basic::BasicScrollPaneUI$MouseWheelHandler;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaScrollPaneUI$XYMouseWheelHandler_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaScrollPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaScrollPaneUI$XYMouseWheelHandler, this$0)},
	{}
};

$MethodInfo _AquaScrollPaneUI$XYMouseWheelHandler_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaScrollPaneUI;)V", nullptr, $PROTECTED, $method(static_cast<void(AquaScrollPaneUI$XYMouseWheelHandler::*)($AquaScrollPaneUI*)>(&AquaScrollPaneUI$XYMouseWheelHandler::init$))},
	{"mouseWheelMoved", "(Ljava/awt/event/MouseWheelEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaScrollPaneUI$XYMouseWheelHandler_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaScrollPaneUI$XYMouseWheelHandler", "com.apple.laf.AquaScrollPaneUI", "XYMouseWheelHandler", $PROTECTED},
	{"javax.swing.plaf.basic.BasicScrollPaneUI$MouseWheelHandler", "javax.swing.plaf.basic.BasicScrollPaneUI", "MouseWheelHandler", $PROTECTED},
	{}
};

$ClassInfo _AquaScrollPaneUI$XYMouseWheelHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaScrollPaneUI$XYMouseWheelHandler",
	"javax.swing.plaf.basic.BasicScrollPaneUI$MouseWheelHandler",
	nullptr,
	_AquaScrollPaneUI$XYMouseWheelHandler_FieldInfo_,
	_AquaScrollPaneUI$XYMouseWheelHandler_MethodInfo_,
	nullptr,
	nullptr,
	_AquaScrollPaneUI$XYMouseWheelHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaScrollPaneUI"
};

$Object* allocate$AquaScrollPaneUI$XYMouseWheelHandler($Class* clazz) {
	return $of($alloc(AquaScrollPaneUI$XYMouseWheelHandler));
}

void AquaScrollPaneUI$XYMouseWheelHandler::init$($AquaScrollPaneUI* this$0) {
	$set(this, this$0, this$0);
	$BasicScrollPaneUI$MouseWheelHandler::init$(this$0);
}

void AquaScrollPaneUI$XYMouseWheelHandler::mouseWheelMoved($MouseWheelEvent* e) {
	$BasicScrollPaneUI$MouseWheelHandler::mouseWheelMoved(e);
	$nc(e)->consume();
}

AquaScrollPaneUI$XYMouseWheelHandler::AquaScrollPaneUI$XYMouseWheelHandler() {
}

$Class* AquaScrollPaneUI$XYMouseWheelHandler::load$($String* name, bool initialize) {
	$loadClass(AquaScrollPaneUI$XYMouseWheelHandler, name, initialize, &_AquaScrollPaneUI$XYMouseWheelHandler_ClassInfo_, allocate$AquaScrollPaneUI$XYMouseWheelHandler);
	return class$;
}

$Class* AquaScrollPaneUI$XYMouseWheelHandler::class$ = nullptr;

		} // laf
	} // apple
} // com