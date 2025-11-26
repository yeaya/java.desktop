#include <bug6913768$1.h>

#include <bug6913768.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JTable.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $bug6913768 = ::bug6913768;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JTable = ::javax::swing::JTable;

$MethodInfo _bug6913768$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6913768$1::*)()>(&bug6913768$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6913768$1_EnclosingMethodInfo_ = {
	"bug6913768",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6913768$1_InnerClassesInfo_[] = {
	{"bug6913768$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6913768$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6913768$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6913768$1_MethodInfo_,
	nullptr,
	&_bug6913768$1_EnclosingMethodInfo_,
	_bug6913768$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6913768"
};

$Object* allocate$bug6913768$1($Class* clazz) {
	return $of($alloc(bug6913768$1));
}

void bug6913768$1::init$() {
}

void bug6913768$1::run() {
	$useLocalCurrentObjectStackCache();
	$var($JFrame, frame, $new($JFrame));
	$var($JTable, table, $new($JTable, $$new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("1"_s),
			$of("2"_s)
		}),
		$$new($ObjectArray, {
			$of("3"_s),
			$of("4"_s)
		})
	}), $$new($ObjectArray, {
		$of("col1"_s),
		$of("col2"_s)
	})));
	$nc($(frame->getContentPane()))->add(static_cast<$Component*>($$new($JScrollPane, table)));
	frame->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	frame->setSize(300, 200);
	frame->setLocationRelativeTo(nullptr);
	frame->setVisible(true);
}

bug6913768$1::bug6913768$1() {
}

$Class* bug6913768$1::load$($String* name, bool initialize) {
	$loadClass(bug6913768$1, name, initialize, &_bug6913768$1_ClassInfo_, allocate$bug6913768$1);
	return class$;
}

$Class* bug6913768$1::class$ = nullptr;