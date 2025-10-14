#include <bug8079640.h>

#include <bug8079640$1.h>
#include <bug8079640$2.h>
#include <bug8079640$3.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Window.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/GroupLayout$Alignment.h>
#include <javax/swing/GroupLayout$Group.h>
#include <javax/swing/GroupLayout$ParallelGroup.h>
#include <javax/swing/GroupLayout$SequentialGroup.h>
#include <javax/swing/GroupLayout.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/LayoutStyle$ComponentPlacement.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef CENTER
#undef LEADING
#undef RELATED

using $bug8079640$1 = ::bug8079640$1;
using $bug8079640$2 = ::bug8079640$2;
using $bug8079640$3 = ::bug8079640$3;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Window = ::java::awt::Window;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $GroupLayout = ::javax::swing::GroupLayout;
using $GroupLayout$Alignment = ::javax::swing::GroupLayout$Alignment;
using $GroupLayout$Group = ::javax::swing::GroupLayout$Group;
using $GroupLayout$ParallelGroup = ::javax::swing::GroupLayout$ParallelGroup;
using $GroupLayout$SequentialGroup = ::javax::swing::GroupLayout$SequentialGroup;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JLabel = ::javax::swing::JLabel;
using $JPanel = ::javax::swing::JPanel;
using $JScrollPane = ::javax::swing::JScrollPane;
using $LayoutStyle$ComponentPlacement = ::javax::swing::LayoutStyle$ComponentPlacement;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$FieldInfo _bug8079640_FieldInfo_[] = {
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(bug8079640, frame)},
	{"comp2", "Ljavax/swing/JComponent;", nullptr, $PRIVATE | $STATIC, $staticField(bug8079640, comp2)},
	{}
};

$MethodInfo _bug8079640_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8079640::*)()>(&bug8079640::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug8079640::main)), "java.lang.Exception"},
	{"setup", "(Ljavax/swing/JFrame;)V", nullptr, $STATIC, $method(static_cast<void(*)($JFrame*)>(&bug8079640::setup))},
	{"test", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug8079640::test)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug8079640_InnerClassesInfo_[] = {
	{"bug8079640$3", nullptr, nullptr, 0},
	{"bug8079640$2", nullptr, nullptr, 0},
	{"bug8079640$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8079640_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug8079640",
	"java.lang.Object",
	nullptr,
	_bug8079640_FieldInfo_,
	_bug8079640_MethodInfo_,
	nullptr,
	nullptr,
	_bug8079640_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug8079640$3,bug8079640$2,bug8079640$1"
};

$Object* allocate$bug8079640($Class* clazz) {
	return $of($alloc(bug8079640));
}

$JFrame* bug8079640::frame = nullptr;
$JComponent* bug8079640::comp2 = nullptr;

void bug8079640::init$() {
}

void bug8079640::main($StringArray* args) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			$SwingUtilities::invokeAndWait($$new($bug8079640$1));
			test();
			$init($System);
			$nc($System::out)->println("ok"_s);
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$SwingUtilities::invokeLater($$new($bug8079640$2));
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void bug8079640::test() {
	$SwingUtilities::invokeAndWait($$new($bug8079640$3));
}

void bug8079640::setup($JFrame* frame) {
	$var($JPanel, panel, $new($JPanel));
	$var($JComponent, comp1, $new($JLabel, "Test Label 1"_s));
	comp1->setMinimumSize($$new($Dimension, 1000, 0x00009C40));
	comp1->setPreferredSize($$new($Dimension, 1000, 0x00009C40));
	$var($JScrollPane, scroll, $new($JScrollPane, comp1));
	$init(bug8079640);
	$assignStatic(bug8079640::comp2, $new($JLabel, "Test Label 2"_s));
	$var($GroupLayout, layout, $new($GroupLayout, panel));
	$init($GroupLayout$Alignment);
	layout->setHorizontalGroup($($nc($($nc($(layout->createParallelGroup($GroupLayout$Alignment::LEADING)))->addComponent(scroll)))->addComponent(bug8079640::comp2)));
	$init($LayoutStyle$ComponentPlacement);
	layout->setVerticalGroup($($nc($($nc($($nc($(layout->createSequentialGroup()))->addComponent(scroll)))->addPreferredGap($LayoutStyle$ComponentPlacement::RELATED)))->addComponent(bug8079640::comp2)));
	panel->setLayout(layout);
	$init($BorderLayout);
	$nc($($nc(frame)->getContentPane()))->add(static_cast<$Component*>(panel), $of($BorderLayout::CENTER));
	frame->setSize(800, 600);
}

bug8079640::bug8079640() {
}

$Class* bug8079640::load$($String* name, bool initialize) {
	$loadClass(bug8079640, name, initialize, &_bug8079640_ClassInfo_, allocate$bug8079640);
	return class$;
}

$Class* bug8079640::class$ = nullptr;