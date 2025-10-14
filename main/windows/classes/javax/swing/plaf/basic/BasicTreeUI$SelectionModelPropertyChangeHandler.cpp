#include <javax/swing/plaf/basic/BasicTreeUI$SelectionModelPropertyChangeHandler.h>

#include <java/beans/PropertyChangeEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/plaf/basic/BasicTreeUI$Handler.h>
#include <javax/swing/plaf/basic/BasicTreeUI.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicTreeUI = ::javax::swing::plaf::basic::BasicTreeUI;
using $BasicTreeUI$Handler = ::javax::swing::plaf::basic::BasicTreeUI$Handler;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicTreeUI$SelectionModelPropertyChangeHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicTreeUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicTreeUI$SelectionModelPropertyChangeHandler, this$0)},
	{}
};

$MethodInfo _BasicTreeUI$SelectionModelPropertyChangeHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicTreeUI;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicTreeUI$SelectionModelPropertyChangeHandler::*)($BasicTreeUI*)>(&BasicTreeUI$SelectionModelPropertyChangeHandler::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicTreeUI$SelectionModelPropertyChangeHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicTreeUI$SelectionModelPropertyChangeHandler", "javax.swing.plaf.basic.BasicTreeUI", "SelectionModelPropertyChangeHandler", $PUBLIC},
	{}
};

$ClassInfo _BasicTreeUI$SelectionModelPropertyChangeHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicTreeUI$SelectionModelPropertyChangeHandler",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	_BasicTreeUI$SelectionModelPropertyChangeHandler_FieldInfo_,
	_BasicTreeUI$SelectionModelPropertyChangeHandler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicTreeUI$SelectionModelPropertyChangeHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicTreeUI"
};

$Object* allocate$BasicTreeUI$SelectionModelPropertyChangeHandler($Class* clazz) {
	return $of($alloc(BasicTreeUI$SelectionModelPropertyChangeHandler));
}

void BasicTreeUI$SelectionModelPropertyChangeHandler::init$($BasicTreeUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicTreeUI$SelectionModelPropertyChangeHandler::propertyChange($PropertyChangeEvent* event) {
	$nc($(this->this$0->getHandler()))->propertyChange(event);
}

BasicTreeUI$SelectionModelPropertyChangeHandler::BasicTreeUI$SelectionModelPropertyChangeHandler() {
}

$Class* BasicTreeUI$SelectionModelPropertyChangeHandler::load$($String* name, bool initialize) {
	$loadClass(BasicTreeUI$SelectionModelPropertyChangeHandler, name, initialize, &_BasicTreeUI$SelectionModelPropertyChangeHandler_ClassInfo_, allocate$BasicTreeUI$SelectionModelPropertyChangeHandler);
	return class$;
}

$Class* BasicTreeUI$SelectionModelPropertyChangeHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax