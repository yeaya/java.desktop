#include <bug6263446.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/InputEvent.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/DefaultCellEditor.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTable.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/table/AbstractTableModel.h>
#include <javax/swing/table/DefaultTableModel.h>
#include <javax/swing/table/TableCellEditor.h>
#include <javax/swing/table/TableModel.h>
#include <jcpp.h>

#undef ALL
#undef BUTTON1_DOWN_MASK
#undef EXIT_ON_CLOSE
#undef FIRST
#undef SECOND

using $PointArray = $Array<::java::awt::Point>;
using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $StringArray2 = $Array<::java::lang::String, 2>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $InputEvent = ::java::awt::event::InputEvent;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $DefaultCellEditor = ::javax::swing::DefaultCellEditor;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JTable = ::javax::swing::JTable;
using $JTextField = ::javax::swing::JTextField;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $AbstractTableModel = ::javax::swing::table::AbstractTableModel;
using $DefaultTableModel = ::javax::swing::table::DefaultTableModel;
using $TableCellEditor = ::javax::swing::table::TableCellEditor;
using $TableModel = ::javax::swing::table::TableModel;

class bug6263446$$Lambda$lambda$main$0 : public $Runnable {
	$class(bug6263446$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug6263446::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug6263446$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug6263446$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6263446$$Lambda$lambda$main$0::*)()>(&bug6263446$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug6263446$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug6263446$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* bug6263446$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(bug6263446$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug6263446$$Lambda$lambda$main$0::class$ = nullptr;

class bug6263446$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(bug6263446$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug6263446::lambda$main$1();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug6263446$$Lambda$lambda$main$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug6263446$$Lambda$lambda$main$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6263446$$Lambda$lambda$main$1$1::*)()>(&bug6263446$$Lambda$lambda$main$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug6263446$$Lambda$lambda$main$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug6263446$$Lambda$lambda$main$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* bug6263446$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$loadClass(bug6263446$$Lambda$lambda$main$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug6263446$$Lambda$lambda$main$1$1::class$ = nullptr;

class bug6263446$$Lambda$dispose$2 : public $Runnable {
	$class(bug6263446$$Lambda$dispose$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$($Window* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->dispose();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug6263446$$Lambda$dispose$2>());
	}
	$Window* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo bug6263446$$Lambda$dispose$2::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(bug6263446$$Lambda$dispose$2, inst$)},
	{}
};
$MethodInfo bug6263446$$Lambda$dispose$2::methodInfos[3] = {
	{"<init>", "(Ljava/awt/Window;)V", nullptr, $PUBLIC, $method(static_cast<void(bug6263446$$Lambda$dispose$2::*)($Window*)>(&bug6263446$$Lambda$dispose$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug6263446$$Lambda$dispose$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug6263446$$Lambda$dispose$2",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* bug6263446$$Lambda$dispose$2::load$($String* name, bool initialize) {
	$loadClass(bug6263446$$Lambda$dispose$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug6263446$$Lambda$dispose$2::class$ = nullptr;

class bug6263446$$Lambda$lambda$setClickCountToStart$2$3 : public $Runnable {
	$class(bug6263446$$Lambda$lambda$setClickCountToStart$2$3, $NO_CLASS_INIT, $Runnable)
public:
	void init$(int32_t clicks) {
		this->clicks = clicks;
	}
	virtual void run() override {
		bug6263446::lambda$setClickCountToStart$2(clicks);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug6263446$$Lambda$lambda$setClickCountToStart$2$3>());
	}
	int32_t clicks = 0;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo bug6263446$$Lambda$lambda$setClickCountToStart$2$3::fieldInfos[2] = {
	{"clicks", "I", nullptr, $PUBLIC, $field(bug6263446$$Lambda$lambda$setClickCountToStart$2$3, clicks)},
	{}
};
$MethodInfo bug6263446$$Lambda$lambda$setClickCountToStart$2$3::methodInfos[3] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(bug6263446$$Lambda$lambda$setClickCountToStart$2$3::*)(int32_t)>(&bug6263446$$Lambda$lambda$setClickCountToStart$2$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug6263446$$Lambda$lambda$setClickCountToStart$2$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug6263446$$Lambda$lambda$setClickCountToStart$2$3",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* bug6263446$$Lambda$lambda$setClickCountToStart$2$3::load$($String* name, bool initialize) {
	$loadClass(bug6263446$$Lambda$lambda$setClickCountToStart$2$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug6263446$$Lambda$lambda$setClickCountToStart$2$3::class$ = nullptr;

class bug6263446$$Lambda$lambda$cancelCellEditing$3$4 : public $Runnable {
	$class(bug6263446$$Lambda$lambda$cancelCellEditing$3$4, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug6263446::lambda$cancelCellEditing$3();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug6263446$$Lambda$lambda$cancelCellEditing$3$4>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug6263446$$Lambda$lambda$cancelCellEditing$3$4::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6263446$$Lambda$lambda$cancelCellEditing$3$4::*)()>(&bug6263446$$Lambda$lambda$cancelCellEditing$3$4::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug6263446$$Lambda$lambda$cancelCellEditing$3$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug6263446$$Lambda$lambda$cancelCellEditing$3$4",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* bug6263446$$Lambda$lambda$cancelCellEditing$3$4::load$($String* name, bool initialize) {
	$loadClass(bug6263446$$Lambda$lambda$cancelCellEditing$3$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug6263446$$Lambda$lambda$cancelCellEditing$3$4::class$ = nullptr;

class bug6263446$$Lambda$lambda$checkSelection$4$5 : public $Runnable {
	$class(bug6263446$$Lambda$lambda$checkSelection$4$5, $NO_CLASS_INIT, $Runnable)
public:
	void init$($String* sel) {
		$set(this, sel, sel);
	}
	virtual void run() override {
		bug6263446::lambda$checkSelection$4(sel);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug6263446$$Lambda$lambda$checkSelection$4$5>());
	}
	$String* sel = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo bug6263446$$Lambda$lambda$checkSelection$4$5::fieldInfos[2] = {
	{"sel", "Ljava/lang/String;", nullptr, $PUBLIC, $field(bug6263446$$Lambda$lambda$checkSelection$4$5, sel)},
	{}
};
$MethodInfo bug6263446$$Lambda$lambda$checkSelection$4$5::methodInfos[3] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(bug6263446$$Lambda$lambda$checkSelection$4$5::*)($String*)>(&bug6263446$$Lambda$lambda$checkSelection$4$5::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug6263446$$Lambda$lambda$checkSelection$4$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug6263446$$Lambda$lambda$checkSelection$4$5",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* bug6263446$$Lambda$lambda$checkSelection$4$5::load$($String* name, bool initialize) {
	$loadClass(bug6263446$$Lambda$lambda$checkSelection$4$5, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug6263446$$Lambda$lambda$checkSelection$4$5::class$ = nullptr;

class bug6263446$$Lambda$lambda$assertEditing$5$6 : public $Runnable {
	$class(bug6263446$$Lambda$lambda$assertEditing$5$6, $NO_CLASS_INIT, $Runnable)
public:
	void init$(bool editing) {
		this->editing = editing;
	}
	virtual void run() override {
		bug6263446::lambda$assertEditing$5(editing);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug6263446$$Lambda$lambda$assertEditing$5$6>());
	}
	bool editing = false;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo bug6263446$$Lambda$lambda$assertEditing$5$6::fieldInfos[2] = {
	{"editing", "Z", nullptr, $PUBLIC, $field(bug6263446$$Lambda$lambda$assertEditing$5$6, editing)},
	{}
};
$MethodInfo bug6263446$$Lambda$lambda$assertEditing$5$6::methodInfos[3] = {
	{"<init>", "(Z)V", nullptr, $PUBLIC, $method(static_cast<void(bug6263446$$Lambda$lambda$assertEditing$5$6::*)(bool)>(&bug6263446$$Lambda$lambda$assertEditing$5$6::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug6263446$$Lambda$lambda$assertEditing$5$6::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug6263446$$Lambda$lambda$assertEditing$5$6",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* bug6263446$$Lambda$lambda$assertEditing$5$6::load$($String* name, bool initialize) {
	$loadClass(bug6263446$$Lambda$lambda$assertEditing$5$6, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug6263446$$Lambda$lambda$assertEditing$5$6::class$ = nullptr;

class bug6263446$$Lambda$lambda$getClickPoint$6$7 : public $Runnable {
	$class(bug6263446$$Lambda$lambda$getClickPoint$6$7, $NO_CLASS_INIT, $Runnable)
public:
	void init$($PointArray* result) {
		$set(this, result, result);
	}
	virtual void run() override {
		bug6263446::lambda$getClickPoint$6(result);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug6263446$$Lambda$lambda$getClickPoint$6$7>());
	}
	$PointArray* result = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo bug6263446$$Lambda$lambda$getClickPoint$6$7::fieldInfos[2] = {
	{"result", "[Ljava/awt/Point;", nullptr, $PUBLIC, $field(bug6263446$$Lambda$lambda$getClickPoint$6$7, result)},
	{}
};
$MethodInfo bug6263446$$Lambda$lambda$getClickPoint$6$7::methodInfos[3] = {
	{"<init>", "([Ljava/awt/Point;)V", nullptr, $PUBLIC, $method(static_cast<void(bug6263446$$Lambda$lambda$getClickPoint$6$7::*)($PointArray*)>(&bug6263446$$Lambda$lambda$getClickPoint$6$7::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug6263446$$Lambda$lambda$getClickPoint$6$7::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug6263446$$Lambda$lambda$getClickPoint$6$7",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* bug6263446$$Lambda$lambda$getClickPoint$6$7::load$($String* name, bool initialize) {
	$loadClass(bug6263446$$Lambda$lambda$getClickPoint$6$7, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug6263446$$Lambda$lambda$getClickPoint$6$7::class$ = nullptr;

$FieldInfo _bug6263446_FieldInfo_[] = {
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(bug6263446, frame)},
	{"table", "Ljavax/swing/JTable;", nullptr, $PRIVATE | $STATIC, $staticField(bug6263446, table)},
	{"FIRST", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug6263446, FIRST)},
	{"SECOND", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug6263446, SECOND)},
	{"ALL", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug6263446, ALL)},
	{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $STATIC, $staticField(bug6263446, robot)},
	{}
};

$MethodInfo _bug6263446_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6263446::*)()>(&bug6263446::init$))},
	{"assertEditing", "(Z)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(bool)>(&bug6263446::assertEditing)), "java.lang.Exception"},
	{"cancelCellEditing", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug6263446::cancelCellEditing)), "java.lang.Exception"},
	{"checkSelectedText", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&bug6263446::checkSelectedText)), "java.lang.Exception"},
	{"checkSelection", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&bug6263446::checkSelection)), "java.lang.Exception"},
	{"click", "(I)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(int32_t)>(&bug6263446::click))},
	{"createAndShowGUI", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug6263446::createAndShowGUI))},
	{"createTableModel", "()Ljavax/swing/table/TableModel;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$TableModel*(*)()>(&bug6263446::createTableModel))},
	{"getClickPoint", "()Ljava/awt/Point;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Point*(*)()>(&bug6263446::getClickPoint)), "java.lang.Exception"},
	{"lambda$assertEditing$5", "(Z)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)(bool)>(&bug6263446::lambda$assertEditing$5))},
	{"lambda$cancelCellEditing$3", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&bug6263446::lambda$cancelCellEditing$3))},
	{"lambda$checkSelection$4", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($String*)>(&bug6263446::lambda$checkSelection$4))},
	{"lambda$getClickPoint$6", "([Ljava/awt/Point;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($PointArray*)>(&bug6263446::lambda$getClickPoint$6))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&bug6263446::lambda$main$0))},
	{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&bug6263446::lambda$main$1))},
	{"lambda$setClickCountToStart$2", "(I)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)(int32_t)>(&bug6263446::lambda$setClickCountToStart$2))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6263446::main)), "java.lang.Exception"},
	{"setClickCountToStart", "(I)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(int32_t)>(&bug6263446::setClickCountToStart)), "java.lang.Exception"},
	{}
};

$ClassInfo _bug6263446_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6263446",
	"java.lang.Object",
	nullptr,
	_bug6263446_FieldInfo_,
	_bug6263446_MethodInfo_
};

$Object* allocate$bug6263446($Class* clazz) {
	return $of($alloc(bug6263446));
}

$JFrame* bug6263446::frame = nullptr;
$JTable* bug6263446::table = nullptr;
$String* bug6263446::FIRST = nullptr;
$String* bug6263446::SECOND = nullptr;
$String* bug6263446::ALL = nullptr;
$Robot* bug6263446::robot = nullptr;

void bug6263446::init$() {
}

void bug6263446::main($StringArray* args) {
	$init(bug6263446);
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$assignStatic(bug6263446::robot, $new($Robot));
			$nc(bug6263446::robot)->setAutoDelay(50);
			$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug6263446$$Lambda$lambda$main$0)));
			$nc(bug6263446::robot)->waitForIdle();
			$nc(bug6263446::robot)->delay(1000);
			$var($Point, point, getClickPoint());
			$nc(bug6263446::robot)->mouseMove($nc(point)->x, point->y);
			$nc(bug6263446::robot)->waitForIdle();
			click(1);
			$nc(bug6263446::robot)->waitForIdle();
			assertEditing(false);
			click(2);
			$nc(bug6263446::robot)->waitForIdle();
			checkSelectedText(nullptr);
			click(3);
			$nc(bug6263446::robot)->waitForIdle();
			checkSelectedText(bug6263446::FIRST);
			click(4);
			$nc(bug6263446::robot)->waitForIdle();
			checkSelectedText(bug6263446::ALL);
			setClickCountToStart(1);
			$nc(bug6263446::robot)->waitForIdle();
			click(1);
			$nc(bug6263446::robot)->waitForIdle();
			checkSelectedText(nullptr);
			click(2);
			$nc(bug6263446::robot)->waitForIdle();
			checkSelectedText(bug6263446::FIRST);
			click(3);
			$nc(bug6263446::robot)->waitForIdle();
			checkSelectedText(bug6263446::ALL);
			setClickCountToStart(3);
			$nc(bug6263446::robot)->waitForIdle();
			click(1);
			$nc(bug6263446::robot)->waitForIdle();
			assertEditing(false);
			click(2);
			$nc(bug6263446::robot)->waitForIdle();
			assertEditing(false);
			click(3);
			$nc(bug6263446::robot)->waitForIdle();
			checkSelectedText(nullptr);
			click(4);
			$nc(bug6263446::robot)->waitForIdle();
			checkSelectedText(bug6263446::FIRST);
			click(5);
			$nc(bug6263446::robot)->waitForIdle();
			checkSelectedText(bug6263446::ALL);
			$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug6263446$$Lambda$lambda$main$1$1)));
			$nc(bug6263446::robot)->waitForIdle();
			assertEditing(true);
			click(2);
			$nc(bug6263446::robot)->waitForIdle();
			checkSelectedText(bug6263446::FIRST);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			if (bug6263446::frame != nullptr) {
				$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug6263446$$Lambda$dispose$2, static_cast<$JFrame*>($nc(bug6263446::frame)))));
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void bug6263446::checkSelectedText($String* sel) {
	$init(bug6263446);
	assertEditing(true);
	checkSelection(sel);
	$nc(bug6263446::robot)->waitForIdle();
	cancelCellEditing();
	$nc(bug6263446::robot)->waitForIdle();
	assertEditing(false);
}

void bug6263446::setClickCountToStart(int32_t clicks) {
	$init(bug6263446);
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug6263446$$Lambda$lambda$setClickCountToStart$2$3, clicks)));
}

void bug6263446::cancelCellEditing() {
	$init(bug6263446);
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug6263446$$Lambda$lambda$cancelCellEditing$3$4)));
}

void bug6263446::checkSelection($String* sel) {
	$init(bug6263446);
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug6263446$$Lambda$lambda$checkSelection$4$5, sel)));
}

void bug6263446::assertEditing(bool editing) {
	$init(bug6263446);
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug6263446$$Lambda$lambda$assertEditing$5$6, editing)));
}

$Point* bug6263446::getClickPoint() {
	$init(bug6263446);
	$useLocalCurrentObjectStackCache();
	$var($PointArray, result, $new($PointArray, 1));
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug6263446$$Lambda$lambda$getClickPoint$6$7, result)));
	return result->get(0);
}

void bug6263446::click(int32_t times) {
	$init(bug6263446);
	$nc(bug6263446::robot)->delay(500);
	for (int32_t i = 0; i < times; ++i) {
		$nc(bug6263446::robot)->mousePress($InputEvent::BUTTON1_DOWN_MASK);
		$nc(bug6263446::robot)->mouseRelease($InputEvent::BUTTON1_DOWN_MASK);
	}
}

$TableModel* bug6263446::createTableModel() {
	$init(bug6263446);
	$useLocalCurrentObjectStackCache();
	$var($StringArray, columnNames, $new($StringArray, {"Column 0"_s}));
	$var($StringArray2, data, $new($StringArray2, {$$new($StringArray, {bug6263446::ALL})}));
	return $new($DefaultTableModel, $fcast($ObjectArray2, data), columnNames);
}

void bug6263446::createAndShowGUI() {
	$init(bug6263446);
	$assignStatic(bug6263446::frame, $new($JFrame, "bug6263446"_s));
	$nc(bug6263446::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$assignStatic(bug6263446::table, $new($JTable, $(createTableModel())));
	$nc(bug6263446::frame)->add(static_cast<$Component*>(bug6263446::table));
	$nc(bug6263446::frame)->setAlwaysOnTop(true);
	$nc(bug6263446::frame)->setLocationRelativeTo(nullptr);
	$nc(bug6263446::frame)->pack();
	$nc(bug6263446::frame)->setVisible(true);
	$nc(bug6263446::frame)->toFront();
}

void bug6263446::lambda$getClickPoint$6($PointArray* result) {
	$init(bug6263446);
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, rect, $nc(bug6263446::table)->getCellRect(0, 0, false));
	$var($Point, point, $new($Point, $nc(rect)->x + rect->width / 5, rect->y + rect->height / 2));
	$SwingUtilities::convertPointToScreen(point, bug6263446::table);
	$nc(result)->set(0, point);
}

void bug6263446::lambda$assertEditing$5(bool editing) {
	$init(bug6263446);
	if (editing && !$nc(bug6263446::table)->isEditing()) {
		$throwNew($RuntimeException, "Table should be editing"_s);
	}
	if (!editing && $nc(bug6263446::table)->isEditing()) {
		$throwNew($RuntimeException, "Table should not be editing"_s);
	}
}

void bug6263446::lambda$checkSelection$4($String* sel) {
	$init(bug6263446);
	$useLocalCurrentObjectStackCache();
	$var($DefaultCellEditor, editor, $cast($DefaultCellEditor, $nc(bug6263446::table)->getDefaultEditor($String::class$)));
	$var($JTextField, field, $cast($JTextField, $nc(editor)->getComponent()));
	$var($String, text, $nc(field)->getSelectedText());
	if (sel == nullptr) {
		if (text != nullptr && text->length() != 0) {
			$throwNew($RuntimeException, $$str({"Nothing should be selected, but \""_s, text, "\" is selected."_s}));
		}
	} else if (!$nc(sel)->equals(text)) {
		$throwNew($RuntimeException, $$str({"\""_s, sel, "\" should be selected, but \""_s, text, "\" is selected."_s}));
	}
}

void bug6263446::lambda$cancelCellEditing$3() {
	$init(bug6263446);
	$nc($($nc(bug6263446::table)->getCellEditor()))->cancelCellEditing();
}

void bug6263446::lambda$setClickCountToStart$2(int32_t clicks) {
	$init(bug6263446);
	$var($DefaultCellEditor, editor, $cast($DefaultCellEditor, $nc(bug6263446::table)->getDefaultEditor($String::class$)));
	$nc(editor)->setClickCountToStart(clicks);
}

void bug6263446::lambda$main$1() {
	$init(bug6263446);
	$nc(bug6263446::table)->editCellAt(0, 0);
}

void bug6263446::lambda$main$0() {
	$init(bug6263446);
	createAndShowGUI();
}

bug6263446::bug6263446() {
}

void clinit$bug6263446($Class* class$) {
	$assignStatic(bug6263446::FIRST, "AAAAA"_s);
	$assignStatic(bug6263446::SECOND, "BB"_s);
	$init(bug6263446);
	$assignStatic(bug6263446::ALL, $str({bug6263446::FIRST, " "_s, bug6263446::SECOND}));
}

$Class* bug6263446::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(bug6263446$$Lambda$lambda$main$0::classInfo$.name)) {
			return bug6263446$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals(bug6263446$$Lambda$lambda$main$1$1::classInfo$.name)) {
			return bug6263446$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
		if (name->equals(bug6263446$$Lambda$dispose$2::classInfo$.name)) {
			return bug6263446$$Lambda$dispose$2::load$(name, initialize);
		}
		if (name->equals(bug6263446$$Lambda$lambda$setClickCountToStart$2$3::classInfo$.name)) {
			return bug6263446$$Lambda$lambda$setClickCountToStart$2$3::load$(name, initialize);
		}
		if (name->equals(bug6263446$$Lambda$lambda$cancelCellEditing$3$4::classInfo$.name)) {
			return bug6263446$$Lambda$lambda$cancelCellEditing$3$4::load$(name, initialize);
		}
		if (name->equals(bug6263446$$Lambda$lambda$checkSelection$4$5::classInfo$.name)) {
			return bug6263446$$Lambda$lambda$checkSelection$4$5::load$(name, initialize);
		}
		if (name->equals(bug6263446$$Lambda$lambda$assertEditing$5$6::classInfo$.name)) {
			return bug6263446$$Lambda$lambda$assertEditing$5$6::load$(name, initialize);
		}
		if (name->equals(bug6263446$$Lambda$lambda$getClickPoint$6$7::classInfo$.name)) {
			return bug6263446$$Lambda$lambda$getClickPoint$6$7::load$(name, initialize);
		}
	}
	$loadClass(bug6263446, name, initialize, &_bug6263446_ClassInfo_, clinit$bug6263446, allocate$bug6263446);
	return class$;
}

$Class* bug6263446::class$ = nullptr;