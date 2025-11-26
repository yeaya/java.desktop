#include <bug4816114$TestSplitPane.h>

#include <bug4816114.h>
#include <javax/swing/JSplitPane.h>
#include <jcpp.h>

using $bug4816114 = ::bug4816114;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JSplitPane = ::javax::swing::JSplitPane;

$FieldInfo _bug4816114$TestSplitPane_FieldInfo_[] = {
	{"this$0", "Lbug4816114;", nullptr, $FINAL | $SYNTHETIC, $field(bug4816114$TestSplitPane, this$0)},
	{}
};

$MethodInfo _bug4816114$TestSplitPane_MethodInfo_[] = {
	{"<init>", "(Lbug4816114;)V", nullptr, 0, $method(static_cast<void(bug4816114$TestSplitPane::*)($bug4816114*)>(&bug4816114$TestSplitPane::init$))},
	{"setDividerLocation", "(I)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _bug4816114$TestSplitPane_InnerClassesInfo_[] = {
	{"bug4816114$TestSplitPane", "bug4816114", "TestSplitPane", 0},
	{}
};

$ClassInfo _bug4816114$TestSplitPane_ClassInfo_ = {
	$ACC_SUPER,
	"bug4816114$TestSplitPane",
	"javax.swing.JSplitPane",
	nullptr,
	_bug4816114$TestSplitPane_FieldInfo_,
	_bug4816114$TestSplitPane_MethodInfo_,
	nullptr,
	nullptr,
	_bug4816114$TestSplitPane_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4816114"
};

$Object* allocate$bug4816114$TestSplitPane($Class* clazz) {
	return $of($alloc(bug4816114$TestSplitPane));
}

void bug4816114$TestSplitPane::init$($bug4816114* this$0) {
	$set(this, this$0, this$0);
	$JSplitPane::init$();
}

void bug4816114$TestSplitPane::setDividerLocation(int32_t location) {
	$JSplitPane::setDividerLocation(location);
	if ($nc(this->this$0->splitPane)->getDividerLocation() == 151) {
		this->this$0->setPassed(getOrientation(), true);
	}
	$synchronized(this->this$0) {
		$init($bug4816114);
		$nc(this->this$0->resized)->set($bug4816114::step, true);
		$of(this->this$0)->notifyAll();
	}
}

bug4816114$TestSplitPane::bug4816114$TestSplitPane() {
}

$Class* bug4816114$TestSplitPane::load$($String* name, bool initialize) {
	$loadClass(bug4816114$TestSplitPane, name, initialize, &_bug4816114$TestSplitPane_ClassInfo_, allocate$bug4816114$TestSplitPane);
	return class$;
}

$Class* bug4816114$TestSplitPane::class$ = nullptr;