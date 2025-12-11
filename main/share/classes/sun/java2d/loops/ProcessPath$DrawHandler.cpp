#include <sun/java2d/loops/ProcessPath$DrawHandler.h>

#include <sun/awt/SunHints.h>
#include <sun/java2d/loops/ProcessPath.h>
#include <jcpp.h>

#undef INTVAL_STROKE_DEFAULT

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunHints = ::sun::awt::SunHints;

namespace sun {
	namespace java2d {
		namespace loops {

$FieldInfo _ProcessPath$DrawHandler_FieldInfo_[] = {
	{"xMin", "I", nullptr, $PUBLIC, $field(ProcessPath$DrawHandler, xMin)},
	{"yMin", "I", nullptr, $PUBLIC, $field(ProcessPath$DrawHandler, yMin)},
	{"xMax", "I", nullptr, $PUBLIC, $field(ProcessPath$DrawHandler, xMax)},
	{"yMax", "I", nullptr, $PUBLIC, $field(ProcessPath$DrawHandler, yMax)},
	{"xMinf", "F", nullptr, $PUBLIC, $field(ProcessPath$DrawHandler, xMinf)},
	{"yMinf", "F", nullptr, $PUBLIC, $field(ProcessPath$DrawHandler, yMinf)},
	{"xMaxf", "F", nullptr, $PUBLIC, $field(ProcessPath$DrawHandler, xMaxf)},
	{"yMaxf", "F", nullptr, $PUBLIC, $field(ProcessPath$DrawHandler, yMaxf)},
	{"strokeControl", "I", nullptr, $PUBLIC, $field(ProcessPath$DrawHandler, strokeControl)},
	{}
};

$MethodInfo _ProcessPath$DrawHandler_MethodInfo_[] = {
	{"<init>", "(IIIII)V", nullptr, $PUBLIC, $method(static_cast<void(ProcessPath$DrawHandler::*)(int32_t,int32_t,int32_t,int32_t,int32_t)>(&ProcessPath$DrawHandler::init$))},
	{"<init>", "(IIII)V", nullptr, $PUBLIC, $method(static_cast<void(ProcessPath$DrawHandler::*)(int32_t,int32_t,int32_t,int32_t)>(&ProcessPath$DrawHandler::init$))},
	{"adjustBounds", "(IIII)V", nullptr, $PUBLIC},
	{"drawLine", "(IIII)V", nullptr, $PUBLIC | $ABSTRACT},
	{"drawPixel", "(II)V", nullptr, $PUBLIC | $ABSTRACT},
	{"drawScanline", "(III)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setBounds", "(IIII)V", nullptr, $PUBLIC},
	{"setBounds", "(IIIII)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ProcessPath$DrawHandler_InnerClassesInfo_[] = {
	{"sun.java2d.loops.ProcessPath$DrawHandler", "sun.java2d.loops.ProcessPath", "DrawHandler", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ProcessPath$DrawHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.java2d.loops.ProcessPath$DrawHandler",
	"java.lang.Object",
	nullptr,
	_ProcessPath$DrawHandler_FieldInfo_,
	_ProcessPath$DrawHandler_MethodInfo_,
	nullptr,
	nullptr,
	_ProcessPath$DrawHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.loops.ProcessPath"
};

$Object* allocate$ProcessPath$DrawHandler($Class* clazz) {
	return $of($alloc(ProcessPath$DrawHandler));
}

void ProcessPath$DrawHandler::init$(int32_t xMin, int32_t yMin, int32_t xMax, int32_t yMax, int32_t strokeControl) {
	setBounds(xMin, yMin, xMax, yMax, strokeControl);
}

void ProcessPath$DrawHandler::setBounds(int32_t xMin, int32_t yMin, int32_t xMax, int32_t yMax) {
	this->xMin = xMin;
	this->yMin = yMin;
	this->xMax = xMax;
	this->yMax = yMax;
	this->xMinf = xMin - 0.5f;
	this->yMinf = yMin - 0.5f;
	this->xMaxf = xMax - 0.5f - 9.765625E-4f;
	this->yMaxf = yMax - 0.5f - 9.765625E-4f;
}

void ProcessPath$DrawHandler::setBounds(int32_t xMin, int32_t yMin, int32_t xMax, int32_t yMax, int32_t strokeControl) {
	this->strokeControl = strokeControl;
	setBounds(xMin, yMin, xMax, yMax);
}

void ProcessPath$DrawHandler::adjustBounds(int32_t bxMin, int32_t byMin, int32_t bxMax, int32_t byMax) {
	if (this->xMin > bxMin) {
		bxMin = this->xMin;
	}
	if (this->xMax < bxMax) {
		bxMax = this->xMax;
	}
	if (this->yMin > byMin) {
		byMin = this->yMin;
	}
	if (this->yMax < byMax) {
		byMax = this->yMax;
	}
	setBounds(bxMin, byMin, bxMax, byMax);
}

void ProcessPath$DrawHandler::init$(int32_t xMin, int32_t yMin, int32_t xMax, int32_t yMax) {
	ProcessPath$DrawHandler::init$(xMin, yMin, xMax, yMax, $SunHints::INTVAL_STROKE_DEFAULT);
}

ProcessPath$DrawHandler::ProcessPath$DrawHandler() {
}

$Class* ProcessPath$DrawHandler::load$($String* name, bool initialize) {
	$loadClass(ProcessPath$DrawHandler, name, initialize, &_ProcessPath$DrawHandler_ClassInfo_, allocate$ProcessPath$DrawHandler);
	return class$;
}

$Class* ProcessPath$DrawHandler::class$ = nullptr;

		} // loops
	} // java2d
} // sun