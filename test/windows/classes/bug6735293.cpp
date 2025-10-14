#include <bug6735293.h>

#include <bug6735293$1.h>
#include <bug6735293$2.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JFormattedTextField.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/text/NavigationFilter.h>
#include <jcpp.h>

using $bug6735293$1 = ::bug6735293$1;
using $bug6735293$2 = ::bug6735293$2;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JFormattedTextField = ::javax::swing::JFormattedTextField;
using $JFrame = ::javax::swing::JFrame;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $NavigationFilter = ::javax::swing::text::NavigationFilter;

$FieldInfo _bug6735293_FieldInfo_[] = {
	{"jtf", "Ljavax/swing/JFormattedTextField;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(bug6735293, jtf)},
	{"nf", "Ljavax/swing/text/NavigationFilter;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(bug6735293, nf)},
	{"jFrame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(bug6735293, jFrame)},
	{}
};

$MethodInfo _bug6735293_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6735293::*)()>(&bug6735293::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6735293::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug6735293_InnerClassesInfo_[] = {
	{"bug6735293$2", nullptr, nullptr, 0},
	{"bug6735293$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6735293_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6735293",
	"java.lang.Object",
	nullptr,
	_bug6735293_FieldInfo_,
	_bug6735293_MethodInfo_,
	nullptr,
	nullptr,
	_bug6735293_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug6735293$2,bug6735293$1"
};

$Object* allocate$bug6735293($Class* clazz) {
	return $of($alloc(bug6735293));
}

$volatile($JFormattedTextField*) bug6735293::jtf = nullptr;
$volatile($NavigationFilter*) bug6735293::nf = nullptr;
$volatile($JFrame*) bug6735293::jFrame = nullptr;

void bug6735293::init$() {
}

void bug6735293::main($StringArray* args) {
	$SwingUtilities::invokeAndWait($$new($bug6735293$1));
	$Thread::sleep(1000);
	$SwingUtilities::invokeAndWait($$new($bug6735293$2));
}

bug6735293::bug6735293() {
}

$Class* bug6735293::load$($String* name, bool initialize) {
	$loadClass(bug6735293, name, initialize, &_bug6735293_ClassInfo_, allocate$bug6735293);
	return class$;
}

$Class* bug6735293::class$ = nullptr;