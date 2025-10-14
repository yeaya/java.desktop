#include <javax/print/DocFlavor$BYTE_ARRAY.h>

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

#undef AUTOSENSE
#undef GIF
#undef JPEG
#undef PCL
#undef PDF
#undef PNG
#undef POSTSCRIPT
#undef TEXT_HTML_HOST
#undef TEXT_HTML_US_ASCII
#undef TEXT_HTML_UTF_16
#undef TEXT_HTML_UTF_16BE
#undef TEXT_HTML_UTF_16LE
#undef TEXT_HTML_UTF_8
#undef TEXT_PLAIN_HOST
#undef TEXT_PLAIN_US_ASCII
#undef TEXT_PLAIN_UTF_16
#undef TEXT_PLAIN_UTF_16BE
#undef TEXT_PLAIN_UTF_16LE
#undef TEXT_PLAIN_UTF_8

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DocFlavor = ::javax::print::DocFlavor;

namespace javax {
	namespace print {

$FieldInfo _DocFlavor$BYTE_ARRAY_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DocFlavor$BYTE_ARRAY, serialVersionUID)},
	{"TEXT_PLAIN_HOST", "Ljavax/print/DocFlavor$BYTE_ARRAY;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocFlavor$BYTE_ARRAY, TEXT_PLAIN_HOST)},
	{"TEXT_PLAIN_UTF_8", "Ljavax/print/DocFlavor$BYTE_ARRAY;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocFlavor$BYTE_ARRAY, TEXT_PLAIN_UTF_8)},
	{"TEXT_PLAIN_UTF_16", "Ljavax/print/DocFlavor$BYTE_ARRAY;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocFlavor$BYTE_ARRAY, TEXT_PLAIN_UTF_16)},
	{"TEXT_PLAIN_UTF_16BE", "Ljavax/print/DocFlavor$BYTE_ARRAY;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocFlavor$BYTE_ARRAY, TEXT_PLAIN_UTF_16BE)},
	{"TEXT_PLAIN_UTF_16LE", "Ljavax/print/DocFlavor$BYTE_ARRAY;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocFlavor$BYTE_ARRAY, TEXT_PLAIN_UTF_16LE)},
	{"TEXT_PLAIN_US_ASCII", "Ljavax/print/DocFlavor$BYTE_ARRAY;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocFlavor$BYTE_ARRAY, TEXT_PLAIN_US_ASCII)},
	{"TEXT_HTML_HOST", "Ljavax/print/DocFlavor$BYTE_ARRAY;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocFlavor$BYTE_ARRAY, TEXT_HTML_HOST)},
	{"TEXT_HTML_UTF_8", "Ljavax/print/DocFlavor$BYTE_ARRAY;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocFlavor$BYTE_ARRAY, TEXT_HTML_UTF_8)},
	{"TEXT_HTML_UTF_16", "Ljavax/print/DocFlavor$BYTE_ARRAY;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocFlavor$BYTE_ARRAY, TEXT_HTML_UTF_16)},
	{"TEXT_HTML_UTF_16BE", "Ljavax/print/DocFlavor$BYTE_ARRAY;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocFlavor$BYTE_ARRAY, TEXT_HTML_UTF_16BE)},
	{"TEXT_HTML_UTF_16LE", "Ljavax/print/DocFlavor$BYTE_ARRAY;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocFlavor$BYTE_ARRAY, TEXT_HTML_UTF_16LE)},
	{"TEXT_HTML_US_ASCII", "Ljavax/print/DocFlavor$BYTE_ARRAY;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocFlavor$BYTE_ARRAY, TEXT_HTML_US_ASCII)},
	{"PDF", "Ljavax/print/DocFlavor$BYTE_ARRAY;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocFlavor$BYTE_ARRAY, PDF)},
	{"POSTSCRIPT", "Ljavax/print/DocFlavor$BYTE_ARRAY;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocFlavor$BYTE_ARRAY, POSTSCRIPT)},
	{"PCL", "Ljavax/print/DocFlavor$BYTE_ARRAY;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocFlavor$BYTE_ARRAY, PCL)},
	{"GIF", "Ljavax/print/DocFlavor$BYTE_ARRAY;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocFlavor$BYTE_ARRAY, GIF)},
	{"JPEG", "Ljavax/print/DocFlavor$BYTE_ARRAY;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocFlavor$BYTE_ARRAY, JPEG)},
	{"PNG", "Ljavax/print/DocFlavor$BYTE_ARRAY;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocFlavor$BYTE_ARRAY, PNG)},
	{"AUTOSENSE", "Ljavax/print/DocFlavor$BYTE_ARRAY;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocFlavor$BYTE_ARRAY, AUTOSENSE)},
	{}
};

$MethodInfo _DocFlavor$BYTE_ARRAY_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(DocFlavor$BYTE_ARRAY::*)($String*)>(&DocFlavor$BYTE_ARRAY::init$))},
	{}
};

$InnerClassInfo _DocFlavor$BYTE_ARRAY_InnerClassesInfo_[] = {
	{"javax.print.DocFlavor$BYTE_ARRAY", "javax.print.DocFlavor", "BYTE_ARRAY", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _DocFlavor$BYTE_ARRAY_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.print.DocFlavor$BYTE_ARRAY",
	"javax.print.DocFlavor",
	nullptr,
	_DocFlavor$BYTE_ARRAY_FieldInfo_,
	_DocFlavor$BYTE_ARRAY_MethodInfo_,
	nullptr,
	nullptr,
	_DocFlavor$BYTE_ARRAY_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.print.DocFlavor"
};

$Object* allocate$DocFlavor$BYTE_ARRAY($Class* clazz) {
	return $of($alloc(DocFlavor$BYTE_ARRAY));
}


DocFlavor$BYTE_ARRAY* DocFlavor$BYTE_ARRAY::TEXT_PLAIN_HOST = nullptr;

DocFlavor$BYTE_ARRAY* DocFlavor$BYTE_ARRAY::TEXT_PLAIN_UTF_8 = nullptr;

DocFlavor$BYTE_ARRAY* DocFlavor$BYTE_ARRAY::TEXT_PLAIN_UTF_16 = nullptr;

DocFlavor$BYTE_ARRAY* DocFlavor$BYTE_ARRAY::TEXT_PLAIN_UTF_16BE = nullptr;

DocFlavor$BYTE_ARRAY* DocFlavor$BYTE_ARRAY::TEXT_PLAIN_UTF_16LE = nullptr;

DocFlavor$BYTE_ARRAY* DocFlavor$BYTE_ARRAY::TEXT_PLAIN_US_ASCII = nullptr;

DocFlavor$BYTE_ARRAY* DocFlavor$BYTE_ARRAY::TEXT_HTML_HOST = nullptr;

DocFlavor$BYTE_ARRAY* DocFlavor$BYTE_ARRAY::TEXT_HTML_UTF_8 = nullptr;

DocFlavor$BYTE_ARRAY* DocFlavor$BYTE_ARRAY::TEXT_HTML_UTF_16 = nullptr;

DocFlavor$BYTE_ARRAY* DocFlavor$BYTE_ARRAY::TEXT_HTML_UTF_16BE = nullptr;

DocFlavor$BYTE_ARRAY* DocFlavor$BYTE_ARRAY::TEXT_HTML_UTF_16LE = nullptr;

DocFlavor$BYTE_ARRAY* DocFlavor$BYTE_ARRAY::TEXT_HTML_US_ASCII = nullptr;

DocFlavor$BYTE_ARRAY* DocFlavor$BYTE_ARRAY::PDF = nullptr;

DocFlavor$BYTE_ARRAY* DocFlavor$BYTE_ARRAY::POSTSCRIPT = nullptr;

DocFlavor$BYTE_ARRAY* DocFlavor$BYTE_ARRAY::PCL = nullptr;

DocFlavor$BYTE_ARRAY* DocFlavor$BYTE_ARRAY::GIF = nullptr;

DocFlavor$BYTE_ARRAY* DocFlavor$BYTE_ARRAY::JPEG = nullptr;

DocFlavor$BYTE_ARRAY* DocFlavor$BYTE_ARRAY::PNG = nullptr;

DocFlavor$BYTE_ARRAY* DocFlavor$BYTE_ARRAY::AUTOSENSE = nullptr;

void DocFlavor$BYTE_ARRAY::init$($String* mimeType) {
	$DocFlavor::init$(mimeType, "[B"_s);
}

void clinit$DocFlavor$BYTE_ARRAY($Class* class$) {
	$init($DocFlavor);
	$assignStatic(DocFlavor$BYTE_ARRAY::TEXT_PLAIN_HOST, $new(DocFlavor$BYTE_ARRAY, $$str({"text/plain; charset="_s, $DocFlavor::hostEncoding})));
	$assignStatic(DocFlavor$BYTE_ARRAY::TEXT_PLAIN_UTF_8, $new(DocFlavor$BYTE_ARRAY, "text/plain; charset=utf-8"_s));
	$assignStatic(DocFlavor$BYTE_ARRAY::TEXT_PLAIN_UTF_16, $new(DocFlavor$BYTE_ARRAY, "text/plain; charset=utf-16"_s));
	$assignStatic(DocFlavor$BYTE_ARRAY::TEXT_PLAIN_UTF_16BE, $new(DocFlavor$BYTE_ARRAY, "text/plain; charset=utf-16be"_s));
	$assignStatic(DocFlavor$BYTE_ARRAY::TEXT_PLAIN_UTF_16LE, $new(DocFlavor$BYTE_ARRAY, "text/plain; charset=utf-16le"_s));
	$assignStatic(DocFlavor$BYTE_ARRAY::TEXT_PLAIN_US_ASCII, $new(DocFlavor$BYTE_ARRAY, "text/plain; charset=us-ascii"_s));
	$assignStatic(DocFlavor$BYTE_ARRAY::TEXT_HTML_HOST, $new(DocFlavor$BYTE_ARRAY, $$str({"text/html; charset="_s, $DocFlavor::hostEncoding})));
	$assignStatic(DocFlavor$BYTE_ARRAY::TEXT_HTML_UTF_8, $new(DocFlavor$BYTE_ARRAY, "text/html; charset=utf-8"_s));
	$assignStatic(DocFlavor$BYTE_ARRAY::TEXT_HTML_UTF_16, $new(DocFlavor$BYTE_ARRAY, "text/html; charset=utf-16"_s));
	$assignStatic(DocFlavor$BYTE_ARRAY::TEXT_HTML_UTF_16BE, $new(DocFlavor$BYTE_ARRAY, "text/html; charset=utf-16be"_s));
	$assignStatic(DocFlavor$BYTE_ARRAY::TEXT_HTML_UTF_16LE, $new(DocFlavor$BYTE_ARRAY, "text/html; charset=utf-16le"_s));
	$assignStatic(DocFlavor$BYTE_ARRAY::TEXT_HTML_US_ASCII, $new(DocFlavor$BYTE_ARRAY, "text/html; charset=us-ascii"_s));
	$assignStatic(DocFlavor$BYTE_ARRAY::PDF, $new(DocFlavor$BYTE_ARRAY, "application/pdf"_s));
	$assignStatic(DocFlavor$BYTE_ARRAY::POSTSCRIPT, $new(DocFlavor$BYTE_ARRAY, "application/postscript"_s));
	$assignStatic(DocFlavor$BYTE_ARRAY::PCL, $new(DocFlavor$BYTE_ARRAY, "application/vnd.hp-PCL"_s));
	$assignStatic(DocFlavor$BYTE_ARRAY::GIF, $new(DocFlavor$BYTE_ARRAY, "image/gif"_s));
	$assignStatic(DocFlavor$BYTE_ARRAY::JPEG, $new(DocFlavor$BYTE_ARRAY, "image/jpeg"_s));
	$assignStatic(DocFlavor$BYTE_ARRAY::PNG, $new(DocFlavor$BYTE_ARRAY, "image/png"_s));
	$assignStatic(DocFlavor$BYTE_ARRAY::AUTOSENSE, $new(DocFlavor$BYTE_ARRAY, "application/octet-stream"_s));
}

DocFlavor$BYTE_ARRAY::DocFlavor$BYTE_ARRAY() {
}

$Class* DocFlavor$BYTE_ARRAY::load$($String* name, bool initialize) {
	$loadClass(DocFlavor$BYTE_ARRAY, name, initialize, &_DocFlavor$BYTE_ARRAY_ClassInfo_, clinit$DocFlavor$BYTE_ARRAY, allocate$DocFlavor$BYTE_ARRAY);
	return class$;
}

$Class* DocFlavor$BYTE_ARRAY::class$ = nullptr;

	} // print
} // javax