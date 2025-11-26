#include <bug8078268.h>

#include <bug8078268$1.h>
#include <java/io/File.h>
#include <java/lang/Runnable.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $bug8078268$1 = ::bug8078268$1;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$FieldInfo _bug8078268_FieldInfo_[] = {
	{"parsingDone", "Z", nullptr, $STATIC | $VOLATILE, $staticField(bug8078268, parsingDone)},
	{"exception", "Ljava/lang/Exception;", nullptr, $STATIC | $VOLATILE, $staticField(bug8078268, exception)},
	{}
};

$MethodInfo _bug8078268_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8078268::*)()>(&bug8078268::init$))},
	{"getDirURL", "()Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)()>(&bug8078268::getDirURL))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug8078268::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug8078268_InnerClassesInfo_[] = {
	{"bug8078268$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8078268_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug8078268",
	"java.lang.Object",
	nullptr,
	_bug8078268_FieldInfo_,
	_bug8078268_MethodInfo_,
	nullptr,
	nullptr,
	_bug8078268_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug8078268$1"
};

$Object* allocate$bug8078268($Class* clazz) {
	return $of($alloc(bug8078268));
}

$volatile(bool) bug8078268::parsingDone = false;
$volatile($Exception*) bug8078268::exception = nullptr;

void bug8078268::init$() {
}

void bug8078268::main($StringArray* args) {
	$init(bug8078268);
	int64_t timeout = 10000;
	int64_t s = $System::currentTimeMillis();
	$SwingUtilities::invokeLater($$new($bug8078268$1));
	while (!bug8078268::parsingDone && bug8078268::exception == nullptr && $System::currentTimeMillis() - s < timeout) {
		$Thread::sleep(200);
	}
	int64_t took = $System::currentTimeMillis() - s;
	if (bug8078268::exception != nullptr) {
		$throw(bug8078268::exception);
	}
	if (took > timeout) {
		$throwNew($RuntimeException, "Parsing takes too long."_s);
	}
}

$String* bug8078268::getDirURL() {
	$init(bug8078268);
	$useLocalCurrentObjectStackCache();
	$init($File);
	return $str({$($$new($File, $($System::getProperty("test.src"_s, "."_s)))->getAbsolutePath()), $File::separator});
}

void clinit$bug8078268($Class* class$) {
	bug8078268::parsingDone = false;
}

bug8078268::bug8078268() {
}

$Class* bug8078268::load$($String* name, bool initialize) {
	$loadClass(bug8078268, name, initialize, &_bug8078268_ClassInfo_, clinit$bug8078268, allocate$bug8078268);
	return class$;
}

$Class* bug8078268::class$ = nullptr;