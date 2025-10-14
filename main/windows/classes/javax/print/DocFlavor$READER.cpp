#include <javax/print/DocFlavor$READER.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/print/DocFlavor.h>
#include <jcpp.h>

#undef TEXT_HTML
#undef TEXT_PLAIN

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DocFlavor = ::javax::print::DocFlavor;

namespace javax {
	namespace print {

$FieldInfo _DocFlavor$READER_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DocFlavor$READER, serialVersionUID)},
	{"TEXT_PLAIN", "Ljavax/print/DocFlavor$READER;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocFlavor$READER, TEXT_PLAIN)},
	{"TEXT_HTML", "Ljavax/print/DocFlavor$READER;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocFlavor$READER, TEXT_HTML)},
	{}
};

$MethodInfo _DocFlavor$READER_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(DocFlavor$READER::*)($String*)>(&DocFlavor$READER::init$))},
	{}
};

$InnerClassInfo _DocFlavor$READER_InnerClassesInfo_[] = {
	{"javax.print.DocFlavor$READER", "javax.print.DocFlavor", "READER", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _DocFlavor$READER_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.print.DocFlavor$READER",
	"javax.print.DocFlavor",
	nullptr,
	_DocFlavor$READER_FieldInfo_,
	_DocFlavor$READER_MethodInfo_,
	nullptr,
	nullptr,
	_DocFlavor$READER_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.print.DocFlavor"
};

$Object* allocate$DocFlavor$READER($Class* clazz) {
	return $of($alloc(DocFlavor$READER));
}


DocFlavor$READER* DocFlavor$READER::TEXT_PLAIN = nullptr;

DocFlavor$READER* DocFlavor$READER::TEXT_HTML = nullptr;

void DocFlavor$READER::init$($String* mimeType) {
	$DocFlavor::init$(mimeType, "java.io.Reader"_s);
}

void clinit$DocFlavor$READER($Class* class$) {
	$assignStatic(DocFlavor$READER::TEXT_PLAIN, $new(DocFlavor$READER, "text/plain; charset=utf-16"_s));
	$assignStatic(DocFlavor$READER::TEXT_HTML, $new(DocFlavor$READER, "text/html; charset=utf-16"_s));
}

DocFlavor$READER::DocFlavor$READER() {
}

$Class* DocFlavor$READER::load$($String* name, bool initialize) {
	$loadClass(DocFlavor$READER, name, initialize, &_DocFlavor$READER_ClassInfo_, clinit$DocFlavor$READER, allocate$DocFlavor$READER);
	return class$;
}

$Class* DocFlavor$READER::class$ = nullptr;

	} // print
} // javax