#include <bug8032878.h>

#include <bug8032878$1.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/KeyEvent.h>
#include <java/io/PrintStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
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
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <javax/swing/table/TableCellEditor.h>
#include <javax/swing/table/TableColumn.h>
#include <javax/swing/table/TableColumnModel.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE
#undef EXPECTED
#undef ONE
#undef THREE
#undef TWO
#undef VK_1
#undef VK_2
#undef VK_3
#undef VK_ENTER
#undef VK_TAB

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $StringArray2 = $Array<::java::lang::String, 2>;
using $bug8032878$1 = ::bug8032878$1;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
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
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;
using $TableCellEditor = ::javax::swing::table::TableCellEditor;
using $TableColumn = ::javax::swing::table::TableColumn;
using $TableColumnModel = ::javax::swing::table::TableColumnModel;

class bug8032878$$Lambda$lambda$test$0 : public $Runnable {
	$class(bug8032878$$Lambda$lambda$test$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$(bug8032878* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$test$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug8032878$$Lambda$lambda$test$0>());
	}
	bug8032878* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo bug8032878$$Lambda$lambda$test$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(bug8032878$$Lambda$lambda$test$0, inst$)},
	{}
};
$MethodInfo bug8032878$$Lambda$lambda$test$0::methodInfos[3] = {
	{"<init>", "(Lbug8032878;)V", nullptr, $PUBLIC, $method(static_cast<void(bug8032878$$Lambda$lambda$test$0::*)(bug8032878*)>(&bug8032878$$Lambda$lambda$test$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug8032878$$Lambda$lambda$test$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug8032878$$Lambda$lambda$test$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* bug8032878$$Lambda$lambda$test$0::load$($String* name, bool initialize) {
	$loadClass(bug8032878$$Lambda$lambda$test$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug8032878$$Lambda$lambda$test$0::class$ = nullptr;

$FieldInfo _bug8032878_FieldInfo_[] = {
	{"ONE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug8032878, ONE)},
	{"TWO", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug8032878, TWO)},
	{"THREE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug8032878, THREE)},
	{"EXPECTED", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug8032878, EXPECTED)},
	{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $FINAL, $field(bug8032878, robot)},
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE, $field(bug8032878, frame)},
	{"cb", "Ljavax/swing/JComboBox;", nullptr, $PRIVATE, $field(bug8032878, cb)},
	{"surrender", "Z", nullptr, $PRIVATE | $VOLATILE, $field(bug8032878, surrender)},
	{"text", "Ljava/lang/String;", nullptr, $PRIVATE | $VOLATILE, $field(bug8032878, text)},
	{}
};

$MethodInfo _bug8032878_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8032878::*)()>(&bug8032878::init$)), "java.awt.AWTException"},
	{"checkResult", "()V", nullptr, $PRIVATE, $method(static_cast<void(bug8032878::*)()>(&bug8032878::checkResult)), "java.lang.Exception"},
	{"lambda$test$0", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(bug8032878::*)()>(&bug8032878::lambda$test$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug8032878::main)), "java.lang.Exception"},
	{"run", "()V", nullptr, $PUBLIC},
	{"runTest", "()V", nullptr, $PRIVATE, $method(static_cast<void(bug8032878::*)()>(&bug8032878::runTest)), "java.lang.Exception"},
	{"setupUI", "()V", nullptr, $PRIVATE, $method(static_cast<void(bug8032878::*)()>(&bug8032878::setupUI))},
	{"test", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(bug8032878::*)(bool)>(&bug8032878::test)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug8032878_InnerClassesInfo_[] = {
	{"bug8032878$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8032878_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug8032878",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug8032878_FieldInfo_,
	_bug8032878_MethodInfo_,
	nullptr,
	nullptr,
	_bug8032878_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug8032878$1"
};

$Object* allocate$bug8032878($Class* clazz) {
	return $of($alloc(bug8032878));
}

$String* bug8032878::ONE = nullptr;
$String* bug8032878::TWO = nullptr;
$String* bug8032878::THREE = nullptr;
$String* bug8032878::EXPECTED = nullptr;

void bug8032878::main($StringArray* args) {
	$init(bug8032878);
	$useLocalCurrentObjectStackCache();
	$UIManager::setLookAndFeel(static_cast<$LookAndFeel*>($$new($MetalLookAndFeel)));
	$var(bug8032878, test, $new(bug8032878));
	test->test(false);
	test->test(true);
}

void bug8032878::init$() {
	$set(this, robot, $new($Robot));
	$nc(this->robot)->setAutoDelay(100);
}

void bug8032878::setupUI() {
	$useLocalCurrentObjectStackCache();
	$set(this, frame, $new($JFrame));
	$nc(this->frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$var($JTable, table, $new($JTable, $fcast($ObjectArray2, $$new($StringArray2, {
		$$new($StringArray, {bug8032878::ONE}),
		$$new($StringArray, {bug8032878::TWO}),
		$$new($StringArray, {bug8032878::THREE})
	})), $$new($StringArray, {"#"_s})));
	table->setSurrendersFocusOnKeystroke(this->surrender);
	$set(this, cb, $new($JComboBox, $$new($StringArray, {
		bug8032878::ONE,
		bug8032878::TWO,
		bug8032878::THREE
	})));
	$nc(this->cb)->setEditable(true);
	$var($DefaultCellEditor, comboEditor, $new($DefaultCellEditor, this->cb));
	comboEditor->setClickCountToStart(1);
	$nc($($nc($(table->getColumnModel()))->getColumn(0)))->setCellEditor(comboEditor);
	$nc(this->frame)->add(static_cast<$Component*>(table));
	$nc(this->frame)->pack();
	$nc(this->frame)->setVisible(true);
	$nc(this->frame)->setLocationRelativeTo(nullptr);
}

void bug8032878::test(bool flag) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			this->surrender = flag;
			$SwingUtilities::invokeAndWait(this);
			$nc(this->robot)->waitForIdle();
			$nc(this->robot)->delay(1000);
			runTest();
			checkResult();
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			if (this->frame != nullptr) {
				$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug8032878$$Lambda$lambda$test$0, this)));
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void bug8032878::runTest() {
	$nc(this->robot)->waitForIdle();
	$nc(this->robot)->keyPress($KeyEvent::VK_TAB);
	$nc(this->robot)->keyRelease($KeyEvent::VK_TAB);
	$nc(this->robot)->waitForIdle();
	$nc(this->robot)->keyPress($KeyEvent::VK_1);
	$nc(this->robot)->keyRelease($KeyEvent::VK_1);
	$nc(this->robot)->waitForIdle();
	$nc(this->robot)->keyPress($KeyEvent::VK_2);
	$nc(this->robot)->keyRelease($KeyEvent::VK_2);
	$nc(this->robot)->waitForIdle();
	$nc(this->robot)->keyPress($KeyEvent::VK_3);
	$nc(this->robot)->keyRelease($KeyEvent::VK_3);
	$nc(this->robot)->waitForIdle();
	$nc(this->robot)->keyPress($KeyEvent::VK_ENTER);
	$nc(this->robot)->keyRelease($KeyEvent::VK_ENTER);
	$nc(this->robot)->waitForIdle();
}

void bug8032878::checkResult() {
	$useLocalCurrentObjectStackCache();
	$SwingUtilities::invokeAndWait($$new($bug8032878$1, this));
	if ($nc(this->text)->equals(bug8032878::EXPECTED)) {
		$init($System);
		$nc($System::out)->println($$str({"Test with surrender = "_s, $$str(this->surrender), " passed"_s}));
	} else {
		$init($System);
		$nc($System::out)->println($$str({"Test with surrender = "_s, $$str(this->surrender), " failed"_s}));
		$throwNew($RuntimeException, $$str({"Expected value in JComboBox editor \'"_s, bug8032878::EXPECTED, "\' but found \'"_s, this->text, "\'."_s}));
	}
}

void bug8032878::run() {
	setupUI();
}

void bug8032878::lambda$test$0() {
	$nc(this->frame)->dispose();
}

bug8032878::bug8032878() {
}

void clinit$bug8032878($Class* class$) {
	$assignStatic(bug8032878::ONE, "one"_s);
	$assignStatic(bug8032878::TWO, "two"_s);
	$assignStatic(bug8032878::THREE, "three"_s);
	$assignStatic(bug8032878::EXPECTED, "one123"_s);
}

$Class* bug8032878::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(bug8032878$$Lambda$lambda$test$0::classInfo$.name)) {
			return bug8032878$$Lambda$lambda$test$0::load$(name, initialize);
		}
	}
	$loadClass(bug8032878, name, initialize, &_bug8032878_ClassInfo_, clinit$bug8032878, allocate$bug8032878);
	return class$;
}

$Class* bug8032878::class$ = nullptr;