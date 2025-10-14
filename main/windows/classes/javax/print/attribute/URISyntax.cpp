#include <javax/print/attribute/URISyntax.h>

#include <java/io/Serializable.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URI.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Cloneable = ::java::lang::Cloneable;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $URI = ::java::net::URI;

namespace javax {
	namespace print {
		namespace attribute {

$FieldInfo _URISyntax_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(URISyntax, serialVersionUID)},
	{"uri", "Ljava/net/URI;", nullptr, $PRIVATE, $field(URISyntax, uri)},
	{}
};

$MethodInfo _URISyntax_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Ljava/net/URI;)V", nullptr, $PROTECTED, $method(static_cast<void(URISyntax::*)($URI*)>(&URISyntax::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getURI", "()Ljava/net/URI;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"verify", "(Ljava/net/URI;)Ljava/net/URI;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$URI*(*)($URI*)>(&URISyntax::verify))},
	{}
};

$ClassInfo _URISyntax_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.print.attribute.URISyntax",
	"java.lang.Object",
	"java.io.Serializable,java.lang.Cloneable",
	_URISyntax_FieldInfo_,
	_URISyntax_MethodInfo_
};

$Object* allocate$URISyntax($Class* clazz) {
	return $of($alloc(URISyntax));
}

$Object* URISyntax::clone() {
	 return this->$Serializable::clone();
}

void URISyntax::finalize() {
	this->$Serializable::finalize();
}

void URISyntax::init$($URI* uri) {
	$set(this, uri, verify(uri));
}

$URI* URISyntax::verify($URI* uri) {
	$init(URISyntax);
	if (uri == nullptr) {
		$throwNew($NullPointerException, " uri is null"_s);
	}
	return uri;
}

$URI* URISyntax::getURI() {
	return this->uri;
}

int32_t URISyntax::hashCode() {
	return $nc(this->uri)->hashCode();
}

bool URISyntax::equals(Object$* object) {
	return (object != nullptr && $instanceOf(URISyntax, object) && $nc(this->uri)->equals($nc(($cast(URISyntax, object)))->uri));
}

$String* URISyntax::toString() {
	return $nc(this->uri)->toString();
}

URISyntax::URISyntax() {
}

$Class* URISyntax::load$($String* name, bool initialize) {
	$loadClass(URISyntax, name, initialize, &_URISyntax_ClassInfo_, allocate$URISyntax);
	return class$;
}

$Class* URISyntax::class$ = nullptr;

		} // attribute
	} // print
} // javax