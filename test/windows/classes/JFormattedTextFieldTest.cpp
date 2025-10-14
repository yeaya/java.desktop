#include <JFormattedTextFieldTest.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/GridBagConstraints.h>
#include <java/awt/GridBagLayout.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/Format.h>
#include <java/text/NumberFormat.h>
#include <java/util/EventObject.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFormattedTextField.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef HORIZONTAL

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $GridBagConstraints = ::java::awt::GridBagConstraints;
using $GridBagLayout = ::java::awt::GridBagLayout;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Window = ::java::awt::Window;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Format = ::java::text::Format;
using $NumberFormat = ::java::text::NumberFormat;
using $EventObject = ::java::util::EventObject;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JFormattedTextField = ::javax::swing::JFormattedTextField;
using $JFrame = ::javax::swing::JFrame;
using $JLabel = ::javax::swing::JLabel;
using $JPanel = ::javax::swing::JPanel;
using $JTextField = ::javax::swing::JTextField;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $JTextComponent = ::javax::swing::text::JTextComponent;

class JFormattedTextFieldTest$$Lambda$lambda$createUI$0 : public $Runnable {
	$class(JFormattedTextFieldTest$$Lambda$lambda$createUI$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$(JFormattedTextFieldTest* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$createUI$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JFormattedTextFieldTest$$Lambda$lambda$createUI$0>());
	}
	JFormattedTextFieldTest* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo JFormattedTextFieldTest$$Lambda$lambda$createUI$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(JFormattedTextFieldTest$$Lambda$lambda$createUI$0, inst$)},
	{}
};
$MethodInfo JFormattedTextFieldTest$$Lambda$lambda$createUI$0::methodInfos[3] = {
	{"<init>", "(LJFormattedTextFieldTest;)V", nullptr, $PUBLIC, $method(static_cast<void(JFormattedTextFieldTest$$Lambda$lambda$createUI$0::*)(JFormattedTextFieldTest*)>(&JFormattedTextFieldTest$$Lambda$lambda$createUI$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo JFormattedTextFieldTest$$Lambda$lambda$createUI$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"JFormattedTextFieldTest$$Lambda$lambda$createUI$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* JFormattedTextFieldTest$$Lambda$lambda$createUI$0::load$($String* name, bool initialize) {
	$loadClass(JFormattedTextFieldTest$$Lambda$lambda$createUI$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JFormattedTextFieldTest$$Lambda$lambda$createUI$0::class$ = nullptr;

$FieldInfo _JFormattedTextFieldTest_FieldInfo_[] = {
	{"layout", "Ljava/awt/GridBagLayout;", nullptr, $PRIVATE | $STATIC, $staticField(JFormattedTextFieldTest, layout)},
	{"mainControlPanel", "Ljavax/swing/JPanel;", nullptr, $PRIVATE | $STATIC, $staticField(JFormattedTextFieldTest, mainControlPanel)},
	{"resultButtonPanel", "Ljavax/swing/JPanel;", nullptr, $PRIVATE | $STATIC, $staticField(JFormattedTextFieldTest, resultButtonPanel)},
	{"instructionText", "Ljavax/swing/JLabel;", nullptr, $PRIVATE | $STATIC, $staticField(JFormattedTextFieldTest, instructionText)},
	{"passButton", "Ljavax/swing/JButton;", nullptr, $PRIVATE | $STATIC, $staticField(JFormattedTextFieldTest, passButton)},
	{"failButton", "Ljavax/swing/JButton;", nullptr, $PRIVATE | $STATIC, $staticField(JFormattedTextFieldTest, failButton)},
	{"mainFrame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(JFormattedTextFieldTest, mainFrame)},
	{}
};

$MethodInfo _JFormattedTextFieldTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JFormattedTextFieldTest::*)()>(&JFormattedTextFieldTest::init$)), "java.lang.Exception"},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"cleanUp", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&JFormattedTextFieldTest::cleanUp))},
	{"createUI", "()V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(JFormattedTextFieldTest::*)()>(&JFormattedTextFieldTest::createUI)), "java.lang.Exception"},
	{"lambda$createUI$0", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(JFormattedTextFieldTest::*)()>(&JFormattedTextFieldTest::lambda$createUI$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&JFormattedTextFieldTest::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _JFormattedTextFieldTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"JFormattedTextFieldTest",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	_JFormattedTextFieldTest_FieldInfo_,
	_JFormattedTextFieldTest_MethodInfo_
};

$Object* allocate$JFormattedTextFieldTest($Class* clazz) {
	return $of($alloc(JFormattedTextFieldTest));
}

$GridBagLayout* JFormattedTextFieldTest::layout = nullptr;
$JPanel* JFormattedTextFieldTest::mainControlPanel = nullptr;
$JPanel* JFormattedTextFieldTest::resultButtonPanel = nullptr;
$JLabel* JFormattedTextFieldTest::instructionText = nullptr;
$JButton* JFormattedTextFieldTest::passButton = nullptr;
$JButton* JFormattedTextFieldTest::failButton = nullptr;
$JFrame* JFormattedTextFieldTest::mainFrame = nullptr;

void JFormattedTextFieldTest::main($StringArray* args) {
	$init(JFormattedTextFieldTest);
	$var(JFormattedTextFieldTest, jFormattedTextFieldTest, $new(JFormattedTextFieldTest));
}

void JFormattedTextFieldTest::init$() {
	createUI();
}

void JFormattedTextFieldTest::createUI() {
	$UIManager::setLookAndFeel("com.sun.java.swing.plaf.windows.WindowsLookAndFeel"_s);
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(JFormattedTextFieldTest$$Lambda$lambda$createUI$0, this)));
}

void JFormattedTextFieldTest::actionPerformed($ActionEvent* evt) {
	if ($instanceOf($JButton, $($nc(evt)->getSource()))) {
		$var($JButton, btn, $cast($JButton, evt->getSource()));
		cleanUp();
		{
			$var($String, s4882$, $nc(btn)->getActionCommand());
			int32_t tmp4882$ = -1;
			switch ($nc(s4882$)->hashCode()) {
			case 0x0025D831:
				{
					if (s4882$->equals("Pass"_s)) {
						tmp4882$ = 0;
					}
					break;
				}
			case 0x00214B3E:
				{
					if (s4882$->equals("Fail"_s)) {
						tmp4882$ = 1;
					}
					break;
				}
			}
			switch (tmp4882$) {
			case 0:
				{
					break;
				}
			case 1:
				{
					$throwNew($AssertionError, $of("User Clicked Fail!"_s));
				}
			}
		}
	}
}

void JFormattedTextFieldTest::cleanUp() {
	$init(JFormattedTextFieldTest);
	$nc(JFormattedTextFieldTest::mainFrame)->dispose();
}

void JFormattedTextFieldTest::lambda$createUI$0() {
	$assignStatic(JFormattedTextFieldTest::mainFrame, $new($JFrame, "Window LAF JFormattedTextField Test"_s));
	$assignStatic(JFormattedTextFieldTest::layout, $new($GridBagLayout));
	$assignStatic(JFormattedTextFieldTest::mainControlPanel, $new($JPanel, static_cast<$LayoutManager*>(JFormattedTextFieldTest::layout)));
	$assignStatic(JFormattedTextFieldTest::resultButtonPanel, $new($JPanel, static_cast<$LayoutManager*>(JFormattedTextFieldTest::layout)));
	$var($GridBagConstraints, gbc, $new($GridBagConstraints));
	$var($String, instructions, "<html>INSTRUCTIONS:<br>Set Windows Theme to HighContrast#1.<br><br>(ControlPanel->Personalization->High Contrast#1)<br><br>If TextFiled colors are same test passes else failed.<br><br></html>"_s);
	$assignStatic(JFormattedTextFieldTest::instructionText, $new($JLabel));
	$nc(JFormattedTextFieldTest::instructionText)->setText(instructions);
	gbc->gridx = 0;
	gbc->gridy = 0;
	gbc->fill = $GridBagConstraints::HORIZONTAL;
	$nc(JFormattedTextFieldTest::mainControlPanel)->add(static_cast<$Component*>(JFormattedTextFieldTest::instructionText), $of(gbc));
	$assignStatic(JFormattedTextFieldTest::passButton, $new($JButton, "Pass"_s));
	$nc(JFormattedTextFieldTest::passButton)->setActionCommand("Pass"_s);
	$nc(JFormattedTextFieldTest::passButton)->addActionListener(this);
	$assignStatic(JFormattedTextFieldTest::failButton, $new($JButton, "Fail"_s));
	$nc(JFormattedTextFieldTest::failButton)->setActionCommand("Fail"_s);
	$nc(JFormattedTextFieldTest::failButton)->addActionListener(this);
	gbc->gridx = 0;
	gbc->gridy = 0;
	$nc(JFormattedTextFieldTest::resultButtonPanel)->add(static_cast<$Component*>(JFormattedTextFieldTest::passButton), $of(gbc));
	gbc->gridx = 1;
	gbc->gridy = 0;
	$nc(JFormattedTextFieldTest::resultButtonPanel)->add(static_cast<$Component*>(JFormattedTextFieldTest::failButton), $of(gbc));
	gbc->gridx = 3;
	gbc->gridy = 0;
	$nc(JFormattedTextFieldTest::resultButtonPanel)->add(static_cast<$Component*>($$new($JTextField, "12345"_s)), $of(gbc));
	$var($NumberFormat, format, $NumberFormat::getIntegerInstance());
	$nc(format)->setMaximumIntegerDigits(5);
	$var($JFormattedTextField, formatted, $new($JFormattedTextField, static_cast<$Format*>(format)));
	formatted->setText("67891"_s);
	gbc->gridx = 5;
	gbc->gridy = 0;
	$nc(JFormattedTextFieldTest::resultButtonPanel)->add(static_cast<$Component*>(formatted), $of(gbc));
	gbc->gridx = 0;
	gbc->gridy = 1;
	$nc(JFormattedTextFieldTest::mainControlPanel)->add(static_cast<$Component*>(JFormattedTextFieldTest::resultButtonPanel), $of(gbc));
	$nc(JFormattedTextFieldTest::mainFrame)->add(static_cast<$Component*>(JFormattedTextFieldTest::mainControlPanel));
	$nc(JFormattedTextFieldTest::mainFrame)->setSize(400, 200);
	$nc(JFormattedTextFieldTest::mainFrame)->setLocationRelativeTo(nullptr);
	$nc(JFormattedTextFieldTest::mainFrame)->setVisible(true);
}

JFormattedTextFieldTest::JFormattedTextFieldTest() {
}

$Class* JFormattedTextFieldTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(JFormattedTextFieldTest$$Lambda$lambda$createUI$0::classInfo$.name)) {
			return JFormattedTextFieldTest$$Lambda$lambda$createUI$0::load$(name, initialize);
		}
	}
	$loadClass(JFormattedTextFieldTest, name, initialize, &_JFormattedTextFieldTest_ClassInfo_, allocate$JFormattedTextFieldTest);
	return class$;
}

$Class* JFormattedTextFieldTest::class$ = nullptr;