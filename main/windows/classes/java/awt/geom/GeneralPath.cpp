#include <java/awt/geom/GeneralPath.h>

#include <java/awt/Shape.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/Path2D$Float.h>
#include <java/awt/geom/Path2D.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef INIT_SIZE
#undef WIND_NON_ZERO

using $Shape = ::java::awt::Shape;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $Path2D = ::java::awt::geom::Path2D;
using $Path2D$Float = ::java::awt::geom::Path2D$Float;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace geom {

$FieldInfo _GeneralPath_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GeneralPath, serialVersionUID)},
	{}
};

$MethodInfo _GeneralPath_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GeneralPath::*)()>(&GeneralPath::init$))},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(GeneralPath::*)(int32_t)>(&GeneralPath::init$))},
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(static_cast<void(GeneralPath::*)(int32_t,int32_t)>(&GeneralPath::init$))},
	{"<init>", "(Ljava/awt/Shape;)V", nullptr, $PUBLIC, $method(static_cast<void(GeneralPath::*)($Shape*)>(&GeneralPath::init$))},
	{"<init>", "(I[BI[FI)V", nullptr, 0, $method(static_cast<void(GeneralPath::*)(int32_t,$bytes*,int32_t,$floats*,int32_t)>(&GeneralPath::init$))},
	{}
};

$InnerClassInfo _GeneralPath_InnerClassesInfo_[] = {
	{"java.awt.geom.Path2D$Float", "java.awt.geom.Path2D", "Float", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _GeneralPath_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.awt.geom.GeneralPath",
	"java.awt.geom.Path2D$Float",
	nullptr,
	_GeneralPath_FieldInfo_,
	_GeneralPath_MethodInfo_,
	nullptr,
	nullptr,
	_GeneralPath_InnerClassesInfo_
};

$Object* allocate$GeneralPath($Class* clazz) {
	return $of($alloc(GeneralPath));
}

void GeneralPath::init$() {
	$Path2D$Float::init$($Path2D::WIND_NON_ZERO, $Path2D::INIT_SIZE);
}

void GeneralPath::init$(int32_t rule) {
	$Path2D$Float::init$(rule, $Path2D::INIT_SIZE);
}

void GeneralPath::init$(int32_t rule, int32_t initialCapacity) {
	$Path2D$Float::init$(rule, initialCapacity);
}

void GeneralPath::init$($Shape* s) {
	$Path2D$Float::init$(s, ($AffineTransform*)nullptr);
}

void GeneralPath::init$(int32_t windingRule, $bytes* pointTypes, int32_t numTypes, $floats* pointCoords, int32_t numCoords) {
	$Path2D$Float::init$();
	this->windingRule = windingRule;
	$set(this, pointTypes, pointTypes);
	this->numTypes = numTypes;
	$set(this, floatCoords, pointCoords);
	this->numCoords = numCoords;
}

GeneralPath::GeneralPath() {
}

$Class* GeneralPath::load$($String* name, bool initialize) {
	$loadClass(GeneralPath, name, initialize, &_GeneralPath_ClassInfo_, allocate$GeneralPath);
	return class$;
}

$Class* GeneralPath::class$ = nullptr;

		} // geom
	} // awt
} // java