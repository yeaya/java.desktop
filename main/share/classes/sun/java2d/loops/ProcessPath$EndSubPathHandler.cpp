#include <sun/java2d/loops/ProcessPath$EndSubPathHandler.h>

#include <sun/java2d/loops/ProcessPath.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace java2d {
		namespace loops {

$MethodInfo _ProcessPath$EndSubPathHandler_MethodInfo_[] = {
	{"processEndSubPath", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _ProcessPath$EndSubPathHandler_InnerClassesInfo_[] = {
	{"sun.java2d.loops.ProcessPath$EndSubPathHandler", "sun.java2d.loops.ProcessPath", "EndSubPathHandler", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ProcessPath$EndSubPathHandler_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.java2d.loops.ProcessPath$EndSubPathHandler",
	nullptr,
	nullptr,
	nullptr,
	_ProcessPath$EndSubPathHandler_MethodInfo_,
	nullptr,
	nullptr,
	_ProcessPath$EndSubPathHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.loops.ProcessPath"
};

$Object* allocate$ProcessPath$EndSubPathHandler($Class* clazz) {
	return $of($alloc(ProcessPath$EndSubPathHandler));
}

$Class* ProcessPath$EndSubPathHandler::load$($String* name, bool initialize) {
	$loadClass(ProcessPath$EndSubPathHandler, name, initialize, &_ProcessPath$EndSubPathHandler_ClassInfo_, allocate$ProcessPath$EndSubPathHandler);
	return class$;
}

$Class* ProcessPath$EndSubPathHandler::class$ = nullptr;

		} // loops
	} // java2d
} // sun