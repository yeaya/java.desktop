#include <RightAltKeyTest.h>

#include <RightAltKeyTest$1.h>
#include <RightAltKeyTest$2.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/GridLayout.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/FocusListener.h>
#include <java/awt/event/InputEvent.h>
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
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JOptionPane.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/KeyStroke.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/event/MenuListener.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef ALT_GRAPH_DOWN_MASK
#undef RIGHT
#undef VK_ALT_GRAPH
#undef VK_F
#undef VK_L
#undef VK_M
#undef VK_S
#undef VK_V
#undef VK_Y
#undef YES_NO_CANCEL_OPTION

using $RightAltKeyTest$1 = ::RightAltKeyTest$1;
using $RightAltKeyTest$2 = ::RightAltKeyTest$2;
using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $GridLayout = ::java::awt::GridLayout;
using $LayoutManager = ::java::awt::LayoutManager;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $FocusListener = ::java::awt::event::FocusListener;
using $InputEvent = ::java::awt::event::InputEvent;
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
using $AbstractButton = ::javax::swing::AbstractButton;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JLabel = ::javax::swing::JLabel;
using $JMenu = ::javax::swing::JMenu;
using $JMenuBar = ::javax::swing::JMenuBar;
using $JMenuItem = ::javax::swing::JMenuItem;
using $JOptionPane = ::javax::swing::JOptionPane;
using $JPanel = ::javax::swing::JPanel;
using $JTabbedPane = ::javax::swing::JTabbedPane;
using $JTextField = ::javax::swing::JTextField;
using $KeyStroke = ::javax::swing::KeyStroke;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $MenuListener = ::javax::swing::event::MenuListener;
using $JTextComponent = ::javax::swing::text::JTextComponent;

class RightAltKeyTest$$Lambda$lambda$testJMenuItem$0 : public $ActionListener {
	$class(RightAltKeyTest$$Lambda$lambda$testJMenuItem$0, $NO_CLASS_INIT, $ActionListener)
public:
	void init$(RightAltKeyTest* inst) {
		$set(this, inst$, inst);
	}
	virtual void actionPerformed($ActionEvent* e) override {
		$nc(inst$)->lambda$testJMenuItem$0(e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<RightAltKeyTest$$Lambda$lambda$testJMenuItem$0>());
	}
	RightAltKeyTest* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo RightAltKeyTest$$Lambda$lambda$testJMenuItem$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(RightAltKeyTest$$Lambda$lambda$testJMenuItem$0, inst$)},
	{}
};
$MethodInfo RightAltKeyTest$$Lambda$lambda$testJMenuItem$0::methodInfos[3] = {
	{"<init>", "(LRightAltKeyTest;)V", nullptr, $PUBLIC, $method(static_cast<void(RightAltKeyTest$$Lambda$lambda$testJMenuItem$0::*)(RightAltKeyTest*)>(&RightAltKeyTest$$Lambda$lambda$testJMenuItem$0::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo RightAltKeyTest$$Lambda$lambda$testJMenuItem$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"RightAltKeyTest$$Lambda$lambda$testJMenuItem$0",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	fieldInfos,
	methodInfos
};
$Class* RightAltKeyTest$$Lambda$lambda$testJMenuItem$0::load$($String* name, bool initialize) {
	$loadClass(RightAltKeyTest$$Lambda$lambda$testJMenuItem$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* RightAltKeyTest$$Lambda$lambda$testJMenuItem$0::class$ = nullptr;

class RightAltKeyTest$$Lambda$lambda$testJTabbedPane$1$1 : public $ChangeListener {
	$class(RightAltKeyTest$$Lambda$lambda$testJTabbedPane$1$1, $NO_CLASS_INIT, $ChangeListener)
public:
	void init$(RightAltKeyTest* inst, $JTabbedPane* tp) {
		$set(this, inst$, inst);
		$set(this, tp, tp);
	}
	virtual void stateChanged($ChangeEvent* e) override {
		$nc(inst$)->lambda$testJTabbedPane$1(tp, e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<RightAltKeyTest$$Lambda$lambda$testJTabbedPane$1$1>());
	}
	RightAltKeyTest* inst$ = nullptr;
	$JTabbedPane* tp = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo RightAltKeyTest$$Lambda$lambda$testJTabbedPane$1$1::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(RightAltKeyTest$$Lambda$lambda$testJTabbedPane$1$1, inst$)},
	{"tp", "Ljavax/swing/JTabbedPane;", nullptr, $PUBLIC, $field(RightAltKeyTest$$Lambda$lambda$testJTabbedPane$1$1, tp)},
	{}
};
$MethodInfo RightAltKeyTest$$Lambda$lambda$testJTabbedPane$1$1::methodInfos[3] = {
	{"<init>", "(LRightAltKeyTest;Ljavax/swing/JTabbedPane;)V", nullptr, $PUBLIC, $method(static_cast<void(RightAltKeyTest$$Lambda$lambda$testJTabbedPane$1$1::*)(RightAltKeyTest*,$JTabbedPane*)>(&RightAltKeyTest$$Lambda$lambda$testJTabbedPane$1$1::init$))},
	{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo RightAltKeyTest$$Lambda$lambda$testJTabbedPane$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"RightAltKeyTest$$Lambda$lambda$testJTabbedPane$1$1",
	"java.lang.Object",
	"javax.swing.event.ChangeListener",
	fieldInfos,
	methodInfos
};
$Class* RightAltKeyTest$$Lambda$lambda$testJTabbedPane$1$1::load$($String* name, bool initialize) {
	$loadClass(RightAltKeyTest$$Lambda$lambda$testJTabbedPane$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* RightAltKeyTest$$Lambda$lambda$testJTabbedPane$1$1::class$ = nullptr;

class RightAltKeyTest$$Lambda$testJMenu$2 : public $Runnable {
	$class(RightAltKeyTest$$Lambda$testJMenu$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$(RightAltKeyTest* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->testJMenu();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<RightAltKeyTest$$Lambda$testJMenu$2>());
	}
	RightAltKeyTest* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo RightAltKeyTest$$Lambda$testJMenu$2::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(RightAltKeyTest$$Lambda$testJMenu$2, inst$)},
	{}
};
$MethodInfo RightAltKeyTest$$Lambda$testJMenu$2::methodInfos[3] = {
	{"<init>", "(LRightAltKeyTest;)V", nullptr, $PUBLIC, $method(static_cast<void(RightAltKeyTest$$Lambda$testJMenu$2::*)(RightAltKeyTest*)>(&RightAltKeyTest$$Lambda$testJMenu$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo RightAltKeyTest$$Lambda$testJMenu$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"RightAltKeyTest$$Lambda$testJMenu$2",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* RightAltKeyTest$$Lambda$testJMenu$2::load$($String* name, bool initialize) {
	$loadClass(RightAltKeyTest$$Lambda$testJMenu$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* RightAltKeyTest$$Lambda$testJMenu$2::class$ = nullptr;

class RightAltKeyTest$$Lambda$testJMenuItem$3 : public $Runnable {
	$class(RightAltKeyTest$$Lambda$testJMenuItem$3, $NO_CLASS_INIT, $Runnable)
public:
	void init$(RightAltKeyTest* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->testJMenuItem();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<RightAltKeyTest$$Lambda$testJMenuItem$3>());
	}
	RightAltKeyTest* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo RightAltKeyTest$$Lambda$testJMenuItem$3::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(RightAltKeyTest$$Lambda$testJMenuItem$3, inst$)},
	{}
};
$MethodInfo RightAltKeyTest$$Lambda$testJMenuItem$3::methodInfos[3] = {
	{"<init>", "(LRightAltKeyTest;)V", nullptr, $PUBLIC, $method(static_cast<void(RightAltKeyTest$$Lambda$testJMenuItem$3::*)(RightAltKeyTest*)>(&RightAltKeyTest$$Lambda$testJMenuItem$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo RightAltKeyTest$$Lambda$testJMenuItem$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"RightAltKeyTest$$Lambda$testJMenuItem$3",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* RightAltKeyTest$$Lambda$testJMenuItem$3::load$($String* name, bool initialize) {
	$loadClass(RightAltKeyTest$$Lambda$testJMenuItem$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* RightAltKeyTest$$Lambda$testJMenuItem$3::class$ = nullptr;

class RightAltKeyTest$$Lambda$testJOptionPane$4 : public $Runnable {
	$class(RightAltKeyTest$$Lambda$testJOptionPane$4, $NO_CLASS_INIT, $Runnable)
public:
	void init$(RightAltKeyTest* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->testJOptionPane();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<RightAltKeyTest$$Lambda$testJOptionPane$4>());
	}
	RightAltKeyTest* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo RightAltKeyTest$$Lambda$testJOptionPane$4::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(RightAltKeyTest$$Lambda$testJOptionPane$4, inst$)},
	{}
};
$MethodInfo RightAltKeyTest$$Lambda$testJOptionPane$4::methodInfos[3] = {
	{"<init>", "(LRightAltKeyTest;)V", nullptr, $PUBLIC, $method(static_cast<void(RightAltKeyTest$$Lambda$testJOptionPane$4::*)(RightAltKeyTest*)>(&RightAltKeyTest$$Lambda$testJOptionPane$4::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo RightAltKeyTest$$Lambda$testJOptionPane$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"RightAltKeyTest$$Lambda$testJOptionPane$4",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* RightAltKeyTest$$Lambda$testJOptionPane$4::load$($String* name, bool initialize) {
	$loadClass(RightAltKeyTest$$Lambda$testJOptionPane$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* RightAltKeyTest$$Lambda$testJOptionPane$4::class$ = nullptr;

class RightAltKeyTest$$Lambda$testJTabbedPane$5 : public $Runnable {
	$class(RightAltKeyTest$$Lambda$testJTabbedPane$5, $NO_CLASS_INIT, $Runnable)
public:
	void init$(RightAltKeyTest* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->testJTabbedPane();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<RightAltKeyTest$$Lambda$testJTabbedPane$5>());
	}
	RightAltKeyTest* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo RightAltKeyTest$$Lambda$testJTabbedPane$5::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(RightAltKeyTest$$Lambda$testJTabbedPane$5, inst$)},
	{}
};
$MethodInfo RightAltKeyTest$$Lambda$testJTabbedPane$5::methodInfos[3] = {
	{"<init>", "(LRightAltKeyTest;)V", nullptr, $PUBLIC, $method(static_cast<void(RightAltKeyTest$$Lambda$testJTabbedPane$5::*)(RightAltKeyTest*)>(&RightAltKeyTest$$Lambda$testJTabbedPane$5::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo RightAltKeyTest$$Lambda$testJTabbedPane$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"RightAltKeyTest$$Lambda$testJTabbedPane$5",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* RightAltKeyTest$$Lambda$testJTabbedPane$5::load$($String* name, bool initialize) {
	$loadClass(RightAltKeyTest$$Lambda$testJTabbedPane$5, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* RightAltKeyTest$$Lambda$testJTabbedPane$5::class$ = nullptr;

class RightAltKeyTest$$Lambda$testJTextArea$6 : public $Runnable {
	$class(RightAltKeyTest$$Lambda$testJTextArea$6, $NO_CLASS_INIT, $Runnable)
public:
	void init$(RightAltKeyTest* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->testJTextArea();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<RightAltKeyTest$$Lambda$testJTextArea$6>());
	}
	RightAltKeyTest* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo RightAltKeyTest$$Lambda$testJTextArea$6::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(RightAltKeyTest$$Lambda$testJTextArea$6, inst$)},
	{}
};
$MethodInfo RightAltKeyTest$$Lambda$testJTextArea$6::methodInfos[3] = {
	{"<init>", "(LRightAltKeyTest;)V", nullptr, $PUBLIC, $method(static_cast<void(RightAltKeyTest$$Lambda$testJTextArea$6::*)(RightAltKeyTest*)>(&RightAltKeyTest$$Lambda$testJTextArea$6::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo RightAltKeyTest$$Lambda$testJTextArea$6::classInfo$ = {
	$PUBLIC | $FINAL,
	"RightAltKeyTest$$Lambda$testJTextArea$6",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* RightAltKeyTest$$Lambda$testJTextArea$6::load$($String* name, bool initialize) {
	$loadClass(RightAltKeyTest$$Lambda$testJTextArea$6, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* RightAltKeyTest$$Lambda$testJTextArea$6::class$ = nullptr;

class RightAltKeyTest$$Lambda$disposeUI$7 : public $Runnable {
	$class(RightAltKeyTest$$Lambda$disposeUI$7, $NO_CLASS_INIT, $Runnable)
public:
	void init$(RightAltKeyTest* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->disposeUI();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<RightAltKeyTest$$Lambda$disposeUI$7>());
	}
	RightAltKeyTest* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo RightAltKeyTest$$Lambda$disposeUI$7::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(RightAltKeyTest$$Lambda$disposeUI$7, inst$)},
	{}
};
$MethodInfo RightAltKeyTest$$Lambda$disposeUI$7::methodInfos[3] = {
	{"<init>", "(LRightAltKeyTest;)V", nullptr, $PUBLIC, $method(static_cast<void(RightAltKeyTest$$Lambda$disposeUI$7::*)(RightAltKeyTest*)>(&RightAltKeyTest$$Lambda$disposeUI$7::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo RightAltKeyTest$$Lambda$disposeUI$7::classInfo$ = {
	$PUBLIC | $FINAL,
	"RightAltKeyTest$$Lambda$disposeUI$7",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* RightAltKeyTest$$Lambda$disposeUI$7::load$($String* name, bool initialize) {
	$loadClass(RightAltKeyTest$$Lambda$disposeUI$7, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* RightAltKeyTest$$Lambda$disposeUI$7::class$ = nullptr;

$FieldInfo _RightAltKeyTest_FieldInfo_[] = {
	{"action", "Z", nullptr, 0, $field(RightAltKeyTest, action)},
	{"frame", "Ljavax/swing/JFrame;", nullptr, 0, $field(RightAltKeyTest, frame)},
	{}
};

$MethodInfo _RightAltKeyTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(RightAltKeyTest::*)()>(&RightAltKeyTest::init$))},
	{"disposeUI", "()V", nullptr, 0},
	{"errLog", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, nullptr, "java.lang.reflect.InvocationTargetException,java.lang.InterruptedException"},
	{"lambda$testJMenuItem$0", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(RightAltKeyTest::*)($ActionEvent*)>(&RightAltKeyTest::lambda$testJMenuItem$0))},
	{"lambda$testJTabbedPane$1", "(Ljavax/swing/JTabbedPane;Ljavax/swing/event/ChangeEvent;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(RightAltKeyTest::*)($JTabbedPane*,$ChangeEvent*)>(&RightAltKeyTest::lambda$testJTabbedPane$1))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&RightAltKeyTest::main)), "java.lang.Exception"},
	{"test", "()V", nullptr, 0, nullptr, "java.lang.Exception"},
	{"testJMenu", "()V", nullptr, 0},
	{"testJMenuItem", "()V", nullptr, 0},
	{"testJOptionPane", "()V", nullptr, 0},
	{"testJTabbedPane", "()V", nullptr, 0},
	{"testJTextArea", "()V", nullptr, 0},
	{}
};

$InnerClassInfo _RightAltKeyTest_InnerClassesInfo_[] = {
	{"RightAltKeyTest$2", nullptr, nullptr, 0},
	{"RightAltKeyTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _RightAltKeyTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"RightAltKeyTest",
	"java.lang.Object",
	nullptr,
	_RightAltKeyTest_FieldInfo_,
	_RightAltKeyTest_MethodInfo_,
	nullptr,
	nullptr,
	_RightAltKeyTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"RightAltKeyTest$2,RightAltKeyTest$1"
};

$Object* allocate$RightAltKeyTest($Class* clazz) {
	return $of($alloc(RightAltKeyTest));
}

void RightAltKeyTest::init$() {
	this->action = false;
}

void RightAltKeyTest::testJMenu() {
	$useLocalCurrentObjectStackCache();
	$set(this, frame, $new($JFrame, "Menu Frame"_s));
	$var($JMenuBar, mb, $new($JMenuBar));
	$var($JMenu, m1, $new($JMenu, "File"_s));
	$var($JMenuItem, i1, $new($JMenuItem, "Save"_s));
	$var($JMenuItem, i2, $new($JMenuItem, "Load"_s));
	m1->setMnemonic($KeyEvent::VK_F);
	m1->addMenuListener($$new($RightAltKeyTest$1, this));
	$nc(this->frame)->setJMenuBar(mb);
	mb->add(m1);
	m1->add(i1);
	m1->add(i2);
	$nc(this->frame)->setSize(200, 200);
	$nc(this->frame)->setVisible(true);
}

void RightAltKeyTest::testJMenuItem() {
	$useLocalCurrentObjectStackCache();
	$set(this, frame, $new($JFrame, "Menu Frame"_s));
	$var($JMenuBar, mb, $new($JMenuBar));
	$var($JMenu, m1, $new($JMenu, "File"_s));
	$var($JMenuItem, i1, $new($JMenuItem, "Save"_s));
	i1->setAccelerator($($KeyStroke::getKeyStroke($KeyEvent::VK_S, $InputEvent::ALT_GRAPH_DOWN_MASK)));
	i1->addActionListener(static_cast<$ActionListener*>($$new(RightAltKeyTest$$Lambda$lambda$testJMenuItem$0, this)));
	$nc(this->frame)->setJMenuBar(mb);
	mb->add(m1);
	m1->add(i1);
	$nc(this->frame)->setSize(200, 200);
	$nc(this->frame)->setVisible(true);
}

void RightAltKeyTest::testJOptionPane() {
	int32_t selection = $JOptionPane::showConfirmDialog(nullptr, "Do you wish to save file?"_s, "Confirm"_s, $JOptionPane::YES_NO_CANCEL_OPTION);
	if (selection == 0) {
		this->action = true;
	}
}

void RightAltKeyTest::testJTabbedPane() {
	$useLocalCurrentObjectStackCache();
	$set(this, frame, $new($JFrame));
	$var($JPanel, p1, $new($JPanel));
	$var($JPanel, p2, $new($JPanel));
	$var($JTabbedPane, tp, $new($JTabbedPane));
	tp->add("Main"_s, static_cast<$Component*>(p1));
	tp->add("Visit"_s, static_cast<$Component*>(p2));
	tp->setMnemonicAt(0, $KeyEvent::VK_M);
	tp->setMnemonicAt(1, $KeyEvent::VK_V);
	tp->addChangeListener(static_cast<$ChangeListener*>($$new(RightAltKeyTest$$Lambda$lambda$testJTabbedPane$1$1, this, tp)));
	$nc(this->frame)->add(static_cast<$Component*>(tp));
	$nc(this->frame)->setSize(200, 200);
	$nc(this->frame)->setVisible(true);
}

void RightAltKeyTest::testJTextArea() {
	$useLocalCurrentObjectStackCache();
	$var($JTextField, firstField, $new($JTextField, 10));
	$var($JTextField, lastField, $new($JTextField, 10));
	$var($JLabel, firstLabel, $new($JLabel, "First Name"_s, $JLabel::RIGHT));
	firstLabel->setDisplayedMnemonic(u'F');
	firstLabel->setLabelFor(firstField);
	$var($JLabel, lastLabel, $new($JLabel, "Last Name"_s, $JLabel::RIGHT));
	lastLabel->setDisplayedMnemonic(u'L');
	lastLabel->setLabelFor(lastField);
	$var($JPanel, p, $new($JPanel));
	p->setLayout($$new($GridLayout, 2, 2, 5, 5));
	p->add(static_cast<$Component*>(firstLabel));
	p->add(static_cast<$Component*>(firstField));
	p->add(static_cast<$Component*>(lastLabel));
	p->add(static_cast<$Component*>(lastField));
	$set(this, frame, $new($JFrame, "MnemonicLabels"_s));
	lastField->addFocusListener($$new($RightAltKeyTest$2, this));
	$nc(this->frame)->add(static_cast<$Component*>(p));
	$nc(this->frame)->setSize(200, 200);
	$nc(this->frame)->setVisible(true);
}

void RightAltKeyTest::test() {
	$useLocalCurrentObjectStackCache();
	$var($UIManager$LookAndFeelInfoArray, lookAndFeels, $UIManager::getInstalledLookAndFeels());
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, lookAndFeels);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, lookAndFeel, arr$->get(i$));
			{
				$UIManager::setLookAndFeel($($nc(lookAndFeel)->getClassName()));
				$var($Robot, robot, $new($Robot));
				robot->setAutoDelay(100);
				robot->waitForIdle();
				this->action = false;
				$SwingUtilities::invokeLater(static_cast<$Runnable*>($$new(RightAltKeyTest$$Lambda$testJMenu$2, this)));
				robot->waitForIdle();
				robot->keyPress($KeyEvent::VK_ALT_GRAPH);
				robot->keyPress($KeyEvent::VK_F);
				robot->keyRelease($KeyEvent::VK_F);
				robot->keyRelease($KeyEvent::VK_ALT_GRAPH);
				robot->waitForIdle();
				if (!this->action) {
					errLog("JMenu"_s, $($nc(lookAndFeel)->getClassName()));
				}
				this->action = false;
				$SwingUtilities::invokeLater(static_cast<$Runnable*>($$new(RightAltKeyTest$$Lambda$testJMenuItem$3, this)));
				robot->waitForIdle();
				robot->keyPress($KeyEvent::VK_ALT_GRAPH);
				robot->keyPress($KeyEvent::VK_S);
				robot->keyRelease($KeyEvent::VK_S);
				robot->keyRelease($KeyEvent::VK_ALT_GRAPH);
				robot->waitForIdle();
				if (!this->action) {
					errLog("JMenuItem"_s, $($nc(lookAndFeel)->getClassName()));
				}
				this->action = false;
				$SwingUtilities::invokeLater(static_cast<$Runnable*>($$new(RightAltKeyTest$$Lambda$testJOptionPane$4, this)));
				robot->waitForIdle();
				robot->keyPress($KeyEvent::VK_ALT_GRAPH);
				robot->keyPress($KeyEvent::VK_Y);
				robot->keyRelease($KeyEvent::VK_Y);
				robot->keyRelease($KeyEvent::VK_ALT_GRAPH);
				robot->waitForIdle();
				if (!this->action) {
					errLog("JOptionPane"_s, $($nc(lookAndFeel)->getClassName()));
				}
				this->action = false;
				$SwingUtilities::invokeLater(static_cast<$Runnable*>($$new(RightAltKeyTest$$Lambda$testJTabbedPane$5, this)));
				robot->waitForIdle();
				robot->keyPress($KeyEvent::VK_ALT_GRAPH);
				robot->keyPress($KeyEvent::VK_V);
				robot->keyRelease($KeyEvent::VK_V);
				robot->keyRelease($KeyEvent::VK_ALT_GRAPH);
				robot->waitForIdle();
				if (!this->action) {
					errLog("JTabbedPane"_s, $($nc(lookAndFeel)->getClassName()));
				}
				this->action = false;
				$SwingUtilities::invokeLater(static_cast<$Runnable*>($$new(RightAltKeyTest$$Lambda$testJTextArea$6, this)));
				robot->waitForIdle();
				robot->keyPress($KeyEvent::VK_ALT_GRAPH);
				robot->keyPress($KeyEvent::VK_L);
				robot->keyRelease($KeyEvent::VK_L);
				robot->keyRelease($KeyEvent::VK_ALT_GRAPH);
				robot->waitForIdle();
				if (!this->action) {
					errLog("JTextArea"_s, $($nc(lookAndFeel)->getClassName()));
				}
			}
		}
	}
	$init($System);
	$nc($System::out)->println("Passed."_s);
}

void RightAltKeyTest::disposeUI() {
	$nc(this->frame)->setVisible(false);
	$nc(this->frame)->dispose();
}

void RightAltKeyTest::errLog($String* componentName, $String* lookAndFeel) {
	$useLocalCurrentObjectStackCache();
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(RightAltKeyTest$$Lambda$disposeUI$7, this)));
	$throwNew($RuntimeException, $$str({"Actions are not performed for "_s, componentName, " with "_s, lookAndFeel, " look and feel."_s}));
}

void RightAltKeyTest::main($StringArray* args) {
	$var(RightAltKeyTest, t, $new(RightAltKeyTest));
	t->test();
}

void RightAltKeyTest::lambda$testJTabbedPane$1($JTabbedPane* tp, $ChangeEvent* e) {
	if ($nc(tp)->getSelectedIndex() == 1) {
		this->action = true;
	}
	disposeUI();
}

void RightAltKeyTest::lambda$testJMenuItem$0($ActionEvent* e) {
	this->action = true;
	disposeUI();
}

RightAltKeyTest::RightAltKeyTest() {
}

$Class* RightAltKeyTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(RightAltKeyTest$$Lambda$lambda$testJMenuItem$0::classInfo$.name)) {
			return RightAltKeyTest$$Lambda$lambda$testJMenuItem$0::load$(name, initialize);
		}
		if (name->equals(RightAltKeyTest$$Lambda$lambda$testJTabbedPane$1$1::classInfo$.name)) {
			return RightAltKeyTest$$Lambda$lambda$testJTabbedPane$1$1::load$(name, initialize);
		}
		if (name->equals(RightAltKeyTest$$Lambda$testJMenu$2::classInfo$.name)) {
			return RightAltKeyTest$$Lambda$testJMenu$2::load$(name, initialize);
		}
		if (name->equals(RightAltKeyTest$$Lambda$testJMenuItem$3::classInfo$.name)) {
			return RightAltKeyTest$$Lambda$testJMenuItem$3::load$(name, initialize);
		}
		if (name->equals(RightAltKeyTest$$Lambda$testJOptionPane$4::classInfo$.name)) {
			return RightAltKeyTest$$Lambda$testJOptionPane$4::load$(name, initialize);
		}
		if (name->equals(RightAltKeyTest$$Lambda$testJTabbedPane$5::classInfo$.name)) {
			return RightAltKeyTest$$Lambda$testJTabbedPane$5::load$(name, initialize);
		}
		if (name->equals(RightAltKeyTest$$Lambda$testJTextArea$6::classInfo$.name)) {
			return RightAltKeyTest$$Lambda$testJTextArea$6::load$(name, initialize);
		}
		if (name->equals(RightAltKeyTest$$Lambda$disposeUI$7::classInfo$.name)) {
			return RightAltKeyTest$$Lambda$disposeUI$7::load$(name, initialize);
		}
	}
	$loadClass(RightAltKeyTest, name, initialize, &_RightAltKeyTest_ClassInfo_, allocate$RightAltKeyTest);
	return class$;
}

$Class* RightAltKeyTest::class$ = nullptr;