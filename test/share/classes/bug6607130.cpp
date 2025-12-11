#include <bug6607130.h>

#include <bug6607130$1.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/KeyEvent.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Runnable.h>
#include <javax/swing/DefaultCellEditor.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTable.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/table/AbstractTableModel.h>
#include <javax/swing/table/DefaultTableModel.h>
#include <javax/swing/table/TableCellEditor.h>
#include <javax/swing/table/TableColumn.h>
#include <javax/swing/table/TableColumnModel.h>
#include <javax/swing/table/TableModel.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE
#undef VK_DOWN
#undef VK_ENTER
#undef VK_F2
#undef VK_TAB

using $bug6607130$1 = ::bug6607130$1;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Robot = ::java::awt::Robot;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $DefaultCellEditor = ::javax::swing::DefaultCellEditor;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JTable = ::javax::swing::JTable;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $AbstractTableModel = ::javax::swing::table::AbstractTableModel;
using $DefaultTableModel = ::javax::swing::table::DefaultTableModel;
using $TableCellEditor = ::javax::swing::table::TableCellEditor;
using $TableColumn = ::javax::swing::table::TableColumn;
using $TableColumnModel = ::javax::swing::table::TableColumnModel;
using $TableModel = ::javax::swing::table::TableModel;

$FieldInfo _bug6607130_FieldInfo_[] = {
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE, $field(bug6607130, frame)},
	{"cb", "Ljavax/swing/JComboBox;", nullptr, $PRIVATE, $field(bug6607130, cb)},
	{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE, $field(bug6607130, robot)},
	{}
};

$MethodInfo _bug6607130_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6607130::*)()>(&bug6607130::init$)), "java.awt.AWTException"},
	{"checkResult", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(bug6607130::*)($String*)>(&bug6607130::checkResult))},
	{"delay", "()V", nullptr, $PRIVATE, $method(static_cast<void(bug6607130::*)()>(&bug6607130::delay))},
	{"hitKey", "(I)V", nullptr, $PUBLIC},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6607130::main)), "java.lang.Exception"},
	{"setupUI", "()V", nullptr, $PRIVATE, $method(static_cast<void(bug6607130::*)()>(&bug6607130::setupUI))},
	{"test", "()V", nullptr, $PRIVATE, $method(static_cast<void(bug6607130::*)()>(&bug6607130::test)), "java.lang.Exception"},
	{"test1", "()V", nullptr, $PRIVATE, $method(static_cast<void(bug6607130::*)()>(&bug6607130::test1)), "java.lang.Exception"},
	{"test2", "()V", nullptr, $PRIVATE, $method(static_cast<void(bug6607130::*)()>(&bug6607130::test2)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug6607130_InnerClassesInfo_[] = {
	{"bug6607130$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6607130_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6607130",
	"java.lang.Object",
	nullptr,
	_bug6607130_FieldInfo_,
	_bug6607130_MethodInfo_,
	nullptr,
	nullptr,
	_bug6607130_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug6607130$1"
};

$Object* allocate$bug6607130($Class* clazz) {
	return $of($alloc(bug6607130));
}

void bug6607130::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var(bug6607130, test, $new(bug6607130));
	{
		$var($Throwable, var$0, nullptr);
		try {
			$SwingUtilities::invokeAndWait($$new($bug6607130$1, test));
			test->test();
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			if (test->frame != nullptr) {
				$nc(test->frame)->dispose();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void bug6607130::init$() {
	$set(this, robot, $new($Robot));
}

void bug6607130::setupUI() {
	$useLocalCurrentObjectStackCache();
	$set(this, frame, $new($JFrame));
	$nc(this->frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$var($DefaultTableModel, model, $new($DefaultTableModel, 1, 1));
	$var($JTable, table, $new($JTable, model));
	$set(this, cb, $new($JComboBox, $$new($StringArray, {
		"one"_s,
		"two"_s,
		"three"_s
	})));
	$nc($($nc($(table->getColumnModel()))->getColumn(0)))->setCellEditor($$new($DefaultCellEditor, this->cb));
	$nc(this->frame)->add(static_cast<$Component*>(table));
	$nc(this->frame)->pack();
	$nc(this->frame)->setLocationRelativeTo(nullptr);
	$nc(this->frame)->setVisible(true);
}

void bug6607130::test() {
	$nc(this->robot)->waitForIdle();
	test1();
	$nc(this->robot)->waitForIdle();
	checkResult("First test"_s);
	test2();
	$nc(this->robot)->waitForIdle();
	checkResult("Second test"_s);
}

void bug6607130::test1() {
	hitKey($KeyEvent::VK_TAB);
	$nc(this->robot)->waitForIdle();
	hitKey($KeyEvent::VK_F2);
	$nc(this->robot)->waitForIdle();
	hitKey($KeyEvent::VK_DOWN);
	$nc(this->robot)->waitForIdle();
	hitKey($KeyEvent::VK_DOWN);
	$nc(this->robot)->waitForIdle();
	hitKey($KeyEvent::VK_ENTER);
	$nc(this->robot)->waitForIdle();
	hitKey($KeyEvent::VK_F2);
	$nc(this->robot)->waitForIdle();
	hitKey($KeyEvent::VK_DOWN);
	$nc(this->robot)->waitForIdle();
	hitKey($KeyEvent::VK_ENTER);
	$nc(this->robot)->waitForIdle();
}

void bug6607130::test2() {
	hitKey($KeyEvent::VK_F2);
	$nc(this->robot)->waitForIdle();
	hitKey($KeyEvent::VK_ENTER);
	$nc(this->robot)->waitForIdle();
}

void bug6607130::checkResult($String* testName) {
	$useLocalCurrentObjectStackCache();
	if (!$nc(this->cb)->isShowing()) {
		$nc($System::out)->println($$str({testName, " passed"_s}));
	} else {
		$nc($System::out)->println($$str({testName, " failed"_s}));
		$throwNew($RuntimeException, "JComboBox is showing after item selection."_s);
	}
}

void bug6607130::hitKey(int32_t keycode) {
	$nc(this->robot)->keyPress(keycode);
	$nc(this->robot)->keyRelease(keycode);
	delay();
}

void bug6607130::delay() {
	try {
		$Thread::sleep(1000);
	} catch ($InterruptedException& ie) {
		ie->printStackTrace();
	}
}

bug6607130::bug6607130() {
}

$Class* bug6607130::load$($String* name, bool initialize) {
	$loadClass(bug6607130, name, initialize, &_bug6607130_ClassInfo_, allocate$bug6607130);
	return class$;
}

$Class* bug6607130::class$ = nullptr;