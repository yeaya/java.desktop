#include <javax/print/MultiDoc.h>

#include <javax/print/Doc.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace print {

$MethodInfo _MultiDoc_MethodInfo_[] = {
	{"getDoc", "()Ljavax/print/Doc;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"next", "()Ljavax/print/MultiDoc;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _MultiDoc_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.print.MultiDoc",
	nullptr,
	nullptr,
	nullptr,
	_MultiDoc_MethodInfo_
};

$Object* allocate$MultiDoc($Class* clazz) {
	return $of($alloc(MultiDoc));
}

$Class* MultiDoc::load$($String* name, bool initialize) {
	$loadClass(MultiDoc, name, initialize, &_MultiDoc_ClassInfo_, allocate$MultiDoc);
	return class$;
}

$Class* MultiDoc::class$ = nullptr;

	} // print
} // javax