#include <javax/print/attribute/Size2DSyntax.h>

#include <java/io/Serializable.h>
#include <jcpp.h>

#undef INCH
#undef MM

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace print {
		namespace attribute {

$FieldInfo _Size2DSyntax_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Size2DSyntax, serialVersionUID)},
	{"x", "I", nullptr, $PRIVATE, $field(Size2DSyntax, x)},
	{"y", "I", nullptr, $PRIVATE, $field(Size2DSyntax, y)},
	{"INCH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Size2DSyntax, INCH)},
	{"MM", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Size2DSyntax, MM)},
	{}
};

$MethodInfo _Size2DSyntax_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(FFI)V", nullptr, $PROTECTED, $method(static_cast<void(Size2DSyntax::*)(float,float,int32_t)>(&Size2DSyntax::init$))},
	{"<init>", "(III)V", nullptr, $PROTECTED, $method(static_cast<void(Size2DSyntax::*)(int32_t,int32_t,int32_t)>(&Size2DSyntax::init$))},
	{"convertFromMicrometers", "(II)F", nullptr, $PRIVATE | $STATIC, $method(static_cast<float(*)(int32_t,int32_t)>(&Size2DSyntax::convertFromMicrometers))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getSize", "(I)[F", nullptr, $PUBLIC},
	{"getX", "(I)F", nullptr, $PUBLIC},
	{"getXMicrometers", "()I", nullptr, $PROTECTED},
	{"getY", "(I)F", nullptr, $PUBLIC},
	{"getYMicrometers", "()I", nullptr, $PROTECTED},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"toString", "(ILjava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Size2DSyntax_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.print.attribute.Size2DSyntax",
	"java.lang.Object",
	"java.io.Serializable,java.lang.Cloneable",
	_Size2DSyntax_FieldInfo_,
	_Size2DSyntax_MethodInfo_
};

$Object* allocate$Size2DSyntax($Class* clazz) {
	return $of($alloc(Size2DSyntax));
}

$Object* Size2DSyntax::clone() {
	 return this->$Serializable::clone();
}

void Size2DSyntax::finalize() {
	this->$Serializable::finalize();
}

void Size2DSyntax::init$(float x, float y, int32_t units) {
	if (x < 0.0f) {
		$throwNew($IllegalArgumentException, "x < 0"_s);
	}
	if (y < 0.0f) {
		$throwNew($IllegalArgumentException, "y < 0"_s);
	}
	if (units < 1) {
		$throwNew($IllegalArgumentException, "units < 1"_s);
	}
	this->x = $cast(int32_t, (x * units + 0.5f));
	this->y = $cast(int32_t, (y * units + 0.5f));
}

void Size2DSyntax::init$(int32_t x, int32_t y, int32_t units) {
	if (x < 0) {
		$throwNew($IllegalArgumentException, "x < 0"_s);
	}
	if (y < 0) {
		$throwNew($IllegalArgumentException, "y < 0"_s);
	}
	if (units < 1) {
		$throwNew($IllegalArgumentException, "units < 1"_s);
	}
	this->x = x * units;
	this->y = y * units;
}

float Size2DSyntax::convertFromMicrometers(int32_t x, int32_t units) {
	$init(Size2DSyntax);
	if (units < 1) {
		$throwNew($IllegalArgumentException, "units is < 1"_s);
	}
	return ((float)x) / ((float)units);
}

$floats* Size2DSyntax::getSize(int32_t units) {
	return $new($floats, {
		getX(units),
		getY(units)
	});
}

float Size2DSyntax::getX(int32_t units) {
	return convertFromMicrometers(this->x, units);
}

float Size2DSyntax::getY(int32_t units) {
	return convertFromMicrometers(this->y, units);
}

$String* Size2DSyntax::toString(int32_t units, $String* unitsName) {
	$var($StringBuilder, result, $new($StringBuilder));
	result->append(getX(units));
	result->append(u'x');
	result->append(getY(units));
	if (unitsName != nullptr) {
		result->append(u' ');
		result->append(unitsName);
	}
	return result->toString();
}

bool Size2DSyntax::equals(Object$* object) {
	return (object != nullptr && $instanceOf(Size2DSyntax, object) && this->x == $nc(($cast(Size2DSyntax, object)))->x && this->y == ($cast(Size2DSyntax, object))->y);
}

int32_t Size2DSyntax::hashCode() {
	return (((int32_t)(this->x & (uint32_t)0x0000FFFF)) | (((int32_t)(this->y & (uint32_t)0x0000FFFF)) << 16));
}

$String* Size2DSyntax::toString() {
	$var($StringBuilder, result, $new($StringBuilder));
	result->append(this->x);
	result->append(u'x');
	result->append(this->y);
	result->append(" um"_s);
	return result->toString();
}

int32_t Size2DSyntax::getXMicrometers() {
	return this->x;
}

int32_t Size2DSyntax::getYMicrometers() {
	return this->y;
}

Size2DSyntax::Size2DSyntax() {
}

$Class* Size2DSyntax::load$($String* name, bool initialize) {
	$loadClass(Size2DSyntax, name, initialize, &_Size2DSyntax_ClassInfo_, allocate$Size2DSyntax);
	return class$;
}

$Class* Size2DSyntax::class$ = nullptr;

		} // attribute
	} // print
} // javax