#include <javax/swing/text/html/HTMLDocument$TaggedAttributeSet.h>

#include <javax/swing/text/SimpleAttributeSet.h>
#include <javax/swing/text/html/HTMLDocument.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SimpleAttributeSet = ::javax::swing::text::SimpleAttributeSet;
using $HTMLDocument = ::javax::swing::text::html::HTMLDocument;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$MethodInfo _HTMLDocument$TaggedAttributeSet_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HTMLDocument$TaggedAttributeSet::*)()>(&HTMLDocument$TaggedAttributeSet::init$))},
	{}
};

$InnerClassInfo _HTMLDocument$TaggedAttributeSet_InnerClassesInfo_[] = {
	{"javax.swing.text.html.HTMLDocument$TaggedAttributeSet", "javax.swing.text.html.HTMLDocument", "TaggedAttributeSet", $STATIC},
	{}
};

$ClassInfo _HTMLDocument$TaggedAttributeSet_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.HTMLDocument$TaggedAttributeSet",
	"javax.swing.text.SimpleAttributeSet",
	nullptr,
	nullptr,
	_HTMLDocument$TaggedAttributeSet_MethodInfo_,
	nullptr,
	nullptr,
	_HTMLDocument$TaggedAttributeSet_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.HTMLDocument"
};

$Object* allocate$HTMLDocument$TaggedAttributeSet($Class* clazz) {
	return $of($alloc(HTMLDocument$TaggedAttributeSet));
}

void HTMLDocument$TaggedAttributeSet::init$() {
	$SimpleAttributeSet::init$();
}

HTMLDocument$TaggedAttributeSet::HTMLDocument$TaggedAttributeSet() {
}

$Class* HTMLDocument$TaggedAttributeSet::load$($String* name, bool initialize) {
	$loadClass(HTMLDocument$TaggedAttributeSet, name, initialize, &_HTMLDocument$TaggedAttributeSet_ClassInfo_, allocate$HTMLDocument$TaggedAttributeSet);
	return class$;
}

$Class* HTMLDocument$TaggedAttributeSet::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax