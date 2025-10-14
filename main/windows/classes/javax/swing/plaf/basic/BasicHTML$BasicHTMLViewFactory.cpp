#include <javax/swing/plaf/basic/BasicHTML$BasicHTMLViewFactory.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/plaf/basic/BasicHTML.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/html/HTMLEditorKit$HTMLFactory.h>
#include <javax/swing/text/html/ImageView.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicHTML = ::javax::swing::plaf::basic::BasicHTML;
using $Element = ::javax::swing::text::Element;
using $View = ::javax::swing::text::View;
using $HTMLEditorKit$HTMLFactory = ::javax::swing::text::html::HTMLEditorKit$HTMLFactory;
using $ImageView = ::javax::swing::text::html::ImageView;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$MethodInfo _BasicHTML$BasicHTMLViewFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(BasicHTML$BasicHTMLViewFactory::*)()>(&BasicHTML$BasicHTMLViewFactory::init$))},
	{"create", "(Ljavax/swing/text/Element;)Ljavax/swing/text/View;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicHTML$BasicHTMLViewFactory_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicHTML$BasicHTMLViewFactory", "javax.swing.plaf.basic.BasicHTML", "BasicHTMLViewFactory", $STATIC},
	{"javax.swing.text.html.HTMLEditorKit$HTMLFactory", "javax.swing.text.html.HTMLEditorKit", "HTMLFactory", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _BasicHTML$BasicHTMLViewFactory_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicHTML$BasicHTMLViewFactory",
	"javax.swing.text.html.HTMLEditorKit$HTMLFactory",
	nullptr,
	nullptr,
	_BasicHTML$BasicHTMLViewFactory_MethodInfo_,
	nullptr,
	nullptr,
	_BasicHTML$BasicHTMLViewFactory_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicHTML"
};

$Object* allocate$BasicHTML$BasicHTMLViewFactory($Class* clazz) {
	return $of($alloc(BasicHTML$BasicHTMLViewFactory));
}

void BasicHTML$BasicHTMLViewFactory::init$() {
	$HTMLEditorKit$HTMLFactory::init$();
}

$View* BasicHTML$BasicHTMLViewFactory::create($Element* elem) {
	$var($View, view, $HTMLEditorKit$HTMLFactory::create(elem));
	if ($instanceOf($ImageView, view)) {
		$nc(($cast($ImageView, view)))->setLoadsSynchronously(true);
	}
	return view;
}

BasicHTML$BasicHTMLViewFactory::BasicHTML$BasicHTMLViewFactory() {
}

$Class* BasicHTML$BasicHTMLViewFactory::load$($String* name, bool initialize) {
	$loadClass(BasicHTML$BasicHTMLViewFactory, name, initialize, &_BasicHTML$BasicHTMLViewFactory_ClassInfo_, allocate$BasicHTML$BasicHTMLViewFactory);
	return class$;
}

$Class* BasicHTML$BasicHTMLViewFactory::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax