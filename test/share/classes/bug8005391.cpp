#include <bug8005391.h>

#include <java/io/CharArrayReader.h>
#include <java/io/CharArrayWriter.h>
#include <java/io/Reader.h>
#include <java/io/Writer.h>
#include <java/lang/CharSequence.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/DefaultStyledDocument.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/html/HTMLDocument.h>
#include <javax/swing/text/html/HTMLEditorKit$Parser.h>
#include <javax/swing/text/html/HTMLEditorKit$ParserCallback.h>
#include <javax/swing/text/html/HTMLEditorKit.h>
#include <jcpp.h>

#undef N

using $CharArrayReader = ::java::io::CharArrayReader;
using $CharArrayWriter = ::java::io::CharArrayWriter;
using $Reader = ::java::io::Reader;
using $Writer = ::java::io::Writer;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $DefaultStyledDocument = ::javax::swing::text::DefaultStyledDocument;
using $Document = ::javax::swing::text::Document;
using $HTMLDocument = ::javax::swing::text::html::HTMLDocument;
using $HTMLEditorKit = ::javax::swing::text::html::HTMLEditorKit;
using $HTMLEditorKit$Parser = ::javax::swing::text::html::HTMLEditorKit$Parser;
using $HTMLEditorKit$ParserCallback = ::javax::swing::text::html::HTMLEditorKit$ParserCallback;

$FieldInfo _bug8005391_FieldInfo_[] = {
	{"htmlDoc", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug8005391, htmlDoc)},
	{}
};

$MethodInfo _bug8005391_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8005391::*)()>(&bug8005391::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug8005391::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _bug8005391_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug8005391",
	"java.lang.Object",
	nullptr,
	_bug8005391_FieldInfo_,
	_bug8005391_MethodInfo_
};

$Object* allocate$bug8005391($Class* clazz) {
	return $of($alloc(bug8005391));
}

$String* bug8005391::htmlDoc = nullptr;

void bug8005391::init$() {
}

void bug8005391::main($StringArray* args) {
	$init(bug8005391);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	int32_t N = 10;
	for (int32_t i = 0; i < N; ++i) {
		$var($HTMLEditorKit, kit, $new($HTMLEditorKit));
		$Class* c = $Class::forName("javax.swing.text.html.parser.ParserDelegator"_s);
		$var($HTMLEditorKit$Parser, parser, $cast($HTMLEditorKit$Parser, $nc(c)->newInstance()));
		$var($HTMLDocument, doc, $cast($HTMLDocument, kit->createDefaultDocument()));
		$var($HTMLEditorKit$ParserCallback, htmlReader, $nc(doc)->getReader(0));
		$nc(parser)->parse($$new($CharArrayReader, $($nc(bug8005391::htmlDoc)->toCharArray())), htmlReader, true);
		$nc(htmlReader)->flush();
		$var($CharArrayWriter, writer, $new($CharArrayWriter, 1000));
		kit->write(static_cast<$Writer*>(writer), static_cast<$Document*>(static_cast<$AbstractDocument*>(static_cast<$DefaultStyledDocument*>(doc))), 0, doc->getLength());
		writer->flush();
		$var($String, result, writer->toString());
		if (!$nc(result)->contains("<tt><a"_s)) {
			$throwNew($RuntimeException, "The <a> and <tt> tags are swapped"_s);
		}
	}
}

bug8005391::bug8005391() {
}

void clinit$bug8005391($Class* class$) {
	$assignStatic(bug8005391::htmlDoc, "<html><body><tt><a href=\'one\'>1</a>2</tt></body></html>"_s);
}

$Class* bug8005391::load$($String* name, bool initialize) {
	$loadClass(bug8005391, name, initialize, &_bug8005391_ClassInfo_, clinit$bug8005391, allocate$bug8005391);
	return class$;
}

$Class* bug8005391::class$ = nullptr;