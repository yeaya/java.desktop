#include <javax/swing/plaf/basic/BasicComboBoxUI$PropertyChangeHandler.h>

#include <java/beans/PropertyChangeEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/plaf/basic/BasicComboBoxUI$Handler.h>
#include <javax/swing/plaf/basic/BasicComboBoxUI.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicComboBoxUI = ::javax::swing::plaf::basic::BasicComboBoxUI;
using $BasicComboBoxUI$Handler = ::javax::swing::plaf::basic::BasicComboBoxUI$Handler;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicComboBoxUI$PropertyChangeHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicComboBoxUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicComboBoxUI$PropertyChangeHandler, this$0)},
	{}
};

$MethodInfo _BasicComboBoxUI$PropertyChangeHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicComboBoxUI;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicComboBoxUI$PropertyChangeHandler::*)($BasicComboBoxUI*)>(&BasicComboBoxUI$PropertyChangeHandler::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicComboBoxUI$PropertyChangeHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicComboBoxUI$PropertyChangeHandler", "javax.swing.plaf.basic.BasicComboBoxUI", "PropertyChangeHandler", $PUBLIC},
	{}
};

$ClassInfo _BasicComboBoxUI$PropertyChangeHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicComboBoxUI$PropertyChangeHandler",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	_BasicComboBoxUI$PropertyChangeHandler_FieldInfo_,
	_BasicComboBoxUI$PropertyChangeHandler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicComboBoxUI$PropertyChangeHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicComboBoxUI"
};

$Object* allocate$BasicComboBoxUI$PropertyChangeHandler($Class* clazz) {
	return $of($alloc(BasicComboBoxUI$PropertyChangeHandler));
}

void BasicComboBoxUI$PropertyChangeHandler::init$($BasicComboBoxUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicComboBoxUI$PropertyChangeHandler::propertyChange($PropertyChangeEvent* e) {
	$nc($(this->this$0->getHandler()))->propertyChange(e);
}

BasicComboBoxUI$PropertyChangeHandler::BasicComboBoxUI$PropertyChangeHandler() {
}

$Class* BasicComboBoxUI$PropertyChangeHandler::load$($String* name, bool initialize) {
	$loadClass(BasicComboBoxUI$PropertyChangeHandler, name, initialize, &_BasicComboBoxUI$PropertyChangeHandler_ClassInfo_, allocate$BasicComboBoxUI$PropertyChangeHandler);
	return class$;
}

$Class* BasicComboBoxUI$PropertyChangeHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax