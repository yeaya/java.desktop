#include <bug7107099$2.h>

#include <bug7107099.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <javax/swing/BoundedRangeModel.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $bug7107099 = ::bug7107099;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $BoundedRangeModel = ::javax::swing::BoundedRangeModel;
using $JComponent = ::javax::swing::JComponent;
using $JScrollBar = ::javax::swing::JScrollBar;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JTextArea = ::javax::swing::JTextArea;
using $JTextComponent = ::javax::swing::text::JTextComponent;

$MethodInfo _bug7107099$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug7107099$2::*)()>(&bug7107099$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug7107099$2_EnclosingMethodInfo_ = {
	"bug7107099",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug7107099$2_InnerClassesInfo_[] = {
	{"bug7107099$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug7107099$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug7107099$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug7107099$2_MethodInfo_,
	nullptr,
	&_bug7107099$2_EnclosingMethodInfo_,
	_bug7107099$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug7107099"
};

$Object* allocate$bug7107099$2($Class* clazz) {
	return $of($alloc(bug7107099$2));
}

void bug7107099$2::init$() {
}

void bug7107099$2::run() {
	$useLocalCurrentObjectStackCache();
	$init($bug7107099);
	$var($BoundedRangeModel, model, $nc($($nc($bug7107099::scrollPane)->getVerticalScrollBar()))->getModel());
	$bug7107099::value = $nc(model)->getValue();
	$bug7107099::min = model->getMinimum();
	$bug7107099::max = model->getMaximum();
	$bug7107099::extent = model->getExtent();
	$nc($bug7107099::textarea)->setText(nullptr);
	$nc($bug7107099::scrollPane)->setViewportView($bug7107099::textarea);
	$nc($bug7107099::textarea)->setText("after###1###\nafter###1###\nafter###1###\nafter###1###\nafter###1###\n"_s);
	$nc($bug7107099::textarea)->setCaretPosition(0);
}

bug7107099$2::bug7107099$2() {
}

$Class* bug7107099$2::load$($String* name, bool initialize) {
	$loadClass(bug7107099$2, name, initialize, &_bug7107099$2_ClassInfo_, allocate$bug7107099$2);
	return class$;
}

$Class* bug7107099$2::class$ = nullptr;