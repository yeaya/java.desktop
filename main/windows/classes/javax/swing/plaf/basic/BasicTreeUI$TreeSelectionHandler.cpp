#include <javax/swing/plaf/basic/BasicTreeUI$TreeSelectionHandler.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/event/TreeSelectionEvent.h>
#include <javax/swing/plaf/basic/BasicTreeUI$Handler.h>
#include <javax/swing/plaf/basic/BasicTreeUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TreeSelectionEvent = ::javax::swing::event::TreeSelectionEvent;
using $TreeSelectionListener = ::javax::swing::event::TreeSelectionListener;
using $BasicTreeUI = ::javax::swing::plaf::basic::BasicTreeUI;
using $BasicTreeUI$Handler = ::javax::swing::plaf::basic::BasicTreeUI$Handler;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicTreeUI$TreeSelectionHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicTreeUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicTreeUI$TreeSelectionHandler, this$0)},
	{}
};

$MethodInfo _BasicTreeUI$TreeSelectionHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicTreeUI;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicTreeUI$TreeSelectionHandler::*)($BasicTreeUI*)>(&BasicTreeUI$TreeSelectionHandler::init$))},
	{"valueChanged", "(Ljavax/swing/event/TreeSelectionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicTreeUI$TreeSelectionHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicTreeUI$TreeSelectionHandler", "javax.swing.plaf.basic.BasicTreeUI", "TreeSelectionHandler", $PUBLIC},
	{}
};

$ClassInfo _BasicTreeUI$TreeSelectionHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicTreeUI$TreeSelectionHandler",
	"java.lang.Object",
	"javax.swing.event.TreeSelectionListener",
	_BasicTreeUI$TreeSelectionHandler_FieldInfo_,
	_BasicTreeUI$TreeSelectionHandler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicTreeUI$TreeSelectionHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicTreeUI"
};

$Object* allocate$BasicTreeUI$TreeSelectionHandler($Class* clazz) {
	return $of($alloc(BasicTreeUI$TreeSelectionHandler));
}

void BasicTreeUI$TreeSelectionHandler::init$($BasicTreeUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicTreeUI$TreeSelectionHandler::valueChanged($TreeSelectionEvent* event) {
	$nc($(this->this$0->getHandler()))->valueChanged(event);
}

BasicTreeUI$TreeSelectionHandler::BasicTreeUI$TreeSelectionHandler() {
}

$Class* BasicTreeUI$TreeSelectionHandler::load$($String* name, bool initialize) {
	$loadClass(BasicTreeUI$TreeSelectionHandler, name, initialize, &_BasicTreeUI$TreeSelectionHandler_ClassInfo_, allocate$BasicTreeUI$TreeSelectionHandler);
	return class$;
}

$Class* BasicTreeUI$TreeSelectionHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax