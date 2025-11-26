#include <javax/swing/plaf/basic/BasicFileChooserUI$DoubleClickListener.h>

#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseEvent.h>
#include <javax/swing/JList.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI$Handler.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI.h>
#include <jcpp.h>

using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JList = ::javax::swing::JList;
using $BasicFileChooserUI = ::javax::swing::plaf::basic::BasicFileChooserUI;
using $BasicFileChooserUI$Handler = ::javax::swing::plaf::basic::BasicFileChooserUI$Handler;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicFileChooserUI$DoubleClickListener_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicFileChooserUI$DoubleClickListener, this$0)},
	{"handler", "Ljavax/swing/plaf/basic/BasicFileChooserUI$Handler;", nullptr, 0, $field(BasicFileChooserUI$DoubleClickListener, handler)},
	{}
};

$MethodInfo _BasicFileChooserUI$DoubleClickListener_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicFileChooserUI;Ljavax/swing/JList;)V", "(Ljavax/swing/JList<*>;)V", $PUBLIC, $method(static_cast<void(BasicFileChooserUI$DoubleClickListener::*)($BasicFileChooserUI*,$JList*)>(&BasicFileChooserUI$DoubleClickListener::init$))},
	{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicFileChooserUI$DoubleClickListener_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicFileChooserUI$DoubleClickListener", "javax.swing.plaf.basic.BasicFileChooserUI", "DoubleClickListener", $PROTECTED},
	{}
};

$ClassInfo _BasicFileChooserUI$DoubleClickListener_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicFileChooserUI$DoubleClickListener",
	"java.awt.event.MouseAdapter",
	nullptr,
	_BasicFileChooserUI$DoubleClickListener_FieldInfo_,
	_BasicFileChooserUI$DoubleClickListener_MethodInfo_,
	nullptr,
	nullptr,
	_BasicFileChooserUI$DoubleClickListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicFileChooserUI"
};

$Object* allocate$BasicFileChooserUI$DoubleClickListener($Class* clazz) {
	return $of($alloc(BasicFileChooserUI$DoubleClickListener));
}

void BasicFileChooserUI$DoubleClickListener::init$($BasicFileChooserUI* this$0, $JList* list) {
	$set(this, this$0, this$0);
	$MouseAdapter::init$();
	$set(this, handler, $new($BasicFileChooserUI$Handler, this$0, list));
}

void BasicFileChooserUI$DoubleClickListener::mouseEntered($MouseEvent* e) {
	$nc(this->handler)->mouseEntered(e);
}

void BasicFileChooserUI$DoubleClickListener::mouseClicked($MouseEvent* e) {
	$nc(this->handler)->mouseClicked(e);
}

BasicFileChooserUI$DoubleClickListener::BasicFileChooserUI$DoubleClickListener() {
}

$Class* BasicFileChooserUI$DoubleClickListener::load$($String* name, bool initialize) {
	$loadClass(BasicFileChooserUI$DoubleClickListener, name, initialize, &_BasicFileChooserUI$DoubleClickListener_ClassInfo_, allocate$BasicFileChooserUI$DoubleClickListener);
	return class$;
}

$Class* BasicFileChooserUI$DoubleClickListener::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax