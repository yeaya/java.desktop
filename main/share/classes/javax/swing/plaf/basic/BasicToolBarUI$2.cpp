#include <javax/swing/plaf/basic/BasicToolBarUI$2.h>

#include <java/awt/Window.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowEvent.h>
#include <javax/swing/RootPaneContainer.h>
#include <javax/swing/plaf/basic/BasicToolBarUI.h>
#include <jcpp.h>

using $Window = ::java::awt::Window;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicToolBarUI = ::javax::swing::plaf::basic::BasicToolBarUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicToolBarUI$2_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicToolBarUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicToolBarUI$2, this$0)},
	{}
};

$MethodInfo _BasicToolBarUI$2_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicToolBarUI;)V", nullptr, 0, $method(static_cast<void(BasicToolBarUI$2::*)($BasicToolBarUI*)>(&BasicToolBarUI$2::init$))},
	{"windowOpened", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _BasicToolBarUI$2_EnclosingMethodInfo_ = {
	"javax.swing.plaf.basic.BasicToolBarUI",
	"setFloating",
	"(ZLjava/awt/Point;)V"
};

$InnerClassInfo _BasicToolBarUI$2_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicToolBarUI$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _BasicToolBarUI$2_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicToolBarUI$2",
	"java.awt.event.WindowAdapter",
	nullptr,
	_BasicToolBarUI$2_FieldInfo_,
	_BasicToolBarUI$2_MethodInfo_,
	nullptr,
	&_BasicToolBarUI$2_EnclosingMethodInfo_,
	_BasicToolBarUI$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicToolBarUI"
};

$Object* allocate$BasicToolBarUI$2($Class* clazz) {
	return $of($alloc(BasicToolBarUI$2));
}

void BasicToolBarUI$2::init$($BasicToolBarUI* this$0) {
	$set(this, this$0, this$0);
	$WindowAdapter::init$();
}

void BasicToolBarUI$2::windowOpened($WindowEvent* e) {
	$nc(($cast($Window, this->this$0->floatingToolBar)))->show();
}

BasicToolBarUI$2::BasicToolBarUI$2() {
}

$Class* BasicToolBarUI$2::load$($String* name, bool initialize) {
	$loadClass(BasicToolBarUI$2, name, initialize, &_BasicToolBarUI$2_ClassInfo_, allocate$BasicToolBarUI$2);
	return class$;
}

$Class* BasicToolBarUI$2::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax