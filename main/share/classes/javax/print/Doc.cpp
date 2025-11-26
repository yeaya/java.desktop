#include <javax/print/Doc.h>

#include <java/io/InputStream.h>
#include <java/io/Reader.h>
#include <javax/print/DocFlavor.h>
#include <javax/print/attribute/DocAttributeSet.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DocFlavor = ::javax::print::DocFlavor;
using $DocAttributeSet = ::javax::print::attribute::DocAttributeSet;

namespace javax {
	namespace print {

$MethodInfo _Doc_MethodInfo_[] = {
	{"getAttributes", "()Ljavax/print/attribute/DocAttributeSet;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDocFlavor", "()Ljavax/print/DocFlavor;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPrintData", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"getReaderForText", "()Ljava/io/Reader;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"getStreamForBytes", "()Ljava/io/InputStream;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _Doc_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.print.Doc",
	nullptr,
	nullptr,
	nullptr,
	_Doc_MethodInfo_
};

$Object* allocate$Doc($Class* clazz) {
	return $of($alloc(Doc));
}

$Class* Doc::load$($String* name, bool initialize) {
	$loadClass(Doc, name, initialize, &_Doc_ClassInfo_, allocate$Doc);
	return class$;
}

$Class* Doc::class$ = nullptr;

	} // print
} // javax