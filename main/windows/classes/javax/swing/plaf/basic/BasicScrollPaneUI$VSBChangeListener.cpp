#include <javax/swing/plaf/basic/BasicScrollPaneUI$VSBChangeListener.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/plaf/basic/BasicScrollPaneUI$Handler.h>
#include <javax/swing/plaf/basic/BasicScrollPaneUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $BasicScrollPaneUI = ::javax::swing::plaf::basic::BasicScrollPaneUI;
using $BasicScrollPaneUI$Handler = ::javax::swing::plaf::basic::BasicScrollPaneUI$Handler;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$NamedAttribute BasicScrollPaneUI$VSBChangeListener_Attribute_var$0[] = {
	{"since", 's', "17"},
	{}
};
$CompoundAttribute _BasicScrollPaneUI$VSBChangeListener_Annotations_[] = {
	{"Ljava/lang/Deprecated;", BasicScrollPaneUI$VSBChangeListener_Attribute_var$0},
	{}
};


$FieldInfo _BasicScrollPaneUI$VSBChangeListener_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicScrollPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicScrollPaneUI$VSBChangeListener, this$0)},
	{}
};

$MethodInfo _BasicScrollPaneUI$VSBChangeListener_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicScrollPaneUI;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicScrollPaneUI$VSBChangeListener::*)($BasicScrollPaneUI*)>(&BasicScrollPaneUI$VSBChangeListener::init$))},
	{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicScrollPaneUI$VSBChangeListener_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicScrollPaneUI$VSBChangeListener", "javax.swing.plaf.basic.BasicScrollPaneUI", "VSBChangeListener", $PUBLIC},
	{}
};

$ClassInfo _BasicScrollPaneUI$VSBChangeListener_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicScrollPaneUI$VSBChangeListener",
	"java.lang.Object",
	"javax.swing.event.ChangeListener",
	_BasicScrollPaneUI$VSBChangeListener_FieldInfo_,
	_BasicScrollPaneUI$VSBChangeListener_MethodInfo_,
	nullptr,
	nullptr,
	_BasicScrollPaneUI$VSBChangeListener_InnerClassesInfo_,
	_BasicScrollPaneUI$VSBChangeListener_Annotations_,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicScrollPaneUI"
};

$Object* allocate$BasicScrollPaneUI$VSBChangeListener($Class* clazz) {
	return $of($alloc(BasicScrollPaneUI$VSBChangeListener));
}

void BasicScrollPaneUI$VSBChangeListener::init$($BasicScrollPaneUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicScrollPaneUI$VSBChangeListener::stateChanged($ChangeEvent* e) {
	$nc($(this->this$0->getHandler()))->stateChanged(e);
}

BasicScrollPaneUI$VSBChangeListener::BasicScrollPaneUI$VSBChangeListener() {
}

$Class* BasicScrollPaneUI$VSBChangeListener::load$($String* name, bool initialize) {
	$loadClass(BasicScrollPaneUI$VSBChangeListener, name, initialize, &_BasicScrollPaneUI$VSBChangeListener_ClassInfo_, allocate$BasicScrollPaneUI$VSBChangeListener);
	return class$;
}

$Class* BasicScrollPaneUI$VSBChangeListener::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax