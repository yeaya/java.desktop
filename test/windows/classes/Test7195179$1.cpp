#include <Test7195179$1.h>

#include <Test7195179$1$1.h>
#include <Test7195179.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Window.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/GroupLayout$Alignment.h>
#include <javax/swing/GroupLayout$Group.h>
#include <javax/swing/GroupLayout$ParallelGroup.h>
#include <javax/swing/GroupLayout$SequentialGroup.h>
#include <javax/swing/GroupLayout.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/ListCellRenderer.h>
#include <jcpp.h>

#undef BASELINE
#undef DISPOSE_ON_CLOSE

using $Test7195179 = ::Test7195179;
using $Test7195179$1$1 = ::Test7195179$1$1;
using $IntegerArray = $Array<::java::lang::Integer>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $GroupLayout = ::javax::swing::GroupLayout;
using $GroupLayout$Alignment = ::javax::swing::GroupLayout$Alignment;
using $GroupLayout$Group = ::javax::swing::GroupLayout$Group;
using $GroupLayout$ParallelGroup = ::javax::swing::GroupLayout$ParallelGroup;
using $GroupLayout$SequentialGroup = ::javax::swing::GroupLayout$SequentialGroup;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JLabel = ::javax::swing::JLabel;
using $JPanel = ::javax::swing::JPanel;
using $ListCellRenderer = ::javax::swing::ListCellRenderer;

$MethodInfo _Test7195179$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Test7195179$1::*)()>(&Test7195179$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Test7195179$1_EnclosingMethodInfo_ = {
	"Test7195179",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _Test7195179$1_InnerClassesInfo_[] = {
	{"Test7195179$1", nullptr, nullptr, 0},
	{"Test7195179$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Test7195179$1_ClassInfo_ = {
	$ACC_SUPER,
	"Test7195179$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Test7195179$1_MethodInfo_,
	nullptr,
	&_Test7195179$1_EnclosingMethodInfo_,
	_Test7195179$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Test7195179"
};

$Object* allocate$Test7195179$1($Class* clazz) {
	return $of($alloc(Test7195179$1));
}

void Test7195179$1::init$() {
}

void Test7195179$1::run() {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($IntegerArray, items, $new($IntegerArray, {
				($Integer*)nullptr,
				$($Integer::valueOf(1)),
				$($Integer::valueOf(2)),
				$($Integer::valueOf(3))
			}));
			$var($JComboBox, combo, $new($JComboBox, items));
			$var($JLabel, label, $new($JLabel, "choose:"_s));
			$var($JPanel, panel, $new($JPanel));
			$var($GroupLayout, layout, $new($GroupLayout, panel));
			panel->setLayout(layout);
			label->setLabelFor(combo);
			combo->setSelectedIndex(0);
			combo->setRenderer($$new($Test7195179$1$1, this));
			layout->setAutoCreateContainerGaps(true);
			layout->setAutoCreateGaps(true);
			layout->setHorizontalGroup($($nc($($nc($(layout->createSequentialGroup()))->addGroup($($nc($(layout->createParallelGroup()))->addComponent(label)))))->addGroup($($nc($(layout->createParallelGroup()))->addComponent(combo)))));
			$init($GroupLayout$Alignment);
			layout->setVerticalGroup($($nc($(layout->createSequentialGroup()))->addGroup($($nc($($nc($(layout->createParallelGroup($GroupLayout$Alignment::BASELINE)))->addComponent(label)))->addComponent(combo)))));
			$init($Test7195179);
			$assignStatic($Test7195179::frame, $new($JFrame, $($of(this)->getClass()->getSimpleName())));
			$nc($Test7195179::frame)->add(static_cast<$Component*>(panel));
			$nc($Test7195179::frame)->setDefaultCloseOperation($JFrame::DISPOSE_ON_CLOSE);
			$nc($Test7195179::frame)->pack();
			$nc($Test7195179::frame)->setVisible(true);
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$init($Test7195179);
			if ($Test7195179::frame != nullptr) {
				$nc($Test7195179::frame)->dispose();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

Test7195179$1::Test7195179$1() {
}

$Class* Test7195179$1::load$($String* name, bool initialize) {
	$loadClass(Test7195179$1, name, initialize, &_Test7195179$1_ClassInfo_, allocate$Test7195179$1);
	return class$;
}

$Class* Test7195179$1::class$ = nullptr;