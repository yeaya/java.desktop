#include <javax/swing/plaf/basic/BasicHTML$BasicDocument.h>

#include <java/awt/Color.h>
#include <java/awt/Font.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/plaf/basic/BasicHTML.h>
#include <javax/swing/text/html/HTMLDocument.h>
#include <javax/swing/text/html/StyleSheet.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Font = ::java::awt::Font;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicHTML = ::javax::swing::plaf::basic::BasicHTML;
using $HTMLDocument = ::javax::swing::text::html::HTMLDocument;
using $StyleSheet = ::javax::swing::text::html::StyleSheet;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$MethodInfo _BasicHTML$BasicDocument_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/html/StyleSheet;Ljava/awt/Font;Ljava/awt/Color;)V", nullptr, 0, $method(static_cast<void(BasicHTML$BasicDocument::*)($StyleSheet*,$Font*,$Color*)>(&BasicHTML$BasicDocument::init$))},
	{"setFontAndColor", "(Ljava/awt/Font;Ljava/awt/Color;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicHTML$BasicDocument::*)($Font*,$Color*)>(&BasicHTML$BasicDocument::setFontAndColor))},
	{}
};

$InnerClassInfo _BasicHTML$BasicDocument_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicHTML$BasicDocument", "javax.swing.plaf.basic.BasicHTML", "BasicDocument", $STATIC},
	{}
};

$ClassInfo _BasicHTML$BasicDocument_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicHTML$BasicDocument",
	"javax.swing.text.html.HTMLDocument",
	nullptr,
	nullptr,
	_BasicHTML$BasicDocument_MethodInfo_,
	nullptr,
	nullptr,
	_BasicHTML$BasicDocument_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicHTML"
};

$Object* allocate$BasicHTML$BasicDocument($Class* clazz) {
	return $of($alloc(BasicHTML$BasicDocument));
}

void BasicHTML$BasicDocument::init$($StyleSheet* s, $Font* defaultFont, $Color* foreground) {
	$HTMLDocument::init$(s);
	setPreservesUnknownTags(false);
	setFontAndColor(defaultFont, foreground);
}

void BasicHTML$BasicDocument::setFontAndColor($Font* font, $Color* fg) {
	$nc($(getStyleSheet()))->addRule($($SwingUtilities2::displayPropertiesToCSS(font, fg)));
}

BasicHTML$BasicDocument::BasicHTML$BasicDocument() {
}

$Class* BasicHTML$BasicDocument::load$($String* name, bool initialize) {
	$loadClass(BasicHTML$BasicDocument, name, initialize, &_BasicHTML$BasicDocument_ClassInfo_, allocate$BasicHTML$BasicDocument);
	return class$;
}

$Class* BasicHTML$BasicDocument::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax