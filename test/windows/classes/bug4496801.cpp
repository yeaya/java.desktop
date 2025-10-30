#include <bug4496801.h>

#include <java/io/IOException.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/html/HTMLDocument.h>
#include <javax/swing/text/html/HTMLEditorKit$Parser.h>
#include <javax/swing/text/html/parser/ParserDelegator.h>
#include <jcpp.h>

using $ElementArray = $Array<::javax::swing::text::Element>;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $Element = ::javax::swing::text::Element;
using $HTMLDocument = ::javax::swing::text::html::HTMLDocument;
using $HTMLEditorKit$Parser = ::javax::swing::text::html::HTMLEditorKit$Parser;
using $ParserDelegator = ::javax::swing::text::html::parser::ParserDelegator;

$MethodInfo _bug4496801_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug4496801::*)()>(&bug4496801::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug4496801::main))},
	{}
};

$ClassInfo _bug4496801_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug4496801",
	"java.lang.Object",
	nullptr,
	nullptr,
	_bug4496801_MethodInfo_
};

$Object* allocate$bug4496801($Class* clazz) {
	return $of($alloc(bug4496801));
}

void bug4496801::init$() {
}

void bug4496801::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($HTMLDocument, doc, $new($HTMLDocument));
	doc->setParser($$new($ParserDelegator));
	$var($Element, html, $nc($(doc->getRootElements()))->get(0));
	$var($Element, body, $nc(html)->getElement(0));
	try {
		doc->insertBeforeEnd(body, "<h2>foo</h2>"_s);
	} catch ($IOException& e) {
	} catch ($BadLocationException& e) {
		$throwNew($RuntimeException, "Insertion failed"_s);
	}
}

bug4496801::bug4496801() {
}

$Class* bug4496801::load$($String* name, bool initialize) {
	$loadClass(bug4496801, name, initialize, &_bug4496801_ClassInfo_, allocate$bug4496801);
	return class$;
}

$Class* bug4496801::class$ = nullptr;