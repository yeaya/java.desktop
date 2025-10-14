#include <TableViewLayoutTest$4.h>

#include <TableViewLayoutTest.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $TableViewLayoutTest = ::TableViewLayoutTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JTextComponent = ::javax::swing::text::JTextComponent;

$MethodInfo _TableViewLayoutTest$4_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(TableViewLayoutTest$4::*)()>(&TableViewLayoutTest$4::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TableViewLayoutTest$4_EnclosingMethodInfo_ = {
	"TableViewLayoutTest",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _TableViewLayoutTest$4_InnerClassesInfo_[] = {
	{"TableViewLayoutTest$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TableViewLayoutTest$4_ClassInfo_ = {
	$ACC_SUPER,
	"TableViewLayoutTest$4",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_TableViewLayoutTest$4_MethodInfo_,
	nullptr,
	&_TableViewLayoutTest$4_EnclosingMethodInfo_,
	_TableViewLayoutTest$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TableViewLayoutTest"
};

$Object* allocate$TableViewLayoutTest$4($Class* clazz) {
	return $of($alloc(TableViewLayoutTest$4));
}

void TableViewLayoutTest$4::init$() {
}

void TableViewLayoutTest$4::run() {
	$init($TableViewLayoutTest);
	$nc($TableViewLayoutTest::edit)->setCaretPosition(6);
	$TableViewLayoutTest::dxCarBTab = $Math::abs($TableViewLayoutTest::xCarBTab - $TableViewLayoutTest::xCaret);
	$nc($TableViewLayoutTest::edit)->setCaretPosition(91);
	$TableViewLayoutTest::dxCarETab = $Math::abs($TableViewLayoutTest::xCarETab - $TableViewLayoutTest::xCaret);
	$nc($TableViewLayoutTest::edit)->setCaretPosition(74);
	$TableViewLayoutTest::dyCarLLTab = $Math::abs($TableViewLayoutTest::yCarLLTab - $TableViewLayoutTest::yCaret);
	$nc($TableViewLayoutTest::edit)->setCaretPosition(11);
	$TableViewLayoutTest::dyCarFLTab = $Math::abs($TableViewLayoutTest::yCarFLTab - $TableViewLayoutTest::yCaret);
	$nc($TableViewLayoutTest::edit)->setCaretPosition(74);
	$TableViewLayoutTest::yCarLLTab = $TableViewLayoutTest::yCaret;
	$nc($TableViewLayoutTest::edit)->setCaretPosition(11);
	$TableViewLayoutTest::yCarFLTab = $TableViewLayoutTest::yCaret;
}

TableViewLayoutTest$4::TableViewLayoutTest$4() {
}

$Class* TableViewLayoutTest$4::load$($String* name, bool initialize) {
	$loadClass(TableViewLayoutTest$4, name, initialize, &_TableViewLayoutTest$4_ClassInfo_, allocate$TableViewLayoutTest$4);
	return class$;
}

$Class* TableViewLayoutTest$4::class$ = nullptr;