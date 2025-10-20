#include <bug8072767.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/DefaultCellEditor.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTable.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/table/TableCellEditor.h>
#include <javax/swing/table/TableColumn.h>
#include <javax/swing/table/TableColumnModel.h>
#include <jcpp.h>

#undef BUTTON1_DOWN_MASK
#undef EXIT_ON_CLOSE
#undef TEST1
#undef TEST2
#undef VK_1

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $StringArray2 = $Array<::java::lang::String, 2>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $InputEvent = ::java::awt::event::InputEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $DefaultCellEditor = ::javax::swing::DefaultCellEditor;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JTable = ::javax::swing::JTable;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $TableCellEditor = ::javax::swing::table::TableCellEditor;
using $TableColumn = ::javax::swing::table::TableColumn;
using $TableColumnModel = ::javax::swing::table::TableColumnModel;

class bug8072767$$Lambda$createAndShowGUI : public $Runnable {
	$class(bug8072767$$Lambda$createAndShowGUI, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug8072767::createAndShowGUI();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug8072767$$Lambda$createAndShowGUI>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug8072767$$Lambda$createAndShowGUI::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8072767$$Lambda$createAndShowGUI::*)()>(&bug8072767$$Lambda$createAndShowGUI::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug8072767$$Lambda$createAndShowGUI::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug8072767$$Lambda$createAndShowGUI",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* bug8072767$$Lambda$createAndShowGUI::load$($String* name, bool initialize) {
	$loadClass(bug8072767$$Lambda$createAndShowGUI, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug8072767$$Lambda$createAndShowGUI::class$ = nullptr;

class bug8072767$$Lambda$lambda$main$0$1 : public $Runnable {
	$class(bug8072767$$Lambda$lambda$main$0$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug8072767::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug8072767$$Lambda$lambda$main$0$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug8072767$$Lambda$lambda$main$0$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8072767$$Lambda$lambda$main$0$1::*)()>(&bug8072767$$Lambda$lambda$main$0$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug8072767$$Lambda$lambda$main$0$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug8072767$$Lambda$lambda$main$0$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* bug8072767$$Lambda$lambda$main$0$1::load$($String* name, bool initialize) {
	$loadClass(bug8072767$$Lambda$lambda$main$0$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug8072767$$Lambda$lambda$main$0$1::class$ = nullptr;

class bug8072767$$Lambda$lambda$main$1$2 : public $Runnable {
	$class(bug8072767$$Lambda$lambda$main$1$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug8072767::lambda$main$1();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug8072767$$Lambda$lambda$main$1$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug8072767$$Lambda$lambda$main$1$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8072767$$Lambda$lambda$main$1$2::*)()>(&bug8072767$$Lambda$lambda$main$1$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug8072767$$Lambda$lambda$main$1$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug8072767$$Lambda$lambda$main$1$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* bug8072767$$Lambda$lambda$main$1$2::load$($String* name, bool initialize) {
	$loadClass(bug8072767$$Lambda$lambda$main$1$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug8072767$$Lambda$lambda$main$1$2::class$ = nullptr;

class bug8072767$$Lambda$lambda$main$2$3 : public $Runnable {
	$class(bug8072767$$Lambda$lambda$main$2$3, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug8072767::lambda$main$2();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug8072767$$Lambda$lambda$main$2$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug8072767$$Lambda$lambda$main$2$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8072767$$Lambda$lambda$main$2$3::*)()>(&bug8072767$$Lambda$lambda$main$2$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug8072767$$Lambda$lambda$main$2$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug8072767$$Lambda$lambda$main$2$3",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* bug8072767$$Lambda$lambda$main$2$3::load$($String* name, bool initialize) {
	$loadClass(bug8072767$$Lambda$lambda$main$2$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug8072767$$Lambda$lambda$main$2$3::class$ = nullptr;

$FieldInfo _bug8072767_FieldInfo_[] = {
	{"TEST1", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug8072767, TEST1)},
	{"TEST2", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug8072767, TEST2)},
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(bug8072767, frame)},
	{"table", "Ljavax/swing/JTable;", nullptr, $PRIVATE | $STATIC, $staticField(bug8072767, table)},
	{"point", "Ljava/awt/Point;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(bug8072767, point)},
	{"testPass", "Z", nullptr, $PRIVATE | $STATIC, $staticField(bug8072767, testPass)},
	{}
};

$MethodInfo _bug8072767_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8072767::*)()>(&bug8072767::init$))},
	{"createAndShowGUI", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug8072767::createAndShowGUI))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&bug8072767::lambda$main$0))},
	{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&bug8072767::lambda$main$1))},
	{"lambda$main$2", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&bug8072767::lambda$main$2))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug8072767::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _bug8072767_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug8072767",
	"java.lang.Object",
	nullptr,
	_bug8072767_FieldInfo_,
	_bug8072767_MethodInfo_
};

$Object* allocate$bug8072767($Class* clazz) {
	return $of($alloc(bug8072767));
}

$String* bug8072767::TEST1 = nullptr;
$String* bug8072767::TEST2 = nullptr;
$JFrame* bug8072767::frame = nullptr;
$JTable* bug8072767::table = nullptr;
$volatile($Point*) bug8072767::point = nullptr;
bool bug8072767::testPass = false;

void bug8072767::init$() {
}

void bug8072767::main($StringArray* args) {
	$init(bug8072767);
	$useLocalCurrentObjectStackCache();
	$var($Robot, robot, $new($Robot));
	robot->setAutoDelay(100);
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug8072767$$Lambda$createAndShowGUI)));
	robot->waitForIdle();
	robot->delay(1000);
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug8072767$$Lambda$lambda$main$0$1)));
	robot->mouseMove($nc(bug8072767::point)->x, $nc(bug8072767::point)->y);
	robot->mousePress($InputEvent::BUTTON1_DOWN_MASK);
	robot->mouseRelease($InputEvent::BUTTON1_DOWN_MASK);
	robot->waitForIdle();
	robot->keyPress($KeyEvent::VK_1);
	robot->keyRelease($KeyEvent::VK_1);
	robot->waitForIdle();
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug8072767$$Lambda$lambda$main$1$2)));
	robot->mouseMove($nc(bug8072767::point)->x, $nc(bug8072767::point)->y);
	robot->mousePress($InputEvent::BUTTON1_DOWN_MASK);
	robot->mouseRelease($InputEvent::BUTTON1_DOWN_MASK);
	robot->waitForIdle();
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug8072767$$Lambda$lambda$main$2$3)));
	if (!bug8072767::testPass) {
		$throwNew($RuntimeException, "Table cell is not edited!"_s);
	}
}

void bug8072767::createAndShowGUI() {
	$init(bug8072767);
	$useLocalCurrentObjectStackCache();
	$assignStatic(bug8072767::frame, $new($JFrame));
	$nc(bug8072767::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$nc(bug8072767::frame)->setSize(200, 200);
	$assignStatic(bug8072767::table, $new($JTable, $fcast($ObjectArray2, $$new($StringArray2, {$$new($StringArray, {bug8072767::TEST1})})), $$new($StringArray, {"Header"_s})));
	$var($JComboBox, comboBox, $new($JComboBox));
	comboBox->setEditable(true);
	$nc($($nc($($nc(bug8072767::table)->getColumnModel()))->getColumn(0)))->setCellEditor($$new($DefaultCellEditor, comboBox));
	$nc($($nc(bug8072767::frame)->getContentPane()))->add(static_cast<$Component*>(bug8072767::table));
	$nc(bug8072767::frame)->setVisible(true);
	$nc(bug8072767::frame)->setLocationRelativeTo(nullptr);
}

void bug8072767::lambda$main$2() {
	$init(bug8072767);
	bug8072767::testPass = $nc(bug8072767::TEST2)->equals($($nc(bug8072767::table)->getValueAt(0, 0)));
	$nc(bug8072767::frame)->dispose();
}

void bug8072767::lambda$main$1() {
	$init(bug8072767);
	$assignStatic(bug8072767::point, $nc(bug8072767::frame)->getLocationOnScreen());
	int32_t var$0 = $nc(bug8072767::frame)->getWidth() / 2;
	$nc(bug8072767::point)->translate(var$0, $nc(bug8072767::frame)->getHeight() / 2);
}

void bug8072767::lambda$main$0() {
	$init(bug8072767);
	$assignStatic(bug8072767::point, $nc(bug8072767::table)->getLocationOnScreen());
	$var($Rectangle, rect, $nc(bug8072767::table)->getCellRect(0, 0, true));
	$nc(bug8072767::point)->translate($nc(rect)->width / 2, rect->height / 2);
}

bug8072767::bug8072767() {
}

void clinit$bug8072767($Class* class$) {
	$assignStatic(bug8072767::TEST1, "Test"_s);
	$init(bug8072767);
	$assignStatic(bug8072767::TEST2, $str({bug8072767::TEST1, $$str(1)}));
}

$Class* bug8072767::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(bug8072767$$Lambda$createAndShowGUI::classInfo$.name)) {
			return bug8072767$$Lambda$createAndShowGUI::load$(name, initialize);
		}
		if (name->equals(bug8072767$$Lambda$lambda$main$0$1::classInfo$.name)) {
			return bug8072767$$Lambda$lambda$main$0$1::load$(name, initialize);
		}
		if (name->equals(bug8072767$$Lambda$lambda$main$1$2::classInfo$.name)) {
			return bug8072767$$Lambda$lambda$main$1$2::load$(name, initialize);
		}
		if (name->equals(bug8072767$$Lambda$lambda$main$2$3::classInfo$.name)) {
			return bug8072767$$Lambda$lambda$main$2$3::load$(name, initialize);
		}
	}
	$loadClass(bug8072767, name, initialize, &_bug8072767_ClassInfo_, clinit$bug8072767, allocate$bug8072767);
	return class$;
}

$Class* bug8072767::class$ = nullptr;