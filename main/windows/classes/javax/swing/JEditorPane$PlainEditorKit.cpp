#include <javax/swing/JEditorPane$PlainEditorKit.h>

#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JEditorPane$PlainEditorKit$PlainParagraph.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/BoxView.h>
#include <javax/swing/text/CompositeView.h>
#include <javax/swing/text/DefaultEditorKit.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/FlowView.h>
#include <javax/swing/text/ParagraphView.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/ViewFactory.h>
#include <javax/swing/text/WrappedPlainView.h>
#include <jcpp.h>

#undef TRUE
#undef Y_AXIS

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JEditorPane$PlainEditorKit$PlainParagraph = ::javax::swing::JEditorPane$PlainEditorKit$PlainParagraph;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $BoxView = ::javax::swing::text::BoxView;
using $CompositeView = ::javax::swing::text::CompositeView;
using $DefaultEditorKit = ::javax::swing::text::DefaultEditorKit;
using $Document = ::javax::swing::text::Document;
using $Element = ::javax::swing::text::Element;
using $FlowView = ::javax::swing::text::FlowView;
using $ParagraphView = ::javax::swing::text::ParagraphView;
using $View = ::javax::swing::text::View;
using $ViewFactory = ::javax::swing::text::ViewFactory;
using $WrappedPlainView = ::javax::swing::text::WrappedPlainView;

namespace javax {
	namespace swing {

$MethodInfo _JEditorPane$PlainEditorKit_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(JEditorPane$PlainEditorKit::*)()>(&JEditorPane$PlainEditorKit::init$))},
	{"create", "(Ljavax/swing/text/Element;)Ljavax/swing/text/View;", nullptr, $PUBLIC},
	{"createI18N", "(Ljavax/swing/text/Element;)Ljavax/swing/text/View;", nullptr, 0},
	{"getViewFactory", "()Ljavax/swing/text/ViewFactory;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JEditorPane$PlainEditorKit_InnerClassesInfo_[] = {
	{"javax.swing.JEditorPane$PlainEditorKit", "javax.swing.JEditorPane", "PlainEditorKit", $STATIC},
	{"javax.swing.JEditorPane$PlainEditorKit$PlainParagraph", "javax.swing.JEditorPane$PlainEditorKit", "PlainParagraph", $STATIC},
	{}
};

$ClassInfo _JEditorPane$PlainEditorKit_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JEditorPane$PlainEditorKit",
	"javax.swing.text.DefaultEditorKit",
	"javax.swing.text.ViewFactory",
	nullptr,
	_JEditorPane$PlainEditorKit_MethodInfo_,
	nullptr,
	nullptr,
	_JEditorPane$PlainEditorKit_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JEditorPane"
};

$Object* allocate$JEditorPane$PlainEditorKit($Class* clazz) {
	return $of($alloc(JEditorPane$PlainEditorKit));
}

$Object* JEditorPane$PlainEditorKit::clone() {
	 return this->$DefaultEditorKit::clone();
}

int32_t JEditorPane$PlainEditorKit::hashCode() {
	 return this->$DefaultEditorKit::hashCode();
}

bool JEditorPane$PlainEditorKit::equals(Object$* arg0) {
	 return this->$DefaultEditorKit::equals(arg0);
}

$String* JEditorPane$PlainEditorKit::toString() {
	 return this->$DefaultEditorKit::toString();
}

void JEditorPane$PlainEditorKit::finalize() {
	this->$DefaultEditorKit::finalize();
}

void JEditorPane$PlainEditorKit::init$() {
	$DefaultEditorKit::init$();
}

$ViewFactory* JEditorPane$PlainEditorKit::getViewFactory() {
	return this;
}

$View* JEditorPane$PlainEditorKit::create($Element* elem) {
	$var($Document, doc, $nc(elem)->getDocument());
	$var($Object, i18nFlag, $nc(doc)->getProperty("i18n"_s));
	$init($Boolean);
	if ((i18nFlag != nullptr) && $of(i18nFlag)->equals($Boolean::TRUE)) {
		return createI18N(elem);
	} else {
		return $new($WrappedPlainView, elem);
	}
}

$View* JEditorPane$PlainEditorKit::createI18N($Element* elem) {
	$var($String, kind, $nc(elem)->getName());
	if (kind != nullptr) {
		$init($AbstractDocument);
		if (kind->equals($AbstractDocument::ContentElementName)) {
			return $new($JEditorPane$PlainEditorKit$PlainParagraph, elem);
		} else {
			if (kind->equals($AbstractDocument::ParagraphElementName)) {
				return $new($BoxView, elem, $View::Y_AXIS);
			}
		}
	}
	return nullptr;
}

JEditorPane$PlainEditorKit::JEditorPane$PlainEditorKit() {
}

$Class* JEditorPane$PlainEditorKit::load$($String* name, bool initialize) {
	$loadClass(JEditorPane$PlainEditorKit, name, initialize, &_JEditorPane$PlainEditorKit_ClassInfo_, allocate$JEditorPane$PlainEditorKit);
	return class$;
}

$Class* JEditorPane$PlainEditorKit::class$ = nullptr;

	} // swing
} // javax