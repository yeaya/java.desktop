#include <bug4514858$Test.h>

#include <bug4514858$Test$1.h>
#include <bug4514858.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/event/ActionListener.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef CENTER
#undef EAST
#undef FAIL
#undef MAX_VALUE
#undef PASS
#undef SOUTH
#undef WEST

using $bug4514858$Test$1 = ::bug4514858$Test$1;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $ActionListener = ::java::awt::event::ActionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JTextArea = ::javax::swing::JTextArea;
using $JTextComponent = ::javax::swing::text::JTextComponent;

$FieldInfo _bug4514858$Test_FieldInfo_[] = {
	{"pass", "Z", nullptr, $PRIVATE, $field(bug4514858$Test, pass$)},
	{}
};

$MethodInfo _bug4514858$Test_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug4514858$Test::*)()>(&bug4514858$Test::init$))},
	{"createTestFrame", "(Ljava/lang/String;Ljava/awt/Component;Ljava/lang/String;I)Ljavax/swing/JFrame;", nullptr, 0},
	{"pass", "()V", nullptr, $SYNCHRONIZED},
	{"waitTestResult", "()V", nullptr, $SYNCHRONIZED, nullptr, "java.lang.InterruptedException"},
	{}
};

$InnerClassInfo _bug4514858$Test_InnerClassesInfo_[] = {
	{"bug4514858$Test", "bug4514858", "Test", $STATIC},
	{"bug4514858$Test$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4514858$Test_ClassInfo_ = {
	$ACC_SUPER,
	"bug4514858$Test",
	"java.lang.Object",
	nullptr,
	_bug4514858$Test_FieldInfo_,
	_bug4514858$Test_MethodInfo_,
	nullptr,
	nullptr,
	_bug4514858$Test_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4514858"
};

$Object* allocate$bug4514858$Test($Class* clazz) {
	return $of($alloc(bug4514858$Test));
}

void bug4514858$Test::init$() {
}

$JFrame* bug4514858$Test::createTestFrame($String* name, $Component* topComponent, $String* instructions, int32_t instrHeight) {
	$useLocalCurrentObjectStackCache();
	$var($String, PASS, "Pass"_s);
	$var($String, FAIL, "Fail"_s);
	$var($JFrame, frame, $new($JFrame, name));
	frame->setLayout($$new($BorderLayout));
	$var($JPanel, testButtonsPanel, $new($JPanel));
	testButtonsPanel->setMaximumSize($$new($Dimension, $Integer::MAX_VALUE, 20));
	$var($ActionListener, btnAL, $new($bug4514858$Test$1, this));
	$var($JButton, passBtn, $new($JButton, PASS));
	passBtn->addActionListener(btnAL);
	passBtn->setActionCommand(PASS);
	$var($JButton, failBtn, $new($JButton, FAIL));
	failBtn->addActionListener(btnAL);
	failBtn->setActionCommand(FAIL);
	$init($BorderLayout);
	testButtonsPanel->add($BorderLayout::WEST, static_cast<$Component*>(passBtn));
	testButtonsPanel->add($BorderLayout::EAST, static_cast<$Component*>(failBtn));
	$var($JTextArea, instrText, $new($JTextArea));
	instrText->setLineWrap(true);
	instrText->setEditable(false);
	$var($JScrollPane, instrScrollPane, $new($JScrollPane, instrText));
	instrScrollPane->setMaximumSize($$new($Dimension, $Integer::MAX_VALUE, instrHeight));
	instrText->append(instructions);
	$var($JPanel, servicePanel, $new($JPanel));
	servicePanel->setLayout($$new($BorderLayout));
	if (topComponent == nullptr) {
		frame->add($BorderLayout::CENTER, static_cast<$Component*>(instrScrollPane));
	} else {
		servicePanel->add($BorderLayout::CENTER, static_cast<$Component*>(instrScrollPane));
		frame->add($BorderLayout::CENTER, topComponent);
	}
	servicePanel->add($BorderLayout::SOUTH, static_cast<$Component*>(testButtonsPanel));
	frame->add($BorderLayout::SOUTH, static_cast<$Component*>(servicePanel));
	return frame;
}

void bug4514858$Test::pass() {
	$synchronized(this) {
		this->pass$ = true;
		$of(this)->notifyAll();
	}
}

void bug4514858$Test::waitTestResult() {
	$synchronized(this) {
		while (!this->pass$) {
			$of(this)->wait();
		}
	}
}

bug4514858$Test::bug4514858$Test() {
}

$Class* bug4514858$Test::load$($String* name, bool initialize) {
	$loadClass(bug4514858$Test, name, initialize, &_bug4514858$Test_ClassInfo_, allocate$bug4514858$Test);
	return class$;
}

$Class* bug4514858$Test::class$ = nullptr;