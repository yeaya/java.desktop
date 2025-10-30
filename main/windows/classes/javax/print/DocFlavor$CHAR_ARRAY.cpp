#include <javax/print/DocFlavor$CHAR_ARRAY.h>

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

$FieldInfo _DocFlavor$CHAR_ARRAY_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DocFlavor$CHAR_ARRAY, serialVersionUID)},
	{"TEXT_PLAIN", "Ljavax/print/DocFlavor$CHAR_ARRAY;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocFlavor$CHAR_ARRAY, TEXT_PLAIN)},
	{"TEXT_HTML", "Ljavax/print/DocFlavor$CHAR_ARRAY;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocFlavor$CHAR_ARRAY, TEXT_HTML)},
	{}
};

$MethodInfo _DocFlavor$CHAR_ARRAY_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(DocFlavor$CHAR_ARRAY::*)($String*)>(&DocFlavor$CHAR_ARRAY::init$))},
	{}
};

$InnerClassInfo _DocFlavor$CHAR_ARRAY_InnerClassesInfo_[] = {
	{"javax.print.DocFlavor$CHAR_ARRAY", "javax.print.DocFlavor", "CHAR_ARRAY", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _DocFlavor$CHAR_ARRAY_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.print.DocFlavor$CHAR_ARRAY",
	"javax.print.DocFlavor",
	nullptr,
	_DocFlavor$CHAR_ARRAY_FieldInfo_,
	_DocFlavor$CHAR_ARRAY_MethodInfo_,
	nullptr,
	nullptr,
	_DocFlavor$CHAR_ARRAY_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.print.DocFlavor"
};

$Object* allocate$DocFlavor$CHAR_ARRAY($Class* clazz) {
	return $of($alloc(DocFlavor$CHAR_ARRAY));
}

DocFlavor$CHAR_ARRAY* DocFlavor$CHAR_ARRAY::TEXT_PLAIN = nullptr;
DocFlavor$CHAR_ARRAY* DocFlavor$CHAR_ARRAY::TEXT_HTML = nullptr;

void DocFlavor$CHAR_ARRAY::init$($String* mimeType) {
	$DocFlavor::init$(mimeType, "[C"_s);
}

void clinit$DocFlavor$CHAR_ARRAY($Class* class$) {
	$assignStatic(DocFlavor$CHAR_ARRAY::TEXT_PLAIN, $new(DocFlavor$CHAR_ARRAY, "text/plain; charset=utf-16"_s));
	$assignStatic(DocFlavor$CHAR_ARRAY::TEXT_HTML, $new(DocFlavor$CHAR_ARRAY, "text/html; charset=utf-16"_s));
}

DocFlavor$CHAR_ARRAY::DocFlavor$CHAR_ARRAY() {
}

$Class* DocFlavor$CHAR_ARRAY::load$($String* name, bool initialize) {
	$loadClass(DocFlavor$CHAR_ARRAY, name, initialize, &_DocFlavor$CHAR_ARRAY_ClassInfo_, clinit$DocFlavor$CHAR_ARRAY, allocate$DocFlavor$CHAR_ARRAY);
	return class$;
}

$Class* DocFlavor$CHAR_ARRAY::class$ = nullptr;

	} // print
} // javax