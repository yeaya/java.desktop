#include <javax/swing/plaf/basic/BasicHTML$BasicEditorKit.h>

#include <java/awt/Color.h>
#include <java/awt/Font.h>
#include <java/io/Reader.h>
#include <java/io/StringReader.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URL.h>
#include <javax/swing/plaf/basic/BasicHTML$BasicDocument.h>
#include <javax/swing/plaf/basic/BasicHTML.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/DefaultStyledDocument.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/ViewFactory.h>
#include <javax/swing/text/html/HTMLDocument.h>
#include <javax/swing/text/html/HTMLEditorKit.h>
#include <javax/swing/text/html/StyleSheet.h>
#include <jcpp.h>

#undef MAX_VALUE

using $Color = ::java::awt::Color;
using $Font = ::java::awt::Font;
using $Reader = ::java::io::Reader;
using $StringReader = ::java::io::StringReader;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $BasicHTML = ::javax::swing::plaf::basic::BasicHTML;
using $BasicHTML$BasicDocument = ::javax::swing::plaf::basic::BasicHTML$BasicDocument;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $DefaultStyledDocument = ::javax::swing::text::DefaultStyledDocument;
using $Document = ::javax::swing::text::Document;
using $ViewFactory = ::javax::swing::text::ViewFactory;
using $HTMLDocument = ::javax::swing::text::html::HTMLDocument;
using $HTMLEditorKit = ::javax::swing::text::html::HTMLEditorKit;
using $StyleSheet = ::javax::swing::text::html::StyleSheet;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicHTML$BasicEditorKit_FieldInfo_[] = {
	{"defaultStyles", "Ljavax/swing/text/html/StyleSheet;", nullptr, $PRIVATE | $STATIC, $staticField(BasicHTML$BasicEditorKit, defaultStyles)},
	{}
};

$MethodInfo _BasicHTML$BasicEditorKit_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(BasicHTML$BasicEditorKit::*)()>(&BasicHTML$BasicEditorKit::init$))},
	{"createDefaultDocument", "(Ljava/awt/Font;Ljava/awt/Color;)Ljavax/swing/text/Document;", nullptr, $PUBLIC},
	{"getStyleSheet", "()Ljavax/swing/text/html/StyleSheet;", nullptr, $PUBLIC},
	{"getViewFactory", "()Ljavax/swing/text/ViewFactory;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicHTML$BasicEditorKit_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicHTML$BasicEditorKit", "javax.swing.plaf.basic.BasicHTML", "BasicEditorKit", $STATIC},
	{}
};

$ClassInfo _BasicHTML$BasicEditorKit_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicHTML$BasicEditorKit",
	"javax.swing.text.html.HTMLEditorKit",
	nullptr,
	_BasicHTML$BasicEditorKit_FieldInfo_,
	_BasicHTML$BasicEditorKit_MethodInfo_,
	nullptr,
	nullptr,
	_BasicHTML$BasicEditorKit_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicHTML"
};

$Object* allocate$BasicHTML$BasicEditorKit($Class* clazz) {
	return $of($alloc(BasicHTML$BasicEditorKit));
}


$StyleSheet* BasicHTML$BasicEditorKit::defaultStyles = nullptr;

void BasicHTML$BasicEditorKit::init$() {
	$HTMLEditorKit::init$();
}

$StyleSheet* BasicHTML$BasicEditorKit::getStyleSheet() {
	if (BasicHTML$BasicEditorKit::defaultStyles == nullptr) {
		$assignStatic(BasicHTML$BasicEditorKit::defaultStyles, $new($StyleSheet));
		$var($StringReader, r, $new($StringReader, "p { margin-top: 0; margin-bottom: 0; margin-left: 0; margin-right: 0 }body { margin-top: 0; margin-bottom: 0; margin-left: 0; margin-right: 0 }"_s));
		try {
			$nc(BasicHTML$BasicEditorKit::defaultStyles)->loadRules(r, nullptr);
		} catch ($Throwable&) {
			$catch();
		}
		r->close();
		$nc(BasicHTML$BasicEditorKit::defaultStyles)->addStyleSheet($($HTMLEditorKit::getStyleSheet()));
	}
	return BasicHTML$BasicEditorKit::defaultStyles;
}

$Document* BasicHTML$BasicEditorKit::createDefaultDocument($Font* defaultFont, $Color* foreground) {
	$var($StyleSheet, styles, getStyleSheet());
	$var($StyleSheet, ss, $new($StyleSheet));
	ss->addStyleSheet(styles);
	$var($BasicHTML$BasicDocument, doc, $new($BasicHTML$BasicDocument, ss, defaultFont, foreground));
	doc->setAsynchronousLoadPriority($Integer::MAX_VALUE);
	doc->setPreservesUnknownTags(false);
	return static_cast<$Document*>(static_cast<$AbstractDocument*>(static_cast<$DefaultStyledDocument*>(static_cast<$HTMLDocument*>(doc))));
}

$ViewFactory* BasicHTML$BasicEditorKit::getViewFactory() {
	$init($BasicHTML);
	return $BasicHTML::basicHTMLViewFactory;
}

BasicHTML$BasicEditorKit::BasicHTML$BasicEditorKit() {
}

$Class* BasicHTML$BasicEditorKit::load$($String* name, bool initialize) {
	$loadClass(BasicHTML$BasicEditorKit, name, initialize, &_BasicHTML$BasicEditorKit_ClassInfo_, allocate$BasicHTML$BasicEditorKit);
	return class$;
}

$Class* BasicHTML$BasicEditorKit::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax