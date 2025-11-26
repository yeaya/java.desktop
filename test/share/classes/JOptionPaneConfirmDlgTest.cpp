#include <JOptionPaneConfirmDlgTest.h>

#include <JOptionPaneConfirmDlgTest$1.h>
#include <JOptionPaneConfirmDlgTest$2.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/FlowLayout.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionListener.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JOptionPane.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef INFORMATION_MESSAGE

using $JOptionPaneConfirmDlgTest$1 = ::JOptionPaneConfirmDlgTest$1;
using $JOptionPaneConfirmDlgTest$2 = ::JOptionPaneConfirmDlgTest$2;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $FlowLayout = ::java::awt::FlowLayout;
using $LayoutManager = ::java::awt::LayoutManager;
using $Toolkit = ::java::awt::Toolkit;
using $Window = ::java::awt::Window;
using $ActionListener = ::java::awt::event::ActionListener;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JOptionPane = ::javax::swing::JOptionPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class JOptionPaneConfirmDlgTest$$Lambda$lambda$new$0 : public $Runnable {
	$class(JOptionPaneConfirmDlgTest$$Lambda$lambda$new$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$(JOptionPaneConfirmDlgTest* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$new$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JOptionPaneConfirmDlgTest$$Lambda$lambda$new$0>());
	}
	JOptionPaneConfirmDlgTest* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo JOptionPaneConfirmDlgTest$$Lambda$lambda$new$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(JOptionPaneConfirmDlgTest$$Lambda$lambda$new$0, inst$)},
	{}
};
$MethodInfo JOptionPaneConfirmDlgTest$$Lambda$lambda$new$0::methodInfos[3] = {
	{"<init>", "(LJOptionPaneConfirmDlgTest;)V", nullptr, $PUBLIC, $method(static_cast<void(JOptionPaneConfirmDlgTest$$Lambda$lambda$new$0::*)(JOptionPaneConfirmDlgTest*)>(&JOptionPaneConfirmDlgTest$$Lambda$lambda$new$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo JOptionPaneConfirmDlgTest$$Lambda$lambda$new$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"JOptionPaneConfirmDlgTest$$Lambda$lambda$new$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* JOptionPaneConfirmDlgTest$$Lambda$lambda$new$0::load$($String* name, bool initialize) {
	$loadClass(JOptionPaneConfirmDlgTest$$Lambda$lambda$new$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JOptionPaneConfirmDlgTest$$Lambda$lambda$new$0::class$ = nullptr;

class JOptionPaneConfirmDlgTest$$Lambda$lambda$new$1$1 : public $Runnable {
	$class(JOptionPaneConfirmDlgTest$$Lambda$lambda$new$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$(JOptionPaneConfirmDlgTest* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$new$1();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JOptionPaneConfirmDlgTest$$Lambda$lambda$new$1$1>());
	}
	JOptionPaneConfirmDlgTest* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo JOptionPaneConfirmDlgTest$$Lambda$lambda$new$1$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(JOptionPaneConfirmDlgTest$$Lambda$lambda$new$1$1, inst$)},
	{}
};
$MethodInfo JOptionPaneConfirmDlgTest$$Lambda$lambda$new$1$1::methodInfos[3] = {
	{"<init>", "(LJOptionPaneConfirmDlgTest;)V", nullptr, $PUBLIC, $method(static_cast<void(JOptionPaneConfirmDlgTest$$Lambda$lambda$new$1$1::*)(JOptionPaneConfirmDlgTest*)>(&JOptionPaneConfirmDlgTest$$Lambda$lambda$new$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo JOptionPaneConfirmDlgTest$$Lambda$lambda$new$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"JOptionPaneConfirmDlgTest$$Lambda$lambda$new$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* JOptionPaneConfirmDlgTest$$Lambda$lambda$new$1$1::load$($String* name, bool initialize) {
	$loadClass(JOptionPaneConfirmDlgTest$$Lambda$lambda$new$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JOptionPaneConfirmDlgTest$$Lambda$lambda$new$1$1::class$ = nullptr;

$FieldInfo _JOptionPaneConfirmDlgTest_FieldInfo_[] = {
	{"textFrame", "Ljavax/swing/JInternalFrame;", nullptr, 0, $field(JOptionPaneConfirmDlgTest, textFrame)},
	{"f", "Ljavax/swing/JFrame;", nullptr, 0, $field(JOptionPaneConfirmDlgTest, f)},
	{}
};

$MethodInfo _JOptionPaneConfirmDlgTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JOptionPaneConfirmDlgTest::*)()>(&JOptionPaneConfirmDlgTest::init$)), "java.lang.Exception"},
	{"createGUI", "()V", nullptr, $PUBLIC},
	{"lambda$new$0", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(JOptionPaneConfirmDlgTest::*)()>(&JOptionPaneConfirmDlgTest::lambda$new$0))},
	{"lambda$new$1", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(JOptionPaneConfirmDlgTest::*)()>(&JOptionPaneConfirmDlgTest::lambda$new$1))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&JOptionPaneConfirmDlgTest::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _JOptionPaneConfirmDlgTest_InnerClassesInfo_[] = {
	{"JOptionPaneConfirmDlgTest$2", nullptr, nullptr, 0},
	{"JOptionPaneConfirmDlgTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JOptionPaneConfirmDlgTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"JOptionPaneConfirmDlgTest",
	"java.lang.Object",
	nullptr,
	_JOptionPaneConfirmDlgTest_FieldInfo_,
	_JOptionPaneConfirmDlgTest_MethodInfo_,
	nullptr,
	nullptr,
	_JOptionPaneConfirmDlgTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"JOptionPaneConfirmDlgTest$2,JOptionPaneConfirmDlgTest$1"
};

$Object* allocate$JOptionPaneConfirmDlgTest($Class* clazz) {
	return $of($alloc(JOptionPaneConfirmDlgTest));
}

void JOptionPaneConfirmDlgTest::main($StringArray* args) {
	$new(JOptionPaneConfirmDlgTest);
}

void JOptionPaneConfirmDlgTest::init$() {
	$useLocalCurrentObjectStackCache();
	$set(this, f, nullptr);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(JOptionPaneConfirmDlgTest$$Lambda$lambda$new$0, this)));
			$Thread::sleep(10000);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(JOptionPaneConfirmDlgTest$$Lambda$lambda$new$1$1, this)));
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void JOptionPaneConfirmDlgTest::createGUI() {
	$useLocalCurrentObjectStackCache();
	$JOptionPane::showMessageDialog(($Component*)nullptr, "An internalFrame with 2 buttons will be displayed. \n Press \"Hit me 1\" button. The bug causes a RuntimeException to be thrown here\n But If a confirmation dialog comes, test has passed\n Similarly, press \"Hit me 2\" button. The bug will cause a RuntimeException\n to be thrown here but if a confirmation dialog comes, test has passed.\n Close the dialog and frame."_s, "information"_s, $JOptionPane::INFORMATION_MESSAGE);
	$set(this, f, $new($JFrame));
	$set(this, textFrame, $new($JInternalFrame, "Main-Frame"_s, true));
	$nc(this->f)->setContentPane(this->textFrame);
	$var($Dimension, dim, $nc($($Toolkit::getDefaultToolkit()))->getScreenSize());
	$nc(this->f)->setSize($nc(dim)->width / 6, dim->height / 5);
	$nc(this->textFrame)->setBounds(10, 10, $nc(dim)->width / 8, dim->height / 8);
	$nc(this->textFrame)->setVisible(true);
	$var($JButton, b1, $new($JButton, "Hit me 1"_s));
	b1->addActionListener($$new($JOptionPaneConfirmDlgTest$1, this));
	$var($JButton, b2, $new($JButton, "Hit me 2"_s));
	b2->addActionListener($$new($JOptionPaneConfirmDlgTest$2, this));
	$nc(this->textFrame)->setLayout($$new($FlowLayout));
	$nc(this->textFrame)->add(static_cast<$Component*>(b1));
	$nc(this->textFrame)->add(static_cast<$Component*>(b2));
	$nc(this->f)->setVisible(true);
}

void JOptionPaneConfirmDlgTest::lambda$new$1() {
	$nc(this->f)->dispose();
}

void JOptionPaneConfirmDlgTest::lambda$new$0() {
	createGUI();
}

JOptionPaneConfirmDlgTest::JOptionPaneConfirmDlgTest() {
}

$Class* JOptionPaneConfirmDlgTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(JOptionPaneConfirmDlgTest$$Lambda$lambda$new$0::classInfo$.name)) {
			return JOptionPaneConfirmDlgTest$$Lambda$lambda$new$0::load$(name, initialize);
		}
		if (name->equals(JOptionPaneConfirmDlgTest$$Lambda$lambda$new$1$1::classInfo$.name)) {
			return JOptionPaneConfirmDlgTest$$Lambda$lambda$new$1$1::load$(name, initialize);
		}
	}
	$loadClass(JOptionPaneConfirmDlgTest, name, initialize, &_JOptionPaneConfirmDlgTest_ClassInfo_, allocate$JOptionPaneConfirmDlgTest);
	return class$;
}

$Class* JOptionPaneConfirmDlgTest::class$ = nullptr;