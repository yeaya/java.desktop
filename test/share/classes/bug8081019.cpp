#include <bug8081019.h>

#include <java/awt/Frame.h>
#include <java/io/File.h>
#include <java/io/InputStream.h>
#include <java/lang/Process.h>
#include <java/lang/Runtime.h>
#include <java/lang/SecurityManager.h>
#include <java/util/concurrent/TimeUnit.h>
#include <jcpp.h>

#undef RUN_PROCESS
#undef RUN_TEST
#undef SECONDS

using $Frame = ::java::awt::Frame;
using $File = ::java::io::File;
using $InputStream = ::java::io::InputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Process = ::java::lang::Process;
using $Runtime = ::java::lang::Runtime;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityManager = ::java::lang::SecurityManager;
using $TimeUnit = ::java::util::concurrent::TimeUnit;

$FieldInfo _bug8081019_FieldInfo_[] = {
	{"RUN_PROCESS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug8081019, RUN_PROCESS)},
	{"RUN_TEST", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug8081019, RUN_TEST)},
	{}
};

$MethodInfo _bug8081019_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8081019::*)()>(&bug8081019::init$))},
	{"dumpStream", "(Ljava/io/InputStream;Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($InputStream*,$String*)>(&bug8081019::dumpStream)), "java.io.IOException"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug8081019::main)), "java.lang.Exception"},
	{"runProcess", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug8081019::runProcess)), "java.lang.Exception"},
	{"runTest", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug8081019::runTest)), "java.lang.Exception"},
	{}
};

$ClassInfo _bug8081019_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug8081019",
	"java.lang.Object",
	nullptr,
	_bug8081019_FieldInfo_,
	_bug8081019_MethodInfo_
};

$Object* allocate$bug8081019($Class* clazz) {
	return $of($alloc(bug8081019));
}

$String* bug8081019::RUN_PROCESS = nullptr;
$String* bug8081019::RUN_TEST = nullptr;

void bug8081019::init$() {
}

void bug8081019::main($StringArray* args) {
	$init(bug8081019);
	$useLocalCurrentObjectStackCache();
	$var($String, command, bug8081019::RUN_PROCESS);
	if (0 < $nc(args)->length) {
		$assign(command, args->get(0));
	}
	{
		$var($String, s1671$, command);
		int32_t tmp1671$ = -1;
		switch ($nc(s1671$)->hashCode()) {
		case (int32_t)0x9F65F47B:
			{
				if (s1671$->equals("RUN_PROCESS"_s)) {
					tmp1671$ = 0;
				}
				break;
			}
		case 0x610E01E6:
			{
				if (s1671$->equals("RUN_TEST"_s)) {
					tmp1671$ = 1;
				}
				break;
			}
		}
		switch (tmp1671$) {
		case 0:
			{
				runProcess();
				break;
			}
		case 1:
			{
				runTest();
				break;
			}
		default:
			{
				$throwNew($RuntimeException, $$str({"Unknown command: "_s, command}));
			}
		}
	}
}

void bug8081019::runTest() {
	$init(bug8081019);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$System::setSecurityManager($$new($SecurityManager));
	$var($Frame, f, $new($Frame, "Test frame"_s));
	f->setVisible(true);
	f->setVisible(false);
	f->dispose();
}

void bug8081019::runProcess() {
	$init(bug8081019);
	$useLocalCurrentObjectStackCache();
	$var($String, javaPath, $System::getProperty("java.home"_s, ""_s));
	$init($File);
	$var($String, command, $str({javaPath, $File::separator, "bin"_s, $File::separator, "java -Djava.security.manager=allow "_s, $(bug8081019::class$->getName()), " "_s, bug8081019::RUN_TEST}));
	$var($Process, process, $nc($($Runtime::getRuntime()))->exec(command));
	$init($TimeUnit);
	bool processExit = $nc(process)->waitFor(20, $TimeUnit::SECONDS);
	dumpStream($(process->getErrorStream()), "error stream"_s);
	dumpStream($(process->getInputStream()), "input stream"_s);
	if (!processExit) {
		process->destroy();
		$throwNew($RuntimeException, "The sub process has not exited!"_s);
	}
}

void bug8081019::dumpStream($InputStream* in, $String* name) {
	$init(bug8081019);
	$useLocalCurrentObjectStackCache();
	$nc($System::out)->println($$str({"--- dump "_s, name, " ---"_s}));
	$var($String, tempString, nullptr);
	int32_t count = $nc(in)->available();
	bool exception = false;
	while (count > 0) {
		$var($bytes, b, $new($bytes, count));
		in->read(b);
		$assign(tempString, $new($String, b));
		if (!exception) {
			bool var$0 = tempString->indexOf("Exception"_s) != -1;
			exception = var$0 || tempString->indexOf("Error"_s) != -1;
		}
		$nc($System::out)->println(tempString);
		count = in->available();
	}
	if (exception) {
		$throwNew($RuntimeException, "Exception in the output!"_s);
	}
}

bug8081019::bug8081019() {
}

void clinit$bug8081019($Class* class$) {
	$assignStatic(bug8081019::RUN_PROCESS, "RUN_PROCESS"_s);
	$assignStatic(bug8081019::RUN_TEST, "RUN_TEST"_s);
}

$Class* bug8081019::load$($String* name, bool initialize) {
	$loadClass(bug8081019, name, initialize, &_bug8081019_ClassInfo_, clinit$bug8081019, allocate$bug8081019);
	return class$;
}

$Class* bug8081019::class$ = nullptr;