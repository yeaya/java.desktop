#include <java/awt/Dimension.h>

#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Toolkit.h>
#include <java/awt/geom/Dimension2D.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Toolkit = ::java::awt::Toolkit;
using $Dimension2D = ::java::awt::geom::Dimension2D;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$CompoundAttribute _Dimension_MethodAnnotations_getSize5[] = {
	{"Ljava/beans/Transient;", nullptr},
	{}
};

$FieldInfo _Dimension_FieldInfo_[] = {
	{"width", "I", nullptr, $PUBLIC, $field(Dimension, width)},
	{"height", "I", nullptr, $PUBLIC, $field(Dimension, height)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Dimension, serialVersionUID)},
	{}
};

$MethodInfo _Dimension_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Dimension::*)()>(&Dimension::init$))},
	{"<init>", "(Ljava/awt/Dimension;)V", nullptr, $PUBLIC, $method(static_cast<void(Dimension::*)(Dimension*)>(&Dimension::init$))},
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(static_cast<void(Dimension::*)(int32_t,int32_t)>(&Dimension::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getHeight", "()D", nullptr, $PUBLIC},
	{"getSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _Dimension_MethodAnnotations_getSize5},
	{"getWidth", "()D", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&Dimension::initIDs))},
	{"setSize", "(DD)V", nullptr, $PUBLIC},
	{"setSize", "(Ljava/awt/Dimension;)V", nullptr, $PUBLIC},
	{"setSize", "(II)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_initIDs 10

$ClassInfo _Dimension_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.Dimension",
	"java.awt.geom.Dimension2D",
	"java.io.Serializable",
	_Dimension_FieldInfo_,
	_Dimension_MethodInfo_
};

$Object* allocate$Dimension($Class* clazz) {
	return $of($alloc(Dimension));
}

$Object* Dimension::clone() {
	 return this->$Dimension2D::clone();
}

void Dimension::finalize() {
	this->$Dimension2D::finalize();
}

void Dimension::initIDs() {
	$init(Dimension);
	$prepareNativeStatic(Dimension, initIDs, void);
	$invokeNativeStatic(Dimension, initIDs);
	$finishNativeStatic();
}

void Dimension::init$() {
	Dimension::init$(0, 0);
}

void Dimension::init$(Dimension* d) {
	Dimension::init$($nc(d)->width, d->height);
}

void Dimension::init$(int32_t width, int32_t height) {
	$Dimension2D::init$();
	this->width = width;
	this->height = height;
}

double Dimension::getWidth() {
	return (double)this->width;
}

double Dimension::getHeight() {
	return (double)this->height;
}

void Dimension::setSize(double width, double height) {
	this->width = $cast(int32_t, $Math::ceil(width));
	this->height = $cast(int32_t, $Math::ceil(height));
}

Dimension* Dimension::getSize() {
	return $new(Dimension, this->width, this->height);
}

void Dimension::setSize(Dimension* d) {
	setSize($nc(d)->width, d->height);
}

void Dimension::setSize(int32_t width, int32_t height) {
	this->width = width;
	this->height = height;
}

bool Dimension::equals(Object$* obj) {
	if ($instanceOf(Dimension, obj)) {
		$var(Dimension, d, $cast(Dimension, obj));
		return (this->width == $nc(d)->width) && (this->height == d->height);
	}
	return false;
}

int32_t Dimension::hashCode() {
	int32_t sum = this->width + this->height;
	return sum * (sum + 1) / 2 + this->width;
}

$String* Dimension::toString() {
	return $str({$($of(this)->getClass()->getName()), "[width="_s, $$str(this->width), ",height="_s, $$str(this->height), "]"_s});
}

void clinit$Dimension($Class* class$) {
	{
		$Toolkit::loadLibraries();
		if (!$GraphicsEnvironment::isHeadless()) {
			Dimension::initIDs();
		}
	}
}

Dimension::Dimension() {
}

$Class* Dimension::load$($String* name, bool initialize) {
	$loadClass(Dimension, name, initialize, &_Dimension_ClassInfo_, clinit$Dimension, allocate$Dimension);
	return class$;
}

$Class* Dimension::class$ = nullptr;

	} // awt
} // java