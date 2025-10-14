#include <TitledBorder$1.h>

#include <TitledBorder$1$1.h>
#include <TitledBorder.h>
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
#include <java/io/PrintStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
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
#include <java/util/concurrent/CountDownLatch.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/BorderFactory.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/TitledBorder.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef HORIZONTAL

using $TitledBorder = ::TitledBorder;
using $TitledBorder$1$1 = ::TitledBorder$1$1;
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
using $PrintStream = ::java::io::PrintStream;
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
using $BorderFactory = ::javax::swing::BorderFactory;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $JTextArea = ::javax::swing::JTextArea;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $1TitledBorder = ::javax::swing::border::TitledBorder;
using $JTextComponent = ::javax::swing::text::JTextComponent;

class TitledBorder$1$$Lambda$lambda$run$0 : public $ActionListener {
	$class(TitledBorder$1$$Lambda$lambda$run$0, $NO_CLASS_INIT, $ActionListener)
public:
	void init$(TitledBorder$1* inst) {
		$set(this, inst$, inst);
	}
	virtual void actionPerformed($ActionEvent* e) override {
		$nc(inst$)->lambda$run$0(e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TitledBorder$1$$Lambda$lambda$run$0>());
	}
	TitledBorder$1* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TitledBorder$1$$Lambda$lambda$run$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TitledBorder$1$$Lambda$lambda$run$0, inst$)},
	{}
};
$MethodInfo TitledBorder$1$$Lambda$lambda$run$0::methodInfos[3] = {
	{"<init>", "(LTitledBorder$1;)V", nullptr, $PUBLIC, $method(static_cast<void(TitledBorder$1$$Lambda$lambda$run$0::*)(TitledBorder$1*)>(&TitledBorder$1$$Lambda$lambda$run$0::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TitledBorder$1$$Lambda$lambda$run$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"TitledBorder$1$$Lambda$lambda$run$0",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	fieldInfos,
	methodInfos
};
$Class* TitledBorder$1$$Lambda$lambda$run$0::load$($String* name, bool initialize) {
	$loadClass(TitledBorder$1$$Lambda$lambda$run$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TitledBorder$1$$Lambda$lambda$run$0::class$ = nullptr;

$FieldInfo _TitledBorder$1_FieldInfo_[] = {
	{"this$0", "LTitledBorder;", nullptr, $FINAL | $SYNTHETIC, $field(TitledBorder$1, this$0)},
	{}
};

$MethodInfo _TitledBorder$1_MethodInfo_[] = {
	{"<init>", "(LTitledBorder;)V", nullptr, 0, $method(static_cast<void(TitledBorder$1::*)($TitledBorder*)>(&TitledBorder$1::init$))},
	{"lambda$run$0", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(TitledBorder$1::*)($ActionEvent*)>(&TitledBorder$1::lambda$run$0))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TitledBorder$1_EnclosingMethodInfo_ = {
	"TitledBorder",
	"createUI",
	"()V"
};

$InnerClassInfo _TitledBorder$1_InnerClassesInfo_[] = {
	{"TitledBorder$1", nullptr, nullptr, 0},
	{"TitledBorder$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TitledBorder$1_ClassInfo_ = {
	$ACC_SUPER,
	"TitledBorder$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_TitledBorder$1_FieldInfo_,
	_TitledBorder$1_MethodInfo_,
	nullptr,
	&_TitledBorder$1_EnclosingMethodInfo_,
	_TitledBorder$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TitledBorder"
};

$Object* allocate$TitledBorder$1($Class* clazz) {
	return $of($alloc(TitledBorder$1));
}

void TitledBorder$1::init$($TitledBorder* this$0) {
	$set(this, this$0, this$0);
}

void TitledBorder$1::run() {
	$init($TitledBorder);
	$assignStatic($TitledBorder::mainFrame, $new($JFrame, "Window LAF TitledBorder Test"_s));
	$assignStatic($TitledBorder::layout, $new($GridBagLayout));
	$assignStatic($TitledBorder::mainControlPanel, $new($JPanel, static_cast<$LayoutManager*>($TitledBorder::layout)));
	$assignStatic($TitledBorder::resultButtonPanel, $new($JPanel, static_cast<$LayoutManager*>($TitledBorder::layout)));
	$var($GridBagConstraints, gbc, $new($GridBagConstraints));
	$var($String, instructions, "INSTRUCTIONS:\n set Windows Theme to HighContrast#1.\n (ControlPanel->Personalization->High Contrast#1)\n If Titled Border(Border Line) is visible then test passes else failed."_s);
	$assignStatic($TitledBorder::instructionTextArea, $new($JTextArea));
	$nc($TitledBorder::instructionTextArea)->setText(instructions);
	$nc($TitledBorder::instructionTextArea)->setEnabled(false);
	$init($Color);
	$nc($TitledBorder::instructionTextArea)->setDisabledTextColor($Color::black);
	$nc($TitledBorder::instructionTextArea)->setBackground($Color::white);
	gbc->gridx = 0;
	gbc->gridy = 0;
	gbc->fill = $GridBagConstraints::HORIZONTAL;
	$nc($TitledBorder::mainControlPanel)->add(static_cast<$Component*>($TitledBorder::instructionTextArea), $of(gbc));
	$nc($TitledBorder::mainControlPanel)->setBorder($($BorderFactory::createTitledBorder("Titled Border"_s)));
	$assignStatic($TitledBorder::passButton, $new($JButton, "Pass"_s));
	$nc($TitledBorder::passButton)->setActionCommand("Pass"_s);
	$nc($TitledBorder::passButton)->addActionListener(static_cast<$ActionListener*>($$new(TitledBorder$1$$Lambda$lambda$run$0, this)));
	$assignStatic($TitledBorder::failButton, $new($JButton, "Fail"_s));
	$nc($TitledBorder::failButton)->setActionCommand("Fail"_s);
	$nc($TitledBorder::failButton)->addActionListener($$new($TitledBorder$1$1, this));
	gbc->gridx = 0;
	gbc->gridy = 0;
	$nc($TitledBorder::resultButtonPanel)->add(static_cast<$Component*>($TitledBorder::passButton), $of(gbc));
	gbc->gridx = 1;
	gbc->gridy = 0;
	$nc($TitledBorder::resultButtonPanel)->add(static_cast<$Component*>($TitledBorder::failButton), $of(gbc));
	gbc->gridx = 0;
	gbc->gridy = 1;
	$nc($TitledBorder::mainControlPanel)->add(static_cast<$Component*>($TitledBorder::resultButtonPanel), $of(gbc));
	$nc($TitledBorder::mainFrame)->add(static_cast<$Component*>($TitledBorder::mainControlPanel));
	$nc($TitledBorder::mainFrame)->pack();
	$nc($TitledBorder::mainFrame)->setVisible(true);
}

void TitledBorder$1::lambda$run$0($ActionEvent* e) {
	$init($System);
	$nc($System::out)->println("Pass Button pressed!"_s);
	this->this$0->testResult = true;
	$init($TitledBorder);
	$nc($TitledBorder::mainFrame)->dispose();
	$nc(this->this$0->latch)->countDown();
}

TitledBorder$1::TitledBorder$1() {
}

$Class* TitledBorder$1::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(TitledBorder$1$$Lambda$lambda$run$0::classInfo$.name)) {
			return TitledBorder$1$$Lambda$lambda$run$0::load$(name, initialize);
		}
	}
	$loadClass(TitledBorder$1, name, initialize, &_TitledBorder$1_ClassInfo_, allocate$TitledBorder$1);
	return class$;
}

$Class* TitledBorder$1::class$ = nullptr;