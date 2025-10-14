#include <sun/java2d/loops/ProcessPath$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProcessPath$EndSubPathHandler = ::sun::java2d::loops::ProcessPath$EndSubPathHandler;

namespace sun {
	namespace java2d {
		namespace loops {

$MethodInfo _ProcessPath$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ProcessPath$1::*)()>(&ProcessPath$1::init$))},
	{"processEndSubPath", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ProcessPath$1_EnclosingMethodInfo_ = {
	"sun.java2d.loops.ProcessPath",
	nullptr,
	nullptr
};

$InnerClassInfo _ProcessPath$1_InnerClassesInfo_[] = {
	{"sun.java2d.loops.ProcessPath$1", nullptr, nullptr, 0},
	{"sun.java2d.loops.ProcessPath$EndSubPathHandler", "sun.java2d.loops.ProcessPath", "EndSubPathHandler", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ProcessPath$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.loops.ProcessPath$1",
	"java.lang.Object",
	"sun.java2d.loops.ProcessPath$EndSubPathHandler",
	nullptr,
	_ProcessPath$1_MethodInfo_,
	nullptr,
	&_ProcessPath$1_EnclosingMethodInfo_,
	_ProcessPath$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.loops.ProcessPath"
};

$Object* allocate$ProcessPath$1($Class* clazz) {
	return $of($alloc(ProcessPath$1));
}

void ProcessPath$1::init$() {
}

void ProcessPath$1::processEndSubPath() {
}

ProcessPath$1::ProcessPath$1() {
}

$Class* ProcessPath$1::load$($String* name, bool initialize) {
	$loadClass(ProcessPath$1, name, initialize, &_ProcessPath$1_ClassInfo_, allocate$ProcessPath$1);
	return class$;
}

$Class* ProcessPath$1::class$ = nullptr;

		} // loops
	} // java2d
} // sun