#include <bug4666224$DumpAction.h>

#include <bug4666224.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TabbedPaneUI.h>
#include <jcpp.h>

using $bug4666224 = ::bug4666224;
using $Rectangle = ::java::awt::Rectangle;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $JTabbedPane = ::javax::swing::JTabbedPane;
using $TabbedPaneUI = ::javax::swing::plaf::TabbedPaneUI;

$FieldInfo _bug4666224$DumpAction_FieldInfo_[] = {
	{"this$0", "Lbug4666224;", nullptr, $FINAL | $SYNTHETIC, $field(bug4666224$DumpAction, this$0)},
	{}
};

$MethodInfo _bug4666224$DumpAction_MethodInfo_[] = {
	{"<init>", "(Lbug4666224;)V", nullptr, $PRIVATE, $method(static_cast<void(bug4666224$DumpAction::*)($bug4666224*)>(&bug4666224$DumpAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _bug4666224$DumpAction_InnerClassesInfo_[] = {
	{"bug4666224$DumpAction", "bug4666224", "DumpAction", $PRIVATE},
	{}
};

$ClassInfo _bug4666224$DumpAction_ClassInfo_ = {
	$ACC_SUPER,
	"bug4666224$DumpAction",
	"javax.swing.AbstractAction",
	nullptr,
	_bug4666224$DumpAction_FieldInfo_,
	_bug4666224$DumpAction_MethodInfo_,
	nullptr,
	nullptr,
	_bug4666224$DumpAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4666224"
};

$Object* allocate$bug4666224$DumpAction($Class* clazz) {
	return $of($alloc(bug4666224$DumpAction));
}

void bug4666224$DumpAction::init$($bug4666224* this$0) {
	$set(this, this$0, this$0);
	$AbstractAction::init$();
}

void bug4666224$DumpAction::actionPerformed($ActionEvent* e) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(this->this$0->tabPane)->getTabCount(); ++i) {
		$nc($System::out)->println($$str({"Tab: "_s, $$str(i), " "_s, $($nc($($cast($TabbedPaneUI, $nc(this->this$0->tabPane)->getUI())))->getTabBounds(this->this$0->tabPane, i))}));
	}
}

bug4666224$DumpAction::bug4666224$DumpAction() {
}

$Class* bug4666224$DumpAction::load$($String* name, bool initialize) {
	$loadClass(bug4666224$DumpAction, name, initialize, &_bug4666224$DumpAction_ClassInfo_, allocate$bug4666224$DumpAction);
	return class$;
}

$Class* bug4666224$DumpAction::class$ = nullptr;