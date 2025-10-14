#include <javax/swing/plaf/basic/BasicTabbedPaneUI$TabSelectionHandler.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/plaf/basic/BasicTabbedPaneUI$Handler.h>
#include <javax/swing/plaf/basic/BasicTabbedPaneUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $BasicTabbedPaneUI = ::javax::swing::plaf::basic::BasicTabbedPaneUI;
using $BasicTabbedPaneUI$Handler = ::javax::swing::plaf::basic::BasicTabbedPaneUI$Handler;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicTabbedPaneUI$TabSelectionHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicTabbedPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicTabbedPaneUI$TabSelectionHandler, this$0)},
	{}
};

$MethodInfo _BasicTabbedPaneUI$TabSelectionHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicTabbedPaneUI;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicTabbedPaneUI$TabSelectionHandler::*)($BasicTabbedPaneUI*)>(&BasicTabbedPaneUI$TabSelectionHandler::init$))},
	{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicTabbedPaneUI$TabSelectionHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicTabbedPaneUI$TabSelectionHandler", "javax.swing.plaf.basic.BasicTabbedPaneUI", "TabSelectionHandler", $PUBLIC},
	{}
};

$ClassInfo _BasicTabbedPaneUI$TabSelectionHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicTabbedPaneUI$TabSelectionHandler",
	"java.lang.Object",
	"javax.swing.event.ChangeListener",
	_BasicTabbedPaneUI$TabSelectionHandler_FieldInfo_,
	_BasicTabbedPaneUI$TabSelectionHandler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicTabbedPaneUI$TabSelectionHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicTabbedPaneUI"
};

$Object* allocate$BasicTabbedPaneUI$TabSelectionHandler($Class* clazz) {
	return $of($alloc(BasicTabbedPaneUI$TabSelectionHandler));
}

void BasicTabbedPaneUI$TabSelectionHandler::init$($BasicTabbedPaneUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicTabbedPaneUI$TabSelectionHandler::stateChanged($ChangeEvent* e) {
	$nc($(this->this$0->getHandler()))->stateChanged(e);
}

BasicTabbedPaneUI$TabSelectionHandler::BasicTabbedPaneUI$TabSelectionHandler() {
}

$Class* BasicTabbedPaneUI$TabSelectionHandler::load$($String* name, bool initialize) {
	$loadClass(BasicTabbedPaneUI$TabSelectionHandler, name, initialize, &_BasicTabbedPaneUI$TabSelectionHandler_ClassInfo_, allocate$BasicTabbedPaneUI$TabSelectionHandler);
	return class$;
}

$Class* BasicTabbedPaneUI$TabSelectionHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax