#include <bug4449413.h>

#include <bug4449413$1.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Frame.h>
#include <java/awt/GridLayout.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/ItemEvent.h>
#include <java/awt/event/ItemListener.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowListener.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/EventObject.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <java/util/concurrent/TimeUnit.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/BoxLayout.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JCheckBox.h>
#include <javax/swing/JCheckBoxMenuItem.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JRadioButton.h>
#include <javax/swing/JRadioButtonMenuItem.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/JToggleButton.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/metal/DefaultMetalTheme.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <javax/swing/plaf/metal/MetalTheme.h>
#include <javax/swing/plaf/metal/OceanTheme.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef INSTRUCTIONS
#undef INSTRUCTIONS_ADDITIONS_METAL
#undef MINUTES
#undef SELECTED
#undef Y_AXIS

using $bug4449413$1 = ::bug4449413$1;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $GridLayout = ::java::awt::GridLayout;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $ItemEvent = ::java::awt::event::ItemEvent;
using $ItemListener = ::java::awt::event::ItemListener;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowListener = ::java::awt::event::WindowListener;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $AbstractButton = ::javax::swing::AbstractButton;
using $BoxLayout = ::javax::swing::BoxLayout;
using $JButton = ::javax::swing::JButton;
using $JCheckBox = ::javax::swing::JCheckBox;
using $JCheckBoxMenuItem = ::javax::swing::JCheckBoxMenuItem;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JMenuItem = ::javax::swing::JMenuItem;
using $JPanel = ::javax::swing::JPanel;
using $JRadioButton = ::javax::swing::JRadioButton;
using $JRadioButtonMenuItem = ::javax::swing::JRadioButtonMenuItem;
using $JTextArea = ::javax::swing::JTextArea;
using $JToggleButton = ::javax::swing::JToggleButton;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $DefaultMetalTheme = ::javax::swing::plaf::metal::DefaultMetalTheme;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;
using $MetalTheme = ::javax::swing::plaf::metal::MetalTheme;
using $OceanTheme = ::javax::swing::plaf::metal::OceanTheme;
using $JTextComponent = ::javax::swing::text::JTextComponent;

class bug4449413$$Lambda$lambda$main$0 : public $Runnable {
	$class(bug4449413$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug4449413::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug4449413$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug4449413$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug4449413$$Lambda$lambda$main$0::*)()>(&bug4449413$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug4449413$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug4449413$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* bug4449413$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(bug4449413$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug4449413$$Lambda$lambda$main$0::class$ = nullptr;

class bug4449413$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(bug4449413$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug4449413::lambda$main$1();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug4449413$$Lambda$lambda$main$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug4449413$$Lambda$lambda$main$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug4449413$$Lambda$lambda$main$1$1::*)()>(&bug4449413$$Lambda$lambda$main$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug4449413$$Lambda$lambda$main$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug4449413$$Lambda$lambda$main$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* bug4449413$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$loadClass(bug4449413$$Lambda$lambda$main$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug4449413$$Lambda$lambda$main$1$1::class$ = nullptr;

class bug4449413$$Lambda$lambda$addComponentsToPane$2$2 : public $ItemListener {
	$class(bug4449413$$Lambda$lambda$addComponentsToPane$2$2, $NO_CLASS_INIT, $ItemListener)
public:
	void init$(bug4449413* inst, $JPanel* testedPanel) {
		$set(this, inst$, inst);
		$set(this, testedPanel, testedPanel);
	}
	virtual void itemStateChanged($ItemEvent* e) override {
		$nc(inst$)->lambda$addComponentsToPane$2(testedPanel, e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug4449413$$Lambda$lambda$addComponentsToPane$2$2>());
	}
	bug4449413* inst$ = nullptr;
	$JPanel* testedPanel = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo bug4449413$$Lambda$lambda$addComponentsToPane$2$2::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(bug4449413$$Lambda$lambda$addComponentsToPane$2$2, inst$)},
	{"testedPanel", "Ljavax/swing/JPanel;", nullptr, $PUBLIC, $field(bug4449413$$Lambda$lambda$addComponentsToPane$2$2, testedPanel)},
	{}
};
$MethodInfo bug4449413$$Lambda$lambda$addComponentsToPane$2$2::methodInfos[3] = {
	{"<init>", "(Lbug4449413;Ljavax/swing/JPanel;)V", nullptr, $PUBLIC, $method(static_cast<void(bug4449413$$Lambda$lambda$addComponentsToPane$2$2::*)(bug4449413*,$JPanel*)>(&bug4449413$$Lambda$lambda$addComponentsToPane$2$2::init$))},
	{"itemStateChanged", "(Ljava/awt/event/ItemEvent;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug4449413$$Lambda$lambda$addComponentsToPane$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug4449413$$Lambda$lambda$addComponentsToPane$2$2",
	"java.lang.Object",
	"java.awt.event.ItemListener",
	fieldInfos,
	methodInfos
};
$Class* bug4449413$$Lambda$lambda$addComponentsToPane$2$2::load$($String* name, bool initialize) {
	$loadClass(bug4449413$$Lambda$lambda$addComponentsToPane$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug4449413$$Lambda$lambda$addComponentsToPane$2$2::class$ = nullptr;

class bug4449413$$Lambda$lambda$addComponentsToPane$3$3 : public $ActionListener {
	$class(bug4449413$$Lambda$lambda$addComponentsToPane$3$3, $NO_CLASS_INIT, $ActionListener)
public:
	void init$($JButton* failButton) {
		$set(this, failButton, failButton);
	}
	virtual void actionPerformed($ActionEvent* e) override {
		bug4449413::lambda$addComponentsToPane$3(failButton, e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug4449413$$Lambda$lambda$addComponentsToPane$3$3>());
	}
	$JButton* failButton = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo bug4449413$$Lambda$lambda$addComponentsToPane$3$3::fieldInfos[2] = {
	{"failButton", "Ljavax/swing/JButton;", nullptr, $PUBLIC, $field(bug4449413$$Lambda$lambda$addComponentsToPane$3$3, failButton)},
	{}
};
$MethodInfo bug4449413$$Lambda$lambda$addComponentsToPane$3$3::methodInfos[3] = {
	{"<init>", "(Ljavax/swing/JButton;)V", nullptr, $PUBLIC, $method(static_cast<void(bug4449413$$Lambda$lambda$addComponentsToPane$3$3::*)($JButton*)>(&bug4449413$$Lambda$lambda$addComponentsToPane$3$3::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug4449413$$Lambda$lambda$addComponentsToPane$3$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug4449413$$Lambda$lambda$addComponentsToPane$3$3",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	fieldInfos,
	methodInfos
};
$Class* bug4449413$$Lambda$lambda$addComponentsToPane$3$3::load$($String* name, bool initialize) {
	$loadClass(bug4449413$$Lambda$lambda$addComponentsToPane$3$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug4449413$$Lambda$lambda$addComponentsToPane$3$3::class$ = nullptr;

$FieldInfo _bug4449413_FieldInfo_[] = {
	{"INSTRUCTIONS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug4449413, INSTRUCTIONS)},
	{"INSTRUCTIONS_ADDITIONS_METAL", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug4449413, INSTRUCTIONS_ADDITIONS_METAL)},
	{"latch", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug4449413, latch)},
	{"failed", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(bug4449413, failed)},
	{"defaultMetalTheme", "Ljavax/swing/plaf/metal/MetalTheme;", nullptr, $PRIVATE | $FINAL, $field(bug4449413, defaultMetalTheme)},
	{"oceanTheme", "Ljavax/swing/plaf/metal/MetalTheme;", nullptr, $PRIVATE | $FINAL, $field(bug4449413, oceanTheme)},
	{"instance", "Lbug4449413;", nullptr, $PRIVATE | $STATIC, $staticField(bug4449413, instance)},
	{}
};

$MethodInfo _bug4449413_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug4449413::*)()>(&bug4449413::init$))},
	{"addComponentsToPane", "()V", nullptr, $PUBLIC},
	{"createAndShowGUI", "()V", nullptr, $PRIVATE, $method(static_cast<void(bug4449413::*)()>(&bug4449413::createAndShowGUI))},
	{"createButton", "(II)Ljavax/swing/AbstractButton;", nullptr, $STATIC, $method(static_cast<$AbstractButton*(*)(int32_t,int32_t)>(&bug4449413::createButton))},
	{"isMetalLookAndFeel", "()Z", nullptr, 0},
	{"lambda$addComponentsToPane$2", "(Ljavax/swing/JPanel;Ljava/awt/event/ItemEvent;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(bug4449413::*)($JPanel*,$ItemEvent*)>(&bug4449413::lambda$addComponentsToPane$2))},
	{"lambda$addComponentsToPane$3", "(Ljavax/swing/JButton;Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($JButton*,$ActionEvent*)>(&bug4449413::lambda$addComponentsToPane$3))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&bug4449413::lambda$main$0))},
	{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&bug4449413::lambda$main$1))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug4449413::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug4449413_InnerClassesInfo_[] = {
	{"bug4449413$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4449413_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug4449413",
	"javax.swing.JFrame",
	nullptr,
	_bug4449413_FieldInfo_,
	_bug4449413_MethodInfo_,
	nullptr,
	nullptr,
	_bug4449413_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug4449413$1"
};

$Object* allocate$bug4449413($Class* clazz) {
	return $of($alloc(bug4449413));
}

$String* bug4449413::INSTRUCTIONS = nullptr;
$String* bug4449413::INSTRUCTIONS_ADDITIONS_METAL = nullptr;
$CountDownLatch* bug4449413::latch = nullptr;
$volatile(bool) bug4449413::failed = false;
bug4449413* bug4449413::instance = nullptr;

void bug4449413::init$() {
	$JFrame::init$();
	$set(this, defaultMetalTheme, $new($DefaultMetalTheme));
	$set(this, oceanTheme, $new($OceanTheme));
}

bool bug4449413::isMetalLookAndFeel() {
	return $instanceOf($MetalLookAndFeel, $($UIManager::getLookAndFeel()));
}

void bug4449413::main($StringArray* args) {
	$init(bug4449413);
	$useLocalCurrentObjectStackCache();
	$SwingUtilities::invokeLater(static_cast<$Runnable*>($$new(bug4449413$$Lambda$lambda$main$0)));
	$init($TimeUnit);
	bool timeoutHappened = !$nc(bug4449413::latch)->await(2, $TimeUnit::MINUTES);
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug4449413$$Lambda$lambda$main$1$1)));
	$nc($System::out)->println($$str({"Passed: "_s, $$str(!bug4449413::failed)}));
	if (timeoutHappened || bug4449413::failed) {
		$throwNew($RuntimeException, "Test failed!"_s);
	}
}

void bug4449413::createAndShowGUI() {
	$useLocalCurrentObjectStackCache();
	setTitle($($nc($of($($UIManager::getLookAndFeel())))->getClass()->getName()));
	addComponentsToPane();
	addWindowListener($$new($bug4449413$1, this));
	setLocationRelativeTo(nullptr);
	pack();
	setVisible(true);
}

void bug4449413::addComponentsToPane() {
	$useLocalCurrentObjectStackCache();
	setLayout($$new($BoxLayout, $(getContentPane()), $BoxLayout::Y_AXIS));
	$var($JPanel, testedPanel, $new($JPanel));
	testedPanel->setLayout($$new($GridLayout, 4, 6, 10, 15));
	for (int32_t k = 0; k <= 3; ++k) {
		for (int32_t j = 1; j >= 0; --j) {
			$var($AbstractButton, b, createButton(j, k));
			testedPanel->add(static_cast<$Component*>(b));
		}
	}
	add(static_cast<$Component*>(testedPanel));
	if (isMetalLookAndFeel()) {
		$var($JCheckBox, oceanThemeSwitch, $new($JCheckBox, "Use Ocean theme"_s, true));
		oceanThemeSwitch->addItemListener(static_cast<$ItemListener*>($$new(bug4449413$$Lambda$lambda$addComponentsToPane$2$2, this, testedPanel)));
		add(static_cast<$Component*>(oceanThemeSwitch));
	}
	$var($JTextArea, instructionArea, $new($JTextArea, isMetalLookAndFeel() ? $$str({bug4449413::INSTRUCTIONS, bug4449413::INSTRUCTIONS_ADDITIONS_METAL}) : bug4449413::INSTRUCTIONS));
	instructionArea->setEditable(false);
	instructionArea->setFocusable(false);
	instructionArea->setMargin($$new($Insets, 10, 10, 10, 10));
	add(static_cast<$Component*>(instructionArea));
	$var($JButton, passButton, $new($JButton, "Pass"_s));
	$var($JButton, failButton, $new($JButton, "Fail"_s));
	$var($ActionListener, actionListener, static_cast<$ActionListener*>($new(bug4449413$$Lambda$lambda$addComponentsToPane$3$3, failButton)));
	passButton->addActionListener(actionListener);
	failButton->addActionListener(actionListener);
	$var($JPanel, passFailPanel, $new($JPanel));
	passFailPanel->add(static_cast<$Component*>(passButton));
	passFailPanel->add(static_cast<$Component*>(failButton));
	add(static_cast<$Component*>(passFailPanel));
}

$AbstractButton* bug4449413::createButton(int32_t enabled, int32_t type) {
	$init(bug4449413);
	$useLocalCurrentObjectStackCache();

	$var($AbstractButton, var$0, nullptr)
	switch (type) {
	case 0:
		{
			$assign(var$0, $new($JRadioButton, "RadioButton"_s));
			break;
		}
	case 1:
		{
			$assign(var$0, $new($JCheckBox, "CheckBox"_s));
			break;
		}
	case 2:
		{
			$assign(var$0, $new($JRadioButtonMenuItem, "RBMenuItem"_s));
			break;
		}
	case 3:
		{
			$assign(var$0, $new($JCheckBoxMenuItem, "CBMenuItem"_s));
			break;
		}
	default:
		{
			$throwNew($IllegalArgumentException, "type should be in range of 0..3"_s);
		}
	}
	$var($AbstractButton, b, var$0);
	$nc(b)->setOpaque(true);
	$init($Color);
	b->setBackground($Color::black);
	b->setForeground($Color::white);
	b->setEnabled(enabled == 1);
	b->setSelected(true);
	return b;
}

void bug4449413::lambda$addComponentsToPane$3($JButton* failButton, $ActionEvent* e) {
	$init(bug4449413);
	bug4449413::failed = $equals($nc(e)->getSource(), failButton);
	$nc(bug4449413::latch)->countDown();
}

void bug4449413::lambda$addComponentsToPane$2($JPanel* testedPanel, $ItemEvent* e) {
	if ($nc(e)->getStateChange() == $ItemEvent::SELECTED) {
		$MetalLookAndFeel::setCurrentTheme(this->oceanTheme);
	} else {
		$MetalLookAndFeel::setCurrentTheme(this->defaultMetalTheme);
	}
	$SwingUtilities::updateComponentTreeUI(testedPanel);
}

void bug4449413::lambda$main$1() {
	$init(bug4449413);
	if (bug4449413::instance != nullptr) {
		$nc(bug4449413::instance)->dispose();
	}
}

void bug4449413::lambda$main$0() {
	$init(bug4449413);
	$assignStatic(bug4449413::instance, $new(bug4449413));
	$nc(bug4449413::instance)->createAndShowGUI();
}

void clinit$bug4449413($Class* class$) {
	$assignStatic(bug4449413::INSTRUCTIONS, "There are eight controls with black backgrounds.\nFour enabled (on the left side) and four disabled (on the right side)\ncheckboxes and radiobuttons.\n\n1. If at least one of the controls\' check marks is not visible:\n   the test fails.\n"_s);
	$assignStatic(bug4449413::INSTRUCTIONS_ADDITIONS_METAL, "\n2. Uncheck the \"Use Ocean Theme\" check box.\n   If now at least one of the controls\' check marks is not visible:\n   the test fails.\n"_s);
	$assignStatic(bug4449413::latch, $new($CountDownLatch, 1));
	bug4449413::failed = true;
}

bug4449413::bug4449413() {
}

$Class* bug4449413::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(bug4449413$$Lambda$lambda$main$0::classInfo$.name)) {
			return bug4449413$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals(bug4449413$$Lambda$lambda$main$1$1::classInfo$.name)) {
			return bug4449413$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
		if (name->equals(bug4449413$$Lambda$lambda$addComponentsToPane$2$2::classInfo$.name)) {
			return bug4449413$$Lambda$lambda$addComponentsToPane$2$2::load$(name, initialize);
		}
		if (name->equals(bug4449413$$Lambda$lambda$addComponentsToPane$3$3::classInfo$.name)) {
			return bug4449413$$Lambda$lambda$addComponentsToPane$3$3::load$(name, initialize);
		}
	}
	$loadClass(bug4449413, name, initialize, &_bug4449413_ClassInfo_, clinit$bug4449413, allocate$bug4449413);
	return class$;
}

$Class* bug4449413::class$ = nullptr;