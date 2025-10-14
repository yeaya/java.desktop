#include <javax/swing/plaf/basic/BasicTreeUI$CellEditorHandler.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/plaf/basic/BasicTreeUI$Handler.h>
#include <javax/swing/plaf/basic/BasicTreeUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CellEditorListener = ::javax::swing::event::CellEditorListener;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $BasicTreeUI = ::javax::swing::plaf::basic::BasicTreeUI;
using $BasicTreeUI$Handler = ::javax::swing::plaf::basic::BasicTreeUI$Handler;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicTreeUI$CellEditorHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicTreeUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicTreeUI$CellEditorHandler, this$0)},
	{}
};

$MethodInfo _BasicTreeUI$CellEditorHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicTreeUI;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicTreeUI$CellEditorHandler::*)($BasicTreeUI*)>(&BasicTreeUI$CellEditorHandler::init$))},
	{"editingCanceled", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC},
	{"editingStopped", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicTreeUI$CellEditorHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicTreeUI$CellEditorHandler", "javax.swing.plaf.basic.BasicTreeUI", "CellEditorHandler", $PUBLIC},
	{}
};

$ClassInfo _BasicTreeUI$CellEditorHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicTreeUI$CellEditorHandler",
	"java.lang.Object",
	"javax.swing.event.CellEditorListener",
	_BasicTreeUI$CellEditorHandler_FieldInfo_,
	_BasicTreeUI$CellEditorHandler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicTreeUI$CellEditorHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicTreeUI"
};

$Object* allocate$BasicTreeUI$CellEditorHandler($Class* clazz) {
	return $of($alloc(BasicTreeUI$CellEditorHandler));
}

void BasicTreeUI$CellEditorHandler::init$($BasicTreeUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicTreeUI$CellEditorHandler::editingStopped($ChangeEvent* e) {
	$nc($(this->this$0->getHandler()))->editingStopped(e);
}

void BasicTreeUI$CellEditorHandler::editingCanceled($ChangeEvent* e) {
	$nc($(this->this$0->getHandler()))->editingCanceled(e);
}

BasicTreeUI$CellEditorHandler::BasicTreeUI$CellEditorHandler() {
}

$Class* BasicTreeUI$CellEditorHandler::load$($String* name, bool initialize) {
	$loadClass(BasicTreeUI$CellEditorHandler, name, initialize, &_BasicTreeUI$CellEditorHandler_ClassInfo_, allocate$BasicTreeUI$CellEditorHandler);
	return class$;
}

$Class* BasicTreeUI$CellEditorHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax