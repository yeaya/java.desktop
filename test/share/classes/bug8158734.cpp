#include <bug8158734.h>

#include <bug8158734$1.h>
#include <java/lang/Runnable.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef TYPE
#undef TYPE_2

using $bug8158734$1 = ::bug8158734$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$FieldInfo _bug8158734_FieldInfo_[] = {
	{"TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(bug8158734, TYPE)},
	{"TYPE_2", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(bug8158734, TYPE_2)},
	{"myClassloaderWasUsed", "Z", nullptr, $STATIC, $staticField(bug8158734, myClassloaderWasUsed)},
	{}
};

$MethodInfo _bug8158734_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8158734::*)()>(&bug8158734::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug8158734::main)), "java.lang.reflect.InvocationTargetException,java.lang.InterruptedException"},
	{}
};

$InnerClassInfo _bug8158734_InnerClassesInfo_[] = {
	{"bug8158734$MyClassloader", "bug8158734", "MyClassloader", $STATIC},
	{"bug8158734$MyEditorKit", "bug8158734", "MyEditorKit", $STATIC},
	{"bug8158734$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8158734_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug8158734",
	"java.lang.Object",
	nullptr,
	_bug8158734_FieldInfo_,
	_bug8158734_MethodInfo_,
	nullptr,
	nullptr,
	_bug8158734_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug8158734$MyClassloader,bug8158734$MyEditorKit,bug8158734$1"
};

$Object* allocate$bug8158734($Class* clazz) {
	return $of($alloc(bug8158734));
}

$String* bug8158734::TYPE = nullptr;
$String* bug8158734::TYPE_2 = nullptr;
bool bug8158734::myClassloaderWasUsed = false;

void bug8158734::init$() {
}

void bug8158734::main($StringArray* args) {
	$init(bug8158734);
	$SwingUtilities::invokeAndWait($$new($bug8158734$1));
}

void clinit$bug8158734($Class* class$) {
	$assignStatic(bug8158734::TYPE, "test/test"_s);
	$assignStatic(bug8158734::TYPE_2, "test2/test2"_s);
	bug8158734::myClassloaderWasUsed = false;
}

bug8158734::bug8158734() {
}

$Class* bug8158734::load$($String* name, bool initialize) {
	$loadClass(bug8158734, name, initialize, &_bug8158734_ClassInfo_, clinit$bug8158734, allocate$bug8158734);
	return class$;
}

$Class* bug8158734::class$ = nullptr;