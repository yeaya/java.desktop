#include <javax/swing/plaf/basic/BasicScrollPaneUI$HSBChangeListener.h>

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

$NamedAttribute BasicScrollPaneUI$HSBChangeListener_Attribute_var$0[] = {
	{"since", 's', "17"},
	{}
};

$CompoundAttribute _BasicScrollPaneUI$HSBChangeListener_Annotations_[] = {
	{"Ljava/lang/Deprecated;", BasicScrollPaneUI$HSBChangeListener_Attribute_var$0},
	{}
};

$FieldInfo _BasicScrollPaneUI$HSBChangeListener_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicScrollPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicScrollPaneUI$HSBChangeListener, this$0)},
	{}
};

$MethodInfo _BasicScrollPaneUI$HSBChangeListener_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicScrollPaneUI;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicScrollPaneUI$HSBChangeListener::*)($BasicScrollPaneUI*)>(&BasicScrollPaneUI$HSBChangeListener::init$))},
	{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicScrollPaneUI$HSBChangeListener_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicScrollPaneUI$HSBChangeListener", "javax.swing.plaf.basic.BasicScrollPaneUI", "HSBChangeListener", $PUBLIC},
	{}
};

$ClassInfo _BasicScrollPaneUI$HSBChangeListener_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicScrollPaneUI$HSBChangeListener",
	"java.lang.Object",
	"javax.swing.event.ChangeListener",
	_BasicScrollPaneUI$HSBChangeListener_FieldInfo_,
	_BasicScrollPaneUI$HSBChangeListener_MethodInfo_,
	nullptr,
	nullptr,
	_BasicScrollPaneUI$HSBChangeListener_InnerClassesInfo_,
	_BasicScrollPaneUI$HSBChangeListener_Annotations_,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicScrollPaneUI"
};

$Object* allocate$BasicScrollPaneUI$HSBChangeListener($Class* clazz) {
	return $of($alloc(BasicScrollPaneUI$HSBChangeListener));
}

void BasicScrollPaneUI$HSBChangeListener::init$($BasicScrollPaneUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicScrollPaneUI$HSBChangeListener::stateChanged($ChangeEvent* e) {
	$nc($(this->this$0->getHandler()))->stateChanged(e);
}

BasicScrollPaneUI$HSBChangeListener::BasicScrollPaneUI$HSBChangeListener() {
}

$Class* BasicScrollPaneUI$HSBChangeListener::load$($String* name, bool initialize) {
	$loadClass(BasicScrollPaneUI$HSBChangeListener, name, initialize, &_BasicScrollPaneUI$HSBChangeListener_ClassInfo_, allocate$BasicScrollPaneUI$HSBChangeListener);
	return class$;
}

$Class* BasicScrollPaneUI$HSBChangeListener::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax