#include <bug8033699.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/KeyEvent.h>
#include <java/io/Serializable.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/BorderFactory.h>
#include <javax/swing/BoxLayout.h>
#include <javax/swing/ButtonGroup.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JRadioButton.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/JToggleButton.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/TitledBorder.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE
#undef VK_DOWN
#undef VK_LEFT
#undef VK_RIGHT
#undef VK_SHIFT
#undef VK_TAB
#undef VK_UP
#undef Y_AXIS

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Robot = ::java::awt::Robot;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AbstractButton = ::javax::swing::AbstractButton;
using $BorderFactory = ::javax::swing::BorderFactory;
using $BoxLayout = ::javax::swing::BoxLayout;
using $ButtonGroup = ::javax::swing::ButtonGroup;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $JRadioButton = ::javax::swing::JRadioButton;
using $JRootPane = ::javax::swing::JRootPane;
using $JToggleButton = ::javax::swing::JToggleButton;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;

class bug8033699$$Lambda$lambda$main$0 : public $Runnable {
	$class(bug8033699$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug8033699::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug8033699$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug8033699$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8033699$$Lambda$lambda$main$0::*)()>(&bug8033699$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug8033699$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug8033699$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* bug8033699$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(bug8033699$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug8033699$$Lambda$lambda$main$0::class$ = nullptr;

class bug8033699$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(bug8033699$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug8033699::lambda$main$1();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug8033699$$Lambda$lambda$main$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug8033699$$Lambda$lambda$main$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8033699$$Lambda$lambda$main$1$1::*)()>(&bug8033699$$Lambda$lambda$main$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug8033699$$Lambda$lambda$main$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug8033699$$Lambda$lambda$main$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* bug8033699$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$loadClass(bug8033699$$Lambda$lambda$main$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug8033699$$Lambda$lambda$main$1$1::class$ = nullptr;

class bug8033699$$Lambda$lambda$runTest1$2$2 : public $Runnable {
	$class(bug8033699$$Lambda$lambda$runTest1$2$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug8033699::lambda$runTest1$2();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug8033699$$Lambda$lambda$runTest1$2$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug8033699$$Lambda$lambda$runTest1$2$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8033699$$Lambda$lambda$runTest1$2$2::*)()>(&bug8033699$$Lambda$lambda$runTest1$2$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug8033699$$Lambda$lambda$runTest1$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug8033699$$Lambda$lambda$runTest1$2$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* bug8033699$$Lambda$lambda$runTest1$2$2::load$($String* name, bool initialize) {
	$loadClass(bug8033699$$Lambda$lambda$runTest1$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug8033699$$Lambda$lambda$runTest1$2$2::class$ = nullptr;

class bug8033699$$Lambda$lambda$runTest2$3$3 : public $Runnable {
	$class(bug8033699$$Lambda$lambda$runTest2$3$3, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug8033699::lambda$runTest2$3();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug8033699$$Lambda$lambda$runTest2$3$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug8033699$$Lambda$lambda$runTest2$3$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8033699$$Lambda$lambda$runTest2$3$3::*)()>(&bug8033699$$Lambda$lambda$runTest2$3$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug8033699$$Lambda$lambda$runTest2$3$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug8033699$$Lambda$lambda$runTest2$3$3",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* bug8033699$$Lambda$lambda$runTest2$3$3::load$($String* name, bool initialize) {
	$loadClass(bug8033699$$Lambda$lambda$runTest2$3$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug8033699$$Lambda$lambda$runTest2$3$3::class$ = nullptr;

class bug8033699$$Lambda$lambda$runTest3$4$4 : public $Runnable {
	$class(bug8033699$$Lambda$lambda$runTest3$4$4, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug8033699::lambda$runTest3$4();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug8033699$$Lambda$lambda$runTest3$4$4>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug8033699$$Lambda$lambda$runTest3$4$4::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8033699$$Lambda$lambda$runTest3$4$4::*)()>(&bug8033699$$Lambda$lambda$runTest3$4$4::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug8033699$$Lambda$lambda$runTest3$4$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug8033699$$Lambda$lambda$runTest3$4$4",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* bug8033699$$Lambda$lambda$runTest3$4$4::load$($String* name, bool initialize) {
	$loadClass(bug8033699$$Lambda$lambda$runTest3$4$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug8033699$$Lambda$lambda$runTest3$4$4::class$ = nullptr;

class bug8033699$$Lambda$lambda$runTest4$5$5 : public $Runnable {
	$class(bug8033699$$Lambda$lambda$runTest4$5$5, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug8033699::lambda$runTest4$5();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug8033699$$Lambda$lambda$runTest4$5$5>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug8033699$$Lambda$lambda$runTest4$5$5::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8033699$$Lambda$lambda$runTest4$5$5::*)()>(&bug8033699$$Lambda$lambda$runTest4$5$5::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug8033699$$Lambda$lambda$runTest4$5$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug8033699$$Lambda$lambda$runTest4$5$5",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* bug8033699$$Lambda$lambda$runTest4$5$5::load$($String* name, bool initialize) {
	$loadClass(bug8033699$$Lambda$lambda$runTest4$5$5, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug8033699$$Lambda$lambda$runTest4$5$5::class$ = nullptr;

class bug8033699$$Lambda$lambda$runTest5$6$6 : public $Runnable {
	$class(bug8033699$$Lambda$lambda$runTest5$6$6, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug8033699::lambda$runTest5$6();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug8033699$$Lambda$lambda$runTest5$6$6>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug8033699$$Lambda$lambda$runTest5$6$6::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8033699$$Lambda$lambda$runTest5$6$6::*)()>(&bug8033699$$Lambda$lambda$runTest5$6$6::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug8033699$$Lambda$lambda$runTest5$6$6::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug8033699$$Lambda$lambda$runTest5$6$6",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* bug8033699$$Lambda$lambda$runTest5$6$6::load$($String* name, bool initialize) {
	$loadClass(bug8033699$$Lambda$lambda$runTest5$6$6, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug8033699$$Lambda$lambda$runTest5$6$6::class$ = nullptr;

class bug8033699$$Lambda$lambda$runTest6$7$7 : public $Runnable {
	$class(bug8033699$$Lambda$lambda$runTest6$7$7, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug8033699::lambda$runTest6$7();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug8033699$$Lambda$lambda$runTest6$7$7>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug8033699$$Lambda$lambda$runTest6$7$7::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8033699$$Lambda$lambda$runTest6$7$7::*)()>(&bug8033699$$Lambda$lambda$runTest6$7$7::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug8033699$$Lambda$lambda$runTest6$7$7::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug8033699$$Lambda$lambda$runTest6$7$7",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* bug8033699$$Lambda$lambda$runTest6$7$7::load$($String* name, bool initialize) {
	$loadClass(bug8033699$$Lambda$lambda$runTest6$7$7, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug8033699$$Lambda$lambda$runTest6$7$7::class$ = nullptr;

class bug8033699$$Lambda$lambda$runTest7$8$8 : public $Runnable {
	$class(bug8033699$$Lambda$lambda$runTest7$8$8, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug8033699::lambda$runTest7$8();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug8033699$$Lambda$lambda$runTest7$8$8>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug8033699$$Lambda$lambda$runTest7$8$8::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8033699$$Lambda$lambda$runTest7$8$8::*)()>(&bug8033699$$Lambda$lambda$runTest7$8$8::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug8033699$$Lambda$lambda$runTest7$8$8::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug8033699$$Lambda$lambda$runTest7$8$8",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* bug8033699$$Lambda$lambda$runTest7$8$8::load$($String* name, bool initialize) {
	$loadClass(bug8033699$$Lambda$lambda$runTest7$8$8, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug8033699$$Lambda$lambda$runTest7$8$8::class$ = nullptr;

class bug8033699$$Lambda$lambda$runTest8$9$9 : public $Runnable {
	$class(bug8033699$$Lambda$lambda$runTest8$9$9, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug8033699::lambda$runTest8$9();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug8033699$$Lambda$lambda$runTest8$9$9>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug8033699$$Lambda$lambda$runTest8$9$9::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8033699$$Lambda$lambda$runTest8$9$9::*)()>(&bug8033699$$Lambda$lambda$runTest8$9$9::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug8033699$$Lambda$lambda$runTest8$9$9::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug8033699$$Lambda$lambda$runTest8$9$9",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* bug8033699$$Lambda$lambda$runTest8$9$9::load$($String* name, bool initialize) {
	$loadClass(bug8033699$$Lambda$lambda$runTest8$9$9, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug8033699$$Lambda$lambda$runTest8$9$9::class$ = nullptr;

class bug8033699$$Lambda$lambda$runTest9$10$10 : public $Runnable {
	$class(bug8033699$$Lambda$lambda$runTest9$10$10, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug8033699::lambda$runTest9$10();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug8033699$$Lambda$lambda$runTest9$10$10>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug8033699$$Lambda$lambda$runTest9$10$10::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8033699$$Lambda$lambda$runTest9$10$10::*)()>(&bug8033699$$Lambda$lambda$runTest9$10$10::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug8033699$$Lambda$lambda$runTest9$10$10::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug8033699$$Lambda$lambda$runTest9$10$10",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* bug8033699$$Lambda$lambda$runTest9$10$10::load$($String* name, bool initialize) {
	$loadClass(bug8033699$$Lambda$lambda$runTest9$10$10, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug8033699$$Lambda$lambda$runTest9$10$10::class$ = nullptr;

class bug8033699$$Lambda$lambda$runTest9$11$11 : public $ActionListener {
	$class(bug8033699$$Lambda$lambda$runTest9$11$11, $NO_CLASS_INIT, $ActionListener)
public:
	void init$() {
	}
	virtual void actionPerformed($ActionEvent* e) override {
		bug8033699::lambda$runTest9$11(e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug8033699$$Lambda$lambda$runTest9$11$11>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug8033699$$Lambda$lambda$runTest9$11$11::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8033699$$Lambda$lambda$runTest9$11$11::*)()>(&bug8033699$$Lambda$lambda$runTest9$11$11::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug8033699$$Lambda$lambda$runTest9$11$11::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug8033699$$Lambda$lambda$runTest9$11$11",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	nullptr,
	methodInfos
};
$Class* bug8033699$$Lambda$lambda$runTest9$11$11::load$($String* name, bool initialize) {
	$loadClass(bug8033699$$Lambda$lambda$runTest9$11$11, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug8033699$$Lambda$lambda$runTest9$11$11::class$ = nullptr;

class bug8033699$$Lambda$lambda$runTest9$12$12 : public $ActionListener {
	$class(bug8033699$$Lambda$lambda$runTest9$12$12, $NO_CLASS_INIT, $ActionListener)
public:
	void init$() {
	}
	virtual void actionPerformed($ActionEvent* e) override {
		bug8033699::lambda$runTest9$12(e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug8033699$$Lambda$lambda$runTest9$12$12>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug8033699$$Lambda$lambda$runTest9$12$12::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8033699$$Lambda$lambda$runTest9$12$12::*)()>(&bug8033699$$Lambda$lambda$runTest9$12$12::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug8033699$$Lambda$lambda$runTest9$12$12::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug8033699$$Lambda$lambda$runTest9$12$12",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	nullptr,
	methodInfos
};
$Class* bug8033699$$Lambda$lambda$runTest9$12$12::load$($String* name, bool initialize) {
	$loadClass(bug8033699$$Lambda$lambda$runTest9$12$12, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug8033699$$Lambda$lambda$runTest9$12$12::class$ = nullptr;

class bug8033699$$Lambda$lambda$runTest9$13$13 : public $ActionListener {
	$class(bug8033699$$Lambda$lambda$runTest9$13$13, $NO_CLASS_INIT, $ActionListener)
public:
	void init$() {
	}
	virtual void actionPerformed($ActionEvent* e) override {
		bug8033699::lambda$runTest9$13(e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug8033699$$Lambda$lambda$runTest9$13$13>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug8033699$$Lambda$lambda$runTest9$13$13::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8033699$$Lambda$lambda$runTest9$13$13::*)()>(&bug8033699$$Lambda$lambda$runTest9$13$13::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug8033699$$Lambda$lambda$runTest9$13$13::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug8033699$$Lambda$lambda$runTest9$13$13",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	nullptr,
	methodInfos
};
$Class* bug8033699$$Lambda$lambda$runTest9$13$13::load$($String* name, bool initialize) {
	$loadClass(bug8033699$$Lambda$lambda$runTest9$13$13, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug8033699$$Lambda$lambda$runTest9$13$13::class$ = nullptr;

$FieldInfo _bug8033699_FieldInfo_[] = {
	{"mainFrame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(bug8033699, mainFrame)},
	{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $STATIC, $staticField(bug8033699, robot)},
	{"btnStart", "Ljavax/swing/JButton;", nullptr, $PRIVATE | $STATIC, $staticField(bug8033699, btnStart)},
	{"btnEnd", "Ljavax/swing/JButton;", nullptr, $PRIVATE | $STATIC, $staticField(bug8033699, btnEnd)},
	{"btnMiddle", "Ljavax/swing/JButton;", nullptr, $PRIVATE | $STATIC, $staticField(bug8033699, btnMiddle)},
	{"radioBtn1", "Ljavax/swing/JRadioButton;", nullptr, $PRIVATE | $STATIC, $staticField(bug8033699, radioBtn1)},
	{"radioBtn2", "Ljavax/swing/JRadioButton;", nullptr, $PRIVATE | $STATIC, $staticField(bug8033699, radioBtn2)},
	{"radioBtn3", "Ljavax/swing/JRadioButton;", nullptr, $PRIVATE | $STATIC, $staticField(bug8033699, radioBtn3)},
	{"radioBtnSingle", "Ljavax/swing/JRadioButton;", nullptr, $PRIVATE | $STATIC, $staticField(bug8033699, radioBtnSingle)},
	{"actRB1", "Ljava/lang/Boolean;", nullptr, $PRIVATE | $STATIC, $staticField(bug8033699, actRB1)},
	{"actRB2", "Ljava/lang/Boolean;", nullptr, $PRIVATE | $STATIC, $staticField(bug8033699, actRB2)},
	{"actRB3", "Ljava/lang/Boolean;", nullptr, $PRIVATE | $STATIC, $staticField(bug8033699, actRB3)},
	{}
};

$MethodInfo _bug8033699_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8033699::*)()>(&bug8033699::init$))},
	{"changeLAF", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug8033699::changeLAF))},
	{"createAndShowGUI", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug8033699::createAndShowGUI))},
	{"hitKey", "(Ljava/awt/Robot;I)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Robot*,int32_t)>(&bug8033699::hitKey))},
	{"hitKey", "(Ljava/awt/Robot;II)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Robot*,int32_t,int32_t)>(&bug8033699::hitKey))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&bug8033699::lambda$main$0))},
	{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&bug8033699::lambda$main$1))},
	{"lambda$runTest1$2", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&bug8033699::lambda$runTest1$2))},
	{"lambda$runTest2$3", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&bug8033699::lambda$runTest2$3))},
	{"lambda$runTest3$4", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&bug8033699::lambda$runTest3$4))},
	{"lambda$runTest4$5", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&bug8033699::lambda$runTest4$5))},
	{"lambda$runTest5$6", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&bug8033699::lambda$runTest5$6))},
	{"lambda$runTest6$7", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&bug8033699::lambda$runTest6$7))},
	{"lambda$runTest7$8", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&bug8033699::lambda$runTest7$8))},
	{"lambda$runTest8$9", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&bug8033699::lambda$runTest8$9))},
	{"lambda$runTest9$10", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&bug8033699::lambda$runTest9$10))},
	{"lambda$runTest9$11", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($ActionEvent*)>(&bug8033699::lambda$runTest9$11))},
	{"lambda$runTest9$12", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($ActionEvent*)>(&bug8033699::lambda$runTest9$12))},
	{"lambda$runTest9$13", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($ActionEvent*)>(&bug8033699::lambda$runTest9$13))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug8033699::main)), "java.lang.Throwable"},
	{"runTest1", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug8033699::runTest1)), "java.lang.Exception"},
	{"runTest2", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug8033699::runTest2)), "java.lang.Exception"},
	{"runTest3", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug8033699::runTest3)), "java.lang.Exception"},
	{"runTest4", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug8033699::runTest4)), "java.lang.Exception"},
	{"runTest5", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug8033699::runTest5)), "java.lang.Exception"},
	{"runTest6", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug8033699::runTest6)), "java.lang.Exception"},
	{"runTest7", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug8033699::runTest7)), "java.lang.Exception"},
	{"runTest8", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug8033699::runTest8)), "java.lang.Exception"},
	{"runTest9", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug8033699::runTest9)), "java.lang.Exception"},
	{}
};

$ClassInfo _bug8033699_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug8033699",
	"java.lang.Object",
	nullptr,
	_bug8033699_FieldInfo_,
	_bug8033699_MethodInfo_
};

$Object* allocate$bug8033699($Class* clazz) {
	return $of($alloc(bug8033699));
}

$JFrame* bug8033699::mainFrame = nullptr;
$Robot* bug8033699::robot = nullptr;
$JButton* bug8033699::btnStart = nullptr;
$JButton* bug8033699::btnEnd = nullptr;
$JButton* bug8033699::btnMiddle = nullptr;
$JRadioButton* bug8033699::radioBtn1 = nullptr;
$JRadioButton* bug8033699::radioBtn2 = nullptr;
$JRadioButton* bug8033699::radioBtn3 = nullptr;
$JRadioButton* bug8033699::radioBtnSingle = nullptr;
$Boolean* bug8033699::actRB1 = nullptr;
$Boolean* bug8033699::actRB2 = nullptr;
$Boolean* bug8033699::actRB3 = nullptr;

void bug8033699::init$() {
}

void bug8033699::main($StringArray* args) {
	$init(bug8033699);
	$useLocalCurrentObjectStackCache();
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug8033699$$Lambda$lambda$main$0)));
	$assignStatic(bug8033699::robot, $new($Robot));
	$Thread::sleep(100);
	$nc(bug8033699::robot)->setAutoDelay(100);
	runTest1();
	runTest2();
	runTest3();
	runTest4();
	runTest5();
	runTest6();
	runTest7();
	runTest8();
	runTest9();
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug8033699$$Lambda$lambda$main$1$1)));
}

void bug8033699::changeLAF() {
	$init(bug8033699);
	$useLocalCurrentObjectStackCache();
	$var($String, currentLAF, $nc($($UIManager::getLookAndFeel()))->toString());
	$nc($System::out)->println(currentLAF);
	$assign(currentLAF, $nc(currentLAF)->toLowerCase());
	if (currentLAF->contains("nimbus"_s)) {
		try {
			$UIManager::setLookAndFeel("javax.swing.plaf.metal.MetalLookAndFeel"_s);
		} catch ($Exception& ex) {
			ex->printStackTrace();
		}
	}
}

void bug8033699::createAndShowGUI() {
	$init(bug8033699);
	$useLocalCurrentObjectStackCache();
	$assignStatic(bug8033699::mainFrame, $new($JFrame, "Bug 8033699 - 8 Tests for Grouped/Non Group Radio Buttons"_s));
	$assignStatic(bug8033699::btnStart, $new($JButton, "Start"_s));
	$assignStatic(bug8033699::btnEnd, $new($JButton, "End"_s));
	$assignStatic(bug8033699::btnMiddle, $new($JButton, "Middle"_s));
	$var($JPanel, box, $new($JPanel));
	box->setLayout($$new($BoxLayout, box, $BoxLayout::Y_AXIS));
	box->setBorder($($BorderFactory::createTitledBorder("Grouped Radio Buttons"_s)));
	$assignStatic(bug8033699::radioBtn1, $new($JRadioButton, "A"_s));
	$assignStatic(bug8033699::radioBtn2, $new($JRadioButton, "B"_s));
	$assignStatic(bug8033699::radioBtn3, $new($JRadioButton, "C"_s));
	$var($ButtonGroup, btnGrp, $new($ButtonGroup));
	btnGrp->add(bug8033699::radioBtn1);
	btnGrp->add(bug8033699::radioBtn2);
	btnGrp->add(bug8033699::radioBtn3);
	$nc(bug8033699::radioBtn1)->setSelected(true);
	box->add(static_cast<$Component*>(bug8033699::radioBtn1));
	box->add(static_cast<$Component*>(bug8033699::radioBtn2));
	box->add(static_cast<$Component*>(bug8033699::btnMiddle));
	box->add(static_cast<$Component*>(bug8033699::radioBtn3));
	$assignStatic(bug8033699::radioBtnSingle, $new($JRadioButton, "Not Grouped"_s));
	$nc(bug8033699::radioBtnSingle)->setSelected(true);
	$nc($($nc(bug8033699::mainFrame)->getContentPane()))->add(static_cast<$Component*>(bug8033699::btnStart));
	$nc($($nc(bug8033699::mainFrame)->getContentPane()))->add(static_cast<$Component*>(box));
	$nc($($nc(bug8033699::mainFrame)->getContentPane()))->add(static_cast<$Component*>(bug8033699::radioBtnSingle));
	$nc($($nc(bug8033699::mainFrame)->getContentPane()))->add(static_cast<$Component*>(bug8033699::btnEnd));
	$nc($($nc(bug8033699::mainFrame)->getRootPane()))->setDefaultButton(bug8033699::btnStart);
	$nc(bug8033699::btnStart)->requestFocus();
	$nc(bug8033699::mainFrame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$nc(bug8033699::mainFrame)->setLayout($$new($BoxLayout, $($nc(bug8033699::mainFrame)->getContentPane()), $BoxLayout::Y_AXIS));
	$nc(bug8033699::mainFrame)->setSize(300, 300);
	$nc(bug8033699::mainFrame)->setLocation(200, 200);
	$nc(bug8033699::mainFrame)->setVisible(true);
	$nc(bug8033699::mainFrame)->toFront();
}

void bug8033699::runTest1() {
	$init(bug8033699);
	hitKey(bug8033699::robot, $KeyEvent::VK_TAB);
	hitKey(bug8033699::robot, $KeyEvent::VK_TAB);
	hitKey(bug8033699::robot, $KeyEvent::VK_TAB);
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug8033699$$Lambda$lambda$runTest1$2$2)));
}

void bug8033699::runTest2() {
	$init(bug8033699);
	hitKey(bug8033699::robot, $KeyEvent::VK_TAB);
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug8033699$$Lambda$lambda$runTest2$3$3)));
}

void bug8033699::runTest3() {
	$init(bug8033699);
	hitKey(bug8033699::robot, $KeyEvent::VK_SHIFT, $KeyEvent::VK_TAB);
	hitKey(bug8033699::robot, $KeyEvent::VK_SHIFT, $KeyEvent::VK_TAB);
	hitKey(bug8033699::robot, $KeyEvent::VK_SHIFT, $KeyEvent::VK_TAB);
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug8033699$$Lambda$lambda$runTest3$4$4)));
}

void bug8033699::runTest4() {
	$init(bug8033699);
	hitKey(bug8033699::robot, $KeyEvent::VK_DOWN);
	hitKey(bug8033699::robot, $KeyEvent::VK_RIGHT);
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug8033699$$Lambda$lambda$runTest4$5$5)));
}

void bug8033699::runTest5() {
	$init(bug8033699);
	hitKey(bug8033699::robot, $KeyEvent::VK_UP);
	hitKey(bug8033699::robot, $KeyEvent::VK_LEFT);
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug8033699$$Lambda$lambda$runTest5$6$6)));
}

void bug8033699::runTest6() {
	$init(bug8033699);
	hitKey(bug8033699::robot, $KeyEvent::VK_UP);
	hitKey(bug8033699::robot, $KeyEvent::VK_UP);
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug8033699$$Lambda$lambda$runTest6$7$7)));
}

void bug8033699::runTest7() {
	$init(bug8033699);
	hitKey(bug8033699::robot, $KeyEvent::VK_TAB);
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug8033699$$Lambda$lambda$runTest7$8$8)));
}

void bug8033699::runTest8() {
	$init(bug8033699);
	hitKey(bug8033699::robot, $KeyEvent::VK_TAB);
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug8033699$$Lambda$lambda$runTest8$9$9)));
}

void bug8033699::runTest9() {
	$init(bug8033699);
	$useLocalCurrentObjectStackCache();
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug8033699$$Lambda$lambda$runTest9$10$10)));
	$var($ActionListener, actLrRB1, static_cast<$ActionListener*>($new(bug8033699$$Lambda$lambda$runTest9$11$11)));
	$var($ActionListener, actLrRB2, static_cast<$ActionListener*>($new(bug8033699$$Lambda$lambda$runTest9$12$12)));
	$var($ActionListener, actLrRB3, static_cast<$ActionListener*>($new(bug8033699$$Lambda$lambda$runTest9$13$13)));
	$nc(bug8033699::radioBtn1)->addActionListener(actLrRB1);
	$nc(bug8033699::radioBtn2)->addActionListener(actLrRB2);
	$nc(bug8033699::radioBtn3)->addActionListener(actLrRB3);
	hitKey(bug8033699::robot, $KeyEvent::VK_DOWN);
	hitKey(bug8033699::robot, $KeyEvent::VK_DOWN);
	hitKey(bug8033699::robot, $KeyEvent::VK_DOWN);
	$var($String, failMessage, "ActionListener not invoked when selected using arrow key."_s);
	if (!$nc(bug8033699::actRB2)->booleanValue()) {
		$throwNew($RuntimeException, $$str({"RadioButton 2: "_s, failMessage}));
	}
	if (!$nc(bug8033699::actRB3)->booleanValue()) {
		$throwNew($RuntimeException, $$str({"RadioButton 3: "_s, failMessage}));
	}
	if (!$nc(bug8033699::actRB1)->booleanValue()) {
		$throwNew($RuntimeException, $$str({"RadioButton 1: "_s, failMessage}));
	}
	$nc(bug8033699::radioBtn1)->removeActionListener(actLrRB1);
	$nc(bug8033699::radioBtn2)->removeActionListener(actLrRB2);
	$nc(bug8033699::radioBtn3)->removeActionListener(actLrRB3);
}

void bug8033699::hitKey($Robot* robot, int32_t keycode) {
	$init(bug8033699);
	$nc(robot)->keyPress(keycode);
	robot->keyRelease(keycode);
	robot->waitForIdle();
}

void bug8033699::hitKey($Robot* robot, int32_t mode, int32_t keycode) {
	$init(bug8033699);
	$nc(robot)->keyPress(mode);
	robot->keyPress(keycode);
	robot->keyRelease(mode);
	robot->keyRelease(keycode);
	robot->waitForIdle();
}

void bug8033699::lambda$runTest9$13($ActionEvent* e) {
	$init(bug8033699);
	$assignStatic(bug8033699::actRB3, $Boolean::valueOf(true));
}

void bug8033699::lambda$runTest9$12($ActionEvent* e) {
	$init(bug8033699);
	$assignStatic(bug8033699::actRB2, $Boolean::valueOf(true));
}

void bug8033699::lambda$runTest9$11($ActionEvent* e) {
	$init(bug8033699);
	$assignStatic(bug8033699::actRB1, $Boolean::valueOf(true));
}

void bug8033699::lambda$runTest9$10() {
	$init(bug8033699);
	$nc(bug8033699::radioBtn1)->setSelected(true);
	$nc(bug8033699::radioBtn1)->requestFocusInWindow();
}

void bug8033699::lambda$runTest8$9() {
	$init(bug8033699);
	if (!$equals($nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->getFocusOwner(), bug8033699::radioBtnSingle)) {
		$nc($System::out)->println("Separate Component added in button group layout"_s);
		$throwNew($RuntimeException, "Focus is not on Radio Button Single as Expected"_s);
	}
}

void bug8033699::lambda$runTest7$8() {
	$init(bug8033699);
	if (!$equals($nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->getFocusOwner(), bug8033699::btnMiddle)) {
		$nc($System::out)->println("Separate Component added in button group layout"_s);
		$throwNew($RuntimeException, "Focus is not on Middle Button as Expected"_s);
	}
}

void bug8033699::lambda$runTest6$7() {
	$init(bug8033699);
	if (!$equals($nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->getFocusOwner(), bug8033699::radioBtn2)) {
		$nc($System::out)->println("Radio button Group Circle Back To First Button Test"_s);
		$throwNew($RuntimeException, "Focus is not on Radio Button B as Expected"_s);
	}
}

void bug8033699::lambda$runTest5$6() {
	$init(bug8033699);
	if (!$equals($nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->getFocusOwner(), bug8033699::radioBtn1)) {
		$nc($System::out)->println("Radio button Group Left/Up Arrow Key Move Focus Failed"_s);
		$throwNew($RuntimeException, "Focus is not on Radio Button A as Expected"_s);
	}
}

void bug8033699::lambda$runTest4$5() {
	$init(bug8033699);
	if (!$equals($nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->getFocusOwner(), bug8033699::radioBtn3)) {
		$nc($System::out)->println("Radio button Group UP/LEFT Arrow Key Move Focus Failed"_s);
		$throwNew($RuntimeException, "Focus is not on Radio Button C as Expected"_s);
	}
}

void bug8033699::lambda$runTest3$4() {
	$init(bug8033699);
	if (!$equals($nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->getFocusOwner(), bug8033699::radioBtn1)) {
		$nc($System::out)->println("Radio button Group/Non Grouped Radio Button SHIFT-Tab Key Test failed"_s);
		$throwNew($RuntimeException, "Focus is not on Radio Button A as Expected"_s);
	}
}

void bug8033699::lambda$runTest2$3() {
	$init(bug8033699);
	if (!$equals($nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->getFocusOwner(), bug8033699::btnEnd)) {
		$nc($System::out)->println("Non Grouped Radio Button Go To Next Component through Tab Key failed"_s);
		$throwNew($RuntimeException, "Focus is not on Button End as Expected"_s);
	}
}

void bug8033699::lambda$runTest1$2() {
	$init(bug8033699);
	if (!$equals($nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->getFocusOwner(), bug8033699::radioBtnSingle)) {
		$nc($System::out)->println("Radio Button Group Go To Next Component through Tab Key failed"_s);
		$throwNew($RuntimeException, "Focus is not on Radio Button Single as Expected"_s);
	}
}

void bug8033699::lambda$main$1() {
	$init(bug8033699);
	$nc(bug8033699::mainFrame)->dispose();
}

void bug8033699::lambda$main$0() {
	$init(bug8033699);
	changeLAF();
	createAndShowGUI();
}

void clinit$bug8033699($Class* class$) {
	$assignStatic(bug8033699::actRB1, $Boolean::valueOf(false));
	$assignStatic(bug8033699::actRB2, $Boolean::valueOf(false));
	$assignStatic(bug8033699::actRB3, $Boolean::valueOf(false));
}

bug8033699::bug8033699() {
}

$Class* bug8033699::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(bug8033699$$Lambda$lambda$main$0::classInfo$.name)) {
			return bug8033699$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals(bug8033699$$Lambda$lambda$main$1$1::classInfo$.name)) {
			return bug8033699$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
		if (name->equals(bug8033699$$Lambda$lambda$runTest1$2$2::classInfo$.name)) {
			return bug8033699$$Lambda$lambda$runTest1$2$2::load$(name, initialize);
		}
		if (name->equals(bug8033699$$Lambda$lambda$runTest2$3$3::classInfo$.name)) {
			return bug8033699$$Lambda$lambda$runTest2$3$3::load$(name, initialize);
		}
		if (name->equals(bug8033699$$Lambda$lambda$runTest3$4$4::classInfo$.name)) {
			return bug8033699$$Lambda$lambda$runTest3$4$4::load$(name, initialize);
		}
		if (name->equals(bug8033699$$Lambda$lambda$runTest4$5$5::classInfo$.name)) {
			return bug8033699$$Lambda$lambda$runTest4$5$5::load$(name, initialize);
		}
		if (name->equals(bug8033699$$Lambda$lambda$runTest5$6$6::classInfo$.name)) {
			return bug8033699$$Lambda$lambda$runTest5$6$6::load$(name, initialize);
		}
		if (name->equals(bug8033699$$Lambda$lambda$runTest6$7$7::classInfo$.name)) {
			return bug8033699$$Lambda$lambda$runTest6$7$7::load$(name, initialize);
		}
		if (name->equals(bug8033699$$Lambda$lambda$runTest7$8$8::classInfo$.name)) {
			return bug8033699$$Lambda$lambda$runTest7$8$8::load$(name, initialize);
		}
		if (name->equals(bug8033699$$Lambda$lambda$runTest8$9$9::classInfo$.name)) {
			return bug8033699$$Lambda$lambda$runTest8$9$9::load$(name, initialize);
		}
		if (name->equals(bug8033699$$Lambda$lambda$runTest9$10$10::classInfo$.name)) {
			return bug8033699$$Lambda$lambda$runTest9$10$10::load$(name, initialize);
		}
		if (name->equals(bug8033699$$Lambda$lambda$runTest9$11$11::classInfo$.name)) {
			return bug8033699$$Lambda$lambda$runTest9$11$11::load$(name, initialize);
		}
		if (name->equals(bug8033699$$Lambda$lambda$runTest9$12$12::classInfo$.name)) {
			return bug8033699$$Lambda$lambda$runTest9$12$12::load$(name, initialize);
		}
		if (name->equals(bug8033699$$Lambda$lambda$runTest9$13$13::classInfo$.name)) {
			return bug8033699$$Lambda$lambda$runTest9$13$13::load$(name, initialize);
		}
	}
	$loadClass(bug8033699, name, initialize, &_bug8033699_ClassInfo_, clinit$bug8033699, allocate$bug8033699);
	return class$;
}

$Class* bug8033699::class$ = nullptr;