#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane$SizeAction.h>

#include <java/awt/event/ActionEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $UIManager = ::javax::swing::UIManager;
using $BasicInternalFrameTitlePane = ::javax::swing::plaf::basic::BasicInternalFrameTitlePane;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicInternalFrameTitlePane$SizeAction_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicInternalFrameTitlePane;", nullptr, $FINAL | $SYNTHETIC, $field(BasicInternalFrameTitlePane$SizeAction, this$0)},
	{}
};

$MethodInfo _BasicInternalFrameTitlePane$SizeAction_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicInternalFrameTitlePane;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicInternalFrameTitlePane$SizeAction::*)($BasicInternalFrameTitlePane*)>(&BasicInternalFrameTitlePane$SizeAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicInternalFrameTitlePane$SizeAction_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicInternalFrameTitlePane$SizeAction", "javax.swing.plaf.basic.BasicInternalFrameTitlePane", "SizeAction", $PUBLIC},
	{}
};

$ClassInfo _BasicInternalFrameTitlePane$SizeAction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicInternalFrameTitlePane$SizeAction",
	"javax.swing.AbstractAction",
	nullptr,
	_BasicInternalFrameTitlePane$SizeAction_FieldInfo_,
	_BasicInternalFrameTitlePane$SizeAction_MethodInfo_,
	nullptr,
	nullptr,
	_BasicInternalFrameTitlePane$SizeAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicInternalFrameTitlePane"
};

$Object* allocate$BasicInternalFrameTitlePane$SizeAction($Class* clazz) {
	return $of($alloc(BasicInternalFrameTitlePane$SizeAction));
}

void BasicInternalFrameTitlePane$SizeAction::init$($BasicInternalFrameTitlePane* this$0) {
	$set(this, this$0, this$0);
	$AbstractAction::init$($($UIManager::getString("InternalFrameTitlePane.sizeButtonText"_s)));
}

void BasicInternalFrameTitlePane$SizeAction::actionPerformed($ActionEvent* e) {
}

BasicInternalFrameTitlePane$SizeAction::BasicInternalFrameTitlePane$SizeAction() {
}

$Class* BasicInternalFrameTitlePane$SizeAction::load$($String* name, bool initialize) {
	$loadClass(BasicInternalFrameTitlePane$SizeAction, name, initialize, &_BasicInternalFrameTitlePane$SizeAction_ClassInfo_, allocate$BasicInternalFrameTitlePane$SizeAction);
	return class$;
}

$Class* BasicInternalFrameTitlePane$SizeAction::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax