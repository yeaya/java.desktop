#include <bug4275046.h>

#include <bug4275046$1.h>
#include <bug4275046$2.h>
#include <bug4275046$3.h>
#include <bug4275046$4.h>
#include <bug4275046$5.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/KeyEvent.h>
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

#undef BUTTON1_DOWN_MASK
#undef EXIT_ON_CLOSE
#undef EXPECTED_VALUE
#undef VK_D
#undef VK_E
#undef VK_I
#undef VK_T

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $bug4275046$1 = ::bug4275046$1;
using $bug4275046$2 = ::bug4275046$2;
using $bug4275046$3 = ::bug4275046$3;
using $bug4275046$4 = ::bug4275046$4;
using $bug4275046$5 = ::bug4275046$5;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Robot = ::java::awt::Robot;
using $InputEvent = ::java::awt::event::InputEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
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

$FieldInfo _bug4275046_FieldInfo_[] = {
	{"colNames", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug4275046, colNames)},
	{"data", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug4275046, data)},
	{"EXPECTED_VALUE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug4275046, EXPECTED_VALUE)},
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE, $field(bug4275046, frame)},
	{"table", "Ljavax/swing/JTable;", nullptr, $PRIVATE, $field(bug4275046, table)},
	{"tableLoc", "Ljava/awt/Point;", nullptr, $PRIVATE | $VOLATILE, $field(bug4275046, tableLoc)},
	{"cellRect", "Ljava/awt/Rectangle;", nullptr, $PRIVATE | $VOLATILE, $field(bug4275046, cellRect)},
	{"editedValue", "Ljava/lang/Object;", nullptr, $PRIVATE | $VOLATILE, $field(bug4275046, editedValue)},
	{"testResult", "Z", nullptr, $PRIVATE | $VOLATILE, $field(bug4275046, testResult)},
	{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $FINAL, $field(bug4275046, robot)},
	{}
};

$MethodInfo _bug4275046_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug4275046::*)()>(&bug4275046::init$)), "java.awt.AWTException"},
	{"checkResult", "()V", nullptr, $PRIVATE, $method(static_cast<void(bug4275046::*)()>(&bug4275046::checkResult)), "java.lang.Exception"},
	{"createGUI", "()V", nullptr, $PRIVATE, $method(static_cast<void(bug4275046::*)()>(&bug4275046::createGUI))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug4275046::main)), "java.lang.Exception"},
	{"runTest", "()V", nullptr, $PRIVATE, $method(static_cast<void(bug4275046::*)()>(&bug4275046::runTest)), "java.lang.Exception"},
	{"test", "()V", nullptr, $PRIVATE, $method(static_cast<void(bug4275046::*)()>(&bug4275046::test)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug4275046_InnerClassesInfo_[] = {
	{"bug4275046$5", nullptr, nullptr, 0},
	{"bug4275046$4", nullptr, nullptr, 0},
	{"bug4275046$3", nullptr, nullptr, 0},
	{"bug4275046$2", nullptr, nullptr, 0},
	{"bug4275046$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4275046_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug4275046",
	"java.lang.Object",
	nullptr,
	_bug4275046_FieldInfo_,
	_bug4275046_MethodInfo_,
	nullptr,
	nullptr,
	_bug4275046_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug4275046$5,bug4275046$4,bug4275046$3,bug4275046$2,bug4275046$1"
};

$Object* allocate$bug4275046($Class* clazz) {
	return $of($alloc(bug4275046));
}

$StringArray* bug4275046::colNames = nullptr;
$ObjectArray2* bug4275046::data = nullptr;
$String* bug4275046::EXPECTED_VALUE = nullptr;

void bug4275046::main($StringArray* args) {
	$init(bug4275046);
	$var(bug4275046, test, $new(bug4275046));
	test->test();
}

void bug4275046::init$() {
	$set(this, robot, $new($Robot));
	$nc(this->robot)->setAutoDelay(100);
}

void bug4275046::createGUI() {
	$useLocalCurrentObjectStackCache();
	$set(this, frame, $new($JFrame, "bug4275046"_s));
	$nc(this->frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$var($JComboBox, cb, $new($JComboBox, $$new($ObjectArray, {
		$of("blue"_s),
		$of("yellow"_s),
		$of("green"_s),
		$of("red"_s)
	})));
	cb->setEditable(true);
	$var($DefaultCellEditor, comboEditor, $new($DefaultCellEditor, cb));
	comboEditor->setClickCountToStart(1);
	$var($DefaultTableModel, model, $new($DefaultTableModel, bug4275046::data, bug4275046::colNames));
	$set(this, table, $new($JTable, model));
	$nc($($nc($($nc(this->table)->getColumnModel()))->getColumn(1)))->setCellEditor(comboEditor);
	$nc(this->frame)->add(static_cast<$Component*>(this->table));
	$nc(this->frame)->pack();
	$nc(this->frame)->setSize(550, 400);
	$nc(this->frame)->setVisible(true);
}

void bug4275046::test() {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$SwingUtilities::invokeAndWait($$new($bug4275046$1, this));
			runTest();
			checkResult();
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$SwingUtilities::invokeAndWait($$new($bug4275046$2, this));
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void bug4275046::runTest() {
	$useLocalCurrentObjectStackCache();
	$nc(this->robot)->waitForIdle();
	$SwingUtilities::invokeAndWait($$new($bug4275046$3, this));
	$nc(this->robot)->mouseMove($nc(this->tableLoc)->x + $nc(this->cellRect)->x + $nc(this->cellRect)->width / 2, $nc(this->tableLoc)->y + $nc(this->cellRect)->y + $nc(this->cellRect)->height / 2);
	$nc(this->robot)->mousePress($InputEvent::BUTTON1_DOWN_MASK);
	$nc(this->robot)->mouseRelease($InputEvent::BUTTON1_DOWN_MASK);
	$nc(this->robot)->waitForIdle();
	$nc(this->robot)->keyPress($KeyEvent::VK_E);
	$nc(this->robot)->keyRelease($KeyEvent::VK_E);
	$nc(this->robot)->keyPress($KeyEvent::VK_D);
	$nc(this->robot)->keyRelease($KeyEvent::VK_D);
	$nc(this->robot)->keyPress($KeyEvent::VK_I);
	$nc(this->robot)->keyRelease($KeyEvent::VK_I);
	$nc(this->robot)->keyPress($KeyEvent::VK_T);
	$nc(this->robot)->keyRelease($KeyEvent::VK_T);
	$nc(this->robot)->keyPress($KeyEvent::VK_E);
	$nc(this->robot)->keyRelease($KeyEvent::VK_E);
	$nc(this->robot)->keyPress($KeyEvent::VK_D);
	$nc(this->robot)->keyRelease($KeyEvent::VK_D);
	$nc(this->robot)->delay(100);
	$SwingUtilities::invokeAndWait($$new($bug4275046$4, this));
	$nc(this->robot)->mouseMove($nc(this->tableLoc)->x + $nc(this->cellRect)->x + $nc(this->cellRect)->width / 2, $nc(this->tableLoc)->y + $nc(this->cellRect)->y + $nc(this->cellRect)->height / 2);
	$nc(this->robot)->mousePress($InputEvent::BUTTON1_DOWN_MASK);
	$nc(this->robot)->mouseRelease($InputEvent::BUTTON1_DOWN_MASK);
	$nc(this->robot)->delay(100);
}

void bug4275046::checkResult() {
	$useLocalCurrentObjectStackCache();
	$nc(this->robot)->waitForIdle();
	$SwingUtilities::invokeAndWait($$new($bug4275046$5, this));
	if (!this->testResult) {
		$throwNew($RuntimeException, $$str({"Expected value in the cell: \'"_s, bug4275046::EXPECTED_VALUE, "\' but found \'"_s, this->editedValue, "\'."_s}));
	}
}

void clinit$bug4275046($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(bug4275046::EXPECTED_VALUE, "rededited"_s);
	$assignStatic(bug4275046::colNames, $new($StringArray, {
		"ID"_s,
		"Color"_s,
		"Stuff"_s
	}));
	$assignStatic(bug4275046::data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$($of($Integer::valueOf(1))),
			$of("red"_s),
			$of("abc"_s)
		}),
		$$new($ObjectArray, {
			$($of($Integer::valueOf(2))),
			$of("red"_s),
			$of("def"_s)
		}),
		$$new($ObjectArray, {
			$($of($Integer::valueOf(3))),
			$of("red"_s),
			$of("ghijk"_s)
		})
	}));
}

bug4275046::bug4275046() {
}

$Class* bug4275046::load$($String* name, bool initialize) {
	$loadClass(bug4275046, name, initialize, &_bug4275046_ClassInfo_, clinit$bug4275046, allocate$bug4275046);
	return class$;
}

$Class* bug4275046::class$ = nullptr;