#include <bug4473075$1.h>

#include <bug4473075.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Point.h>
#include <java/awt/Window.h>
#include <java/lang/Array.h>
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
#include <javax/swing/JScrollBar.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JTable.h>
#include <javax/swing/table/AbstractTableModel.h>
#include <javax/swing/table/DefaultTableModel.h>
#include <javax/swing/table/JTableHeader.h>
#include <javax/swing/table/TableModel.h>
#include <jcpp.h>

#undef AUTO_RESIZE_OFF
#undef EXIT_ON_CLOSE

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $bug4473075 = ::bug4473075;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Frame = ::java::awt::Frame;
using $Point = ::java::awt::Point;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JScrollBar = ::javax::swing::JScrollBar;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JTable = ::javax::swing::JTable;
using $AbstractTableModel = ::javax::swing::table::AbstractTableModel;
using $DefaultTableModel = ::javax::swing::table::DefaultTableModel;
using $JTableHeader = ::javax::swing::table::JTableHeader;
using $TableModel = ::javax::swing::table::TableModel;

$MethodInfo _bug4473075$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug4473075$1::*)()>(&bug4473075$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4473075$1_EnclosingMethodInfo_ = {
	"bug4473075",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug4473075$1_InnerClassesInfo_[] = {
	{"bug4473075$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4473075$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug4473075$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug4473075$1_MethodInfo_,
	nullptr,
	&_bug4473075$1_EnclosingMethodInfo_,
	_bug4473075$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4473075"
};

$Object* allocate$bug4473075$1($Class* clazz) {
	return $of($alloc(bug4473075$1));
}

void bug4473075$1::init$() {
}

void bug4473075$1::run() {
	$useLocalCurrentObjectStackCache();
	$init($bug4473075);
	$assignStatic($bug4473075::frame, $new($JFrame));
	$nc($bug4473075::frame)->setUndecorated(true);
	$nc($bug4473075::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$assignStatic($bug4473075::table, $new($JTable));
	$var($String, t, "a cell text"_s);
	$nc($bug4473075::table)->setModel($$new($DefaultTableModel, $$new($ObjectArray2, {$$new($ObjectArray, {
		$of(t),
		$of(t),
		$of(t),
		$of(t),
		$of(t)
	})}), $$new($ObjectArray, {
		$of(t),
		$of(t),
		$of(t),
		$of(t),
		$of(t)
	})));
	$nc($bug4473075::table)->setAutoResizeMode($JTable::AUTO_RESIZE_OFF);
	$assignStatic($bug4473075::scpScroll, $new($JScrollPane, $bug4473075::table));
	$var($Dimension, preferredSize, $new($Dimension, $nc($($nc($bug4473075::table)->getSize()))->width, 40));
	$nc($($nc($bug4473075::table)->getTableHeader()))->setPreferredSize(preferredSize);
	$nc($bug4473075::frame)->setContentPane($bug4473075::scpScroll);
	$nc($bug4473075::frame)->setSize(250, 480);
	$nc($bug4473075::frame)->setLocationRelativeTo(nullptr);
	$nc($bug4473075::frame)->setVisible(true);
	$assignStatic($bug4473075::point, $nc($($nc($bug4473075::scpScroll)->getHorizontalScrollBar()))->getLocationOnScreen());
}

bug4473075$1::bug4473075$1() {
}

$Class* bug4473075$1::load$($String* name, bool initialize) {
	$loadClass(bug4473075$1, name, initialize, &_bug4473075$1_ClassInfo_, allocate$bug4473075$1);
	return class$;
}

$Class* bug4473075$1::class$ = nullptr;