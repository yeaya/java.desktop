#include <bug6777378$1.h>

#include <bug6777378$1$1.h>
#include <bug6777378.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTable.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <javax/swing/table/AbstractTableModel.h>
#include <javax/swing/table/JTableHeader.h>
#include <javax/swing/table/TableColumnModel.h>
#include <javax/swing/table/TableModel.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE

using $bug6777378 = ::bug6777378;
using $bug6777378$1$1 = ::bug6777378$1$1;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JTable = ::javax::swing::JTable;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $UIManager = ::javax::swing::UIManager;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;
using $AbstractTableModel = ::javax::swing::table::AbstractTableModel;
using $JTableHeader = ::javax::swing::table::JTableHeader;
using $TableColumnModel = ::javax::swing::table::TableColumnModel;
using $TableModel = ::javax::swing::table::TableModel;

$MethodInfo _bug6777378$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6777378$1::*)()>(&bug6777378$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6777378$1_EnclosingMethodInfo_ = {
	"bug6777378",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6777378$1_InnerClassesInfo_[] = {
	{"bug6777378$1", nullptr, nullptr, 0},
	{"bug6777378$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6777378$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6777378$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6777378$1_MethodInfo_,
	nullptr,
	&_bug6777378$1_EnclosingMethodInfo_,
	_bug6777378$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6777378"
};

$Object* allocate$bug6777378$1($Class* clazz) {
	return $of($alloc(bug6777378$1));
}

void bug6777378$1::init$() {
}

void bug6777378$1::run() {
	try {
		$UIManager::setLookAndFeel(static_cast<$LookAndFeel*>($$new($MetalLookAndFeel)));
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		e->printStackTrace();
	}
	$var($JTable, table, $new($JTable, $$new($bug6777378$1$1, this)));
	$init($bug6777378);
	$assignStatic($bug6777378::header, $new($JTableHeader, $(table->getColumnModel())));
	$nc($bug6777378::header)->setToolTipText("hello"_s);
	$assignStatic($bug6777378::frame, $new($JFrame));
	$nc($bug6777378::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$nc($bug6777378::frame)->add(static_cast<$Component*>($bug6777378::header));
	$nc($bug6777378::frame)->setSize(300, 300);
	$nc($bug6777378::frame)->setVisible(true);
}

bug6777378$1::bug6777378$1() {
}

$Class* bug6777378$1::load$($String* name, bool initialize) {
	$loadClass(bug6777378$1, name, initialize, &_bug6777378$1_ClassInfo_, allocate$bug6777378$1);
	return class$;
}

$Class* bug6777378$1::class$ = nullptr;