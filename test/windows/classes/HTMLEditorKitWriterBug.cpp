#include <HTMLEditorKitWriterBug.h>

#include <java/io/CharArrayReader.h>
#include <java/io/CharArrayWriter.h>
#include <java/io/Reader.h>
#include <java/io/Writer.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/DefaultStyledDocument.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/html/HTMLDocument.h>
#include <javax/swing/text/html/HTMLEditorKit$Parser.h>
#include <javax/swing/text/html/HTMLEditorKit$ParserCallback.h>
#include <javax/swing/text/html/HTMLEditorKit.h>
#include <jcpp.h>

using $CharArrayReader = ::java::io::CharArrayReader;
using $CharArrayWriter = ::java::io::CharArrayWriter;
using $Reader = ::java::io::Reader;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $DefaultStyledDocument = ::javax::swing::text::DefaultStyledDocument;
using $Document = ::javax::swing::text::Document;
using $HTMLDocument = ::javax::swing::text::html::HTMLDocument;
using $HTMLEditorKit = ::javax::swing::text::html::HTMLEditorKit;
using $HTMLEditorKit$Parser = ::javax::swing::text::html::HTMLEditorKit$Parser;
using $HTMLEditorKit$ParserCallback = ::javax::swing::text::html::HTMLEditorKit$ParserCallback;

$MethodInfo _HTMLEditorKitWriterBug_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HTMLEditorKitWriterBug::*)()>(&HTMLEditorKitWriterBug::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&HTMLEditorKitWriterBug::main))},
	{}
};

$ClassInfo _HTMLEditorKitWriterBug_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"HTMLEditorKitWriterBug",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HTMLEditorKitWriterBug_MethodInfo_
};

$Object* allocate$HTMLEditorKitWriterBug($Class* clazz) {
	return $of($alloc(HTMLEditorKitWriterBug));
}

void HTMLEditorKitWriterBug::init$() {
}

void HTMLEditorKitWriterBug::main($StringArray* args) {
	$load(HTMLEditorKitWriterBug);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($String, htmlDoc, "<pre><p> </pre>"_s);
	try {
		$var($HTMLEditorKit, kit, $new($HTMLEditorKit));
		$Class* c = $Class::forName("javax.swing.text.html.parser.ParserDelegator"_s);
		$var($HTMLEditorKit$Parser, parser, $cast($HTMLEditorKit$Parser, $nc(c)->newInstance()));
		$var($HTMLDocument, doc, $cast($HTMLDocument, kit->createDefaultDocument()));
		$var($HTMLEditorKit$ParserCallback, htmlReader, $nc(doc)->getReader(0));
		$nc(parser)->parse($$new($CharArrayReader, $(htmlDoc->toCharArray())), htmlReader, true);
		$nc(htmlReader)->flush();
		$var($CharArrayWriter, writer, $new($CharArrayWriter, 1000));
		kit->write(static_cast<$Writer*>(writer), static_cast<$Document*>(static_cast<$AbstractDocument*>(static_cast<$DefaultStyledDocument*>(doc))), 0, doc->getLength());
		writer->flush();
	} catch ($Exception&) {
		$var($Exception, ex, $catch());
		$throwNew($RuntimeException, $$str({"Test Failed "_s, ex}));
	}
}

HTMLEditorKitWriterBug::HTMLEditorKitWriterBug() {
}

$Class* HTMLEditorKitWriterBug::load$($String* name, bool initialize) {
	$loadClass(HTMLEditorKitWriterBug, name, initialize, &_HTMLEditorKitWriterBug_ClassInfo_, allocate$HTMLEditorKitWriterBug);
	return class$;
}

$Class* HTMLEditorKitWriterBug::class$ = nullptr;