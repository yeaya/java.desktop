#include <bug4714674.h>

#include <DeafServer.h>
#include <bug4714674$1.h>
#include <bug4714674$2.h>
#include <java/lang/Runnable.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $DeafServer = ::DeafServer;
using $bug4714674$1 = ::bug4714674$1;
using $bug4714674$2 = ::bug4714674$2;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$FieldInfo _bug4714674_FieldInfo_[] = {
	{"passed", "Z", nullptr, $PRIVATE, $field(bug4714674, passed$)},
	{}
};

$MethodInfo _bug4714674_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug4714674::*)()>(&bug4714674::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug4714674::main)), "java.lang.Exception"},
	{"pass", "()V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(bug4714674::*)()>(&bug4714674::pass))},
	{"passed", "()Z", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<bool(bug4714674::*)()>(&bug4714674::passed))},
	{"test", "()V", nullptr, $PRIVATE, $method(static_cast<void(bug4714674::*)()>(&bug4714674::test)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug4714674_InnerClassesInfo_[] = {
	{"bug4714674$2", nullptr, nullptr, 0},
	{"bug4714674$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4714674_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug4714674",
	"java.lang.Object",
	nullptr,
	_bug4714674_FieldInfo_,
	_bug4714674_MethodInfo_,
	nullptr,
	nullptr,
	_bug4714674_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug4714674$2,bug4714674$1"
};

$Object* allocate$bug4714674($Class* clazz) {
	return $of($alloc(bug4714674));
}

void bug4714674::init$() {
	this->passed$ = false;
}

void bug4714674::main($StringArray* args) {
	$$new(bug4714674)->test();
}

void bug4714674::test() {
	$useLocalCurrentObjectStackCache();
	$var($DeafServer, server, $new($DeafServer));
	$var($String, baseURL, $str({"http://localhost:"_s, $$str(server->getPort()), "/"_s}));
	$SwingUtilities::invokeLater($$new($bug4714674$1, this, baseURL));
	$SwingUtilities::invokeLater($$new($bug4714674$2, this, server));
	{
		$var($Throwable, var$0, nullptr);
		try {
			$Thread::sleep(5000);
			if (!passed()) {
				$throwNew($RuntimeException, "Failed: EDT was blocked"_s);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			server->destroy();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

bool bug4714674::passed() {
	$synchronized(this) {
		return this->passed$;
	}
}

void bug4714674::pass() {
	$synchronized(this) {
		this->passed$ = true;
	}
}

bug4714674::bug4714674() {
}

$Class* bug4714674::load$($String* name, bool initialize) {
	$loadClass(bug4714674, name, initialize, &_bug4714674_ClassInfo_, allocate$bug4714674);
	return class$;
}

$Class* bug4714674::class$ = nullptr;