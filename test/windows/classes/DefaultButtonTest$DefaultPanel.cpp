#include <DefaultButtonTest$DefaultPanel.h>

#include <DefaultButtonTest.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/event/ActionListener.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef CENTER
#undef NORTH
#undef SOUTH

using $DefaultButtonTest = ::DefaultButtonTest;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $ActionListener = ::java::awt::event::ActionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JButton = ::javax::swing::JButton;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $JRootPane = ::javax::swing::JRootPane;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JTextArea = ::javax::swing::JTextArea;
using $JTextComponent = ::javax::swing::text::JTextComponent;

$FieldInfo _DefaultButtonTest$DefaultPanel_FieldInfo_[] = {
	{"this$0", "LDefaultButtonTest;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultButtonTest$DefaultPanel, this$0)},
	{"combo", "Ljavax/swing/JComboBox;", nullptr, $PUBLIC, $field(DefaultButtonTest$DefaultPanel, combo)},
	{"combo2", "Ljavax/swing/JComboBox;", nullptr, $PUBLIC, $field(DefaultButtonTest$DefaultPanel, combo2)},
	{"okButton", "Ljavax/swing/JButton;", nullptr, $PRIVATE, $field(DefaultButtonTest$DefaultPanel, okButton)},
	{"cancelButton", "Ljavax/swing/JButton;", nullptr, $PRIVATE, $field(DefaultButtonTest$DefaultPanel, cancelButton)},
	{}
};

$MethodInfo _DefaultButtonTest$DefaultPanel_MethodInfo_[] = {
	{"<init>", "(LDefaultButtonTest;Ljavax/swing/JFrame;)V", nullptr, $PUBLIC, $method(static_cast<void(DefaultButtonTest$DefaultPanel::*)($DefaultButtonTest*,$JFrame*)>(&DefaultButtonTest$DefaultPanel::init$))},
	{"createButtonPanel", "(Ljavax/swing/JFrame;)Ljavax/swing/JPanel;", nullptr, $PRIVATE, $method(static_cast<$JPanel*(DefaultButtonTest$DefaultPanel::*)($JFrame*)>(&DefaultButtonTest$DefaultPanel::createButtonPanel))},
	{"createInfoPanel", "()Ljavax/swing/JScrollPane;", nullptr, $PRIVATE, $method(static_cast<$JScrollPane*(DefaultButtonTest$DefaultPanel::*)()>(&DefaultButtonTest$DefaultPanel::createInfoPanel))},
	{"createPanel", "()Ljavax/swing/JPanel;", nullptr, $PRIVATE, $method(static_cast<$JPanel*(DefaultButtonTest$DefaultPanel::*)()>(&DefaultButtonTest$DefaultPanel::createPanel))},
	{}
};

$InnerClassInfo _DefaultButtonTest$DefaultPanel_InnerClassesInfo_[] = {
	{"DefaultButtonTest$DefaultPanel", "DefaultButtonTest", "DefaultPanel", 0},
	{}
};

$ClassInfo _DefaultButtonTest$DefaultPanel_ClassInfo_ = {
	$ACC_SUPER,
	"DefaultButtonTest$DefaultPanel",
	"javax.swing.JPanel",
	nullptr,
	_DefaultButtonTest$DefaultPanel_FieldInfo_,
	_DefaultButtonTest$DefaultPanel_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultButtonTest$DefaultPanel_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"DefaultButtonTest"
};

$Object* allocate$DefaultButtonTest$DefaultPanel($Class* clazz) {
	return $of($alloc(DefaultButtonTest$DefaultPanel));
}

void DefaultButtonTest$DefaultPanel::init$($DefaultButtonTest* this$0, $JFrame* root) {
	$set(this, this$0, this$0);
	$JPanel::init$();
	$set(this, okButton, $new($JButton, "OK"_s));
	$set(this, cancelButton, $new($JButton, "Cancel"_s));
	setLayout($$new($BorderLayout));
	$init($BorderLayout);
	add($(static_cast<$Component*>(createPanel())), $of($BorderLayout::NORTH));
	add($(static_cast<$Component*>(createInfoPanel())), $of($BorderLayout::CENTER));
	add($(static_cast<$Component*>(createButtonPanel(root))), $of($BorderLayout::SOUTH));
}

$JPanel* DefaultButtonTest$DefaultPanel::createPanel() {
	$init($DefaultButtonTest);
	$set(this, combo, $new($JComboBox, $DefaultButtonTest::strData));
	$nc(this->combo)->addActionListener(this->this$0);
	$set(this, combo2, $new($JComboBox, $DefaultButtonTest::strData2));
	$nc(this->combo2)->setEditable(true);
	$nc(this->combo2)->addActionListener(this->this$0);
	$var($JPanel, panel, $new($JPanel));
	panel->add(static_cast<$Component*>(this->combo));
	panel->add(static_cast<$Component*>(this->combo2));
	return panel;
}

$JScrollPane* DefaultButtonTest$DefaultPanel::createInfoPanel() {
	$var($StringBuffer, txt, $new($StringBuffer, "Test for 4337071:\n"_s));
	txt->append("ENTER pressed in NON-EDITABLE combo box should be passed to the OK button.\n"_s);
	txt->append("For an EDITABLE combo box, the combo box should fire an action event."_s);
	txt->append("\n\nTest for 4515752:\n"_s);
	txt->append("ENTER on an EDITABLE combo box in which the contents has not changed\n"_s);
	txt->append("should be passed to the default button"_s);
	$var($JTextArea, text, $new($JTextArea, $(txt->toString())));
	text->setEditable(false);
	return $new($JScrollPane, text);
}

$JPanel* DefaultButtonTest$DefaultPanel::createButtonPanel($JFrame* frame) {
	$nc($($nc(frame)->getRootPane()))->setDefaultButton(this->okButton);
	$nc(this->okButton)->addActionListener(this->this$0);
	$var($JPanel, panel, $new($JPanel));
	panel->add(static_cast<$Component*>(this->okButton));
	panel->add(static_cast<$Component*>(this->cancelButton));
	return panel;
}

DefaultButtonTest$DefaultPanel::DefaultButtonTest$DefaultPanel() {
}

$Class* DefaultButtonTest$DefaultPanel::load$($String* name, bool initialize) {
	$loadClass(DefaultButtonTest$DefaultPanel, name, initialize, &_DefaultButtonTest$DefaultPanel_ClassInfo_, allocate$DefaultButtonTest$DefaultPanel);
	return class$;
}

$Class* DefaultButtonTest$DefaultPanel::class$ = nullptr;