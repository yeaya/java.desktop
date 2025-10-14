#include <javax/swing/text/rtf/RTFEditorKit.h>

#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/Reader.h>
#include <java/io/Writer.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/DefaultEditorKit.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/StyledDocument.h>
#include <javax/swing/text/StyledEditorKit.h>
#include <javax/swing/text/rtf/AbstractFilter.h>
#include <javax/swing/text/rtf/RTFGenerator.h>
#include <javax/swing/text/rtf/RTFReader.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $Reader = ::java::io::Reader;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultEditorKit = ::javax::swing::text::DefaultEditorKit;
using $Document = ::javax::swing::text::Document;
using $StyledDocument = ::javax::swing::text::StyledDocument;
using $StyledEditorKit = ::javax::swing::text::StyledEditorKit;
using $AbstractFilter = ::javax::swing::text::rtf::AbstractFilter;
using $RTFGenerator = ::javax::swing::text::rtf::RTFGenerator;
using $RTFReader = ::javax::swing::text::rtf::RTFReader;

namespace javax {
	namespace swing {
		namespace text {
			namespace rtf {

$MethodInfo _RTFEditorKit_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(RTFEditorKit::*)()>(&RTFEditorKit::init$))},
	{"getContentType", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"read", "(Ljava/io/InputStream;Ljavax/swing/text/Document;I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException,javax.swing.text.BadLocationException"},
	{"read", "(Ljava/io/Reader;Ljavax/swing/text/Document;I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException,javax.swing.text.BadLocationException"},
	{"write", "(Ljava/io/OutputStream;Ljavax/swing/text/Document;II)V", nullptr, $PUBLIC, nullptr, "java.io.IOException,javax.swing.text.BadLocationException"},
	{"write", "(Ljava/io/Writer;Ljavax/swing/text/Document;II)V", nullptr, $PUBLIC, nullptr, "java.io.IOException,javax.swing.text.BadLocationException"},
	{}
};

$ClassInfo _RTFEditorKit_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.rtf.RTFEditorKit",
	"javax.swing.text.StyledEditorKit",
	nullptr,
	nullptr,
	_RTFEditorKit_MethodInfo_
};

$Object* allocate$RTFEditorKit($Class* clazz) {
	return $of($alloc(RTFEditorKit));
}

void RTFEditorKit::init$() {
	$StyledEditorKit::init$();
}

$String* RTFEditorKit::getContentType() {
	return "text/rtf"_s;
}

void RTFEditorKit::read($InputStream* in, $Document* doc, int32_t pos) {
	if ($instanceOf($StyledDocument, doc)) {
		$var($RTFReader, rdr, $new($RTFReader, $cast($StyledDocument, doc)));
		rdr->readFromStream(in);
		rdr->close();
	} else {
		$StyledEditorKit::read(in, doc, pos);
	}
}

void RTFEditorKit::write($OutputStream* out, $Document* doc, int32_t pos, int32_t len) {
	$RTFGenerator::writeDocument(doc, out);
}

void RTFEditorKit::read($Reader* in, $Document* doc, int32_t pos) {
	if ($instanceOf($StyledDocument, doc)) {
		$var($RTFReader, rdr, $new($RTFReader, $cast($StyledDocument, doc)));
		rdr->readFromReader(in);
		rdr->close();
	} else {
		$StyledEditorKit::read(in, doc, pos);
	}
}

void RTFEditorKit::write($Writer* out, $Document* doc, int32_t pos, int32_t len) {
	$throwNew($IOException, "RTF is an 8-bit format"_s);
}

RTFEditorKit::RTFEditorKit() {
}

$Class* RTFEditorKit::load$($String* name, bool initialize) {
	$loadClass(RTFEditorKit, name, initialize, &_RTFEditorKit_ClassInfo_, allocate$RTFEditorKit);
	return class$;
}

$Class* RTFEditorKit::class$ = nullptr;

			} // rtf
		} // text
	} // swing
} // javax