#include <bug6771184.h>

#include <bug6771184$1.h>
#include <java/lang/Runnable.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $bug6771184$1 = ::bug6771184$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$MethodInfo _bug6771184_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6771184::*)()>(&bug6771184::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6771184::main))},
	{}
};

$InnerClassInfo _bug6771184_InnerClassesInfo_[] = {
	{"bug6771184$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6771184_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6771184",
	"java.lang.Object",
	nullptr,
	nullptr,
	_bug6771184_MethodInfo_,
	nullptr,
	nullptr,
	_bug6771184_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug6771184$1,bug6771184$1$1"
};

$Object* allocate$bug6771184($Class* clazz) {
	return $of($alloc(bug6771184));
}

void bug6771184::init$() {
}

void bug6771184::main($StringArray* args) {
	$SwingUtilities::invokeLater($$new($bug6771184$1));
}

bug6771184::bug6771184() {
}

$Class* bug6771184::load$($String* name, bool initialize) {
	$loadClass(bug6771184, name, initialize, &_bug6771184_ClassInfo_, allocate$bug6771184);
	return class$;
}

$Class* bug6771184::class$ = nullptr;