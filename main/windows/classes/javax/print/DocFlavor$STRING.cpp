#include <javax/print/DocFlavor$STRING.h>

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

$FieldInfo _DocFlavor$STRING_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DocFlavor$STRING, serialVersionUID)},
	{"TEXT_PLAIN", "Ljavax/print/DocFlavor$STRING;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocFlavor$STRING, TEXT_PLAIN)},
	{"TEXT_HTML", "Ljavax/print/DocFlavor$STRING;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocFlavor$STRING, TEXT_HTML)},
	{}
};

$MethodInfo _DocFlavor$STRING_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(DocFlavor$STRING::*)($String*)>(&DocFlavor$STRING::init$))},
	{}
};

$InnerClassInfo _DocFlavor$STRING_InnerClassesInfo_[] = {
	{"javax.print.DocFlavor$STRING", "javax.print.DocFlavor", "STRING", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _DocFlavor$STRING_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.print.DocFlavor$STRING",
	"javax.print.DocFlavor",
	nullptr,
	_DocFlavor$STRING_FieldInfo_,
	_DocFlavor$STRING_MethodInfo_,
	nullptr,
	nullptr,
	_DocFlavor$STRING_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.print.DocFlavor"
};

$Object* allocate$DocFlavor$STRING($Class* clazz) {
	return $of($alloc(DocFlavor$STRING));
}

DocFlavor$STRING* DocFlavor$STRING::TEXT_PLAIN = nullptr;
DocFlavor$STRING* DocFlavor$STRING::TEXT_HTML = nullptr;

void DocFlavor$STRING::init$($String* mimeType) {
	$DocFlavor::init$(mimeType, "java.lang.String"_s);
}

void clinit$DocFlavor$STRING($Class* class$) {
	$assignStatic(DocFlavor$STRING::TEXT_PLAIN, $new(DocFlavor$STRING, "text/plain; charset=utf-16"_s));
	$assignStatic(DocFlavor$STRING::TEXT_HTML, $new(DocFlavor$STRING, "text/html; charset=utf-16"_s));
}

DocFlavor$STRING::DocFlavor$STRING() {
}

$Class* DocFlavor$STRING::load$($String* name, bool initialize) {
	$loadClass(DocFlavor$STRING, name, initialize, &_DocFlavor$STRING_ClassInfo_, clinit$DocFlavor$STRING, allocate$DocFlavor$STRING);
	return class$;
}

$Class* DocFlavor$STRING::class$ = nullptr;

	} // print
} // javax