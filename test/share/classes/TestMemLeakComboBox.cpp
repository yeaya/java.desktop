#include <TestMemLeakComboBox.h>

#include <TestMemLeakComboBox$MyPanel.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/FlowLayout.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Window.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <jcpp.h>

using $TestMemLeakComboBox$MyPanel = ::TestMemLeakComboBox$MyPanel;
using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $FlowLayout = ::java::awt::FlowLayout;
using $LayoutManager = ::java::awt::LayoutManager;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;

class TestMemLeakComboBox$$Lambda$lambda$main$0 : public $Runnable {
	$class(TestMemLeakComboBox$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$($UIManager$LookAndFeelInfo* laf) {
		$set(this, laf, laf);
	}
	virtual void run() override {
		TestMemLeakComboBox::lambda$main$0(laf);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestMemLeakComboBox$$Lambda$lambda$main$0>());
	}
	$UIManager$LookAndFeelInfo* laf = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TestMemLeakComboBox$$Lambda$lambda$main$0::fieldInfos[2] = {
	{"laf", "Ljavax/swing/UIManager$LookAndFeelInfo;", nullptr, $PUBLIC, $field(TestMemLeakComboBox$$Lambda$lambda$main$0, laf)},
	{}
};
$MethodInfo TestMemLeakComboBox$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PUBLIC, $method(static_cast<void(TestMemLeakComboBox$$Lambda$lambda$main$0::*)($UIManager$LookAndFeelInfo*)>(&TestMemLeakComboBox$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestMemLeakComboBox$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestMemLeakComboBox$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* TestMemLeakComboBox$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(TestMemLeakComboBox$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestMemLeakComboBox$$Lambda$lambda$main$0::class$ = nullptr;

class TestMemLeakComboBox$$Lambda$lambda$test$1$1 : public $Runnable {
	$class(TestMemLeakComboBox$$Lambda$lambda$test$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestMemLeakComboBox::lambda$test$1();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestMemLeakComboBox$$Lambda$lambda$test$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TestMemLeakComboBox$$Lambda$lambda$test$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestMemLeakComboBox$$Lambda$lambda$test$1$1::*)()>(&TestMemLeakComboBox$$Lambda$lambda$test$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestMemLeakComboBox$$Lambda$lambda$test$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestMemLeakComboBox$$Lambda$lambda$test$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* TestMemLeakComboBox$$Lambda$lambda$test$1$1::load$($String* name, bool initialize) {
	$loadClass(TestMemLeakComboBox$$Lambda$lambda$test$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestMemLeakComboBox$$Lambda$lambda$test$1$1::class$ = nullptr;

class TestMemLeakComboBox$$Lambda$lambda$test$2$2 : public $Runnable {
	$class(TestMemLeakComboBox$$Lambda$lambda$test$2$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestMemLeakComboBox::lambda$test$2();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestMemLeakComboBox$$Lambda$lambda$test$2$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TestMemLeakComboBox$$Lambda$lambda$test$2$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestMemLeakComboBox$$Lambda$lambda$test$2$2::*)()>(&TestMemLeakComboBox$$Lambda$lambda$test$2$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestMemLeakComboBox$$Lambda$lambda$test$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestMemLeakComboBox$$Lambda$lambda$test$2$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* TestMemLeakComboBox$$Lambda$lambda$test$2$2::load$($String* name, bool initialize) {
	$loadClass(TestMemLeakComboBox$$Lambda$lambda$test$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestMemLeakComboBox$$Lambda$lambda$test$2$2::class$ = nullptr;

$FieldInfo _TestMemLeakComboBox_FieldInfo_[] = {
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(TestMemLeakComboBox, frame)},
	{"failed", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(TestMemLeakComboBox, failed)},
	{}
};

$MethodInfo _TestMemLeakComboBox_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestMemLeakComboBox::*)()>(&TestMemLeakComboBox::init$))},
	{"lambda$main$0", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($UIManager$LookAndFeelInfo*)>(&TestMemLeakComboBox::lambda$main$0))},
	{"lambda$test$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&TestMemLeakComboBox::lambda$test$1))},
	{"lambda$test$2", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&TestMemLeakComboBox::lambda$test$2))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TestMemLeakComboBox::main)), "java.lang.Exception"},
	{"setLookAndFeel", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($UIManager$LookAndFeelInfo*)>(&TestMemLeakComboBox::setLookAndFeel))},
	{"test", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&TestMemLeakComboBox::test)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _TestMemLeakComboBox_InnerClassesInfo_[] = {
	{"TestMemLeakComboBox$MyPanel", "TestMemLeakComboBox", "MyPanel", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _TestMemLeakComboBox_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestMemLeakComboBox",
	"java.lang.Object",
	nullptr,
	_TestMemLeakComboBox_FieldInfo_,
	_TestMemLeakComboBox_MethodInfo_,
	nullptr,
	nullptr,
	_TestMemLeakComboBox_InnerClassesInfo_,
	nullptr,
	nullptr,
	"TestMemLeakComboBox$MyPanel"
};

$Object* allocate$TestMemLeakComboBox($Class* clazz) {
	return $of($alloc(TestMemLeakComboBox));
}

$JFrame* TestMemLeakComboBox::frame = nullptr;
$String* TestMemLeakComboBox::failed = nullptr;

void TestMemLeakComboBox::init$() {
}

void TestMemLeakComboBox::setLookAndFeel($UIManager$LookAndFeelInfo* laf) {
	$init(TestMemLeakComboBox);
	$useLocalCurrentObjectStackCache();
	try {
		$UIManager::setLookAndFeel($($nc(laf)->getClassName()));
	} catch ($UnsupportedLookAndFeelException& ignored) {
		$nc($System::out)->println($$str({"Unsupported L&F: "_s, $($nc(laf)->getClassName())}));
	} catch ($ClassNotFoundException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($InstantiationException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($IllegalAccessException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
}

void TestMemLeakComboBox::main($StringArray* args) {
	$init(TestMemLeakComboBox);
	$useLocalCurrentObjectStackCache();
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, laf, arr$->get(i$));
			{
				$nc($System::out)->println($$str({"Testing l&f : "_s, $($nc(laf)->getClassName())}));
				$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TestMemLeakComboBox$$Lambda$lambda$main$0, laf)));
				test();
				if (TestMemLeakComboBox::failed != nullptr) {
					$throwNew($RuntimeException, TestMemLeakComboBox::failed);
				}
			}
		}
	}
}

void TestMemLeakComboBox::test() {
	$init(TestMemLeakComboBox);
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TestMemLeakComboBox$$Lambda$lambda$test$1$1)));
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			if (TestMemLeakComboBox::frame != nullptr) {
				$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TestMemLeakComboBox$$Lambda$lambda$test$2$2)));
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void TestMemLeakComboBox::lambda$test$2() {
	$init(TestMemLeakComboBox);
	$nc(TestMemLeakComboBox::frame)->dispose();
}

void TestMemLeakComboBox::lambda$test$1() {
	$init(TestMemLeakComboBox);
	$useLocalCurrentObjectStackCache();
	$assignStatic(TestMemLeakComboBox::frame, $new($JFrame));
	$var($JPanel, panel, $new($TestMemLeakComboBox$MyPanel));
	panel->setPreferredSize($$new($Dimension, 100, 100));
	panel->setLayout($$new($FlowLayout));
	panel->add(static_cast<$Component*>($$new($JComboBox, $$new($StringArray, {
		"one"_s,
		"two"_s,
		"three"_s
	}))));
	$nc(TestMemLeakComboBox::frame)->add(static_cast<$Component*>(panel));
	$nc(TestMemLeakComboBox::frame)->pack();
	$nc(TestMemLeakComboBox::frame)->setVisible(true);
}

void TestMemLeakComboBox::lambda$main$0($UIManager$LookAndFeelInfo* laf) {
	$init(TestMemLeakComboBox);
	setLookAndFeel(laf);
}

void clinit$TestMemLeakComboBox($Class* class$) {
	$assignStatic(TestMemLeakComboBox::failed, nullptr);
}

TestMemLeakComboBox::TestMemLeakComboBox() {
}

$Class* TestMemLeakComboBox::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(TestMemLeakComboBox$$Lambda$lambda$main$0::classInfo$.name)) {
			return TestMemLeakComboBox$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals(TestMemLeakComboBox$$Lambda$lambda$test$1$1::classInfo$.name)) {
			return TestMemLeakComboBox$$Lambda$lambda$test$1$1::load$(name, initialize);
		}
		if (name->equals(TestMemLeakComboBox$$Lambda$lambda$test$2$2::classInfo$.name)) {
			return TestMemLeakComboBox$$Lambda$lambda$test$2$2::load$(name, initialize);
		}
	}
	$loadClass(TestMemLeakComboBox, name, initialize, &_TestMemLeakComboBox_ClassInfo_, clinit$TestMemLeakComboBox, allocate$TestMemLeakComboBox);
	return class$;
}

$Class* TestMemLeakComboBox::class$ = nullptr;