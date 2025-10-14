#include <javax/print/URIException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URI = ::java::net::URI;

namespace javax {
	namespace print {

$FieldInfo _URIException_FieldInfo_[] = {
	{"URIInaccessible", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(URIException, URIInaccessible)},
	{"URISchemeNotSupported", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(URIException, URISchemeNotSupported)},
	{"URIOtherProblem", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(URIException, URIOtherProblem)},
	{}
};

$MethodInfo _URIException_MethodInfo_[] = {
	{"getReason", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getUnsupportedURI", "()Ljava/net/URI;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _URIException_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.print.URIException",
	nullptr,
	nullptr,
	_URIException_FieldInfo_,
	_URIException_MethodInfo_
};

$Object* allocate$URIException($Class* clazz) {
	return $of($alloc(URIException));
}

$Class* URIException::load$($String* name, bool initialize) {
	$loadClass(URIException, name, initialize, &_URIException_ClassInfo_, allocate$URIException);
	return class$;
}

$Class* URIException::class$ = nullptr;

	} // print
} // javax