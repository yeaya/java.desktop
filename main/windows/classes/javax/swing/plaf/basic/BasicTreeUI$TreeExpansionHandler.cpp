#include <javax/swing/plaf/basic/BasicTreeUI$TreeExpansionHandler.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/event/TreeExpansionEvent.h>
#include <javax/swing/plaf/basic/BasicTreeUI$Handler.h>
#include <javax/swing/plaf/basic/BasicTreeUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TreeExpansionEvent = ::javax::swing::event::TreeExpansionEvent;
using $TreeExpansionListener = ::javax::swing::event::TreeExpansionListener;
using $BasicTreeUI = ::javax::swing::plaf::basic::BasicTreeUI;
using $BasicTreeUI$Handler = ::javax::swing::plaf::basic::BasicTreeUI$Handler;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicTreeUI$TreeExpansionHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicTreeUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicTreeUI$TreeExpansionHandler, this$0)},
	{}
};

$MethodInfo _BasicTreeUI$TreeExpansionHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicTreeUI;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicTreeUI$TreeExpansionHandler::*)($BasicTreeUI*)>(&BasicTreeUI$TreeExpansionHandler::init$))},
	{"treeCollapsed", "(Ljavax/swing/event/TreeExpansionEvent;)V", nullptr, $PUBLIC},
	{"treeExpanded", "(Ljavax/swing/event/TreeExpansionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicTreeUI$TreeExpansionHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicTreeUI$TreeExpansionHandler", "javax.swing.plaf.basic.BasicTreeUI", "TreeExpansionHandler", $PUBLIC},
	{}
};

$ClassInfo _BasicTreeUI$TreeExpansionHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicTreeUI$TreeExpansionHandler",
	"java.lang.Object",
	"javax.swing.event.TreeExpansionListener",
	_BasicTreeUI$TreeExpansionHandler_FieldInfo_,
	_BasicTreeUI$TreeExpansionHandler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicTreeUI$TreeExpansionHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicTreeUI"
};

$Object* allocate$BasicTreeUI$TreeExpansionHandler($Class* clazz) {
	return $of($alloc(BasicTreeUI$TreeExpansionHandler));
}

void BasicTreeUI$TreeExpansionHandler::init$($BasicTreeUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicTreeUI$TreeExpansionHandler::treeExpanded($TreeExpansionEvent* event) {
	$nc($(this->this$0->getHandler()))->treeExpanded(event);
}

void BasicTreeUI$TreeExpansionHandler::treeCollapsed($TreeExpansionEvent* event) {
	$nc($(this->this$0->getHandler()))->treeCollapsed(event);
}

BasicTreeUI$TreeExpansionHandler::BasicTreeUI$TreeExpansionHandler() {
}

$Class* BasicTreeUI$TreeExpansionHandler::load$($String* name, bool initialize) {
	$loadClass(BasicTreeUI$TreeExpansionHandler, name, initialize, &_BasicTreeUI$TreeExpansionHandler_ClassInfo_, allocate$BasicTreeUI$TreeExpansionHandler);
	return class$;
}

$Class* BasicTreeUI$TreeExpansionHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax