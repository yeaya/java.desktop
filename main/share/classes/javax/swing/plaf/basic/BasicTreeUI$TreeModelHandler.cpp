#include <javax/swing/plaf/basic/BasicTreeUI$TreeModelHandler.h>

#include <javax/swing/event/TreeModelEvent.h>
#include <javax/swing/plaf/basic/BasicTreeUI$Handler.h>
#include <javax/swing/plaf/basic/BasicTreeUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TreeModelEvent = ::javax::swing::event::TreeModelEvent;
using $BasicTreeUI = ::javax::swing::plaf::basic::BasicTreeUI;
using $BasicTreeUI$Handler = ::javax::swing::plaf::basic::BasicTreeUI$Handler;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicTreeUI$TreeModelHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicTreeUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicTreeUI$TreeModelHandler, this$0)},
	{}
};

$MethodInfo _BasicTreeUI$TreeModelHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicTreeUI;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicTreeUI$TreeModelHandler::*)($BasicTreeUI*)>(&BasicTreeUI$TreeModelHandler::init$))},
	{"treeNodesChanged", "(Ljavax/swing/event/TreeModelEvent;)V", nullptr, $PUBLIC},
	{"treeNodesInserted", "(Ljavax/swing/event/TreeModelEvent;)V", nullptr, $PUBLIC},
	{"treeNodesRemoved", "(Ljavax/swing/event/TreeModelEvent;)V", nullptr, $PUBLIC},
	{"treeStructureChanged", "(Ljavax/swing/event/TreeModelEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicTreeUI$TreeModelHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicTreeUI$TreeModelHandler", "javax.swing.plaf.basic.BasicTreeUI", "TreeModelHandler", $PUBLIC},
	{}
};

$ClassInfo _BasicTreeUI$TreeModelHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicTreeUI$TreeModelHandler",
	"java.lang.Object",
	"javax.swing.event.TreeModelListener",
	_BasicTreeUI$TreeModelHandler_FieldInfo_,
	_BasicTreeUI$TreeModelHandler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicTreeUI$TreeModelHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicTreeUI"
};

$Object* allocate$BasicTreeUI$TreeModelHandler($Class* clazz) {
	return $of($alloc(BasicTreeUI$TreeModelHandler));
}

void BasicTreeUI$TreeModelHandler::init$($BasicTreeUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicTreeUI$TreeModelHandler::treeNodesChanged($TreeModelEvent* e) {
	$nc($(this->this$0->getHandler()))->treeNodesChanged(e);
}

void BasicTreeUI$TreeModelHandler::treeNodesInserted($TreeModelEvent* e) {
	$nc($(this->this$0->getHandler()))->treeNodesInserted(e);
}

void BasicTreeUI$TreeModelHandler::treeNodesRemoved($TreeModelEvent* e) {
	$nc($(this->this$0->getHandler()))->treeNodesRemoved(e);
}

void BasicTreeUI$TreeModelHandler::treeStructureChanged($TreeModelEvent* e) {
	$nc($(this->this$0->getHandler()))->treeStructureChanged(e);
}

BasicTreeUI$TreeModelHandler::BasicTreeUI$TreeModelHandler() {
}

$Class* BasicTreeUI$TreeModelHandler::load$($String* name, bool initialize) {
	$loadClass(BasicTreeUI$TreeModelHandler, name, initialize, &_BasicTreeUI$TreeModelHandler_ClassInfo_, allocate$BasicTreeUI$TreeModelHandler);
	return class$;
}

$Class* BasicTreeUI$TreeModelHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax