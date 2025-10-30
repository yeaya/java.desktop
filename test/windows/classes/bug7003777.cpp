#include <bug7003777.h>

#include <bug7003777$1.h>
#include <java/lang/Runnable.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef TEST_STRINGS

using $bug7003777$1 = ::bug7003777$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$FieldInfo _bug7003777_FieldInfo_[] = {
	{"TEST_STRINGS", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug7003777, TEST_STRINGS)},
	{}
};

$MethodInfo _bug7003777_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug7003777::*)()>(&bug7003777::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug7003777::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug7003777_InnerClassesInfo_[] = {
	{"bug7003777$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug7003777_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug7003777",
	"java.lang.Object",
	nullptr,
	_bug7003777_FieldInfo_,
	_bug7003777_MethodInfo_,
	nullptr,
	nullptr,
	_bug7003777_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug7003777$1"
};

$Object* allocate$bug7003777($Class* clazz) {
	return $of($alloc(bug7003777));
}

$StringArray* bug7003777::TEST_STRINGS = nullptr;

void bug7003777::init$() {
}

void bug7003777::main($StringArray* args) {
	$init(bug7003777);
	$SwingUtilities::invokeAndWait($$new($bug7003777$1));
}

void clinit$bug7003777($Class* class$) {
	$assignStatic(bug7003777::TEST_STRINGS, $new($StringArray, {
		"&a"_s,
		"&aa"_s,
		"&a;"_s,
		"&aa;"_s
	}));
}

bug7003777::bug7003777() {
}

$Class* bug7003777::load$($String* name, bool initialize) {
	$loadClass(bug7003777, name, initialize, &_bug7003777_ClassInfo_, clinit$bug7003777, allocate$bug7003777);
	return class$;
}

$Class* bug7003777::class$ = nullptr;