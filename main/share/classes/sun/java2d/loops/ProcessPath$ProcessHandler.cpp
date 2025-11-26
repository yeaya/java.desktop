#include <sun/java2d/loops/ProcessPath$ProcessHandler.h>

#include <sun/java2d/loops/ProcessPath$DrawHandler.h>
#include <sun/java2d/loops/ProcessPath.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProcessPath = ::sun::java2d::loops::ProcessPath;
using $ProcessPath$DrawHandler = ::sun::java2d::loops::ProcessPath$DrawHandler;
using $ProcessPath$EndSubPathHandler = ::sun::java2d::loops::ProcessPath$EndSubPathHandler;

namespace sun {
	namespace java2d {
		namespace loops {

$FieldInfo _ProcessPath$ProcessHandler_FieldInfo_[] = {
	{"dhnd", "Lsun/java2d/loops/ProcessPath$DrawHandler;", nullptr, 0, $field(ProcessPath$ProcessHandler, dhnd)},
	{"clipMode", "I", nullptr, 0, $field(ProcessPath$ProcessHandler, clipMode)},
	{}
};

$MethodInfo _ProcessPath$ProcessHandler_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/ProcessPath$DrawHandler;I)V", nullptr, $PUBLIC, $method(static_cast<void(ProcessPath$ProcessHandler::*)($ProcessPath$DrawHandler*,int32_t)>(&ProcessPath$ProcessHandler::init$))},
	{"processFixedLine", "(IIII[IZZ)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _ProcessPath$ProcessHandler_InnerClassesInfo_[] = {
	{"sun.java2d.loops.ProcessPath$ProcessHandler", "sun.java2d.loops.ProcessPath", "ProcessHandler", $PUBLIC | $STATIC | $ABSTRACT},
	{"sun.java2d.loops.ProcessPath$EndSubPathHandler", "sun.java2d.loops.ProcessPath", "EndSubPathHandler", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ProcessPath$ProcessHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.java2d.loops.ProcessPath$ProcessHandler",
	"java.lang.Object",
	"sun.java2d.loops.ProcessPath$EndSubPathHandler",
	_ProcessPath$ProcessHandler_FieldInfo_,
	_ProcessPath$ProcessHandler_MethodInfo_,
	nullptr,
	nullptr,
	_ProcessPath$ProcessHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.loops.ProcessPath"
};

$Object* allocate$ProcessPath$ProcessHandler($Class* clazz) {
	return $of($alloc(ProcessPath$ProcessHandler));
}

void ProcessPath$ProcessHandler::init$($ProcessPath$DrawHandler* dhnd, int32_t clipMode) {
	$set(this, dhnd, dhnd);
	this->clipMode = clipMode;
}

ProcessPath$ProcessHandler::ProcessPath$ProcessHandler() {
}

$Class* ProcessPath$ProcessHandler::load$($String* name, bool initialize) {
	$loadClass(ProcessPath$ProcessHandler, name, initialize, &_ProcessPath$ProcessHandler_ClassInfo_, allocate$ProcessPath$ProcessHandler);
	return class$;
}

$Class* ProcessPath$ProcessHandler::class$ = nullptr;

		} // loops
	} // java2d
} // sun