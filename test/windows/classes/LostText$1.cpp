#include <LostText$1.h>

#include <LostText.h>
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
#include <javax/swing/table/TableModel.h>
#include <jcpp.h>

using $LostText = ::LostText;
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
using $TableModel = ::javax::swing::table::TableModel;

$MethodInfo _LostText$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(LostText$1::*)()>(&LostText$1::init$))},
	{"getComp", "()Ljava/awt/Component;", nullptr, $PRIVATE, $method(static_cast<$Component*(LostText$1::*)()>(&LostText$1::getComp))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _LostText$1_EnclosingMethodInfo_ = {
	"LostText",
	"lostTextTest",
	"()V"
};

$InnerClassInfo _LostText$1_InnerClassesInfo_[] = {
	{"LostText$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _LostText$1_ClassInfo_ = {
	$ACC_SUPER,
	"LostText$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_LostText$1_MethodInfo_,
	nullptr,
	&_LostText$1_EnclosingMethodInfo_,
	_LostText$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"LostText"
};

$Object* allocate$LostText$1($Class* clazz) {
	return $of($alloc(LostText$1));
}

void LostText$1::init$() {
}

void LostText$1::run() {
	$init($LostText);
	$assignStatic($LostText::f, $new($JFrame));
	$nc($LostText::f)->add($(getComp()));
	$nc($LostText::f)->setSize(300, 300);
	$nc($LostText::f)->setLocationRelativeTo(nullptr);
	$nc($LostText::f)->setVisible(true);
}

$Component* LostText$1::getComp() {
	$useLocalCurrentObjectStackCache();
	$var($JTable, jTable, $new($JTable, $($LostText::testSelectionWithFilterTable())));
	return jTable;
}

LostText$1::LostText$1() {
}

$Class* LostText$1::load$($String* name, bool initialize) {
	$loadClass(LostText$1, name, initialize, &_LostText$1_ClassInfo_, allocate$LostText$1);
	return class$;
}

$Class* LostText$1::class$ = nullptr;