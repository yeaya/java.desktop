#include <bug8008657.h>

#include <bug8008657$1.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/Comparable.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InstantiationException.h>
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
#include <java/util/Calendar.h>
#include <java/util/Date.h>
#include <javax/swing/AbstractSpinnerModel.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFormattedTextField.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JSpinner$DefaultEditor.h>
#include <javax/swing/JSpinner.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/SpinnerDateModel.h>
#include <javax/swing/SpinnerModel.h>
#include <javax/swing/SpinnerNumberModel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE
#undef LEFT
#undef LEFT_TO_RIGHT
#undef RIGHT
#undef RIGHT_TO_LEFT
#undef YEAR

using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $bug8008657$1 = ::bug8008657$1;
using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Comparable = ::java::lang::Comparable;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Calendar = ::java::util::Calendar;
using $Date = ::java::util::Date;
using $AbstractSpinnerModel = ::javax::swing::AbstractSpinnerModel;
using $JComponent = ::javax::swing::JComponent;
using $JFormattedTextField = ::javax::swing::JFormattedTextField;
using $JFrame = ::javax::swing::JFrame;
using $JSpinner = ::javax::swing::JSpinner;
using $JSpinner$DefaultEditor = ::javax::swing::JSpinner$DefaultEditor;
using $JTextField = ::javax::swing::JTextField;
using $SpinnerDateModel = ::javax::swing::SpinnerDateModel;
using $SpinnerModel = ::javax::swing::SpinnerModel;
using $SpinnerNumberModel = ::javax::swing::SpinnerNumberModel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;

class bug8008657$$Lambda$lambda$executeCase$0 : public $Runnable {
	$class(bug8008657$$Lambda$lambda$executeCase$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug8008657::lambda$executeCase$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug8008657$$Lambda$lambda$executeCase$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug8008657$$Lambda$lambda$executeCase$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8008657$$Lambda$lambda$executeCase$0::*)()>(&bug8008657$$Lambda$lambda$executeCase$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug8008657$$Lambda$lambda$executeCase$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug8008657$$Lambda$lambda$executeCase$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* bug8008657$$Lambda$lambda$executeCase$0::load$($String* name, bool initialize) {
	$loadClass(bug8008657$$Lambda$lambda$executeCase$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug8008657$$Lambda$lambda$executeCase$0::class$ = nullptr;

class bug8008657$$Lambda$lambda$executeCase$1$1 : public $Runnable {
	$class(bug8008657$$Lambda$lambda$executeCase$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug8008657::lambda$executeCase$1();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug8008657$$Lambda$lambda$executeCase$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug8008657$$Lambda$lambda$executeCase$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8008657$$Lambda$lambda$executeCase$1$1::*)()>(&bug8008657$$Lambda$lambda$executeCase$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug8008657$$Lambda$lambda$executeCase$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug8008657$$Lambda$lambda$executeCase$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* bug8008657$$Lambda$lambda$executeCase$1$1::load$($String* name, bool initialize) {
	$loadClass(bug8008657$$Lambda$lambda$executeCase$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug8008657$$Lambda$lambda$executeCase$1$1::class$ = nullptr;

class bug8008657$$Lambda$lambda$testSpinner$2$2 : public $Runnable {
	$class(bug8008657$$Lambda$lambda$testSpinner$2$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug8008657::lambda$testSpinner$2();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug8008657$$Lambda$lambda$testSpinner$2$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug8008657$$Lambda$lambda$testSpinner$2$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8008657$$Lambda$lambda$testSpinner$2$2::*)()>(&bug8008657$$Lambda$lambda$testSpinner$2$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug8008657$$Lambda$lambda$testSpinner$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug8008657$$Lambda$lambda$testSpinner$2$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* bug8008657$$Lambda$lambda$testSpinner$2$2::load$($String* name, bool initialize) {
	$loadClass(bug8008657$$Lambda$lambda$testSpinner$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug8008657$$Lambda$lambda$testSpinner$2$2::class$ = nullptr;

class bug8008657$$Lambda$lambda$testSpinner$3$3 : public $Runnable {
	$class(bug8008657$$Lambda$lambda$testSpinner$3$3, $NO_CLASS_INIT, $Runnable)
public:
	void init$(bool checkHorizontalAligment) {
		this->checkHorizontalAligment = checkHorizontalAligment;
	}
	virtual void run() override {
		bug8008657::lambda$testSpinner$3(checkHorizontalAligment);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug8008657$$Lambda$lambda$testSpinner$3$3>());
	}
	bool checkHorizontalAligment = false;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo bug8008657$$Lambda$lambda$testSpinner$3$3::fieldInfos[2] = {
	{"checkHorizontalAligment", "Z", nullptr, $PUBLIC, $field(bug8008657$$Lambda$lambda$testSpinner$3$3, checkHorizontalAligment)},
	{}
};
$MethodInfo bug8008657$$Lambda$lambda$testSpinner$3$3::methodInfos[3] = {
	{"<init>", "(Z)V", nullptr, $PUBLIC, $method(static_cast<void(bug8008657$$Lambda$lambda$testSpinner$3$3::*)(bool)>(&bug8008657$$Lambda$lambda$testSpinner$3$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug8008657$$Lambda$lambda$testSpinner$3$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug8008657$$Lambda$lambda$testSpinner$3$3",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* bug8008657$$Lambda$lambda$testSpinner$3$3::load$($String* name, bool initialize) {
	$loadClass(bug8008657$$Lambda$lambda$testSpinner$3$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug8008657$$Lambda$lambda$testSpinner$3$3::class$ = nullptr;

class bug8008657$$Lambda$lambda$testSpinner$4$4 : public $Runnable {
	$class(bug8008657$$Lambda$lambda$testSpinner$4$4, $NO_CLASS_INIT, $Runnable)
public:
	void init$(bool checkHorizontalAligment) {
		this->checkHorizontalAligment = checkHorizontalAligment;
	}
	virtual void run() override {
		bug8008657::lambda$testSpinner$4(checkHorizontalAligment);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug8008657$$Lambda$lambda$testSpinner$4$4>());
	}
	bool checkHorizontalAligment = false;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo bug8008657$$Lambda$lambda$testSpinner$4$4::fieldInfos[2] = {
	{"checkHorizontalAligment", "Z", nullptr, $PUBLIC, $field(bug8008657$$Lambda$lambda$testSpinner$4$4, checkHorizontalAligment)},
	{}
};
$MethodInfo bug8008657$$Lambda$lambda$testSpinner$4$4::methodInfos[3] = {
	{"<init>", "(Z)V", nullptr, $PUBLIC, $method(static_cast<void(bug8008657$$Lambda$lambda$testSpinner$4$4::*)(bool)>(&bug8008657$$Lambda$lambda$testSpinner$4$4::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug8008657$$Lambda$lambda$testSpinner$4$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug8008657$$Lambda$lambda$testSpinner$4$4",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* bug8008657$$Lambda$lambda$testSpinner$4$4::load$($String* name, bool initialize) {
	$loadClass(bug8008657$$Lambda$lambda$testSpinner$4$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug8008657$$Lambda$lambda$testSpinner$4$4::class$ = nullptr;

$FieldInfo _bug8008657_FieldInfo_[] = {
	{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $STATIC, $staticField(bug8008657, robot)},
	{"spinner", "Ljavax/swing/JSpinner;", nullptr, $PRIVATE | $STATIC, $staticField(bug8008657, spinner)},
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(bug8008657, frame)},
	{}
};

$MethodInfo _bug8008657_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8008657::*)()>(&bug8008657::init$))},
	{"cleanUp", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug8008657::cleanUp)), "java.lang.Exception"},
	{"createAndShowUI", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&bug8008657::createAndShowUI))},
	{"createDateSpinner", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&bug8008657::createDateSpinner))},
	{"createNumberSpinner", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&bug8008657::createNumberSpinner))},
	{"executeCase", "(Ljava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)($String*)>(&bug8008657::executeCase)), "java.lang.Exception"},
	{"getOrientation", "(Ljava/awt/ComponentOrientation;)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)($ComponentOrientation*)>(&bug8008657::getOrientation))},
	{"getTextField", "()Ljavax/swing/JTextField;", nullptr, $STATIC, $method(static_cast<$JTextField*(*)()>(&bug8008657::getTextField))},
	{"lambda$executeCase$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&bug8008657::lambda$executeCase$0))},
	{"lambda$executeCase$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&bug8008657::lambda$executeCase$1))},
	{"lambda$testSpinner$2", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&bug8008657::lambda$testSpinner$2))},
	{"lambda$testSpinner$3", "(Z)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)(bool)>(&bug8008657::lambda$testSpinner$3))},
	{"lambda$testSpinner$4", "(Z)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)(bool)>(&bug8008657::lambda$testSpinner$4))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug8008657::main)), "java.lang.Exception"},
	{"testSpinner", "(Z)V", nullptr, $STATIC, $method(static_cast<void(*)(bool)>(&bug8008657::testSpinner)), "java.lang.Exception"},
	{"tryLookAndFeel", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($String*)>(&bug8008657::tryLookAndFeel)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug8008657_InnerClassesInfo_[] = {
	{"bug8008657$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8008657_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug8008657",
	"java.lang.Object",
	nullptr,
	_bug8008657_FieldInfo_,
	_bug8008657_MethodInfo_,
	nullptr,
	nullptr,
	_bug8008657_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug8008657$1"
};

$Object* allocate$bug8008657($Class* clazz) {
	return $of($alloc(bug8008657));
}

$Robot* bug8008657::robot = nullptr;
$JSpinner* bug8008657::spinner = nullptr;
$JFrame* bug8008657::frame = nullptr;

void bug8008657::init$() {
}

void bug8008657::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$init(bug8008657);
	$assignStatic(bug8008657::robot, $new($Robot));
	$var($UIManager$LookAndFeelInfoArray, lookAndFeelArray, $UIManager::getInstalledLookAndFeels());
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, lookAndFeelArray);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, lookAndFeelItem, arr$->get(i$));
			{
				executeCase($($nc(lookAndFeelItem)->getClassName()));
			}
		}
	}
}

void bug8008657::executeCase($String* lookAndFeelString) {
	$useLocalCurrentObjectStackCache();
	if (tryLookAndFeel(lookAndFeelString)) {
		$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug8008657$$Lambda$lambda$executeCase$0)));
		$init(bug8008657);
		$nc(bug8008657::robot)->waitForIdle();
		testSpinner(false);
		cleanUp();
		$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug8008657$$Lambda$lambda$executeCase$1$1)));
		$nc(bug8008657::robot)->waitForIdle();
		testSpinner(true);
		cleanUp();
	}
}

void bug8008657::testSpinner(bool checkHorizontalAligment) {
	$useLocalCurrentObjectStackCache();
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug8008657$$Lambda$lambda$testSpinner$2$2)));
	$init(bug8008657);
	$nc(bug8008657::robot)->waitForIdle();
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug8008657$$Lambda$lambda$testSpinner$3$3, checkHorizontalAligment)));
	$nc(bug8008657::robot)->waitForIdle();
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug8008657$$Lambda$lambda$testSpinner$4$4, checkHorizontalAligment)));
}

$JTextField* bug8008657::getTextField() {
	$init(bug8008657);
	return $nc(($cast($JSpinner$DefaultEditor, $($nc(bug8008657::spinner)->getEditor()))))->getTextField();
}

$String* bug8008657::getOrientation($ComponentOrientation* orientation) {
	$init($ComponentOrientation);
	return orientation == $ComponentOrientation::LEFT_TO_RIGHT ? "LEFT_TO_RIGHT"_s : "RIGHT_TO_LEFT"_s;
}

void bug8008657::createDateSpinner() {
	$useLocalCurrentObjectStackCache();
	$var($Calendar, calendar, $Calendar::getInstance());
	$var($Date, initDate, $nc(calendar)->getTime());
	calendar->add($Calendar::YEAR, -1);
	$var($Date, earliestDate, calendar->getTime());
	calendar->add($Calendar::YEAR, 1);
	$var($Date, latestDate, calendar->getTime());
	$var($SpinnerModel, dateModel, $new($SpinnerDateModel, initDate, earliestDate, latestDate, $Calendar::YEAR));
	$init(bug8008657);
	$assignStatic(bug8008657::spinner, $new($JSpinner));
	$nc(bug8008657::spinner)->setModel(dateModel);
}

void bug8008657::createNumberSpinner() {
	$useLocalCurrentObjectStackCache();
	$var($Calendar, calendar, $Calendar::getInstance());
	$nc(calendar)->add($Calendar::YEAR, -1);
	calendar->add($Calendar::YEAR, 1);
	int32_t currentYear = calendar->get($Calendar::YEAR);
	$var($SpinnerModel, yearModel, $new($SpinnerNumberModel, currentYear, currentYear - 1, currentYear + 2, 1));
	$init(bug8008657);
	$assignStatic(bug8008657::spinner, $new($JSpinner));
	$nc(bug8008657::spinner)->setModel(yearModel);
}

void bug8008657::createAndShowUI() {
	$init(bug8008657);
	$assignStatic(bug8008657::frame, $new($JFrame, "Test"_s));
	$nc(bug8008657::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$nc(bug8008657::frame)->setSize(300, 100);
	$nc($($nc(bug8008657::frame)->getContentPane()))->add(static_cast<$Component*>(bug8008657::spinner));
	$nc(bug8008657::frame)->setVisible(true);
}

void bug8008657::cleanUp() {
	$SwingUtilities::invokeAndWait($$new($bug8008657$1));
}

bool bug8008657::tryLookAndFeel($String* lookAndFeelString) {
	$useLocalCurrentObjectStackCache();
	try {
		$UIManager::setLookAndFeel(lookAndFeelString);
	} catch ($UnsupportedLookAndFeelException&) {
		$var($Exception, e, $catch());
		return false;
	} catch ($ClassNotFoundException&) {
		$var($Exception, e, $catch());
		return false;
	} catch ($InstantiationException&) {
		$var($Exception, e, $catch());
		return false;
	} catch ($IllegalAccessException&) {
		$var($Exception, e, $catch());
		return false;
	}
	return true;
}

void bug8008657::lambda$testSpinner$4(bool checkHorizontalAligment) {
	$useLocalCurrentObjectStackCache();
	$var($JTextField, textField, getTextField());
	$init($ComponentOrientation);
	if (!$nc($of($ComponentOrientation::LEFT_TO_RIGHT))->equals($($nc(textField)->getComponentOrientation()))) {
		$throwNew($RuntimeException, "Wrong orientation!"_s);
	}
	if (checkHorizontalAligment && $nc(textField)->getHorizontalAlignment() != $JTextField::RIGHT) {
		$throwNew($RuntimeException, "Wrong horizontal aligment!"_s);
	}
	$init(bug8008657);
	$nc(bug8008657::spinner)->setComponentOrientation($ComponentOrientation::LEFT_TO_RIGHT);
}

void bug8008657::lambda$testSpinner$3(bool checkHorizontalAligment) {
	$useLocalCurrentObjectStackCache();
	$var($JTextField, textField, getTextField());
	$init($ComponentOrientation);
	if (!$nc($of($ComponentOrientation::RIGHT_TO_LEFT))->equals($($nc(textField)->getComponentOrientation()))) {
		$throwNew($RuntimeException, "Wrong orientation!"_s);
	}
	if (checkHorizontalAligment && $nc(textField)->getHorizontalAlignment() != $JTextField::LEFT) {
		$throwNew($RuntimeException, "Wrong horizontal aligment!"_s);
	}
	$init(bug8008657);
	$nc(bug8008657::spinner)->setComponentOrientation($ComponentOrientation::LEFT_TO_RIGHT);
}

void bug8008657::lambda$testSpinner$2() {
	$init(bug8008657);
	$init($ComponentOrientation);
	$nc(bug8008657::spinner)->setComponentOrientation($ComponentOrientation::RIGHT_TO_LEFT);
}

void bug8008657::lambda$executeCase$1() {
	createNumberSpinner();
	createAndShowUI();
}

void bug8008657::lambda$executeCase$0() {
	createDateSpinner();
	createAndShowUI();
}

bug8008657::bug8008657() {
}

$Class* bug8008657::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(bug8008657$$Lambda$lambda$executeCase$0::classInfo$.name)) {
			return bug8008657$$Lambda$lambda$executeCase$0::load$(name, initialize);
		}
		if (name->equals(bug8008657$$Lambda$lambda$executeCase$1$1::classInfo$.name)) {
			return bug8008657$$Lambda$lambda$executeCase$1$1::load$(name, initialize);
		}
		if (name->equals(bug8008657$$Lambda$lambda$testSpinner$2$2::classInfo$.name)) {
			return bug8008657$$Lambda$lambda$testSpinner$2$2::load$(name, initialize);
		}
		if (name->equals(bug8008657$$Lambda$lambda$testSpinner$3$3::classInfo$.name)) {
			return bug8008657$$Lambda$lambda$testSpinner$3$3::load$(name, initialize);
		}
		if (name->equals(bug8008657$$Lambda$lambda$testSpinner$4$4::classInfo$.name)) {
			return bug8008657$$Lambda$lambda$testSpinner$4$4::load$(name, initialize);
		}
	}
	$loadClass(bug8008657, name, initialize, &_bug8008657_ClassInfo_, allocate$bug8008657);
	return class$;
}

$Class* bug8008657::class$ = nullptr;