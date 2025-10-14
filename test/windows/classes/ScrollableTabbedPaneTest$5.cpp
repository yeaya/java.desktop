#include <ScrollableTabbedPaneTest$5.h>

#include <ScrollableTabbedPaneTest.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTabbedPane.h>
#include <jcpp.h>

using $ScrollableTabbedPaneTest = ::ScrollableTabbedPaneTest;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JComponent = ::javax::swing::JComponent;
using $JPanel = ::javax::swing::JPanel;
using $JTabbedPane = ::javax::swing::JTabbedPane;

$FieldInfo _ScrollableTabbedPaneTest$5_FieldInfo_[] = {
	{"val$shortLAF", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(ScrollableTabbedPaneTest$5, val$shortLAF)},
	{}
};

$MethodInfo _ScrollableTabbedPaneTest$5_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", "()V", 0, $method(static_cast<void(ScrollableTabbedPaneTest$5::*)($String*)>(&ScrollableTabbedPaneTest$5::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ScrollableTabbedPaneTest$5_EnclosingMethodInfo_ = {
	"ScrollableTabbedPaneTest",
	"runTestCase",
	"(Ljava/lang/String;)V"
};

$InnerClassInfo _ScrollableTabbedPaneTest$5_InnerClassesInfo_[] = {
	{"ScrollableTabbedPaneTest$5", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ScrollableTabbedPaneTest$5_ClassInfo_ = {
	$ACC_SUPER,
	"ScrollableTabbedPaneTest$5",
	"java.lang.Object",
	"java.lang.Runnable",
	_ScrollableTabbedPaneTest$5_FieldInfo_,
	_ScrollableTabbedPaneTest$5_MethodInfo_,
	nullptr,
	&_ScrollableTabbedPaneTest$5_EnclosingMethodInfo_,
	_ScrollableTabbedPaneTest$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ScrollableTabbedPaneTest"
};

$Object* allocate$ScrollableTabbedPaneTest$5($Class* clazz) {
	return $of($alloc(ScrollableTabbedPaneTest$5));
}

void ScrollableTabbedPaneTest$5::init$($String* val$shortLAF) {
	$set(this, val$shortLAF, val$shortLAF);
}

void ScrollableTabbedPaneTest$5::run() {
	int32_t i = 0;
	int32_t value = 0;
	do {
		$var($String, title, $str({"Tab"_s, $$str((i + 1))}));
		$init($ScrollableTabbedPaneTest);
		$nc($ScrollableTabbedPaneTest::pane)->addTab(title, $$new($JPanel));
		int32_t tempValue = $nc($($nc($ScrollableTabbedPaneTest::pane)->getMinimumSize()))->height;
		if (value == 0) {
			value = tempValue;
		}
		if (value != tempValue) {
			$var($String, error, $str({"["_s, this->val$shortLAF, "]: [Error]: TabbedScrollPane fails"_s}));
			$plusAssignStatic($ScrollableTabbedPaneTest::errorString, error);
		}
		++i;
	} while (i < 10);
}

ScrollableTabbedPaneTest$5::ScrollableTabbedPaneTest$5() {
}

$Class* ScrollableTabbedPaneTest$5::load$($String* name, bool initialize) {
	$loadClass(ScrollableTabbedPaneTest$5, name, initialize, &_ScrollableTabbedPaneTest$5_ClassInfo_, allocate$ScrollableTabbedPaneTest$5);
	return class$;
}

$Class* ScrollableTabbedPaneTest$5::class$ = nullptr;