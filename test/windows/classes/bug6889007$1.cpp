#include <bug6889007$1.h>

#include <bug6889007$MyTableHeaderUI.h>
#include <bug6889007.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
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
#include <javax/swing/JFrame.h>
#include <javax/swing/JTable.h>
#include <javax/swing/plaf/TableHeaderUI.h>
#include <javax/swing/plaf/basic/BasicTableHeaderUI.h>
#include <javax/swing/table/JTableHeader.h>
#include <javax/swing/table/TableColumnModel.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE

using $bug6889007 = ::bug6889007;
using $bug6889007$MyTableHeaderUI = ::bug6889007$MyTableHeaderUI;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JTable = ::javax::swing::JTable;
using $TableHeaderUI = ::javax::swing::plaf::TableHeaderUI;
using $BasicTableHeaderUI = ::javax::swing::plaf::basic::BasicTableHeaderUI;
using $JTableHeader = ::javax::swing::table::JTableHeader;
using $TableColumnModel = ::javax::swing::table::TableColumnModel;

$FieldInfo _bug6889007$1_FieldInfo_[] = {
	{"val$frame", "Ljavax/swing/JFrame;", nullptr, $FINAL | $SYNTHETIC, $field(bug6889007$1, val$frame)},
	{}
};

$MethodInfo _bug6889007$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JFrame;)V", "()V", 0, $method(static_cast<void(bug6889007$1::*)($JFrame*)>(&bug6889007$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6889007$1_EnclosingMethodInfo_ = {
	"bug6889007",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6889007$1_InnerClassesInfo_[] = {
	{"bug6889007$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6889007$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6889007$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug6889007$1_FieldInfo_,
	_bug6889007$1_MethodInfo_,
	nullptr,
	&_bug6889007$1_EnclosingMethodInfo_,
	_bug6889007$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6889007"
};

$Object* allocate$bug6889007$1($Class* clazz) {
	return $of($alloc(bug6889007$1));
}

void bug6889007$1::init$($JFrame* val$frame) {
	$set(this, val$frame, val$frame);
}

void bug6889007$1::run() {
	$useLocalCurrentObjectStackCache();
	$nc(this->val$frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$var($JTableHeader, th, $new($JTableHeader));
	th->setColumnModel($($$new($JTable, 20, 5)->getColumnModel()));
	th->setUI(static_cast<$TableHeaderUI*>($$new($bug6889007$MyTableHeaderUI)));
	$nc(this->val$frame)->add(static_cast<$Component*>(th));
	$nc(this->val$frame)->pack();
	$nc(this->val$frame)->setLocationRelativeTo(nullptr);
	$nc(this->val$frame)->setVisible(true);
}

bug6889007$1::bug6889007$1() {
}

$Class* bug6889007$1::load$($String* name, bool initialize) {
	$loadClass(bug6889007$1, name, initialize, &_bug6889007$1_ClassInfo_, allocate$bug6889007$1);
	return class$;
}

$Class* bug6889007$1::class$ = nullptr;