#include <javax/swing/plaf/basic/BasicTabbedPaneUI$FocusHandler.h>

#include <java/awt/event/FocusAdapter.h>
#include <java/awt/event/FocusEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/plaf/basic/BasicTabbedPaneUI$Handler.h>
#include <javax/swing/plaf/basic/BasicTabbedPaneUI.h>
#include <jcpp.h>

using $FocusAdapter = ::java::awt::event::FocusAdapter;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicTabbedPaneUI = ::javax::swing::plaf::basic::BasicTabbedPaneUI;
using $BasicTabbedPaneUI$Handler = ::javax::swing::plaf::basic::BasicTabbedPaneUI$Handler;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicTabbedPaneUI$FocusHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicTabbedPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicTabbedPaneUI$FocusHandler, this$0)},
	{}
};

$MethodInfo _BasicTabbedPaneUI$FocusHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicTabbedPaneUI;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicTabbedPaneUI$FocusHandler::*)($BasicTabbedPaneUI*)>(&BasicTabbedPaneUI$FocusHandler::init$))},
	{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicTabbedPaneUI$FocusHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicTabbedPaneUI$FocusHandler", "javax.swing.plaf.basic.BasicTabbedPaneUI", "FocusHandler", $PUBLIC},
	{}
};

$ClassInfo _BasicTabbedPaneUI$FocusHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicTabbedPaneUI$FocusHandler",
	"java.awt.event.FocusAdapter",
	nullptr,
	_BasicTabbedPaneUI$FocusHandler_FieldInfo_,
	_BasicTabbedPaneUI$FocusHandler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicTabbedPaneUI$FocusHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicTabbedPaneUI"
};

$Object* allocate$BasicTabbedPaneUI$FocusHandler($Class* clazz) {
	return $of($alloc(BasicTabbedPaneUI$FocusHandler));
}

void BasicTabbedPaneUI$FocusHandler::init$($BasicTabbedPaneUI* this$0) {
	$set(this, this$0, this$0);
	$FocusAdapter::init$();
}

void BasicTabbedPaneUI$FocusHandler::focusGained($FocusEvent* e) {
	$nc($(this->this$0->getHandler()))->focusGained(e);
}

void BasicTabbedPaneUI$FocusHandler::focusLost($FocusEvent* e) {
	$nc($(this->this$0->getHandler()))->focusLost(e);
}

BasicTabbedPaneUI$FocusHandler::BasicTabbedPaneUI$FocusHandler() {
}

$Class* BasicTabbedPaneUI$FocusHandler::load$($String* name, bool initialize) {
	$loadClass(BasicTabbedPaneUI$FocusHandler, name, initialize, &_BasicTabbedPaneUI$FocusHandler_ClassInfo_, allocate$BasicTabbedPaneUI$FocusHandler);
	return class$;
}

$Class* BasicTabbedPaneUI$FocusHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax