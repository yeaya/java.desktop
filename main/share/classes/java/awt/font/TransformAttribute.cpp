#include <java/awt/font/TransformAttribute.h>

#include <java/awt/geom/AffineTransform.h>
#include <java/io/ObjectOutputStream.h>
#include <java/lang/ClassCastException.h>
#include <jcpp.h>

#undef IDENTITY

using $AffineTransform = ::java::awt::geom::AffineTransform;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace font {

$FieldInfo _TransformAttribute_FieldInfo_[] = {
	{"transform", "Ljava/awt/geom/AffineTransform;", nullptr, $PRIVATE, $field(TransformAttribute, transform)},
	{"IDENTITY", "Ljava/awt/font/TransformAttribute;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TransformAttribute, IDENTITY)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TransformAttribute, serialVersionUID)},
	{}
};

$MethodInfo _TransformAttribute_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/geom/AffineTransform;)V", nullptr, $PUBLIC, $method(static_cast<void(TransformAttribute::*)($AffineTransform*)>(&TransformAttribute::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getTransform", "()Ljava/awt/geom/AffineTransform;", nullptr, $PUBLIC, $method(static_cast<$AffineTransform*(TransformAttribute::*)()>(&TransformAttribute::getTransform))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isIdentity", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(TransformAttribute::*)()>(&TransformAttribute::isIdentity))},
	{"readResolve", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(TransformAttribute::*)()>(&TransformAttribute::readResolve)), "java.io.ObjectStreamException"},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(TransformAttribute::*)($ObjectOutputStream*)>(&TransformAttribute::writeObject)), "java.io.IOException"},
	{}
};

$ClassInfo _TransformAttribute_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.awt.font.TransformAttribute",
	"java.lang.Object",
	"java.io.Serializable",
	_TransformAttribute_FieldInfo_,
	_TransformAttribute_MethodInfo_
};

$Object* allocate$TransformAttribute($Class* clazz) {
	return $of($alloc(TransformAttribute));
}

TransformAttribute* TransformAttribute::IDENTITY = nullptr;

void TransformAttribute::init$($AffineTransform* transform) {
	if (transform != nullptr && !transform->isIdentity()) {
		$set(this, transform, $new($AffineTransform, transform));
	}
}

$AffineTransform* TransformAttribute::getTransform() {
	$var($AffineTransform, at, this->transform);
	return (at == nullptr) ? $new($AffineTransform) : $new($AffineTransform, at);
}

bool TransformAttribute::isIdentity() {
	return this->transform == nullptr;
}

void TransformAttribute::writeObject($ObjectOutputStream* s) {
	if (this->transform == nullptr) {
		$set(this, transform, $new($AffineTransform));
	}
	$nc(s)->defaultWriteObject();
}

$Object* TransformAttribute::readResolve() {
	if (this->transform == nullptr || $nc(this->transform)->isIdentity()) {
		return $of(TransformAttribute::IDENTITY);
	}
	return $of(this);
}

int32_t TransformAttribute::hashCode() {
	return this->transform == nullptr ? 0 : $nc(this->transform)->hashCode();
}

bool TransformAttribute::equals(Object$* rhs) {
	if (rhs != nullptr) {
		try {
			$var(TransformAttribute, that, $cast(TransformAttribute, rhs));
			if (this->transform == nullptr) {
				return that->transform == nullptr;
			}
			return $nc(this->transform)->equals(that->transform);
		} catch ($ClassCastException& e) {
		}
	}
	return false;
}

void clinit$TransformAttribute($Class* class$) {
	$assignStatic(TransformAttribute::IDENTITY, $new(TransformAttribute, nullptr));
}

TransformAttribute::TransformAttribute() {
}

$Class* TransformAttribute::load$($String* name, bool initialize) {
	$loadClass(TransformAttribute, name, initialize, &_TransformAttribute_ClassInfo_, clinit$TransformAttribute, allocate$TransformAttribute);
	return class$;
}

$Class* TransformAttribute::class$ = nullptr;

		} // font
	} // awt
} // java