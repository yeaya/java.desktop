#include <java/awt/geom/Path2D$Iterator.h>

#include <java/awt/geom/Path2D.h>
#include <jcpp.h>

using $Path2D = ::java::awt::geom::Path2D;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace geom {

$FieldInfo _Path2D$Iterator_FieldInfo_[] = {
	{"typeIdx", "I", nullptr, 0, $field(Path2D$Iterator, typeIdx)},
	{"pointIdx", "I", nullptr, 0, $field(Path2D$Iterator, pointIdx)},
	{"path", "Ljava/awt/geom/Path2D;", nullptr, 0, $field(Path2D$Iterator, path)},
	{"curvecoords", "[I", nullptr, $STATIC | $FINAL, $staticField(Path2D$Iterator, curvecoords)},
	{}
};

$MethodInfo _Path2D$Iterator_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/geom/Path2D;)V", nullptr, 0, $method(static_cast<void(Path2D$Iterator::*)($Path2D*)>(&Path2D$Iterator::init$))},
	{"getWindingRule", "()I", nullptr, $PUBLIC},
	{"isDone", "()Z", nullptr, $PUBLIC},
	{"next", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Path2D$Iterator_InnerClassesInfo_[] = {
	{"java.awt.geom.Path2D$Iterator", "java.awt.geom.Path2D", "Iterator", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Path2D$Iterator_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.awt.geom.Path2D$Iterator",
	"java.lang.Object",
	"java.awt.geom.PathIterator",
	_Path2D$Iterator_FieldInfo_,
	_Path2D$Iterator_MethodInfo_,
	nullptr,
	nullptr,
	_Path2D$Iterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.geom.Path2D"
};

$Object* allocate$Path2D$Iterator($Class* clazz) {
	return $of($alloc(Path2D$Iterator));
}

$ints* Path2D$Iterator::curvecoords = nullptr;

void Path2D$Iterator::init$($Path2D* path) {
	$set(this, path, path);
}

int32_t Path2D$Iterator::getWindingRule() {
	return $nc(this->path)->getWindingRule();
}

bool Path2D$Iterator::isDone() {
	return (this->typeIdx >= $nc(this->path)->numTypes);
}

void Path2D$Iterator::next() {
	int32_t type = $nc($nc(this->path)->pointTypes)->get(this->typeIdx++);
	this->pointIdx += $nc(Path2D$Iterator::curvecoords)->get(type);
}

void clinit$Path2D$Iterator($Class* class$) {
	$assignStatic(Path2D$Iterator::curvecoords, $new($ints, {
		2,
		2,
		4,
		6,
		0
	}));
}

Path2D$Iterator::Path2D$Iterator() {
}

$Class* Path2D$Iterator::load$($String* name, bool initialize) {
	$loadClass(Path2D$Iterator, name, initialize, &_Path2D$Iterator_ClassInfo_, clinit$Path2D$Iterator, allocate$Path2D$Iterator);
	return class$;
}

$Class* Path2D$Iterator::class$ = nullptr;

		} // geom
	} // awt
} // java