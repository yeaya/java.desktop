#include <JColorChooserTest$1.h>

#include <JColorChooserTest$1$1.h>
#include <JColorChooserTest.h>
#include <java/awt/Color.h>
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
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JColorChooser.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/EmptyBorder.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef BLUE
#undef HORIZONTAL

using $JColorChooserTest = ::JColorChooserTest;
using $JColorChooserTest$1$1 = ::JColorChooserTest$1$1;
using $Color = ::java::awt::Color;
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
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
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
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JButton = ::javax::swing::JButton;
using $JColorChooser = ::javax::swing::JColorChooser;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $JTextArea = ::javax::swing::JTextArea;
using $UIManager = ::javax::swing::UIManager;
using $EmptyBorder = ::javax::swing::border::EmptyBorder;
using $JTextComponent = ::javax::swing::text::JTextComponent;

class JColorChooserTest$1$$Lambda$lambda$run$0 : public $ActionListener {
	$class(JColorChooserTest$1$$Lambda$lambda$run$0, $NO_CLASS_INIT, $ActionListener)
public:
	void init$(JColorChooserTest$1* inst) {
		$set(this, inst$, inst);
	}
	virtual void actionPerformed($ActionEvent* e) override {
		$nc(inst$)->lambda$run$0(e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JColorChooserTest$1$$Lambda$lambda$run$0>());
	}
	JColorChooserTest$1* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo JColorChooserTest$1$$Lambda$lambda$run$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(JColorChooserTest$1$$Lambda$lambda$run$0, inst$)},
	{}
};
$MethodInfo JColorChooserTest$1$$Lambda$lambda$run$0::methodInfos[3] = {
	{"<init>", "(LJColorChooserTest$1;)V", nullptr, $PUBLIC, $method(static_cast<void(JColorChooserTest$1$$Lambda$lambda$run$0::*)(JColorChooserTest$1*)>(&JColorChooserTest$1$$Lambda$lambda$run$0::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo JColorChooserTest$1$$Lambda$lambda$run$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"JColorChooserTest$1$$Lambda$lambda$run$0",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	fieldInfos,
	methodInfos
};
$Class* JColorChooserTest$1$$Lambda$lambda$run$0::load$($String* name, bool initialize) {
	$loadClass(JColorChooserTest$1$$Lambda$lambda$run$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JColorChooserTest$1$$Lambda$lambda$run$0::class$ = nullptr;

$FieldInfo _JColorChooserTest$1_FieldInfo_[] = {
	{"this$0", "LJColorChooserTest;", nullptr, $FINAL | $SYNTHETIC, $field(JColorChooserTest$1, this$0)},
	{}
};

$MethodInfo _JColorChooserTest$1_MethodInfo_[] = {
	{"<init>", "(LJColorChooserTest;)V", nullptr, 0, $method(static_cast<void(JColorChooserTest$1::*)($JColorChooserTest*)>(&JColorChooserTest$1::init$))},
	{"lambda$run$0", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(JColorChooserTest$1::*)($ActionEvent*)>(&JColorChooserTest$1::lambda$run$0))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JColorChooserTest$1_EnclosingMethodInfo_ = {
	"JColorChooserTest",
	"createUI",
	"()V"
};

$InnerClassInfo _JColorChooserTest$1_InnerClassesInfo_[] = {
	{"JColorChooserTest$1", nullptr, nullptr, 0},
	{"JColorChooserTest$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JColorChooserTest$1_ClassInfo_ = {
	$ACC_SUPER,
	"JColorChooserTest$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_JColorChooserTest$1_FieldInfo_,
	_JColorChooserTest$1_MethodInfo_,
	nullptr,
	&_JColorChooserTest$1_EnclosingMethodInfo_,
	_JColorChooserTest$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"JColorChooserTest"
};

$Object* allocate$JColorChooserTest$1($Class* clazz) {
	return $of($alloc(JColorChooserTest$1));
}

void JColorChooserTest$1::init$($JColorChooserTest* this$0) {
	$set(this, this$0, this$0);
}

void JColorChooserTest$1::run() {
	$init($JColorChooserTest);
	$assignStatic($JColorChooserTest::mainFrame, $new($JFrame, "JColorChooser Test"_s));
	$assignStatic($JColorChooserTest::layout, $new($GridBagLayout));
	$assignStatic($JColorChooserTest::mainControlPanel, $new($JPanel, static_cast<$LayoutManager*>($JColorChooserTest::layout)));
	$assignStatic($JColorChooserTest::resultButtonPanel, $new($JPanel, static_cast<$LayoutManager*>($JColorChooserTest::layout)));
	$var($GridBagConstraints, gbc, $new($GridBagConstraints));
	$var($String, instructions, "INSTRUCTIONS:\n Select HSV, HSL, RGB or CMYK tab.\n If able to shift and view JColorChooser tabs\n then click Pass, else Fail."_s);
	$assignStatic($JColorChooserTest::instructionTextArea, $new($JTextArea));
	$nc($JColorChooserTest::instructionTextArea)->setText(instructions);
	$nc($JColorChooserTest::instructionTextArea)->setEnabled(true);
	gbc->gridx = 0;
	gbc->gridy = 0;
	gbc->fill = $GridBagConstraints::HORIZONTAL;
	$nc($JColorChooserTest::mainControlPanel)->add(static_cast<$Component*>($JColorChooserTest::instructionTextArea), $of(gbc));
	$UIManager::put("FormattedTextField.border"_s, $$new($EmptyBorder, 0, 10, 0, 10));
	$init($Color);
	$assignStatic($JColorChooserTest::colorChooser, $new($JColorChooser, $Color::BLUE));
	gbc->gridx = 0;
	gbc->gridy = 1;
	$nc($JColorChooserTest::mainControlPanel)->add(static_cast<$Component*>($JColorChooserTest::colorChooser), $of(gbc));
	$assignStatic($JColorChooserTest::passButton, $new($JButton, "Pass"_s));
	$nc($JColorChooserTest::passButton)->setActionCommand("Pass"_s);
	$nc($JColorChooserTest::passButton)->addActionListener(static_cast<$ActionListener*>($$new(JColorChooserTest$1$$Lambda$lambda$run$0, this)));
	$assignStatic($JColorChooserTest::failButton, $new($JButton, "Fail"_s));
	$nc($JColorChooserTest::failButton)->setActionCommand("Fail"_s);
	$nc($JColorChooserTest::failButton)->addActionListener($$new($JColorChooserTest$1$1, this));
	gbc->gridx = 0;
	gbc->gridy = 0;
	$nc($JColorChooserTest::resultButtonPanel)->add(static_cast<$Component*>($JColorChooserTest::passButton), $of(gbc));
	gbc->gridx = 1;
	gbc->gridy = 0;
	$nc($JColorChooserTest::resultButtonPanel)->add(static_cast<$Component*>($JColorChooserTest::failButton), $of(gbc));
	gbc->gridx = 0;
	gbc->gridy = 2;
	$nc($JColorChooserTest::mainControlPanel)->add(static_cast<$Component*>($JColorChooserTest::resultButtonPanel), $of(gbc));
	$nc($JColorChooserTest::mainFrame)->add(static_cast<$Component*>($JColorChooserTest::mainControlPanel));
	$nc($JColorChooserTest::mainFrame)->pack();
	$nc($JColorChooserTest::mainFrame)->setVisible(true);
}

void JColorChooserTest$1::lambda$run$0($ActionEvent* e) {
	this->this$0->testResult = true;
	$init($JColorChooserTest);
	$nc($JColorChooserTest::mainFrame)->dispose();
	$nc(this->this$0->latch)->countDown();
}

JColorChooserTest$1::JColorChooserTest$1() {
}

$Class* JColorChooserTest$1::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(JColorChooserTest$1$$Lambda$lambda$run$0::classInfo$.name)) {
			return JColorChooserTest$1$$Lambda$lambda$run$0::load$(name, initialize);
		}
	}
	$loadClass(JColorChooserTest$1, name, initialize, &_JColorChooserTest$1_ClassInfo_, allocate$JColorChooserTest$1);
	return class$;
}

$Class* JColorChooserTest$1::class$ = nullptr;