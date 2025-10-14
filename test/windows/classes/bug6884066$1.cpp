#include <bug6884066$1.h>

#include <bug6884066.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTable.h>
#include <javax/swing/table/JTableHeader.h>
#include <javax/swing/table/TableColumnModel.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE

using $bug6884066 = ::bug6884066;
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
using $JTable = ::javax::swing::JTable;
using $JTableHeader = ::javax::swing::table::JTableHeader;
using $TableColumnModel = ::javax::swing::table::TableColumnModel;

$MethodInfo _bug6884066$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6884066$1::*)()>(&bug6884066$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6884066$1_EnclosingMethodInfo_ = {
	"bug6884066",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6884066$1_InnerClassesInfo_[] = {
	{"bug6884066$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6884066$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6884066$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6884066$1_MethodInfo_,
	nullptr,
	&_bug6884066$1_EnclosingMethodInfo_,
	_bug6884066$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6884066"
};

$Object* allocate$bug6884066$1($Class* clazz) {
	return $of($alloc(bug6884066$1));
}

void bug6884066$1::init$() {
}

void bug6884066$1::run() {
	$var($JTable, table, $new($JTable, 10, 5));
	$init($bug6884066);
	$assignStatic($bug6884066::header, $new($JTableHeader, $(table->getColumnModel())));
	$bug6884066::checkColumn(0, "A"_s);
	$var($JFrame, frame, $new($JFrame, "standalone header"_s));
	frame->add(static_cast<$Component*>($bug6884066::header));
	frame->pack();
	frame->setVisible(true);
	frame->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
}

bug6884066$1::bug6884066$1() {
}

$Class* bug6884066$1::load$($String* name, bool initialize) {
	$loadClass(bug6884066$1, name, initialize, &_bug6884066$1_ClassInfo_, allocate$bug6884066$1);
	return class$;
}

$Class* bug6884066$1::class$ = nullptr;