#include <javax/swing/plaf/basic/BasicFileChooserUI$SelectionListener.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/event/ListSelectionEvent.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI$Handler.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListSelectionEvent = ::javax::swing::event::ListSelectionEvent;
using $ListSelectionListener = ::javax::swing::event::ListSelectionListener;
using $BasicFileChooserUI = ::javax::swing::plaf::basic::BasicFileChooserUI;
using $BasicFileChooserUI$Handler = ::javax::swing::plaf::basic::BasicFileChooserUI$Handler;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicFileChooserUI$SelectionListener_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicFileChooserUI$SelectionListener, this$0)},
	{}
};

$MethodInfo _BasicFileChooserUI$SelectionListener_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicFileChooserUI;)V", nullptr, $PROTECTED, $method(static_cast<void(BasicFileChooserUI$SelectionListener::*)($BasicFileChooserUI*)>(&BasicFileChooserUI$SelectionListener::init$))},
	{"valueChanged", "(Ljavax/swing/event/ListSelectionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicFileChooserUI$SelectionListener_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicFileChooserUI$SelectionListener", "javax.swing.plaf.basic.BasicFileChooserUI", "SelectionListener", $PROTECTED},
	{}
};

$ClassInfo _BasicFileChooserUI$SelectionListener_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicFileChooserUI$SelectionListener",
	"java.lang.Object",
	"javax.swing.event.ListSelectionListener",
	_BasicFileChooserUI$SelectionListener_FieldInfo_,
	_BasicFileChooserUI$SelectionListener_MethodInfo_,
	nullptr,
	nullptr,
	_BasicFileChooserUI$SelectionListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicFileChooserUI"
};

$Object* allocate$BasicFileChooserUI$SelectionListener($Class* clazz) {
	return $of($alloc(BasicFileChooserUI$SelectionListener));
}

void BasicFileChooserUI$SelectionListener::init$($BasicFileChooserUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicFileChooserUI$SelectionListener::valueChanged($ListSelectionEvent* e) {
	$nc($(this->this$0->getHandler()))->valueChanged(e);
}

BasicFileChooserUI$SelectionListener::BasicFileChooserUI$SelectionListener() {
}

$Class* BasicFileChooserUI$SelectionListener::load$($String* name, bool initialize) {
	$loadClass(BasicFileChooserUI$SelectionListener, name, initialize, &_BasicFileChooserUI$SelectionListener_ClassInfo_, allocate$BasicFileChooserUI$SelectionListener);
	return class$;
}

$Class* BasicFileChooserUI$SelectionListener::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax