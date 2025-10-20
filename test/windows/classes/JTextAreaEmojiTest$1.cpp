#include <JTextAreaEmojiTest$1.h>

#include <JTextAreaEmojiTest.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/GridBagConstraints.h>
#include <java/awt/GridBagLayout.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionListener.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/BorderFactory.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef HORIZONTAL

using $JTextAreaEmojiTest = ::JTextAreaEmojiTest;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $GridBagConstraints = ::java::awt::GridBagConstraints;
using $GridBagLayout = ::java::awt::GridBagLayout;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Window = ::java::awt::Window;
using $ActionListener = ::java::awt::event::ActionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $AbstractButton = ::javax::swing::AbstractButton;
using $BorderFactory = ::javax::swing::BorderFactory;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $JTextArea = ::javax::swing::JTextArea;
using $Border = ::javax::swing::border::Border;
using $JTextComponent = ::javax::swing::text::JTextComponent;

$FieldInfo _JTextAreaEmojiTest$1_FieldInfo_[] = {
	{"this$0", "LJTextAreaEmojiTest;", nullptr, $FINAL | $SYNTHETIC, $field(JTextAreaEmojiTest$1, this$0)},
	{}
};

$MethodInfo _JTextAreaEmojiTest$1_MethodInfo_[] = {
	{"<init>", "(LJTextAreaEmojiTest;)V", nullptr, 0, $method(static_cast<void(JTextAreaEmojiTest$1::*)($JTextAreaEmojiTest*)>(&JTextAreaEmojiTest$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JTextAreaEmojiTest$1_EnclosingMethodInfo_ = {
	"JTextAreaEmojiTest",
	"createControlPanelUI",
	"()V"
};

$InnerClassInfo _JTextAreaEmojiTest$1_InnerClassesInfo_[] = {
	{"JTextAreaEmojiTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JTextAreaEmojiTest$1_ClassInfo_ = {
	$ACC_SUPER,
	"JTextAreaEmojiTest$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_JTextAreaEmojiTest$1_FieldInfo_,
	_JTextAreaEmojiTest$1_MethodInfo_,
	nullptr,
	&_JTextAreaEmojiTest$1_EnclosingMethodInfo_,
	_JTextAreaEmojiTest$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"JTextAreaEmojiTest"
};

$Object* allocate$JTextAreaEmojiTest$1($Class* clazz) {
	return $of($alloc(JTextAreaEmojiTest$1));
}

void JTextAreaEmojiTest$1::init$($JTextAreaEmojiTest* this$0) {
	$set(this, this$0, this$0);
}

void JTextAreaEmojiTest$1::run() {
	$useLocalCurrentObjectStackCache();
	$init($JTextAreaEmojiTest);
	$assignStatic($JTextAreaEmojiTest::layout, $new($GridBagLayout));
	$assignStatic($JTextAreaEmojiTest::mainControlPanel, $new($JPanel, static_cast<$LayoutManager*>($JTextAreaEmojiTest::layout)));
	$assignStatic($JTextAreaEmojiTest::instructionPanel, $new($JPanel, static_cast<$LayoutManager*>($JTextAreaEmojiTest::layout)));
	$assignStatic($JTextAreaEmojiTest::resultButtonPanel, $new($JPanel, static_cast<$LayoutManager*>($JTextAreaEmojiTest::layout)));
	$assignStatic($JTextAreaEmojiTest::textAreaPanel, $new($JPanel, static_cast<$LayoutManager*>($JTextAreaEmojiTest::layout)));
	$assignStatic($JTextAreaEmojiTest::controlPanel, $new($JPanel, static_cast<$LayoutManager*>($JTextAreaEmojiTest::layout)));
	$var($GridBagConstraints, gbc, $new($GridBagConstraints));
	$var($String, instructions, "1) Text Area size should be zero\n2) Select one emoji from Character Viewer\n3) If Text Area size increases displayingBlank or supported emoji for default font, click pass\n4) Else press fail"_s);
	$assignStatic($JTextAreaEmojiTest::instructionTextArea, $new($JTextArea));
	$nc($JTextAreaEmojiTest::instructionTextArea)->setText(instructions);
	$nc($JTextAreaEmojiTest::instructionTextArea)->setEnabled(false);
	$init($Color);
	$nc($JTextAreaEmojiTest::instructionTextArea)->setDisabledTextColor($Color::black);
	$nc($JTextAreaEmojiTest::instructionTextArea)->setBackground($Color::white);
	$nc($JTextAreaEmojiTest::instructionTextArea)->setBorder($($BorderFactory::createLineBorder($Color::black)));
	gbc->gridx = 0;
	gbc->gridy = 0;
	gbc->fill = $GridBagConstraints::HORIZONTAL;
	$nc($JTextAreaEmojiTest::instructionPanel)->add(static_cast<$Component*>($JTextAreaEmojiTest::instructionTextArea), $of(gbc));
	$assignStatic($JTextAreaEmojiTest::emojiTextArea, $new($JTextArea));
	$nc($JTextAreaEmojiTest::emojiTextArea)->setEnabled(true);
	$nc($JTextAreaEmojiTest::emojiTextArea)->setDisabledTextColor($Color::black);
	$nc($JTextAreaEmojiTest::emojiTextArea)->setBackground($Color::white);
	$nc($JTextAreaEmojiTest::emojiTextArea)->setBorder($($BorderFactory::createLineBorder($Color::black)));
	gbc->gridx = 0;
	gbc->gridy = 1;
	gbc->fill = $GridBagConstraints::HORIZONTAL;
	$nc($JTextAreaEmojiTest::textAreaPanel)->add(static_cast<$Component*>($JTextAreaEmojiTest::emojiTextArea), $of(gbc));
	$assignStatic($JTextAreaEmojiTest::passButton, $new($JButton, "Pass"_s));
	$nc($JTextAreaEmojiTest::passButton)->setActionCommand("Pass"_s);
	$nc($JTextAreaEmojiTest::passButton)->addActionListener(this->this$0);
	$assignStatic($JTextAreaEmojiTest::failButton, $new($JButton, "Fail"_s));
	$nc($JTextAreaEmojiTest::failButton)->setActionCommand("Fail"_s);
	$nc($JTextAreaEmojiTest::failButton)->addActionListener(this->this$0);
	gbc->gridx = 0;
	gbc->gridy = 0;
	$nc($JTextAreaEmojiTest::resultButtonPanel)->add(static_cast<$Component*>($JTextAreaEmojiTest::passButton), $of(gbc));
	gbc->gridx = 1;
	gbc->gridy = 0;
	$nc($JTextAreaEmojiTest::resultButtonPanel)->add(static_cast<$Component*>($JTextAreaEmojiTest::failButton), $of(gbc));
	gbc->gridx = 0;
	gbc->gridy = 0;
	$nc($JTextAreaEmojiTest::mainControlPanel)->add(static_cast<$Component*>($JTextAreaEmojiTest::instructionPanel), $of(gbc));
	gbc->gridx = 0;
	gbc->gridy = 1;
	$nc($JTextAreaEmojiTest::mainControlPanel)->add(static_cast<$Component*>($JTextAreaEmojiTest::textAreaPanel), $of(gbc));
	gbc->gridx = 0;
	gbc->gridy = 2;
	$nc($JTextAreaEmojiTest::mainControlPanel)->add(static_cast<$Component*>($JTextAreaEmojiTest::resultButtonPanel), $of(gbc));
	$nc($JTextAreaEmojiTest::mainControlPanel)->add(static_cast<$Component*>($JTextAreaEmojiTest::controlPanel), $of(gbc));
	$assignStatic($JTextAreaEmojiTest::mainFrame, $new($JFrame, "Control Panel"_s));
	$nc($JTextAreaEmojiTest::mainFrame)->add(static_cast<$Component*>($JTextAreaEmojiTest::mainControlPanel));
	$nc($JTextAreaEmojiTest::mainFrame)->pack();
	$nc($JTextAreaEmojiTest::mainFrame)->setDefaultCloseOperation(3);
	$nc($JTextAreaEmojiTest::mainFrame)->setVisible(true);
}

JTextAreaEmojiTest$1::JTextAreaEmojiTest$1() {
}

$Class* JTextAreaEmojiTest$1::load$($String* name, bool initialize) {
	$loadClass(JTextAreaEmojiTest$1, name, initialize, &_JTextAreaEmojiTest$1_ClassInfo_, allocate$JTextAreaEmojiTest$1);
	return class$;
}

$Class* JTextAreaEmojiTest$1::class$ = nullptr;