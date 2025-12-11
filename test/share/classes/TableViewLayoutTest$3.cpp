#include <TableViewLayoutTest$3.h>

#include <TableViewLayoutTest.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $TableViewLayoutTest = ::TableViewLayoutTest;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JEditorPane = ::javax::swing::JEditorPane;
using $Document = ::javax::swing::text::Document;

$MethodInfo _TableViewLayoutTest$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(TableViewLayoutTest$3::*)()>(&TableViewLayoutTest$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TableViewLayoutTest$3_EnclosingMethodInfo_ = {
	"TableViewLayoutTest",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _TableViewLayoutTest$3_InnerClassesInfo_[] = {
	{"TableViewLayoutTest$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TableViewLayoutTest$3_ClassInfo_ = {
	$ACC_SUPER,
	"TableViewLayoutTest$3",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_TableViewLayoutTest$3_MethodInfo_,
	nullptr,
	&_TableViewLayoutTest$3_EnclosingMethodInfo_,
	_TableViewLayoutTest$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TableViewLayoutTest"
};

$Object* allocate$TableViewLayoutTest$3($Class* clazz) {
	return $of($alloc(TableViewLayoutTest$3));
}

void TableViewLayoutTest$3::init$() {
}

void TableViewLayoutTest$3::run() {
	$init($TableViewLayoutTest);
	$assignStatic($TableViewLayoutTest::isI18n, $Boolean::valueOf(!$nc($TableViewLayoutTest::isI18n)->booleanValue()));
	$nc($($nc($TableViewLayoutTest::edit)->getDocument()))->putProperty("i18n"_s, $TableViewLayoutTest::isI18n);
	$nc($TableViewLayoutTest::edit)->select(11, 12);
	$nc($TableViewLayoutTest::edit)->replaceSelection("1"_s);
	$nc($TableViewLayoutTest::edit)->setCaretPosition(6);
	$TableViewLayoutTest::xCarBTab = $TableViewLayoutTest::xCaret;
	$nc($TableViewLayoutTest::edit)->setCaretPosition(91);
	$TableViewLayoutTest::xCarETab = $TableViewLayoutTest::xCaret;
	$nc($TableViewLayoutTest::edit)->setCaretPosition(74);
	$TableViewLayoutTest::yCarLLTab = $TableViewLayoutTest::yCaret;
	$nc($TableViewLayoutTest::edit)->setCaretPosition(11);
	$TableViewLayoutTest::yCarFLTab = $TableViewLayoutTest::yCaret;
}

TableViewLayoutTest$3::TableViewLayoutTest$3() {
}

$Class* TableViewLayoutTest$3::load$($String* name, bool initialize) {
	$loadClass(TableViewLayoutTest$3, name, initialize, &_TableViewLayoutTest$3_ClassInfo_, allocate$TableViewLayoutTest$3);
	return class$;
}

$Class* TableViewLayoutTest$3::class$ = nullptr;