#include <java/awt/Insets.h>

#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Toolkit.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Cloneable.h>
#include <java/lang/InternalError.h>
#include <jcpp.h>

using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Toolkit = ::java::awt::Toolkit;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Cloneable = ::java::lang::Cloneable;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$FieldInfo _Insets_FieldInfo_[] = {
	{"top", "I", nullptr, $PUBLIC, $field(Insets, top)},
	{"left", "I", nullptr, $PUBLIC, $field(Insets, left)},
	{"bottom", "I", nullptr, $PUBLIC, $field(Insets, bottom)},
	{"right", "I", nullptr, $PUBLIC, $field(Insets, right)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Insets, serialVersionUID)},
	{}
};

$MethodInfo _Insets_MethodInfo_[] = {
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(IIII)V", nullptr, $PUBLIC, $method(static_cast<void(Insets::*)(int32_t,int32_t,int32_t,int32_t)>(&Insets::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&Insets::initIDs))},
	{"set", "(IIII)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_initIDs 5

$ClassInfo _Insets_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.Insets",
	"java.lang.Object",
	"java.lang.Cloneable,java.io.Serializable",
	_Insets_FieldInfo_,
	_Insets_MethodInfo_
};

$Object* allocate$Insets($Class* clazz) {
	return $of($alloc(Insets));
}

void Insets::finalize() {
	this->$Cloneable::finalize();
}

void Insets::init$(int32_t top, int32_t left, int32_t bottom, int32_t right) {
	this->top = top;
	this->left = left;
	this->bottom = bottom;
	this->right = right;
}

void Insets::set(int32_t top, int32_t left, int32_t bottom, int32_t right) {
	this->top = top;
	this->left = left;
	this->bottom = bottom;
	this->right = right;
}

bool Insets::equals(Object$* obj) {
	if ($instanceOf(Insets, obj)) {
		$var(Insets, insets, $cast(Insets, obj));
		return ((this->top == $nc(insets)->top) && (this->left == insets->left) && (this->bottom == insets->bottom) && (this->right == insets->right));
	}
	return false;
}

int32_t Insets::hashCode() {
	int32_t sum1 = this->left + this->bottom;
	int32_t sum2 = this->right + this->top;
	int32_t val1 = sum1 * (sum1 + 1) / 2 + this->left;
	int32_t val2 = sum2 * (sum2 + 1) / 2 + this->top;
	int32_t sum3 = val1 + val2;
	return sum3 * (sum3 + 1) / 2 + val2;
}

$String* Insets::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({$($of(this)->getClass()->getName()), "[top="_s, $$str(this->top), ",left="_s, $$str(this->left), ",bottom="_s, $$str(this->bottom), ",right="_s, $$str(this->right), "]"_s});
}

$Object* Insets::clone() {
	try {
		return $of($Cloneable::clone());
	} catch ($CloneNotSupportedException& e) {
		$throwNew($InternalError, static_cast<$Throwable*>(e));
	}
	$shouldNotReachHere();
}

void Insets::initIDs() {
	$init(Insets);
	$prepareNativeStatic(Insets, initIDs, void);
	$invokeNativeStatic(Insets, initIDs);
	$finishNativeStatic();
}

void clinit$Insets($Class* class$) {
	{
		$Toolkit::loadLibraries();
		if (!$GraphicsEnvironment::isHeadless()) {
			Insets::initIDs();
		}
	}
}

Insets::Insets() {
}

$Class* Insets::load$($String* name, bool initialize) {
	$loadClass(Insets, name, initialize, &_Insets_ClassInfo_, clinit$Insets, allocate$Insets);
	return class$;
}

$Class* Insets::class$ = nullptr;

	} // awt
} // java