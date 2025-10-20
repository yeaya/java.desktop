#include <Test6933784$1.h>

#include <Test6933784.h>
#include <java/io/Reader.h>
#include <java/io/StringReader.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/Icon.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/DefaultStyledDocument.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/html/HTMLDocument.h>
#include <javax/swing/text/html/HTMLEditorKit.h>
#include <javax/swing/text/html/ImageView.h>
#include <jcpp.h>

using $Test6933784 = ::Test6933784;
using $Reader = ::java::io::Reader;
using $StringReader = ::java::io::StringReader;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Icon = ::javax::swing::Icon;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $DefaultStyledDocument = ::javax::swing::text::DefaultStyledDocument;
using $Document = ::javax::swing::text::Document;
using $Element = ::javax::swing::text::Element;
using $HTMLDocument = ::javax::swing::text::html::HTMLDocument;
using $HTMLEditorKit = ::javax::swing::text::html::HTMLEditorKit;
using $ImageView = ::javax::swing::text::html::ImageView;

$MethodInfo _Test6933784$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Test6933784$1::*)()>(&Test6933784$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Test6933784$1_EnclosingMethodInfo_ = {
	"Test6933784",
	"checkImages",
	"()V"
};

$InnerClassInfo _Test6933784$1_InnerClassesInfo_[] = {
	{"Test6933784$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Test6933784$1_ClassInfo_ = {
	$ACC_SUPER,
	"Test6933784$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Test6933784$1_MethodInfo_,
	nullptr,
	&_Test6933784$1_EnclosingMethodInfo_,
	_Test6933784$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Test6933784"
};

$Object* allocate$Test6933784$1($Class* clazz) {
	return $of($alloc(Test6933784$1));
}

void Test6933784$1::init$() {
}

void Test6933784$1::run() {
	$useLocalCurrentObjectStackCache();
	$var($HTMLEditorKit, c, $new($HTMLEditorKit));
	$var($HTMLDocument, doc, $new($HTMLDocument));
	try {
		c->read(static_cast<$Reader*>($$new($StringReader, "<HTML><TITLE>Test</TITLE><BODY><IMG id=test></BODY></HTML>"_s)), static_cast<$Document*>(static_cast<$AbstractDocument*>(static_cast<$DefaultStyledDocument*>(doc))), 0);
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$throwNew($RuntimeException, "The test failed"_s, e);
	}
	$var($Element, elem, doc->getElement("test"_s));
	$var($ImageView, iv, $new($ImageView, elem));
	if (iv->getLoadingImageIcon() == nullptr) {
		$throwNew($RuntimeException, "getLoadingImageIcon returns null"_s);
	}
	if (iv->getNoImageIcon() == nullptr) {
		$throwNew($RuntimeException, "getNoImageIcon returns null"_s);
	}
}

Test6933784$1::Test6933784$1() {
}

$Class* Test6933784$1::load$($String* name, bool initialize) {
	$loadClass(Test6933784$1, name, initialize, &_Test6933784$1_ClassInfo_, allocate$Test6933784$1);
	return class$;
}

$Class* Test6933784$1::class$ = nullptr;