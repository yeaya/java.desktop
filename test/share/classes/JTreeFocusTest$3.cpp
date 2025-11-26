#include <JTreeFocusTest$3.h>

#include <JTreeFocusTest.h>
#include <javax/swing/event/TreeSelectionEvent.h>
#include <javax/swing/tree/DefaultMutableTreeNode.h>
#include <javax/swing/tree/TreePath.h>
#include <jcpp.h>

using $JTreeFocusTest = ::JTreeFocusTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TreeSelectionEvent = ::javax::swing::event::TreeSelectionEvent;
using $TreeSelectionListener = ::javax::swing::event::TreeSelectionListener;
using $DefaultMutableTreeNode = ::javax::swing::tree::DefaultMutableTreeNode;
using $TreePath = ::javax::swing::tree::TreePath;

$FieldInfo _JTreeFocusTest$3_FieldInfo_[] = {
	{"this$0", "LJTreeFocusTest;", nullptr, $FINAL | $SYNTHETIC, $field(JTreeFocusTest$3, this$0)},
	{}
};

$MethodInfo _JTreeFocusTest$3_MethodInfo_[] = {
	{"<init>", "(LJTreeFocusTest;)V", nullptr, 0, $method(static_cast<void(JTreeFocusTest$3::*)($JTreeFocusTest*)>(&JTreeFocusTest$3::init$))},
	{"valueChanged", "(Ljavax/swing/event/TreeSelectionEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JTreeFocusTest$3_EnclosingMethodInfo_ = {
	"JTreeFocusTest",
	"<init>",
	"()V"
};

$InnerClassInfo _JTreeFocusTest$3_InnerClassesInfo_[] = {
	{"JTreeFocusTest$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JTreeFocusTest$3_ClassInfo_ = {
	$ACC_SUPER,
	"JTreeFocusTest$3",
	"java.lang.Object",
	"javax.swing.event.TreeSelectionListener",
	_JTreeFocusTest$3_FieldInfo_,
	_JTreeFocusTest$3_MethodInfo_,
	nullptr,
	&_JTreeFocusTest$3_EnclosingMethodInfo_,
	_JTreeFocusTest$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"JTreeFocusTest"
};

$Object* allocate$JTreeFocusTest$3($Class* clazz) {
	return $of($alloc(JTreeFocusTest$3));
}

void JTreeFocusTest$3::init$($JTreeFocusTest* this$0) {
	$set(this, this$0, this$0);
}

void JTreeFocusTest$3::valueChanged($TreeSelectionEvent* e) {
	$useLocalCurrentObjectStackCache();
	$init($JTreeFocusTest);
	if ($nc($of($JTreeFocusTest::root))->equals($($nc($($nc(e)->getPath()))->getLastPathComponent()))) {
		$synchronized(this->this$0) {
			this->this$0->rootSelected = true;
			$of(this->this$0)->notifyAll();
		}
	}
}

JTreeFocusTest$3::JTreeFocusTest$3() {
}

$Class* JTreeFocusTest$3::load$($String* name, bool initialize) {
	$loadClass(JTreeFocusTest$3, name, initialize, &_JTreeFocusTest$3_ClassInfo_, allocate$JTreeFocusTest$3);
	return class$;
}

$Class* JTreeFocusTest$3::class$ = nullptr;