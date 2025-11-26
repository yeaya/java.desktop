#include <sun/java2d/loops/ProcessPath$FillProcessHandler.h>

#include <sun/java2d/loops/ProcessPath$DrawHandler.h>
#include <sun/java2d/loops/ProcessPath$FillData.h>
#include <sun/java2d/loops/ProcessPath$ProcessHandler.h>
#include <sun/java2d/loops/ProcessPath.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProcessPath = ::sun::java2d::loops::ProcessPath;
using $ProcessPath$DrawHandler = ::sun::java2d::loops::ProcessPath$DrawHandler;
using $ProcessPath$FillData = ::sun::java2d::loops::ProcessPath$FillData;
using $ProcessPath$ProcessHandler = ::sun::java2d::loops::ProcessPath$ProcessHandler;

namespace sun {
	namespace java2d {
		namespace loops {

$FieldInfo _ProcessPath$FillProcessHandler_FieldInfo_[] = {
	{"fd", "Lsun/java2d/loops/ProcessPath$FillData;", nullptr, 0, $field(ProcessPath$FillProcessHandler, fd)},
	{}
};

$MethodInfo _ProcessPath$FillProcessHandler_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/ProcessPath$DrawHandler;)V", nullptr, 0, $method(static_cast<void(ProcessPath$FillProcessHandler::*)($ProcessPath$DrawHandler*)>(&ProcessPath$FillProcessHandler::init$))},
	{"processEndSubPath", "()V", nullptr, $PUBLIC},
	{"processFixedLine", "(IIII[IZZ)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ProcessPath$FillProcessHandler_InnerClassesInfo_[] = {
	{"sun.java2d.loops.ProcessPath$FillProcessHandler", "sun.java2d.loops.ProcessPath", "FillProcessHandler", $PRIVATE | $STATIC},
	{"sun.java2d.loops.ProcessPath$ProcessHandler", "sun.java2d.loops.ProcessPath", "ProcessHandler", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ProcessPath$FillProcessHandler_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.loops.ProcessPath$FillProcessHandler",
	"sun.java2d.loops.ProcessPath$ProcessHandler",
	nullptr,
	_ProcessPath$FillProcessHandler_FieldInfo_,
	_ProcessPath$FillProcessHandler_MethodInfo_,
	nullptr,
	nullptr,
	_ProcessPath$FillProcessHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.loops.ProcessPath"
};

$Object* allocate$ProcessPath$FillProcessHandler($Class* clazz) {
	return $of($alloc(ProcessPath$FillProcessHandler));
}

void ProcessPath$FillProcessHandler::processFixedLine(int32_t x1, int32_t y1, int32_t x2, int32_t y2, $ints* pixelInfo, bool checkBounds, bool endSubPath) {
	int32_t outXMin = 0;
	int32_t outXMax = 0;
	int32_t outYMin = 0;
	int32_t outYMax = 0;
	int32_t res = 0;
	if (checkBounds) {
		bool lastClipped = false;
		$var($ints, c, $new($ints, {
			x1,
			y1,
			x2,
			y2,
			0,
			0
		}));
		outXMin = $cast(int32_t, ($nc(this->dhnd)->xMinf * 1024));
		outXMax = $cast(int32_t, ($nc(this->dhnd)->xMaxf * 1024));
		outYMin = $cast(int32_t, ($nc(this->dhnd)->yMinf * 1024));
		outYMax = $cast(int32_t, ($nc(this->dhnd)->yMaxf * 1024));
		res = $ProcessPath::TESTANDCLIP(outYMin, outYMax, c, 1, 0, 3, 2);
		if (res == 4) {
			return;
		}
		res = $ProcessPath::TESTANDCLIP(outYMin, outYMax, c, 3, 2, 1, 0);
		if (res == 4) {
			return;
		}
		lastClipped = $ProcessPath::IS_CLIPPED(res);
		res = $ProcessPath::CLIPCLAMP(outXMin, outXMax, c, 0, 1, 2, 3, 4, 5);
		if (res == 0) {
			processFixedLine(c->get(4), c->get(5), c->get(0), c->get(1), pixelInfo, false, lastClipped);
		} else if (res == 4) {
			return;
		}
		res = $ProcessPath::CLIPCLAMP(outXMin, outXMax, c, 2, 3, 0, 1, 4, 5);
		lastClipped = lastClipped || (res == 1);
		processFixedLine(c->get(0), c->get(1), c->get(2), c->get(3), pixelInfo, false, lastClipped);
		if (res == 0) {
			processFixedLine(c->get(2), c->get(3), c->get(4), c->get(5), pixelInfo, false, lastClipped);
		}
		return;
	}
	bool var$0 = $nc(this->fd)->isEmpty();
	if (var$0 || $nc(this->fd)->isEnded()) {
		$nc(this->fd)->addPoint(x1, y1, false);
	}
	$nc(this->fd)->addPoint(x2, y2, false);
	if (endSubPath) {
		$nc(this->fd)->setEnded();
	}
}

void ProcessPath$FillProcessHandler::init$($ProcessPath$DrawHandler* dhnd) {
	$ProcessPath$ProcessHandler::init$(dhnd, 1);
	$set(this, fd, $new($ProcessPath$FillData));
}

void ProcessPath$FillProcessHandler::processEndSubPath() {
	if (!$nc(this->fd)->isEmpty()) {
		$nc(this->fd)->setEnded();
	}
}

ProcessPath$FillProcessHandler::ProcessPath$FillProcessHandler() {
}

$Class* ProcessPath$FillProcessHandler::load$($String* name, bool initialize) {
	$loadClass(ProcessPath$FillProcessHandler, name, initialize, &_ProcessPath$FillProcessHandler_ClassInfo_, allocate$ProcessPath$FillProcessHandler);
	return class$;
}

$Class* ProcessPath$FillProcessHandler::class$ = nullptr;

		} // loops
	} // java2d
} // sun