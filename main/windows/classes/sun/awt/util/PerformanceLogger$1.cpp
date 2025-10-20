#include <sun/awt/util/PerformanceLogger$1.h>

#include <java/io/File.h>
#include <java/io/FileWriter.h>
#include <java/io/OutputStreamWriter.h>
#include <java/io/PrintStream.h>
#include <java/io/Writer.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/util/PerformanceLogger.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $FileWriter = ::java::io::FileWriter;
using $OutputStreamWriter = ::java::io::OutputStreamWriter;
using $PrintStream = ::java::io::PrintStream;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $PerformanceLogger = ::sun::awt::util::PerformanceLogger;

namespace sun {
	namespace awt {
		namespace util {

$MethodInfo _PerformanceLogger$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(PerformanceLogger$1::*)()>(&PerformanceLogger$1::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _PerformanceLogger$1_EnclosingMethodInfo_ = {
	"sun.awt.util.PerformanceLogger",
	nullptr,
	nullptr
};

$InnerClassInfo _PerformanceLogger$1_InnerClassesInfo_[] = {
	{"sun.awt.util.PerformanceLogger$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _PerformanceLogger$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.util.PerformanceLogger$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_PerformanceLogger$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_PerformanceLogger$1_EnclosingMethodInfo_,
	_PerformanceLogger$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.util.PerformanceLogger"
};

$Object* allocate$PerformanceLogger$1($Class* clazz) {
	return $of($alloc(PerformanceLogger$1));
}

void PerformanceLogger$1::init$() {
}

$Object* PerformanceLogger$1::run() {
	$useLocalCurrentObjectStackCache();
	try {
		$init($PerformanceLogger);
		$var($File, logFile, $new($File, $PerformanceLogger::logFileName));
		logFile->createNewFile();
		$assignStatic($PerformanceLogger::logWriter, $new($FileWriter, logFile));
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$init($System);
		$init($PerformanceLogger);
		$nc($System::out)->println($$str({e, ": Creating logfile "_s, $PerformanceLogger::logFileName, ".  Log to console"_s}));
	}
	return $of(nullptr);
}

PerformanceLogger$1::PerformanceLogger$1() {
}

$Class* PerformanceLogger$1::load$($String* name, bool initialize) {
	$loadClass(PerformanceLogger$1, name, initialize, &_PerformanceLogger$1_ClassInfo_, allocate$PerformanceLogger$1);
	return class$;
}

$Class* PerformanceLogger$1::class$ = nullptr;

		} // util
	} // awt
} // sun