#include <java/awt/GridBagLayoutInfo.h>

#include <java/awt/Component$BaselineResizeBehavior.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef CONSTANT_DESCENT

using $Component$BaselineResizeBehavior = ::java::awt::Component$BaselineResizeBehavior;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$FieldInfo _GridBagLayoutInfo_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GridBagLayoutInfo, serialVersionUID)},
	{"width", "I", nullptr, 0, $field(GridBagLayoutInfo, width)},
	{"height", "I", nullptr, 0, $field(GridBagLayoutInfo, height)},
	{"startx", "I", nullptr, 0, $field(GridBagLayoutInfo, startx)},
	{"starty", "I", nullptr, 0, $field(GridBagLayoutInfo, starty)},
	{"minWidth", "[I", nullptr, 0, $field(GridBagLayoutInfo, minWidth)},
	{"minHeight", "[I", nullptr, 0, $field(GridBagLayoutInfo, minHeight)},
	{"weightX", "[D", nullptr, 0, $field(GridBagLayoutInfo, weightX)},
	{"weightY", "[D", nullptr, 0, $field(GridBagLayoutInfo, weightY)},
	{"hasBaseline", "Z", nullptr, 0, $field(GridBagLayoutInfo, hasBaseline$)},
	{"baselineType", "[S", nullptr, 0, $field(GridBagLayoutInfo, baselineType)},
	{"maxAscent", "[I", nullptr, 0, $field(GridBagLayoutInfo, maxAscent)},
	{"maxDescent", "[I", nullptr, 0, $field(GridBagLayoutInfo, maxDescent)},
	{}
};

$MethodInfo _GridBagLayoutInfo_MethodInfo_[] = {
	{"<init>", "(II)V", nullptr, 0, $method(static_cast<void(GridBagLayoutInfo::*)(int32_t,int32_t)>(&GridBagLayoutInfo::init$))},
	{"hasBaseline", "(I)Z", nullptr, 0},
	{"hasConstantDescent", "(I)Z", nullptr, 0},
	{}
};

$ClassInfo _GridBagLayoutInfo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.GridBagLayoutInfo",
	"java.lang.Object",
	"java.io.Serializable",
	_GridBagLayoutInfo_FieldInfo_,
	_GridBagLayoutInfo_MethodInfo_
};

$Object* allocate$GridBagLayoutInfo($Class* clazz) {
	return $of($alloc(GridBagLayoutInfo));
}

void GridBagLayoutInfo::init$(int32_t width, int32_t height) {
	this->width = width;
	this->height = height;
}

bool GridBagLayoutInfo::hasConstantDescent(int32_t row) {
	$init($Component$BaselineResizeBehavior);
	return (((int32_t)($nc(this->baselineType)->get(row) & (uint32_t)($sl(1, $Component$BaselineResizeBehavior::CONSTANT_DESCENT->ordinal())))) != 0);
}

bool GridBagLayoutInfo::hasBaseline(int32_t row) {
	return (this->hasBaseline$ && $nc(this->baselineType)->get(row) != 0);
}

GridBagLayoutInfo::GridBagLayoutInfo() {
}

$Class* GridBagLayoutInfo::load$($String* name, bool initialize) {
	$loadClass(GridBagLayoutInfo, name, initialize, &_GridBagLayoutInfo_ClassInfo_, allocate$GridBagLayoutInfo);
	return class$;
}

$Class* GridBagLayoutInfo::class$ = nullptr;

	} // awt
} // java