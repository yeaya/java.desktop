#include <javax/print/DocFlavor$INPUT_STREAM.h>

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

$FieldInfo _DocFlavor$INPUT_STREAM_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DocFlavor$INPUT_STREAM, serialVersionUID)},
	{"TEXT_PLAIN_HOST", "Ljavax/print/DocFlavor$INPUT_STREAM;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocFlavor$INPUT_STREAM, TEXT_PLAIN_HOST)},
	{"TEXT_PLAIN_UTF_8", "Ljavax/print/DocFlavor$INPUT_STREAM;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocFlavor$INPUT_STREAM, TEXT_PLAIN_UTF_8)},
	{"TEXT_PLAIN_UTF_16", "Ljavax/print/DocFlavor$INPUT_STREAM;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocFlavor$INPUT_STREAM, TEXT_PLAIN_UTF_16)},
	{"TEXT_PLAIN_UTF_16BE", "Ljavax/print/DocFlavor$INPUT_STREAM;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocFlavor$INPUT_STREAM, TEXT_PLAIN_UTF_16BE)},
	{"TEXT_PLAIN_UTF_16LE", "Ljavax/print/DocFlavor$INPUT_STREAM;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocFlavor$INPUT_STREAM, TEXT_PLAIN_UTF_16LE)},
	{"TEXT_PLAIN_US_ASCII", "Ljavax/print/DocFlavor$INPUT_STREAM;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocFlavor$INPUT_STREAM, TEXT_PLAIN_US_ASCII)},
	{"TEXT_HTML_HOST", "Ljavax/print/DocFlavor$INPUT_STREAM;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocFlavor$INPUT_STREAM, TEXT_HTML_HOST)},
	{"TEXT_HTML_UTF_8", "Ljavax/print/DocFlavor$INPUT_STREAM;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocFlavor$INPUT_STREAM, TEXT_HTML_UTF_8)},
	{"TEXT_HTML_UTF_16", "Ljavax/print/DocFlavor$INPUT_STREAM;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocFlavor$INPUT_STREAM, TEXT_HTML_UTF_16)},
	{"TEXT_HTML_UTF_16BE", "Ljavax/print/DocFlavor$INPUT_STREAM;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocFlavor$INPUT_STREAM, TEXT_HTML_UTF_16BE)},
	{"TEXT_HTML_UTF_16LE", "Ljavax/print/DocFlavor$INPUT_STREAM;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocFlavor$INPUT_STREAM, TEXT_HTML_UTF_16LE)},
	{"TEXT_HTML_US_ASCII", "Ljavax/print/DocFlavor$INPUT_STREAM;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocFlavor$INPUT_STREAM, TEXT_HTML_US_ASCII)},
	{"PDF", "Ljavax/print/DocFlavor$INPUT_STREAM;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocFlavor$INPUT_STREAM, PDF)},
	{"POSTSCRIPT", "Ljavax/print/DocFlavor$INPUT_STREAM;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocFlavor$INPUT_STREAM, POSTSCRIPT)},
	{"PCL", "Ljavax/print/DocFlavor$INPUT_STREAM;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocFlavor$INPUT_STREAM, PCL)},
	{"GIF", "Ljavax/print/DocFlavor$INPUT_STREAM;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocFlavor$INPUT_STREAM, GIF)},
	{"JPEG", "Ljavax/print/DocFlavor$INPUT_STREAM;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocFlavor$INPUT_STREAM, JPEG)},
	{"PNG", "Ljavax/print/DocFlavor$INPUT_STREAM;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocFlavor$INPUT_STREAM, PNG)},
	{"AUTOSENSE", "Ljavax/print/DocFlavor$INPUT_STREAM;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocFlavor$INPUT_STREAM, AUTOSENSE)},
	{}
};

$MethodInfo _DocFlavor$INPUT_STREAM_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(DocFlavor$INPUT_STREAM::*)($String*)>(&DocFlavor$INPUT_STREAM::init$))},
	{}
};

$InnerClassInfo _DocFlavor$INPUT_STREAM_InnerClassesInfo_[] = {
	{"javax.print.DocFlavor$INPUT_STREAM", "javax.print.DocFlavor", "INPUT_STREAM", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _DocFlavor$INPUT_STREAM_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.print.DocFlavor$INPUT_STREAM",
	"javax.print.DocFlavor",
	nullptr,
	_DocFlavor$INPUT_STREAM_FieldInfo_,
	_DocFlavor$INPUT_STREAM_MethodInfo_,
	nullptr,
	nullptr,
	_DocFlavor$INPUT_STREAM_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.print.DocFlavor"
};

$Object* allocate$DocFlavor$INPUT_STREAM($Class* clazz) {
	return $of($alloc(DocFlavor$INPUT_STREAM));
}

DocFlavor$INPUT_STREAM* DocFlavor$INPUT_STREAM::TEXT_PLAIN_HOST = nullptr;
DocFlavor$INPUT_STREAM* DocFlavor$INPUT_STREAM::TEXT_PLAIN_UTF_8 = nullptr;
DocFlavor$INPUT_STREAM* DocFlavor$INPUT_STREAM::TEXT_PLAIN_UTF_16 = nullptr;
DocFlavor$INPUT_STREAM* DocFlavor$INPUT_STREAM::TEXT_PLAIN_UTF_16BE = nullptr;
DocFlavor$INPUT_STREAM* DocFlavor$INPUT_STREAM::TEXT_PLAIN_UTF_16LE = nullptr;
DocFlavor$INPUT_STREAM* DocFlavor$INPUT_STREAM::TEXT_PLAIN_US_ASCII = nullptr;
DocFlavor$INPUT_STREAM* DocFlavor$INPUT_STREAM::TEXT_HTML_HOST = nullptr;
DocFlavor$INPUT_STREAM* DocFlavor$INPUT_STREAM::TEXT_HTML_UTF_8 = nullptr;
DocFlavor$INPUT_STREAM* DocFlavor$INPUT_STREAM::TEXT_HTML_UTF_16 = nullptr;
DocFlavor$INPUT_STREAM* DocFlavor$INPUT_STREAM::TEXT_HTML_UTF_16BE = nullptr;
DocFlavor$INPUT_STREAM* DocFlavor$INPUT_STREAM::TEXT_HTML_UTF_16LE = nullptr;
DocFlavor$INPUT_STREAM* DocFlavor$INPUT_STREAM::TEXT_HTML_US_ASCII = nullptr;
DocFlavor$INPUT_STREAM* DocFlavor$INPUT_STREAM::PDF = nullptr;
DocFlavor$INPUT_STREAM* DocFlavor$INPUT_STREAM::POSTSCRIPT = nullptr;
DocFlavor$INPUT_STREAM* DocFlavor$INPUT_STREAM::PCL = nullptr;
DocFlavor$INPUT_STREAM* DocFlavor$INPUT_STREAM::GIF = nullptr;
DocFlavor$INPUT_STREAM* DocFlavor$INPUT_STREAM::JPEG = nullptr;
DocFlavor$INPUT_STREAM* DocFlavor$INPUT_STREAM::PNG = nullptr;
DocFlavor$INPUT_STREAM* DocFlavor$INPUT_STREAM::AUTOSENSE = nullptr;

void DocFlavor$INPUT_STREAM::init$($String* mimeType) {
	$DocFlavor::init$(mimeType, "java.io.InputStream"_s);
}

void clinit$DocFlavor$INPUT_STREAM($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$init($DocFlavor);
	$assignStatic(DocFlavor$INPUT_STREAM::TEXT_PLAIN_HOST, $new(DocFlavor$INPUT_STREAM, $$str({"text/plain; charset="_s, $DocFlavor::hostEncoding})));
	$assignStatic(DocFlavor$INPUT_STREAM::TEXT_PLAIN_UTF_8, $new(DocFlavor$INPUT_STREAM, "text/plain; charset=utf-8"_s));
	$assignStatic(DocFlavor$INPUT_STREAM::TEXT_PLAIN_UTF_16, $new(DocFlavor$INPUT_STREAM, "text/plain; charset=utf-16"_s));
	$assignStatic(DocFlavor$INPUT_STREAM::TEXT_PLAIN_UTF_16BE, $new(DocFlavor$INPUT_STREAM, "text/plain; charset=utf-16be"_s));
	$assignStatic(DocFlavor$INPUT_STREAM::TEXT_PLAIN_UTF_16LE, $new(DocFlavor$INPUT_STREAM, "text/plain; charset=utf-16le"_s));
	$assignStatic(DocFlavor$INPUT_STREAM::TEXT_PLAIN_US_ASCII, $new(DocFlavor$INPUT_STREAM, "text/plain; charset=us-ascii"_s));
	$assignStatic(DocFlavor$INPUT_STREAM::TEXT_HTML_HOST, $new(DocFlavor$INPUT_STREAM, $$str({"text/html; charset="_s, $DocFlavor::hostEncoding})));
	$assignStatic(DocFlavor$INPUT_STREAM::TEXT_HTML_UTF_8, $new(DocFlavor$INPUT_STREAM, "text/html; charset=utf-8"_s));
	$assignStatic(DocFlavor$INPUT_STREAM::TEXT_HTML_UTF_16, $new(DocFlavor$INPUT_STREAM, "text/html; charset=utf-16"_s));
	$assignStatic(DocFlavor$INPUT_STREAM::TEXT_HTML_UTF_16BE, $new(DocFlavor$INPUT_STREAM, "text/html; charset=utf-16be"_s));
	$assignStatic(DocFlavor$INPUT_STREAM::TEXT_HTML_UTF_16LE, $new(DocFlavor$INPUT_STREAM, "text/html; charset=utf-16le"_s));
	$assignStatic(DocFlavor$INPUT_STREAM::TEXT_HTML_US_ASCII, $new(DocFlavor$INPUT_STREAM, "text/html; charset=us-ascii"_s));
	$assignStatic(DocFlavor$INPUT_STREAM::PDF, $new(DocFlavor$INPUT_STREAM, "application/pdf"_s));
	$assignStatic(DocFlavor$INPUT_STREAM::POSTSCRIPT, $new(DocFlavor$INPUT_STREAM, "application/postscript"_s));
	$assignStatic(DocFlavor$INPUT_STREAM::PCL, $new(DocFlavor$INPUT_STREAM, "application/vnd.hp-PCL"_s));
	$assignStatic(DocFlavor$INPUT_STREAM::GIF, $new(DocFlavor$INPUT_STREAM, "image/gif"_s));
	$assignStatic(DocFlavor$INPUT_STREAM::JPEG, $new(DocFlavor$INPUT_STREAM, "image/jpeg"_s));
	$assignStatic(DocFlavor$INPUT_STREAM::PNG, $new(DocFlavor$INPUT_STREAM, "image/png"_s));
	$assignStatic(DocFlavor$INPUT_STREAM::AUTOSENSE, $new(DocFlavor$INPUT_STREAM, "application/octet-stream"_s));
}

DocFlavor$INPUT_STREAM::DocFlavor$INPUT_STREAM() {
}

$Class* DocFlavor$INPUT_STREAM::load$($String* name, bool initialize) {
	$loadClass(DocFlavor$INPUT_STREAM, name, initialize, &_DocFlavor$INPUT_STREAM_ClassInfo_, clinit$DocFlavor$INPUT_STREAM, allocate$DocFlavor$INPUT_STREAM);
	return class$;
}

$Class* DocFlavor$INPUT_STREAM::class$ = nullptr;

	} // print
} // javax