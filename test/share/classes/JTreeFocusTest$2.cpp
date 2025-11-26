#include <JTreeFocusTest$2.h>

#include <JTreeFocusTest.h>
#include <java/awt/event/KeyEvent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTree.h>
#include <javax/swing/tree/TreeModel.h>
#include <jcpp.h>

#undef VK_F2

using $JTreeFocusTest = ::JTreeFocusTest;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JTree = ::javax::swing::JTree;
using $TreeModel = ::javax::swing::tree::TreeModel;

$FieldInfo _JTreeFocusTest$2_FieldInfo_[] = {
	{"this$0", "LJTreeFocusTest;", nullptr, $FINAL | $SYNTHETIC, $field(JTreeFocusTest$2, this$0)},
	{}
};

$MethodInfo _JTreeFocusTest$2_MethodInfo_[] = {
	{"<init>", "(LJTreeFocusTest;Ljavax/swing/tree/TreeModel;)V", nullptr, 0, $method(static_cast<void(JTreeFocusTest$2::*)($JTreeFocusTest*,$TreeModel*)>(&JTreeFocusTest$2::init$))},
	{"processKeyEvent", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JTreeFocusTest$2_EnclosingMethodInfo_ = {
	"JTreeFocusTest",
	"<init>",
	"()V"
};

$InnerClassInfo _JTreeFocusTest$2_InnerClassesInfo_[] = {
	{"JTreeFocusTest$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JTreeFocusTest$2_ClassInfo_ = {
	$ACC_SUPER,
	"JTreeFocusTest$2",
	"javax.swing.JTree",
	nullptr,
	_JTreeFocusTest$2_FieldInfo_,
	_JTreeFocusTest$2_MethodInfo_,
	nullptr,
	&_JTreeFocusTest$2_EnclosingMethodInfo_,
	_JTreeFocusTest$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"JTreeFocusTest"
};

$Object* allocate$JTreeFocusTest$2($Class* clazz) {
	return $of($alloc(JTreeFocusTest$2));
}

void JTreeFocusTest$2::init$($JTreeFocusTest* this$0, $TreeModel* arg0) {
	$set(this, this$0, this$0);
	$JTree::init$(arg0);
}

void JTreeFocusTest$2::processKeyEvent($KeyEvent* e) {
	$JTree::processKeyEvent(e);
	if ($nc(e)->getKeyCode() == $KeyEvent::VK_F2) {
		$synchronized(this->this$0) {
			this->this$0->keysTyped = true;
			$of(this->this$0)->notifyAll();
		}
	}
}

JTreeFocusTest$2::JTreeFocusTest$2() {
}

$Class* JTreeFocusTest$2::load$($String* name, bool initialize) {
	$loadClass(JTreeFocusTest$2, name, initialize, &_JTreeFocusTest$2_ClassInfo_, allocate$JTreeFocusTest$2);
	return class$;
}

$Class* JTreeFocusTest$2::class$ = nullptr;